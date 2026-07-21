-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_culture_group_is_valid(int32_t api_arg_0_id);
uint32_t alice_culture_group_size();
void alice_culture_group_resize(uint32_t api_arg_0_value);
int32_t alice_culture_group_get_name(int32_t api_arg_0_id);
void alice_culture_group_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_culture_group_get_is_overseas(int32_t api_arg_0_id);
void alice_culture_group_set_is_overseas(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_culture_group_get_leader(int32_t api_arg_0_id);
void alice_culture_group_set_leader(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_culture_group_get_range_culture_group_membership_as_group(int32_t i);
int32_t alice_culture_group_get_index_culture_group_membership_as_group(int32_t i, int32_t subindex);
int32_t alice_culture_group_get_cultural_union_of_as_culture_group(int32_t api_arg_0_id);
int32_t alice_culture_group_get_cultural_union_of(int32_t api_arg_0_id);
]]
CULTURE_GROUP = {}
---@param id culture_group_id
---@return number
function CULTURE_GROUP.is_valid(id)
	return ffi.C.alice_culture_group_is_valid(id)
end
---@return number
function CULTURE_GROUP.size()
	return ffi.C.alice_culture_group_size()
end
---@param value number
function CULTURE_GROUP.resize(value)
	return ffi.C.alice_culture_group_resize(value)
end
---@param id culture_group_id
---@return text_key
function CULTURE_GROUP.get_name(id)
	return ffi.C.alice_culture_group_get_name(id)
end
---@param id culture_group_id
---@param value text_key
function CULTURE_GROUP.set_name(id, value)
	return ffi.C.alice_culture_group_set_name(id, value)
end
---@param id culture_group_id
---@return boolean
function CULTURE_GROUP.get_is_overseas(id)
	return ffi.C.alice_culture_group_get_is_overseas(id)
end
---@param id culture_group_id
---@param value boolean
function CULTURE_GROUP.set_is_overseas(id, value)
	return ffi.C.alice_culture_group_set_is_overseas(id, value)
end
---@param id culture_group_id
---@return leader_images_id
function CULTURE_GROUP.get_leader(id)
	return ffi.C.alice_culture_group_get_leader(id)
end
---@param id culture_group_id
---@param value leader_images_id
function CULTURE_GROUP.set_leader(id, value)
	return ffi.C.alice_culture_group_set_leader(id, value)
end
---@param id culture_group_id
---@return number
function CULTURE_GROUP.get_range_length_culture_group_membership(id)
	return ffi.C.alice_culture_group_get_range_culture_group_membership_as_group(id)
end
---@param id culture_group_id
---@param index number
---@return culture_group_membership_id
function CULTURE_GROUP.get_item_from_range_culture_group_membership(id, index)
	return ffi.C.alice_culture_group_get_index_culture_group_membership_as_group(id, index)
end
---@param id culture_group_id
---@return cultural_union_of_id
function CULTURE_GROUP.get_cultural_union_of_as_culture_group(id)
	return ffi.C.alice_culture_group_get_cultural_union_of_as_culture_group(id)
end
---@param id culture_group_id
---@return cultural_union_of_id
function CULTURE_GROUP.get_cultural_union_of(id)
	return ffi.C.alice_culture_group_get_cultural_union_of(id)
end
