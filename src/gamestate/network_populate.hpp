
namespace command {

// 省份UI数据：用于网络同步的省份显示信息
struct province_ui_data {
	dcon::commodity_id rgo; // 省份原材料商品
	ankerl::unordered_dense::map<uint8_t, uint8_t> building_level; // 各建筑等级
	bool is_slave; // 是否为奴隶制省份
	bool naval_rally_point; // 是否为海军集结点
	bool land_rally_point; // 是否为陆军集结点
	bool is_colonial; // 是否为殖民地
	dcon::crime_id crime; // 省份犯罪类型
	ankerl::unordered_dense::map<dcon::ideology_id, float>	party_loyalty; // 各政党忠诚度
	ankerl::unordered_dense::map<dcon::provincial_modifier_value, float> modifier_values; // 省份修饰器值
	ankerl::unordered_dense::set<sys::dated_modifier> current_modifiers; // 当前生效的带日期修饰器
	float nationalism; // 民族主义值
	ankerl::unordered_dense::map<dcon::demographics_key, float> demographics; // 人口统计数据
	ankerl::unordered_dense::map<dcon::demographics_key, float> demographics_alt; // 备用人口统计数据
	dcon::culture_id dominant_culture; // 主导文化
	dcon::culture_id dominant_accepted_culture; // 主导的受接受文化
	dcon::culture_id dominant_religion; // 主导宗教
	dcon::culture_id dominant_ideology; // 主导意识形态
	dcon::issue_option_id dominant_issue_option; // 主导议题选项
	sys::date last_control_change; // 上次控制权变更日期
	sys::date last_immigration; // 上次移民日期
	bool is_owner_core; // 是否为拥有者的核心领土

	// 原材料（RGO）相关
	float rgo_full_profit; // RGO满产利润
	float rgo_employment; // RGO就业率
	float rgo_size; // RGO规模
	float subsistence_score; // 自给经济评分

	ankerl::unordered_dense::map<dcon::commodity_id, float> rgo_max_size_per_good; // 各商品RGO最大规模
	ankerl::unordered_dense::map<dcon::commodity_id, float> rgo_target_employment_per_good; // 各商品RGO目标就业
	ankerl::unordered_dense::map<dcon::commodity_id, float> rgo_employment_per_good; // 各商品RGO实际就业

	// 土地所有权相关
	float landowners_share; // 地主份额
	float capitalists_share; // 资本家份额
	float subsistence_employment; // 自给经济就业

	ankerl::unordered_dense::map<dcon::commodity_id, float> rgo_profit_per_good; // 各商品RGO利润
	ankerl::unordered_dense::map<dcon::commodity_id, float> rgo_actual_production_per_good; // 各商品RGO实际产量

	// 移民相关
	float daily_net_migration; // 日净迁移
	float daily_net_immigration; // 日净移民（国际）

	// 军事相关
	float siege_progress; // 围攻进度
	bool is_blockaded; // 是否被封锁
	dcon::nation_id former_controller; // 前控制者
	dcon::rebel_faction_id former_rebel_controller; // 前叛军控制者

	province_ui_data{}
	~province_ui_data{}
};

// 网络填充数据：用于网络传输的联合体包装
	struct network_populate_data {
		union utype {
			province_ui_data province_ui;

			utype() { }
			~utype() { }
		} data;
	};
}
