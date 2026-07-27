# 修正器（Modifiers）

Alice 为游戏新增了一些修正器：

MOD_LIST_ELEMENT(126, aristocrat_reinvestment, true, modifier_display_type::percent, "aristocrat_reinvestment") \
	MOD_LIST_ELEMENT(127, , true, modifier_display_type::percent, "capitalist_reinvestment") \
	MOD_LIST_ELEMENT(128, , true, modifier_display_type::percent, "middle_class_reinvestment") \
	MOD_LIST_ELEMENT(129, , true, modifier_display_type::percent, "farmers_reinvestment") \
	MOD_LIST_ELEMENT(130, , true, modifier_display_type::percent, "aristocrat_savings") \
	MOD_LIST_ELEMENT(131, , true, modifier_display_type::percent, "capitalist_savings") \
	MOD_LIST_ELEMENT(132, , true, modifier_display_type::percent, "middle_class_savings") \
	MOD_LIST_ELEMENT(133, , true, modifier_display_type::percent, "farmers_savings") \

| aristocrat_reinvestment | 增加该人群类型存入投资池的收入百分比 |
| capitalist_reinvestment | 增加该人群类型存入投资池的收入百分比 |
| middle_class_reinvestment | 增加该人群类型存入投资池的收入百分比 |
| farmers_reinvestment | 增加该人群类型存入投资池的收入百分比 |
| aristocrat_savings | 增加该人群类型存入国家银行的收入百分比 |
| capitalist_savings | 增加该人群类型存入国家银行的收入百分比 |
| middle_class_savings | 增加该人群类型存入国家银行的收入百分比 |
| farmers_savings | 增加该人群类型存入国家银行的收入百分比 |
| disallow_naval_trade = 1 | 如果 >0.0f，则该国无法通过海上与其他国家贸易。传入零或负值将导致意外结果。 |
| disallow_land_trade = 1 | 如果 >0.0f，则该国无法通过陆路与其他国家贸易。传入零或负值将导致意外结果。 |
