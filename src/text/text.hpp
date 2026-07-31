#pragma once

#include <stdint.h>
#include <variant>
#include <vector>
#include <string>
#include <string_view>
#include "dcon_generated_ids.hpp"
#include "nations.hpp"
#include "unordered_dense.h"
#include "fonts.hpp"
#include "gui_graphics.hpp"
#include "constants_ui.hpp"

namespace sys {
struct state;
}

namespace text {

// 文本替换变量类型枚举：用于本地化文本中的 $...$ 占位符替换
enum class variable_type : uint16_t {
	error_no_matching_value, // 错误：无匹配值
	action, // 行动
	active, // 激活的
	actor, // 行动者
	adj, // 形容词
	against, // 对抗
	agressor, // 侵略者
	allowed, // 允许的
	amount, // 数量
	anyprovince, // 任意省份
	army, // 陆军
	army_name, // 陆军名称
	astate, // 抽象州
	attacker, // 攻击方
	attunit, // 攻击单位
	bac, // 后备
	badboy, // 恶名值
	badword, // 不良词语
	base, // 基础
	base_percentage, // 基础百分比
	bat, // 战斗
	bld, // 建筑
	bon, // 加成
	bonus, // 奖励
	brig, // 旅
	bud, // 预算
	building, // 建筑
	buy, // 购买
	cap, // 资本
	capital, // 首都
	cash, // 现金
	casus, // 宣战理由
	cat, // 类别
	category, // 类别
	cb_target_name, // 宣战理由目标名称
	cb_target_name_adj, // 宣战理由目标名称形容词
	chan, // 几率
	chance, // 几率
	change, // 改变
	commander, // 指挥官
	con, // 意识
	construction, // 建造
	continentname, // 大洲名称
	cost, // 成本
	count, // 数量
	countries, // 国家（复数）
	country, // 国家
	country1, // 国家1
	country2, // 国家2
	countryadj, // 国家形容词
	countryculture, // 国家文化
	countryname, // 国家名称
	country_adj, // 国家形容词
	creator, // 创建者
	credits, // 贷款
	crisisarea, // 危机区域
	crisisattacker, // 危机攻击方
	crisisdefender, // 危机防守方
	crisistaker, // 危机参与者
	crisistaker_adj, // 危机参与者形容词
	crisistarget, // 危机目标
	crisistarget_adj, // 危机目标形容词
	cul, // 文化
	culture, // 文化
	culture_group_union, // 文化集团联合
	curr, // 当前
	current, // 当前
	d, // 日
	date, // 日期
	date_long_0, // 长日期格式0
	date_long_1, // 长日期格式1
	date_short_0, // 短日期格式0
	day, // 日
	days, // 天数
	defender, // 防守方
	defunit, // 防守单位
	desc, // 描述
	dest, // 目的地
	details, // 详情
	direction, // 方向
	dist, // 距离
	effect, // 效果
	effects, // 效果（复数）
	emilist, // 移民列表
	employees, // 雇员
	employee_max, // 最大雇员数
	enemy, // 敌人
	engineermaxunits, // 工兵最大单位数
	engineerunits, // 工兵单位数
	escorts, // 护卫舰
	event, // 事件
	eventdesc, // 事件描述
	exc, // 交易
	exp, // 经验
	faction, // 派系
	factory, // 工厂
	first, // 第一
	focus, // 焦点
	folder, // 文件夹
	vtype_for, // 为
	fraction, // 分数
	vtype_friend, // 友方
	from, // 来自
	fromcountry, // 来源国家
	fromcountry_adj, // 来源国家形容词
	fromprovince, // 来源省份
	fromruler, // 来源统治者
	funds, // 资金
	goal, // 目标
	good, // 商品
	goods, // 商品（复数）
	gov, // 政府
	government, // 政府
	govt, // 政府
	gp, // 列强
	gp_adj, // 列强形容词
	group, // 集团
	high_tax, // 高税收
	hit, // 命中
	home, // 家乡
	hull, // 船体
	iamount, // 移民数量
	icountry, // 移民国家
	ide, // 意识形态
	ideology, // 意识形态
	ilocation, // 移民位置
	immlist, // 移民列表
	impact, // 影响
	iname, // 移民名称
	income, // 收入
	indep, // 独立
	inf, // 影响力
	infamy, // 恶名
	input, // 输入
	inv, // 投资
	invention, // 发明
	invested, // 已投资
	invested_in_us_message, // 投资于我方消息
	issue, // 议题
	law, // 法律
	leader, // 领袖
	lev, // 等级
	level, // 等级
	levels, // 等级（复数）
	lim, // 限制
	limit, // 限制
	list, // 列表
	literacy, // 识字率
	loc, // 位置
	local, // 本地
	location, // 位置
	lord, // 领主
	lose, // 损失
	low_tax, // 低税收
	lvl, // 等级
	m, // 月
	max, // 最大
	maxloan, // 最大贷款
	men, // 人力
	messenger, // 信使
	mil, // 战斗性
	militancy, // 战斗性
	min, // 最小
	monarchtitle, // 君主头衔
	money, // 金钱
	month, // 月
	months, // 月份
	movement, // 运动
	much, // 大量
	name, // 名称
	nation, // 民族
	nationalvalue, // 国家价值
	natives, // 原住民
	navy, // 海军
	navy_name, // 海军名称
	need, // 需要
	needed, // 所需
	negative, // 负面
	neut, // 中立
	vtype_new, // 新
	newcountry, // 新国家
	nf, // 国家焦点
	now, // 现在
	num, // 数量
	number, // 数字
	numfactories, // 工厂数量
	numspecialfactories, // 特殊工厂数量
	odds, // 胜算
	old, // 旧的
	oldcountry, // 旧国家
	vtype_operator, // 操作者
	opinion, // 观点
	opposing_army, // 对抗陆军
	opposing_navy, // 对抗海军
	opressor, // 压迫者
	opt, // 选项
	optimal, // 最佳
	option, // 选项
	order, // 命令
	org, // 组织度
	organisation, // 组织度
	other, // 其他
	otherresult, // 其他结果
	ourcapital, // 我方首都
	ourcountry, // 我方国家
	ourcountry_adj, // 我方国家形容词
	our_lead, // 我方领导
	our_num, // 我方数量
	our_res, // 我方资源
	output, // 产出
	overlord, // 宗主
	param, // 参数
	party, // 政党
	passive, // 被动的
	pay, // 支付
	pen, // 惩罚
	penalty, // 惩罚
	per, // 每
	perc, // 百分比
	perc2, // 百分比2
	percent, // 百分比
	percentage, // 百分比
	player, // 玩家
	policy, // 政策
	pop, // 人口
	poptype, // 人口类型
	popularity, // 声望
	position, // 位置
	positive, // 正面
	power, // 实力
	pres, // 声望
	prescence, // 存在
	prestige, // 威望
	produced, // 产出
	producer, // 生产者
	prog, // 进度
	progress, // 进度
	proj, // 项目
	prov, // 省份
	provinceculture, // 省份文化
	provincename, // 省份名称
	provincereligion, // 省份宗教
	provinces, // 省份（复数）
	provs, // 省份
	province, // 省份
	rank, // 排名
	rate, // 比率
	rec, // 接收者
	recipient, // 接收者
	reconmaxunits, // 侦察最大单位数
	reconunits, // 侦察单位数
	reform, // 改革
	region, // 地区
	rel, // 关系
	relation, // 关系
	religion, // 宗教
	req, // 需求
	reqlevel, // 需求等级
	required, // 所需
	resource, // 资源
	result, // 结果
	rstate, // 殖民州
	rule, // 统治
	runs, // 运行次数
	scr, // 分数
	sea, // 海洋
	second, // 第二
	second_country, // 第二国
	self, // 自身
	sell, // 出售
	setting, // 设置
	ships, // 舰船
	size, // 大小
	skill, // 技能
	source, // 来源
	speed, // 速度
	spheremaster, // 势力范围宗主
	state, // 州
	statename, // 州名称
	str, // 实力
	strata, // 阶层
	strings_list_4, // 字符串列表4
	string_0_0, // 字符串0_0
	string_0_1, // 字符串0_1
	string_0_2, // 字符串0_2
	string_0_3, // 字符串0_3
	string_0_4, // 字符串0_4
	string_9_0, // 字符串9_0
	sub, // 主题
	table, // 表
	tag, // 国家标签
	tag0_0, // 标签0_0
	tag_0_0, // 标签_0_0
	tag_0_0_, // 标签_0_0_
	tag_0_0_adj, // 标签_0_0形容词
	tag_0_0_upper, // 标签_0_0大写
	tag_0_1, // 标签_0_1
	tag_0_1_adj, // 标签_0_1形容词
	tag_0_1_upper, // 标签_0_1大写
	tag_0_2, // 标签_0_2
	tag_0_2_adj, // 标签_0_2形容词
	tag_0_3, // 标签_0_3
	tag_0_3_adj, // 标签_0_3形容词
	tag_1_0, // 标签_1_0
	tag_2_0, // 标签_2_0
	tag_2_0_upper, // 标签_2_0大写
	tag_3_0, // 标签_3_0
	tag_3_0_upper, // 标签_3_0大写
	target, // 目标
	targetlist, // 目标列表
	target_country, // 目标国家
	tech, // 科技
	temperature, // 温度
	terms, // 条款
	terrain, // 地形
	terrainmod, // 地形修正
	text, // 文本
	theirlost, // 敌方损失
	theirnum, // 敌方数量
	theirship, // 敌方舰船
	their_lead, // 敌方领导
	their_num, // 敌方数量
	their_res, // 敌方资源
	them, // 他们
	third, // 第三
	threat, // 威胁
	time, // 时间
	title, // 头衔
	to, // 到
	tot, // 总计
	totalemi, // 总移民数
	totalimm, // 总移民数
	tra, // 贸易
	truth, // 真相
	type, // 类型
	unemployed, // 失业
	vtype_union, // 联合
	union_adj, // 联合形容词
	unit, // 单位
	units, // 单位（复数）
	until, // 直到
	usloss, // 我方损失
	usnum, // 我方数量
	val, // 值
	value, // 值
	value_int1, // 整数值1
	value_int_0_0, // 整数值_0_0
	value_int_0_1, // 整数值_0_1
	value_int_0_2, // 整数值_0_2
	value_int_0_3, // 整数值_0_3
	value_int_0_4, // 整数值_0_4
	verb, // 动词
	versus, // 对抗
	war, // 战争
	wargoal, // 战争目标
	we, // 我们
	what, // 什么
	where, // 哪里
	which, // 哪个
	who, // 谁
	winner, // 胜利者
	x, // x坐标
	y, // y坐标
	year, // 年
	years, // 年份
	chief_of_navy, // 海军统帅
	chief_of_staff, // 总参谋长
	control, // 控制
	head_of_government, // 政府首脑
	owner, // 所有者
	playername, // 玩家名称
	yesterday, // 昨天
	avg, // 平均
	n, // 数量
	strength, // 实力
	total, // 总计
	infantry, // 步兵
	cavalry, // 骑兵
	special, // 特殊
	// 原版游戏遗漏的变量
	thiscountry, // 本国
	// 非原版游戏新增的变量
	fromcontinent, // 来源大洲
	fromcapital, // 来源首都
	crisistaker_continent, // 危机参与者大洲
	crisistaker_capital, // 危机参与者首都
	crisisattacker_continent, // 危机攻击方大洲
	crisisattacker_adj, // 危机攻击方形容词
	crisisattacker_capital, // 危机攻击方首都
	crisisdefender_continent, // 危机防守方大洲
	crisisdefender_adj, // 危机防守方形容词
	crisisdefender_capital, // 危机防守方首都
	culture_first_name, // 文化名
	culture_last_name, // 文化姓
	fromstatename, // 来源州名称
	spheremaster_adj, // 势力范围宗主形容词
	spheremaster_union_adj // 势力范围宗主联合形容词
};

// 行分隔标记结构体：用作布局中插入换行的占位类型
struct line_break { };


// 基于向量的字符串哈希函数对象：用于将 dcon::text_key 或 string_view 映射为哈希值
// 通过引用外部存储字符串数据的向量来获取 text_key 对应的字符串内容
struct vector_backed_hash {
	using is_avalanching = void; // 标记为雪崩哈希，结果分布更均匀
	using is_transparent = void; // 标记为透明哈希，允许异构查找

	std::vector<char>& text_data; // 字符串数据存储向量（以 \0 分隔）

	vector_backed_hash(std::vector<char>& text_data) : text_data(text_data) { }

	// 对 string_view 计算哈希
	auto operator()(std::string_view sv) const noexcept -> uint64_t {
		return ankerl::unordered_dense::detail::wyhash::hash(sv.data(), sv.size());
	}
	// 对 text_key 计算哈希：从向量中取出对应字符串后计算
	auto operator()(dcon::text_key tag) const noexcept -> uint64_t {
		auto sv = [&]() {
			if(!tag)
				return std::string_view();
			auto start_position = text_data.data() + tag.index();
			auto data_size = text_data.size();
			auto end_position = start_position;
			for(; end_position < text_data.data() + data_size; ++end_position) {
				if(*end_position == 0)
					break;
			}
			return std::string_view(text_data.data() + tag.index(), size_t(end_position - start_position));
		}();
		return ankerl::unordered_dense::detail::wyhash::hash(sv.data(), sv.size());
	}
};
// 基于向量的字符串相等比较函数对象：用于在哈希表中比较 text_key 与 string、string_view
struct vector_backed_eq {
	using is_transparent = void; // 标记为透明比较，允许异构查找

	std::vector<char>& text_data; // 字符串数据存储向量

	vector_backed_eq(std::vector<char>& text_data) : text_data(text_data) { }

	// 比较两个 text_key 是否相等
	bool operator()(dcon::text_key l, dcon::text_key r) const noexcept {
		return l == r;
	}
	// 比较 text_key 与 string_view 是否相等
	bool operator()(dcon::text_key l, std::string_view r) const noexcept {
		auto sv = [&]() {
			if(!l)
				return std::string_view();
			auto start_position = text_data.data() + l.index();
			auto data_size = text_data.size();
			auto end_position = start_position;
			for(; end_position < text_data.data() + data_size; ++end_position) {
				if(*end_position == 0)
					break;
			}
			return std::string_view(text_data.data() + l.index(), size_t(end_position - start_position));
		}();
		return sv == r;
	}
	// 比较 string_view 与 text_key 是否相等
	bool operator()(std::string_view r, dcon::text_key l) const noexcept {
		auto sv = [&]() {
			if(!l)
				return std::string_view();
			auto start_position = text_data.data() + l.index();
			auto data_size = text_data.size();
			auto end_position = start_position;
			for(; end_position < text_data.data() + data_size; ++end_position) {
				if(*end_position == 0)
					break;
			}
			return std::string_view(text_data.data() + l.index(), size_t(end_position - start_position));
		}();
		return sv == r;
	}
	// 比较 text_key 与 string 是否相等
	bool operator()(dcon::text_key l, std::string const& r) const noexcept {
		auto sv = [&]() {
			if(!l)
				return std::string_view();
			auto start_position = text_data.data() + l.index();
			auto data_size = text_data.size();
			auto end_position = start_position;
			for(; end_position < text_data.data() + data_size; ++end_position) {
				if(*end_position == 0)
					break;
			}
			return std::string_view(text_data.data() + l.index(), size_t(end_position - start_position));
		}();
		return sv == r;
	}
	// 比较 string 与 text_key 是否相等
	bool operator()(std::string const& r, dcon::text_key l) const noexcept {
		auto sv = [&]() {
			if(!l)
				return std::string_view();
			auto start_position = text_data.data() + l.index();
			auto data_size = text_data.size();
			auto end_position = start_position;
			for(; end_position < text_data.data() + data_size; ++end_position) {
				if(*end_position == 0)
					break;
			}
			return std::string_view(text_data.data() + l.index(), size_t(end_position - start_position));
		}();
		return sv == r;
	}
};

namespace detail {
// 128位乘法辅助函数：将两个 64 位整数相乘并将结果高低位分别写回
inline void mum(uint64_t* a, uint64_t* b) {
#    if defined(__SIZEOF_INT128__)
	__uint128_t r = *a;
	r *= *b;
	*a = static_cast<uint64_t>(r);
	*b = static_cast<uint64_t>(r >> 64U);
#    elif defined(_MSC_VER) && defined(_M_X64)
	*a = _umul128(*a, *b, b);
#    else
	uint64_t ha = *a >> 32U;
	uint64_t hb = *b >> 32U;
	uint64_t la = static_cast<uint32_t>(*a);
	uint64_t lb = static_cast<uint32_t>(*b);
	uint64_t hi{};
	uint64_t lo{};
	uint64_t rh = ha * hb;
	uint64_t rm0 = ha * lb;
	uint64_t rm1 = hb * la;
	uint64_t rl = la * lb;
	uint64_t t = rl + (rm0 << 32U);
	auto c = static_cast<uint64_t>(t < rl);
	lo = t + (rm1 << 32U);
	c += static_cast<uint64_t>(lo < t);
	hi = rh + (rm0 >> 32U) + (rm1 >> 32U) + c;
	*a = lo;
	*b = hi;
#    endif
}

// 乘法与异或混合函数（MUM）：用于哈希值的混合
[[nodiscard]] inline auto mix(uint64_t a, uint64_t b) -> uint64_t {
	mum(&a, &b);
	return a ^ b;
}

// 读取函数。警告：不关心字节序，因此在大端序机器上结果会不同！
// 读取 8 字节并将所有 ASCII 字母转换为小写（通过 OR 0x20 实现）
[[nodiscard]] inline auto r8(const uint8_t* p) -> uint64_t {
	uint64_t v{};
	std::memcpy(&v, p, 8U);
	return v | 0x2020202020202020;
}

// 读取 4 字节并将所有 ASCII 字母转换为小写（通过 OR 0x20 实现）
[[nodiscard]] inline auto r4(const uint8_t* p) -> uint64_t {
	uint32_t v{};
	std::memcpy(&v, p, 4);
	return v | 0x20202020;
}

// 读取 1、2 或 3 字节并将 ASCII 字母转换为小写
[[nodiscard]] inline auto r3(const uint8_t* p, size_t k) -> uint64_t {
	return (static_cast<uint64_t>(p[0] | 0x20) << 16U) | (static_cast<uint64_t>(p[k >> 1U] | 0x20) << 8U) | p[k - 1] | 0x20;
}

// 大小写不敏感的 wyhash 哈希函数：基于 wyhash 算法实现，将所有 ASCII 字母视为小写
[[nodiscard]] inline auto ci_wyhash(void const* key, size_t len) -> uint64_t {
	static constexpr auto secret = std::array{ UINT64_C(0xa0761d6478bd642f),
						  UINT64_C(0xe7037ed1a0b428db),
						  UINT64_C(0x8ebc6af09c88c6e3),
						  UINT64_C(0x589965cc75374cc3) };

	auto const* p = static_cast<uint8_t const*>(key);
	uint64_t seed = secret[0];
	uint64_t a{};
	uint64_t b{};
	if(ANKERL_UNORDERED_DENSE_LIKELY(len <= 16)) {
		if(ANKERL_UNORDERED_DENSE_LIKELY(len >= 4)) {
			a = (r4(p) << 32U) | r4(p + ((len >> 3U) << 2U));
			b = (r4(p + len - 4) << 32U) | r4(p + len - 4 - ((len >> 3U) << 2U));
		} else if(ANKERL_UNORDERED_DENSE_LIKELY(len > 0)) {
			a = r3(p, len);
			b = 0;
		} else {
			a = 0;
			b = 0;
		}
	} else {
		size_t i = len;
		if(ANKERL_UNORDERED_DENSE_UNLIKELY(i > 48)) {
			uint64_t see1 = seed;
			uint64_t see2 = seed;
			do {
				seed = mix(r8(p) ^ secret[1], r8(p + 8) ^ seed);
				see1 = mix(r8(p + 16) ^ secret[2], r8(p + 24) ^ see1);
				see2 = mix(r8(p + 32) ^ secret[3], r8(p + 40) ^ see2);
				p += 48;
				i -= 48;
			} while(ANKERL_UNORDERED_DENSE_LIKELY(i > 48));
			seed ^= see1 ^ see2;
		}
		while(ANKERL_UNORDERED_DENSE_UNLIKELY(i > 16)) {
			seed = mix(r8(p) ^ secret[1], r8(p + 8) ^ seed);
			i -= 16;
			p += 16;
		}
		a = r8(p + i - 16);
		b = r8(p + i - 8);
	}

	return mix(secret[1] ^ len, mix(a ^ secret[1], b ^ seed));
}

// 简单的大小写不敏感相等比较：逐字符通过 OR 0x20 比较 ASCII 字母
inline bool lazy_ci_eq(std::string_view a, std::string_view b) {
	if(a.length() != b.length())
		return false;
	for(uint32_t i = 0; i < a.length(); ++i) {
		if((a[i] | 0x20) != (b[i] | 0x20))
			return false;
	}
	return true;
}

}

// 基于向量的大小写不敏感哈希函数对象：与 vector_backed_hash 类似，但哈希计算忽略大小写
struct vector_backed_ci_hash {
	using is_avalanching = void; // 标记为雪崩哈希
	using is_transparent = void; // 标记为透明哈希，允许异构查找

	std::vector<char>& text_data; // 字符串数据存储向量

	vector_backed_ci_hash(std::vector<char>& text_data) : text_data(text_data) { }

	// 对 string_view 计算大小写不敏感哈希
	auto operator()(std::string_view sv) const noexcept -> uint64_t {
		return detail::ci_wyhash(sv.data(), sv.size());
	}
	// 对 text_key 计算大小写不敏感哈希：从向量中取出对应字符串后计算
	auto operator()(dcon::text_key tag) const noexcept -> uint64_t {
		auto sv = [&]() {
			if(!tag)
				return std::string_view();
			auto start_position = text_data.data() + tag.index();
			auto data_size = text_data.size();
			auto end_position = start_position;
			for(; end_position < text_data.data() + data_size; ++end_position) {
				if(*end_position == 0)
					break;
			}
			return std::string_view(text_data.data() + tag.index(), size_t(end_position - start_position));
			}();
		return detail::ci_wyhash(sv.data(), sv.size());
	}
};
// 基于向量的大小写不敏感相等比较函数对象：与 vector_backed_eq 类似，但比较时忽略大小写
struct vector_backed_ci_eq {
	using is_transparent = void; // 标记为透明比较，允许异构查找

	std::vector<char>& text_data; // 字符串数据存储向量

	vector_backed_ci_eq(std::vector<char>& text_data) : text_data(text_data) { }

	// 比较两个 text_key 是否相等
	bool operator()(dcon::text_key l, dcon::text_key r) const noexcept {
		return l == r;
	}
	// 比较 text_key 与 string_view 是否相等（忽略大小写）
	bool operator()(dcon::text_key l, std::string_view r) const noexcept {
		auto sv = [&]() {
			if(!l)
				return std::string_view();
			auto start_position = text_data.data() + l.index();
			auto data_size = text_data.size();
			auto end_position = start_position;
			for(; end_position < text_data.data() + data_size; ++end_position) {
				if(*end_position == 0)
					break;
			}
			return std::string_view(text_data.data() + l.index(), size_t(end_position - start_position));
			}();
			return detail::lazy_ci_eq(sv, r);
	}
	// 比较 string_view 与 text_key 是否相等（忽略大小写）
	bool operator()(std::string_view r, dcon::text_key l) const noexcept {
		auto sv = [&]() {
			if(!l)
				return std::string_view();
			auto start_position = text_data.data() + l.index();
			auto data_size = text_data.size();
			auto end_position = start_position;
			for(; end_position < text_data.data() + data_size; ++end_position) {
				if(*end_position == 0)
					break;
			}
			return std::string_view(text_data.data() + l.index(), size_t(end_position - start_position));
			}();
			return detail::lazy_ci_eq(sv, r);
	}
	// 比较 text_key 与 string 是否相等（忽略大小写）
	bool operator()(dcon::text_key l, std::string const& r) const noexcept {
		auto sv = [&]() {
			if(!l)
				return std::string_view();
			auto start_position = text_data.data() + l.index();
			auto data_size = text_data.size();
			auto end_position = start_position;
			for(; end_position < text_data.data() + data_size; ++end_position) {
				if(*end_position == 0)
					break;
			}
			return std::string_view(text_data.data() + l.index(), size_t(end_position - start_position));
			}();
			return detail::lazy_ci_eq(sv, r);
	}
	// 比较 string 与 text_key 是否相等（忽略大小写）
	bool operator()(std::string const& r, dcon::text_key l) const noexcept {
		auto sv = [&]() {
			if(!l)
				return std::string_view();
			auto start_position = text_data.data() + l.index();
			auto data_size = text_data.size();
			auto end_position = start_position;
			for(; end_position < text_data.data() + data_size; ++end_position) {
				if(*end_position == 0)
					break;
			}
			return std::string_view(text_data.data() + l.index(), size_t(end_position - start_position));
			}();
			return detail::lazy_ci_eq(sv, r);
	}
};

// 浮点数格式化包装：保留 1 位小数
struct fp_one_place {
	float value = 0.0f;
};
// 浮点数格式化包装：保留 2 位小数
struct fp_two_places {
	float value = 0.0f;
};
// 浮点数格式化包装：保留 3 位小数
struct fp_three_places {
	float value = 0.0f;
};
// 浮点数格式化包装：保留 4 位小数
struct fp_four_places {
	float value = 0.0f;
};
// 货币格式化包装：以货币形式显示
struct fp_currency {
	float value = 0.0f;
};
// 整数美化包装：以 K/M/B 等后缀形式显示大整数
struct pretty_integer {
	int64_t value = 0;
};
// 百分比格式化包装：显示为整数百分比
struct fp_percentage {
	float value = 0.0f;
};
// 百分比格式化包装：显示为 1 位小数百分比
struct fp_percentage_one_place {
	float value = 0.0f;
};
// 百分比格式化包装：显示为 2 位小数百分比
struct fp_percentage_two_places {
	float value = 0.0f;
};
// 整数百分比格式化包装
struct int_percentage {
	int32_t value = 0;
};
// 整数（带千位分隔符）格式化包装
struct int_wholenum {
	int32_t value = 0;
};
// 内嵌单位图标替换：在文本中插入指定单位类型的图标
struct embedded_unit_icon {
	dcon::unit_type_id unit_type;
};
// 内嵌商品图标替换：在文本中插入指定商品的图标
struct embedded_commodity_icon {
	dcon::commodity_id commodity;
};
// 内嵌国旗替换：在文本中插入指定国家的国旗
struct embedded_flag {
	dcon::national_identity_id tag;
};
// 文本替换值类型：可承载多种类型（字符串、键、各类 ID、各种格式化数值等）
using substitution = std::variant<std::string_view, dcon::text_key, dcon::province_id, dcon::state_instance_id, dcon::nation_id,
		dcon::national_identity_id, int64_t, fp_one_place, sys::date, std::monostate, fp_two_places, fp_three_places, fp_four_places,
		fp_currency, pretty_integer, fp_percentage, fp_percentage_one_place, fp_percentage_two_places, int_percentage, int_wholenum,
		dcon::state_definition_id, embedded_icon, embedded_flag, embedded_unit_icon, embedded_commodity_icon>;
// 替换映射表：从变量类型枚举值到替换值的映射
using substitution_map = ankerl::unordered_dense::map<uint32_t, substitution>;

// 文本块结构体：表示布局中单个可渲染的文本片段（一段字形、图标或内嵌对象）
struct text_chunk {
	text::stored_glyphs unicodechars; // 存储的字形数据
	float x = 0; // 是的，x 偏移为浮点数而 y 偏移为整数是有原因的
	substitution source = std::monostate{}; // 来源替换值（用于超链接等）
	int16_t y = 0; // y 偏移
	int16_t width = 0; // 宽度
	int16_t height = 0; // 高度
	text_color color = text_color::black; // 颜色
};
// 布局参数结构体：描述文本布局区域的边界、字体、对齐方式等
struct layout_parameters {
	int16_t left = 0; // 左边界
	int16_t top = 0; // 上边界
	int16_t right = 0; // 右边界
	int16_t bottom = 0; // 下边界
	uint16_t font_id = 0; // 字体 ID
	int16_t leading = 0; // 行间距
	alignment align = alignment::left; // 对齐方式
	text_color color = text_color::white; // 默认颜色
	bool suppress_hyperlinks = false; // 是否禁止超链接着色
	bool single_line = false; // 是否为单行布局
};
// 布局结构体：保存所有文本块及行数等布局结果
struct layout {
	std::vector<text_chunk> contents; // 所有文本块
	int32_t number_of_lines = 0; // 行数
	text_chunk const* get_chunk_from_position(int32_t x, int32_t y) const; // 根据坐标获取对应文本块
};

// 布局盒子结构体：描述布局中一个独立区域的状态（位置、尺寸、颜色等）
struct layout_box {
	size_t first_chunk = 0; // 起始文本块索引
	size_t line_start = 0; // 当前行起始文本块索引
	int32_t x_offset = 0; // x 偏移
	int32_t x_size = 0; // 宽度
	int32_t y_size = 0; // 高度

	float x_position = 0; // 当前 x 位置
	int32_t y_position = 0; // 当前 y 位置
	text_color color = text_color::white; // 颜色
};

// 布局基类结构体：所有布局类型的基类，提供公共参数和虚函数接口
struct layout_base {
	enum class rtl_status : uint8_t { ltr, rtl }; // 文字方向：ltr（从左到右）、rtl（从右到左）
	layout& base_layout; // 关联的布局对象
	layout_parameters fixed_parameters; // 固定布局参数
	rtl_status native_rtl = rtl_status::ltr; // 原生文字方向
	layout_details* edit_details = nullptr; // 编辑详情指针（用于光标定位等）

	layout_base(layout& base_layout, layout_parameters const& fixed_parameters, rtl_status native_rtl)
			: base_layout(base_layout), fixed_parameters(fixed_parameters), native_rtl(native_rtl) {
		if(native_rtl == rtl_status::rtl) {
			if(fixed_parameters.align == text::alignment::left) {
				layout_base::fixed_parameters.align = text::alignment::right;
			} else if(fixed_parameters.align == text::alignment::left) {
				layout_base::fixed_parameters.align = text::alignment::left;
			}
		}
	}
	virtual ~layout_base() = default;
	virtual void internal_close_box(layout_box& box) = 0; // 关闭布局盒子的虚函数，由派生类实现
};

// 分栏布局结构体：将文本按列分块布局，超出底部时自动换列
struct columnar_layout : public layout_base {
	int32_t used_height = 0; // 已使用高度
	int32_t used_width = 0; // 已使用宽度
	int32_t y_cursor = 0; // 当前列的 y 游标
	int32_t current_column_x = 0; // 当前列的 x 起点
	int32_t column_width = 0; // 列宽

	columnar_layout(layout& layout, layout_parameters const& parameters, layout_base::rtl_status rtl, int32_t used_height = 0, int32_t used_width = 0, int32_t y_cursor = 0, int32_t column_width = 0)
			: layout_base(layout, parameters, rtl), used_height(used_height), used_width(used_width), y_cursor(y_cursor),
				current_column_x(parameters.left), column_width(column_width) {
		layout_base::fixed_parameters.left = 0;
	}

	void internal_close_box(layout_box& box) final; // 关闭布局盒子（最终实现）
};

// 无限布局结构体：垂直方向不断累加行的布局，不进行换列
struct endless_layout : public layout_base {
	int32_t y_cursor = 0; // 当前的 y 游标

	endless_layout(layout& layout, layout_parameters const& parameters, layout_base::rtl_status rtl, int32_t y_cursor = 0)
			: layout_base(layout, parameters, rtl), y_cursor(y_cursor) { }

	void internal_close_box(layout_box& box) final; // 关闭布局盒子（最终实现）
};

// 打开一个新的布局盒子
layout_box open_layout_box(layout_base& dest, int32_t indent = 0);

// 单行布局结构体：仅布局单行文本，超出宽度时显示省略号
struct single_line_layout : public layout_base {
	layout_box box; // 单行对应的布局盒子

	single_line_layout(layout& layout, layout_parameters const& parameters, layout_base::rtl_status rtl)
		: layout_base(layout, parameters, rtl), box(open_layout_box(*this, 0)) {

		base_layout.number_of_lines = 0;
		base_layout.contents.clear();
	}

	void internal_close_box(layout_box& box) final; // 关闭布局盒子（最终实现）

	~single_line_layout() override {
		internal_close_box(box);
	}

	void add_text(sys::state& state, std::string_view v); // 添加 UTF-8 文本
	void add_text(sys::state& state, std::u16string_view v); // 添加 UTF-16 文本
	void add_text(sys::state& state, dcon::text_key source_text); // 添加本地化文本键
};

// 将颜色字符（如 'W'、'G' 等）转换为对应的文本颜色枚举值
text_color char_to_color(char in);

// 创建一个无限布局：根据当前语言环境决定 RTL/LTR 方向
endless_layout create_endless_layout(sys::state& state, layout& dest, layout_parameters const& params);
// 关闭无限布局中的布局盒子
void close_layout_box(endless_layout& dest, layout_box& box);

// 创建一个分栏布局：根据当前语言环境决定 RTL/LTR 方向
columnar_layout create_columnar_layout(sys::state& state, layout& dest, layout_parameters const& params, int32_t column_width);

// 关闭分栏布局中的布局盒子
void close_layout_box(columnar_layout& dest, layout_box& box);
// 关闭单行布局中的布局盒子
void close_layout_box(single_line_layout& dest, layout_box& box);
// 将未解析的字符串（含颜色、图标、变量替换等转义）添加到布局盒子中
void add_unparsed_text_to_layout_box(sys::state& state, layout_base& dest, layout_box& box, std::string_view sv, substitution_map const& mp = substitution_map{});
// 将本地化文本键（含替换）添加到布局盒子中
void add_to_layout_box(sys::state& state, layout_base& dest, layout_box& box, dcon::text_key source_text,
		substitution_map const& mp = substitution_map{});
// 将字符串视图添加到布局盒子中，可指定颜色与替换值
void add_to_layout_box(sys::state& state, layout_base& dest, layout_box& box, std::string_view,
		text_color color = text_color::white, substitution source = std::monostate{});
// 将替换值（解析为字符串后）添加到布局盒子中
void add_to_layout_box(sys::state& state, layout_base& dest, layout_box& box, substitution val,
		text_color color = text_color::white);
// 将字符串添加到布局盒子中
void add_to_layout_box(sys::state& state, layout_base& dest, layout_box& box, std::string const& val,
		text_color color = text_color::white);
// 在布局盒子中添加一个空格宽度的间距
void add_space_to_layout_box(sys::state& state, layout_base& dest, layout_box& box);
// 在布局盒子中添加换行
void add_line_break_to_layout_box(sys::state& state, layout_base& dest, layout_box& box);

// 在分栏布局中添加换行
void add_line_break_to_layout(sys::state& state, columnar_layout& dest);
// 在无限布局中添加换行
void add_line_break_to_layout(sys::state& state, endless_layout& dest);
// 将内嵌国旗添加到布局盒子中
void add_to_layout_box(sys::state& state, layout_base& dest, layout_box& box, embedded_flag ico);
// 将内嵌图标（如对勾、叉号等）添加到布局盒子中
void add_to_layout_box(sys::state& state, layout_base& dest, layout_box& box, embedded_icon ico);

// 通过基类引用关闭布局盒子（虚函数分发）
void close_layout_box(layout_base& dest, layout_box& box);

// 向替换映射表中添加一个变量类型到替换值的映射
void add_to_substitution_map(substitution_map& mp, variable_type key, substitution value);
// 向替换映射表中添加字符串值（请勿使用此函数）
void add_to_substitution_map(substitution_map& mp, variable_type key, std::string const&); // 请勿使用此函数

// 解析并加载 CSV 本地化文件到状态中
void consume_csv_file(sys::state& state, char const* file_content, uint32_t file_size, int32_t target_column, bool as_unicode);
// 根据变量名（字符串视图）解析对应的变量类型枚举
variable_type variable_type_from_name(std::string_view);
// 将 Windows-1250 编码字符转换为 UTF-16 字符
char16_t win1250toUTF16(char in);
// 根据字符串键生成简单字符串（去除颜色和变量等转义）
std::string produce_simple_string(sys::state const& state, std::string_view key);
// 根据文本键生成简单字符串（去除颜色和变量等转义）
std::string produce_simple_string(sys::state const& state, dcon::text_key id);
// 根据当前语言环境调整文本对齐方式（RTL 时左右互换）
text::alignment localized_alignment(sys::state& state, text::alignment in);
// 根据当前语言环境调整 UI 对齐方式（RTL 时左右互换）
ui::alignment localized_alignment(sys::state& state, ui::alignment in);
// 将 UI 对齐方式转换为文本对齐方式
text::alignment to_text_alignment(ui::alignment in);

// 查找或添加文本键：若不存在则添加到状态中
dcon::text_key find_or_add_key(sys::state& state, std::string_view key, bool as_unicode);

// 将游戏日期格式化为字符串
std::string date_to_string(sys::state& state, sys::date date);

// 将整数美化显示（使用 K/M/B 等后缀）
std::string prettify(int64_t num);
// 将整数美化显示（根据当前语言本地化，中文用万/亿，日文用万/億等）
std::string prettify(sys::state& state, int64_t num);
// 将浮点数美化显示为货币形式（使用 K/M/B 等后缀）
std::string prettify_currency(float num);
// 将浮点数美化显示（使用 K/M/B 等后缀）
std::string prettify_float(float num);
// 格式化货币金额
std::string format_money(float num);
// 格式化整数（带千位分隔符）
std::string format_wholenum(int32_t num);
// 格式化百分比（默认保留 2 位小数）
std::string format_percentage(float num, size_t digits = 2);
// 格式化浮点数（默认保留 2 位小数）
std::string format_float(float num, size_t digits = 2);
// 格式化为比例形式（如 left/right）
std::string format_ratio(int32_t left, int32_t right);
// 获取州的简短名称
std::string get_short_state_name(sys::state& state, dcon::state_instance_id state_id);
// 获取州的动态名称（含所有者形容词等组合）
std::string get_dynamic_state_name(sys::state& state, dcon::state_instance_id state_id);
// 获取省份所属州的名称
std::string get_province_state_name(sys::state& state, dcon::province_id prov_id);
// 获取国家焦点类别的名称
std::string get_focus_category_name(sys::state const& state, nations::focus_type category);
// 获取影响力等级名称
std::string get_influence_level_name(sys::state const& state, uint8_t v);
// 获取国家名称（含政府类型变体）
dcon::text_key get_name(sys::state& state, dcon::nation_id n);
// 获取国家形容词（含政府类型变体）
dcon::text_key get_adjective(sys::state& state, dcon::nation_id n);
// 获取国家身份形容词
dcon::text_key get_adjective(sys::state& state, dcon::national_identity_id n);
// 获取统治者头衔
dcon::text_key get_ruler_title(sys::state& state, dcon::nation_id n);

// 获取国家名称字符串
std::string get_name_as_string(sys::state& state, dcon::nation_id n);
// 获取意识形态名称字符串
std::string get_name_as_string(sys::state& state, dcon::ideology_id n);
// 获取政党名称字符串
std::string get_name_as_string(sys::state& state, dcon::political_party_id n);
// 获取宗教名称字符串
std::string get_name_as_string(sys::state& state, dcon::religion_id n);
// 获取科技名称字符串
std::string get_name_as_string(sys::state& state, dcon::technology_id n);
// 获取文化名称字符串
std::string get_name_as_string(sys::state& state, dcon::culture_id n);
// 获取商品名称字符串
std::string get_name_as_string(sys::state& state, dcon::commodity_id n);
// 获取议题名称字符串
std::string get_name_as_string(sys::state& state, dcon::issue_id n);
// 获取议题选项名称字符串
std::string get_name_as_string(sys::state& state, dcon::issue_option_id n);
// 获取修正项名称字符串
std::string get_name_as_string(sys::state& state, dcon::modifier_id n);
// 获取省份名称字符串
std::string get_name_as_string(sys::state& state, dcon::province_id n);
// 获取国家身份名称字符串
std::string get_name_as_string(sys::state& state, dcon::national_identity_id n);
// 获取改革选项名称字符串
std::string get_name_as_string(sys::state& state, dcon::reform_option_id n);
// 获取州定义名称字符串
std::string get_name_as_string(sys::state& state, dcon::state_definition_id n);

// 获取国家形容词字符串
std::string get_adjective_as_string(sys::state& state, dcon::nation_id n);
// 获取国家身份形容词字符串
std::string get_adjective_as_string(sys::state& state, dcon::national_identity_id n);

// 获取商品名称（带图标前缀）
std::string get_commodity_name_with_icon(sys::state& state, dcon::commodity_id cid);
// 获取商品图标的文本表示（仅图标前缀）
std::string get_commodity_text_icon(sys::state& state, dcon::commodity_id cid);

// 将本地化键对应的文本（含替换）添加到布局盒子中
void localised_format_box(sys::state& state, layout_base& dest, layout_box& box, std::string_view key,
		substitution_map const& sub = substitution_map{});
// 将本地化键对应的文本（含单个替换）添加到布局盒子中
void localised_single_sub_box(sys::state& state, layout_base& dest, layout_box& box, std::string_view key, variable_type subkey,
		substitution value);

// 将国家名称和国旗添加到布局中
void nation_name_and_flag(sys::state& state, dcon::nation_id n, layout_base& dest, int32_t indent = 0);

// 添加一行本地化文本（无替换）
void add_line(sys::state& state, layout_base& dest, std::string_view key, int32_t indent = 0);
// 添加一行本地化文本（带 1 个替换）
void add_line(sys::state& state, layout_base& dest, std::string_view key, variable_type subkey, substitution value,
		int32_t indent = 0);
// 添加一行本地化文本（带 2 个替换）
void add_line(sys::state& state, layout_base& dest, std::string_view key, variable_type subkey, substitution value,
		variable_type subkey_b, substitution value_b, int32_t indent = 0);
// 添加一行本地化文本（带 3 个替换）
void add_line(sys::state& state, layout_base& dest, std::string_view key, variable_type subkey, substitution value,
		variable_type subkey_b, substitution value_b, variable_type subkey_c, substitution value_c, int32_t indent = 0);
// 添加一行本地化文本（带 4 个替换）
void add_line(sys::state& state, layout_base& dest, std::string_view key, variable_type subkey, substitution value,
		variable_type subkey_b, substitution value_b, variable_type subkey_c, substitution value_c, variable_type subkey_d,
		substitution value_d, int32_t indent = 0);
// 添加一行本地化文本（无替换，使用文本键）
void add_line(sys::state& state, layout_base& dest, dcon::text_key txt, int32_t indent = 0);
// 添加一行本地化文本（带 1 个替换，使用文本键）
void add_line(sys::state& state, layout_base& dest, dcon::text_key txt, variable_type subkey, substitution value,
		int32_t indent = 0);
// 添加一行本地化文本（带 2 个替换，使用文本键）
void add_line(sys::state& state, layout_base& dest, dcon::text_key txt, variable_type subkey, substitution value,
		variable_type subkey_b, substitution value_b, int32_t indent = 0);
// 添加一行本地化文本（带 3 个替换，使用文本键）
void add_line(sys::state& state, layout_base& dest, dcon::text_key txt, variable_type subkey, substitution value,
		variable_type subkey_b, substitution value_b, variable_type subkey_c, substitution value_c, int32_t indent = 0);
// 添加一行本地化文本（带 4 个替换，使用文本键）
void add_line(sys::state& state, layout_base& dest, dcon::text_key txt, variable_type subkey, substitution value,
		variable_type subkey_b, substitution value_b, variable_type subkey_c, substitution value_c, variable_type subkey_d,
		substitution value_d, int32_t indent = 0);
// 添加一行带条件标记（对勾/叉号）的本地化文本
void add_line_with_condition(sys::state& state, layout_base& dest, std::string_view key, bool condition_met, int32_t indent = 0);
// 添加一行带条件标记和 1 个替换的本地化文本
void add_line_with_condition(sys::state& state, layout_base& dest, std::string_view key, bool condition_met, variable_type subkey, substitution value, int32_t indent = 0);
// 添加一行带条件标记和 2 个替换的本地化文本
void add_line_with_condition(sys::state& state, layout_base& dest, std::string_view key, bool condition_met, variable_type subkey, substitution value, variable_type subkeyb, substitution valueb, int32_t indent = 0);
// 添加一行带条件标记和 3 个替换的本地化文本
void add_line_with_condition(sys::state& state, layout_base& dest, std::string_view key, bool condition_met, variable_type subkey, substitution value, variable_type subkeyb, substitution valueb, variable_type subkeyc, substitution valuec, int32_t indent = 0);
// 计算 UTF-8 编码字符占用的字节数
size_t size_from_utf8(char const* start, char const* end);

// 在布局盒子中添加分隔线（换行 + 空行 + 换行）
void add_divider_to_layout_box(sys::state& state, layout_base& dest, layout_box& box);

// 解析字符串键中的变量替换并返回结果字符串
std::string resolve_string_substitution(sys::state& state, std::string_view key, substitution_map const& mp);
// 解析文本键中的变量替换并返回结果字符串
std::string resolve_string_substitution(sys::state& state, dcon::text_key key, substitution_map const& mp);

// 从 UTF-8 字符流中读取一个 Unicode 码点
uint32_t codepoint_from_utf8(char const* start, char const* end);
// 计算 UTF-8 编码字符占用的字节数（仅根据首字节判断）
size_t size_from_utf8(char const* start, char const*);

} // namespace text
