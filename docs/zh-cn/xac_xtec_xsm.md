## XAC 与 XSM

XAC（EmotionF**X** **Ac**tor 文件）和 XSM（EmotionF**X** **S**keletal **M**otion 文件）是原版游戏中驱动3D"玩具兵"模型动画的核心格式。

如今，得益于 Katerina 编写的 XacDecoder，这些格式已被详尽地记录为便于理解的 C++ 代码，能够读写 XAC 和 XSM 文件。

需要注意的一点是引擎自动投射阴影的机制：游戏引擎需要计算一个圆柱形碰撞体，作为"点击"物体的基础，例如点击士兵。这在通常情况下工作良好，除非你引入了动态碰撞网格——当然我们不会涉及这部分，因为你的游戏不需要它。

实现时还需要使用特效来制作船只尾流动画，因为水面运动是通过 FX 着色器模拟的，不是"海水"本身的着色器，而是尾流本身的着色器。

图形文化（Graphical cultures）是硬编码的（除了 CSA 等少数例外）；否则，单位文件名遵循以下格式：
- `Generic_xxxx`：`infantry`、`cavalry`、`artillery` 等。
- `TAGword_xxxx`：例如 `CHInese_cavalry`（在游戏文件中实际可以找到 `Chinese_Cavalry`）。
- `GCword_xxxx`：例如 `European_Cavalry`（原版未使用，但仍有一定识别度）
- `xxxx_Early`：等级 1 - 2，其中 `xxxx = building_type`。
- `xxxx_Mid`：同上，但等级 3 - 4。
- `xxxx_Late`：同上，但等级 5 - 6。
- `xxxx_Full`：带有单位站立其上的建筑（海军 = 舰船，其他 = 军团）
- `xxxx_Empty`：与上述相反。
- `xxxx_yyyy_Full`/`xxxx_yyyy_Early`：（其中 `yyyy = Early/Mid/Late`）未使用。
- 其他：硬编码的游戏模型，例如 `wake`、`flag`、`floating_flag`、`shadow_addon`。

Shadow addon 是安装在 Autodesk Maya 上的一个 EmotionFX 插件，可以让你轻松地为模型添加预计算阴影。但不幸的是我们没有这个插件——不过游戏至少会为每个驻防军队模型使用它（作为附加流程的一部分）。

XAC 和 XSM 文件的二进制结构都在这个 word 文件中：

### XAC
```
https://web.archive.org/web/20140816034951/https://dl.dropboxusercontent.com/u/60681258/xr/xac.txt
vec3d = float x, float y, float z
vec4d = float x, float y, float z, float w
quat = float x, float y, float z, float w
string = uint32 len, char[len]
matrix44 = vec4d col1, vec4d col2, vec4d col3, vec4d pos
file:
	byte magic[4] = 58 41 43 20 ("XAC ")
	byte majorVersion = 1
	byte minorVersion = 0
	byte bBigEndian
	byte multiplyOrder
	chunk[...]
		int32 chunkType
		int32 length (sometimes incorrect!)
		int32 version
		byte data[length]
chunk 7: metadata (v2)
	uint32 repositionMask
		1 = repositionPos
		2 = repositionRot
		4 = repositionScale
	int32 repositioningNode
	byte exporterMajorVersion
	byte exporterMinorVersion
	byte unused[2]
	float retargetRootOffset
	string sourceApp
	string origFileName
	string exportDate
	string actorName
chunk B: node hierarchy (v1)
	int32 numNodes
	int32 numRootNodes (number of nodes with parentId = -1)
	NodeData[numNodes]
		quat rotation
		quat scaleRotation
		vec3d position
		vec3d scale
		float unused[3]
		int32 -1 (?)
		int32 -1 (?)
		int32 parentNodeId (index of parent node or -1 for root nodes)
		int32 numChildNodes (number of nodes with parentId = this node's index)
		int32 bIncludeInBoundsCalc
		matrix44 transform
		float fImportanceFactor
		string name
chunk D: material totals (v1)
	int32 numTotalMaterials
	int32 numStandardMaterials
	int32 numFxMaterials
chunk 3: material definition (v2)
	vec4d ambientColor
	vec4d diffuseColor
	vec4d specularColor
	vec4d emissiveColor
	float shine
	float shineStrength
	float opacity
	float ior
	byte bDoubleSided
	byte bWireframe
	byte unused
	byte numLayers
	string name
	Layer[numLayers]:
		float amount
		float uOffset
		float vOffset
		float uTiling
		float vTiling
		float rotationInRadians
		int16 materialId (index of the material this layer belongs to = number of preceding chunk 3's)
		byte mapType
		byte unused
		string texture
chunk 1: mesh (v1)
	int32 nodeId
	int32 numInfluenceRanges
	int32 numVertices (total number of vertices of submeshes)
	int32 numIndices  (total number of indices of submeshes)
	int32 numSubMeshes
	int32 numAttribLayers
	byte bIsCollisionMesh (each node can have 1 visual mesh and 1 collision mesh)
	byte pad[3]
	VerticesAttribute[numAttribLayers]
		int32 type (determines meaning of data)
			0 = positions (vec3d)
			1 = normals (vec3d)
			2 = tangents (vec4d)
			3 = uv coords (vec2d)
			4 = 32-bit colors (uint32)
			5 = influence range indices (uint32) - index into the InfluenceRange[] array of chunk 2, indicating the bones that affect it
			6 = 128-bit colors
			ypically: 1x positions, 1x normals, 2x tangents, 2x uv, 1x colors, 1x influence range indices
		int32 attribSize (size of 1 attribute, for 1 vertex)
		byte bKeepOriginals
		byte bIsScaleFactor
		byte pad[2]
		byte data[numVertices * attribSize]
	SubMesh[numSubMeshes]
		int32 numIndices
		int32 numVertices
		int32 materialId
		int32 numBones
		int32 relativeIndices[numIndices] (actual index = relative index + total number of vertices of preceding submeshes. each group of 3 sequential indices (vertices) defines a polygon)
		int32 boneIds[numBones] (unused)
chunk 2: skinning (v3)
	int32 nodeId
	int32 numLocalBones (number of distinct boneId's in InfluenceData)
	int32 numInfluences
	byte bIsForCollisionMesh
	byte pad[3]
	InfluenceData[numInfluences]
		float fWeight (0..1)   (for every vertex, the resulting transformed position is calculated for every influencing bone;
		int16 boneId            the final position is the weighted average of these positions using fWeight as weight)
		byte pad[2]
	InfluenceRange[bIsForCollisionMesh ? nodes[nodeId].colMesh.numInfluenceRanges : nodes[nodeId].visualMesh.numInfluenceRanges]
		int32 firstInfluenceIndex (index into InfluenceData)
		int32 numInfluences (number of InfluenceData entries relevant for one or more vertices, starting at firstInfluenceIndex)
chunk C: morph targets (v1)
	int32 numMorphTargets
	int32 lodMorphTargetIdx (presumably always 0; this is the index of a *collection* of numMorphTargets morph targets, not an
							 individual target, and an EmoActor only has one such collection)
	MorphTarget[numMorphTargets]
		float fRangeMin (at runtime, fMorphAmount must be >= fRangeMin)
		float fRangeMax (at runtime, fMorphAmount must be <= fRangeMax)
		int32 lodLevel (LOD of visual mesh; presumably always 0)
		int32 numDeformations
		int32 numTransformations
		int32 phonemeSetBitmask (indicates which phonemes the morph target can be used for - facial animation)
			0x1: neutral
			0x2: M, B, P, X
			0x4: AA, AO, OW
			0x8: IH, AE, AH, EY, AY, H
			0x10: AW
			0x20: N, NG, CH, J, DH, D, G, T, K, Z, ZH, TH, S, SH
			0x40: IY, EH, Y
			0x80: UW, UH, OY
			0x100: F, V
			0x200: L, EL
			0x400: W
			0x800: R, ER
		string name
		Deformation[numDeformations]
			int32 nodeId
			float fMinValue
			float fMaxValue
			int32 numVertices
			DeformVertex16 positionOffsets[numVertices]
				uint16 x (fXOffset = fMinValue + (fMaxValue - fMinValue)*(x / 65535); vecDeformedPos.fX = vecPos.fX + fXOffset*fMorphAmount)
				uint16 y
				uint16 z
			DeformVertex8 normalOffsets[numVertices]
				byte x (fXOffset = x/127.5 - 1.0; vecDeformedNormal.fX = vecNormal.fX + fXOffset * fMorphAmount)
				byte y
				byte z
			DeformVertex8 tangentOffsets[numVertices] (offsets for first tangent)
			uint32 vertexIndices[numVertices] (index of the node's visual mesh vertex which the offsets apply to)
		Transformation[numTransformations] (appears to be unused, i.e. numTransformations = 0)
			int32 nodeId
			quat rotation
			quat scaleRotation
			vec3d pos
			vec3d scale
```

## XSM

EmotionFX 旨在通过动作捕捉来记录真实生活中的动作（哦，这还用你说？）。这意味着此类数据的存储采用了一种易于阅读和理解的动画文件格式，其中绝对没有任何不一致之处，也没有硬编码到游戏引擎本身的神秘二进制块……好吧，其实还是有的。

每个模型都有一个 `UniversalManip`，即通用操纵器（没想到吧）**但是**，如果游戏引擎在模型中找不到它，就**必须**在加载前将其插入模型，否则你会遇到绑定问题。你不能制作没有骨骼的 XAC，但可以制作没有动画的 XAC，因为 XSM 动画加载失败意味着模型将完全不会移动。

```
https://web.archive.org/web/20140816034945/https://dl.dropboxusercontent.com/u/60681258/xr/xsm.txt
vec3d = float x, float y, float z
quat16 = int16 x, int16 y, int16 z, int16 w; fX = x / 32767
string = uint32 len, char[len]
file:
	byte magic[4] = 58 53 4D 20 ("XSM ")
	byte majorVersion = 1
	byte minorVersion = 0
	byte bBigEndian
	byte pad
	chunk[...]
		int32 chunkType
		int32 length
		int32 version
		byte data[length]
chunk C9: metadata (v2)
	float unused = 1.0f
	float fMaxAcceptableError
	int32 fps
	byte exporterMajorVersion
	byte exporterMinorVersion
	byte pad[2]
	string sourceApp
	string origFileName
	string exportDate
	string motionName
chunk CA: bone animation (v2)
	int32 numSubMotions
	SkeletalSubMotion[numSubMotions]:
		quat16 poseRot
		quat16 bindPoseRot
		quat16 poseScaleRot
		quat16 bindPoseScaleRot
		vec3D posePos
		vec3D poseScale
		vec3D bindPosePos
		vec3D bindPoseScale
		int32 numPosKeys
		int32 numRotKeys
		int32 numScaleKeys
		int32 numScaleRotKeys
		float fMaxError
		string nodeName
		// fTime of first item in each array must be 0
		PosKey[numPosKeys]:
			vec3d pos
			float fTime
		RotKey[numRotKeys]:
			quat16 rot
			float fTime
		ScaleKey[numScaleKeys]:
			vec3d scale
			float fTime
		ScaleRotKey[numScaleRotKeys]:
			quat16 rot
			float fTime
```