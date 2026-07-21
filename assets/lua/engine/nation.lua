-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_nation_is_valid(int32_t api_arg_0_id);
uint32_t alice_nation_size();
void alice_nation_resize(uint32_t api_arg_0_value);
uint32_t alice_nation_get_color(int32_t api_arg_0_id);
void alice_nation_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value);
int32_t alice_nation_get_masquerade_identity(int32_t api_arg_0_id);
void alice_nation_set_masquerade_identity(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_get_primary_culture(int32_t api_arg_0_id);
void alice_nation_set_primary_culture(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_nation_get_accepted_cultures(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_accepted_cultures(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_nation_get_accepted_cultures_size();
void alice_nation_resize_accepted_cultures(uint32_t api_arg_0_value);
int32_t alice_nation_get_religion(int32_t api_arg_0_id);
void alice_nation_set_religion(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_get_capital(int32_t api_arg_0_id);
void alice_nation_set_capital(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_nation_get_is_civilized(int32_t api_arg_0_id);
void alice_nation_set_is_civilized(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_nation_get_marked_for_gc(int32_t api_arg_0_id);
void alice_nation_set_marked_for_gc(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_nation_get_is_great_power(int32_t api_arg_0_id);
void alice_nation_set_is_great_power(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_nation_get_national_value(int32_t api_arg_0_id);
void alice_nation_set_national_value(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_get_tech_school(int32_t api_arg_0_id);
void alice_nation_set_tech_school(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_get_government_type(int32_t api_arg_0_id);
void alice_nation_set_government_type(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_nation_get_plurality(int32_t api_arg_0_id);
void alice_nation_set_plurality(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_prestige(int32_t api_arg_0_id);
void alice_nation_set_prestige(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_infamy(int32_t api_arg_0_id);
void alice_nation_set_infamy(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_revanchism(int32_t api_arg_0_id);
void alice_nation_set_revanchism(int32_t api_arg_0_id, float api_arg_1_value);
int16_t alice_nation_get_permanent_colonial_points(int32_t api_arg_0_id);
void alice_nation_set_permanent_colonial_points(int32_t api_arg_0_id, int16_t api_arg_1_value);
bool alice_nation_get_active_technologies(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_active_technologies(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_nation_get_active_technologies_size();
void alice_nation_resize_active_technologies(uint32_t api_arg_0_value);
bool alice_nation_get_active_inventions(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_active_inventions(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_nation_get_active_inventions_size();
void alice_nation_resize_active_inventions(uint32_t api_arg_0_value);
int32_t alice_nation_get_ruling_party(int32_t api_arg_0_id);
void alice_nation_set_ruling_party(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_get_issues(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_issues(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_nation_get_issues_size();
void alice_nation_resize_issues(uint32_t api_arg_0_value);
int32_t alice_nation_get_reforms(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_reforms(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_nation_get_reforms_size();
void alice_nation_resize_reforms(uint32_t api_arg_0_value);
uint32_t alice_nation_get_combined_issue_rules(int32_t api_arg_0_id);
void alice_nation_set_combined_issue_rules(int32_t api_arg_0_id, uint32_t api_arg_1_value);
float alice_nation_get_upper_house(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_upper_house(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_upper_house_size();
void alice_nation_resize_upper_house(uint32_t api_arg_0_value);
bool alice_nation_get_is_substate(int32_t api_arg_0_id);
void alice_nation_set_is_substate(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_nation_get_flag_variables(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_flag_variables(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_nation_get_flag_variables_size();
void alice_nation_resize_flag_variables(uint32_t api_arg_0_value);
float alice_nation_get_variables(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_variables(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_variables_size();
void alice_nation_resize_variables(uint32_t api_arg_0_value);
float alice_nation_get_modifier_values(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_modifier_values(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_modifier_values_size();
void alice_nation_resize_modifier_values(uint32_t api_arg_0_value);
float alice_nation_get_rgo_goods_output(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_rgo_goods_output(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_rgo_goods_output_size();
void alice_nation_resize_rgo_goods_output(uint32_t api_arg_0_value);
float alice_nation_get_factory_goods_output(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_factory_goods_output(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_factory_goods_output_size();
void alice_nation_resize_factory_goods_output(uint32_t api_arg_0_value);
float alice_nation_get_rgo_size(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_rgo_size(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_rgo_size_size();
void alice_nation_resize_rgo_size(uint32_t api_arg_0_value);
float alice_nation_get_factory_goods_throughput(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_factory_goods_throughput(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_factory_goods_throughput_size();
void alice_nation_resize_factory_goods_throughput(uint32_t api_arg_0_value);
float alice_nation_get_rebel_org_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_rebel_org_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_rebel_org_modifier_size();
void alice_nation_resize_rebel_org_modifier(uint32_t api_arg_0_value);
uint32_t alice_nation_get_unit_stats_size();
void alice_nation_resize_unit_stats(uint32_t api_arg_0_value);
bool alice_nation_get_active_unit(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_active_unit(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_nation_get_active_unit_size();
void alice_nation_resize_active_unit(uint32_t api_arg_0_value);
bool alice_nation_get_active_crime(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_active_crime(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_nation_get_active_crime_size();
void alice_nation_resize_active_crime(uint32_t api_arg_0_value);
bool alice_nation_get_active_building(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_active_building(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_nation_get_active_building_size();
void alice_nation_resize_active_building(uint32_t api_arg_0_value);
bool alice_nation_get_unlocked_commodities(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_unlocked_commodities(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_nation_get_unlocked_commodities_size();
void alice_nation_resize_unlocked_commodities(uint32_t api_arg_0_value);
float alice_nation_get_factory_type_experience(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_factory_type_experience(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_factory_type_experience_size();
void alice_nation_resize_factory_type_experience(uint32_t api_arg_0_value);
float alice_nation_get_factory_type_experience_priority_national(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_factory_type_experience_priority_national(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_factory_type_experience_priority_national_size();
void alice_nation_resize_factory_type_experience_priority_national(uint32_t api_arg_0_value);
float alice_nation_get_factory_type_experience_priority_private(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_factory_type_experience_priority_private(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_factory_type_experience_priority_private_size();
void alice_nation_resize_factory_type_experience_priority_private(uint32_t api_arg_0_value);
bool alice_nation_get_has_gas_attack(int32_t api_arg_0_id);
void alice_nation_set_has_gas_attack(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_nation_get_has_gas_defense(int32_t api_arg_0_id);
void alice_nation_set_has_gas_defense(int32_t api_arg_0_id, bool api_arg_1_value);
uint8_t alice_nation_get_max_building_level(int32_t api_arg_0_id, uint8_t api_arg_1_value);
void alice_nation_set_max_building_level(int32_t api_arg_0_id, uint8_t api_arg_1_value, uint8_t api_arg_2_value);
uint32_t alice_nation_get_max_building_level_size();
void alice_nation_resize_max_building_level(uint32_t api_arg_0_value);
int32_t alice_nation_get_in_sphere_of(int32_t api_arg_0_id);
void alice_nation_set_in_sphere_of(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint16_t alice_nation_get_rank(int32_t api_arg_0_id);
void alice_nation_set_rank(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_industrial_rank(int32_t api_arg_0_id);
void alice_nation_set_industrial_rank(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_military_rank(int32_t api_arg_0_id);
void alice_nation_set_military_rank(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_prestige_rank(int32_t api_arg_0_id);
void alice_nation_set_prestige_rank(int32_t api_arg_0_id, uint16_t api_arg_1_value);
float alice_nation_get_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_demographics_size();
void alice_nation_resize_demographics(uint32_t api_arg_0_value);
float alice_nation_get_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_demographics_alt_size();
void alice_nation_resize_demographics_alt(uint32_t api_arg_0_value);
float alice_nation_get_war_exhaustion(int32_t api_arg_0_id);
void alice_nation_set_war_exhaustion(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_nation_get_is_at_war(int32_t api_arg_0_id);
void alice_nation_set_is_at_war(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_nation_get_is_mobilized(int32_t api_arg_0_id);
void alice_nation_set_is_mobilized(int32_t api_arg_0_id, bool api_arg_1_value);
uint16_t alice_nation_get_mobilization_remaining(int32_t api_arg_0_id);
void alice_nation_set_mobilization_remaining(int32_t api_arg_0_id, uint16_t api_arg_1_value);
bool alice_nation_get_is_bankrupt(int32_t api_arg_0_id);
void alice_nation_set_is_bankrupt(int32_t api_arg_0_id, bool api_arg_1_value);
int8_t alice_nation_get_education_spending(int32_t api_arg_0_id);
void alice_nation_set_education_spending(int32_t api_arg_0_id, int8_t api_arg_1_value);
int8_t alice_nation_get_military_spending(int32_t api_arg_0_id);
void alice_nation_set_military_spending(int32_t api_arg_0_id, int8_t api_arg_1_value);
int8_t alice_nation_get_administrative_spending(int32_t api_arg_0_id);
void alice_nation_set_administrative_spending(int32_t api_arg_0_id, int8_t api_arg_1_value);
float alice_nation_get_administration_employment_target_in_capital(int32_t api_arg_0_id);
void alice_nation_set_administration_employment_target_in_capital(int32_t api_arg_0_id, float api_arg_1_value);
int8_t alice_nation_get_social_spending(int32_t api_arg_0_id);
void alice_nation_set_social_spending(int32_t api_arg_0_id, int8_t api_arg_1_value);
int8_t alice_nation_get_domestic_investment_spending(int32_t api_arg_0_id);
void alice_nation_set_domestic_investment_spending(int32_t api_arg_0_id, int8_t api_arg_1_value);
int8_t alice_nation_get_overseas_spending(int32_t api_arg_0_id);
void alice_nation_set_overseas_spending(int32_t api_arg_0_id, int8_t api_arg_1_value);
int8_t alice_nation_get_land_spending(int32_t api_arg_0_id);
void alice_nation_set_land_spending(int32_t api_arg_0_id, int8_t api_arg_1_value);
int8_t alice_nation_get_naval_spending(int32_t api_arg_0_id);
void alice_nation_set_naval_spending(int32_t api_arg_0_id, int8_t api_arg_1_value);
int8_t alice_nation_get_construction_spending(int32_t api_arg_0_id);
void alice_nation_set_construction_spending(int32_t api_arg_0_id, int8_t api_arg_1_value);
float alice_nation_get_land_reinforcement_buffer(int32_t api_arg_0_id);
void alice_nation_set_land_reinforcement_buffer(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_naval_reinforcement_buffer(int32_t api_arg_0_id);
void alice_nation_set_naval_reinforcement_buffer(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_effective_land_spending(int32_t api_arg_0_id);
void alice_nation_set_effective_land_spending(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_effective_naval_spending(int32_t api_arg_0_id);
void alice_nation_set_effective_naval_spending(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_effective_construction_spending(int32_t api_arg_0_id);
void alice_nation_set_effective_construction_spending(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_maximum_military_costs(int32_t api_arg_0_id);
void alice_nation_set_maximum_military_costs(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_subsidy_token_price(int32_t api_arg_0_id);
void alice_nation_set_subsidy_token_price(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_subsidy_token_total(int32_t api_arg_0_id);
void alice_nation_set_subsidy_token_total(int32_t api_arg_0_id, float api_arg_1_value);
int8_t alice_nation_get_subsidies_spending(int32_t api_arg_0_id);
void alice_nation_set_subsidies_spending(int32_t api_arg_0_id, int8_t api_arg_1_value);
float alice_nation_get_spending_level(int32_t api_arg_0_id);
void alice_nation_set_spending_level(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_last_base_budget(int32_t api_arg_0_id);
void alice_nation_set_last_base_budget(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_private_investment(int32_t api_arg_0_id);
void alice_nation_set_private_investment(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_private_investment_effective_fraction(int32_t api_arg_0_id);
void alice_nation_set_private_investment_effective_fraction(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_total_rich_income(int32_t api_arg_0_id);
void alice_nation_set_total_rich_income(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_total_middle_income(int32_t api_arg_0_id);
void alice_nation_set_total_middle_income(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_total_poor_income(int32_t api_arg_0_id);
void alice_nation_set_total_poor_income(int32_t api_arg_0_id, float api_arg_1_value);
int8_t alice_nation_get_poor_tax(int32_t api_arg_0_id);
void alice_nation_set_poor_tax(int32_t api_arg_0_id, int8_t api_arg_1_value);
int8_t alice_nation_get_middle_tax(int32_t api_arg_0_id);
void alice_nation_set_middle_tax(int32_t api_arg_0_id, int8_t api_arg_1_value);
int8_t alice_nation_get_rich_tax(int32_t api_arg_0_id);
void alice_nation_set_rich_tax(int32_t api_arg_0_id, int8_t api_arg_1_value);
int8_t alice_nation_get_tariffs_import(int32_t api_arg_0_id);
void alice_nation_set_tariffs_import(int32_t api_arg_0_id, int8_t api_arg_1_value);
int8_t alice_nation_get_tariffs_export(int32_t api_arg_0_id);
void alice_nation_set_tariffs_export(int32_t api_arg_0_id, int8_t api_arg_1_value);
float alice_nation_get_last_treasury(int32_t api_arg_0_id);
void alice_nation_set_last_treasury(int32_t api_arg_0_id, float api_arg_1_value);
uint16_t alice_nation_get_industrial_score(int32_t api_arg_0_id);
void alice_nation_set_industrial_score(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_military_score(int32_t api_arg_0_id);
void alice_nation_set_military_score(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_central_blockaded(int32_t api_arg_0_id);
void alice_nation_set_central_blockaded(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_central_rebel_controlled(int32_t api_arg_0_id);
void alice_nation_set_central_rebel_controlled(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_owned_province_count(int32_t api_arg_0_id);
void alice_nation_set_owned_province_count(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_owned_state_count(int32_t api_arg_0_id);
void alice_nation_set_owned_state_count(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_central_province_count(int32_t api_arg_0_id);
void alice_nation_set_central_province_count(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_rebel_controlled_count(int32_t api_arg_0_id);
void alice_nation_set_rebel_controlled_count(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_occupied_count(int32_t api_arg_0_id);
void alice_nation_set_occupied_count(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_central_ports(int32_t api_arg_0_id);
void alice_nation_set_central_ports(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_total_ports(int32_t api_arg_0_id);
void alice_nation_set_total_ports(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_central_crime_count(int32_t api_arg_0_id);
void alice_nation_set_central_crime_count(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_allies_count(int32_t api_arg_0_id);
void alice_nation_set_allies_count(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_vassals_count(int32_t api_arg_0_id);
void alice_nation_set_vassals_count(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_substates_count(int32_t api_arg_0_id);
void alice_nation_set_substates_count(int32_t api_arg_0_id, uint16_t api_arg_1_value);
float alice_nation_get_gdp(int32_t api_arg_0_id);
void alice_nation_set_gdp(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_gdp_record(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_nation_set_gdp_record(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_nation_get_gdp_record_size();
void alice_nation_resize_gdp_record(uint32_t api_arg_0_value);
float alice_nation_get_stockpiles(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_stockpiles(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_stockpiles_size();
void alice_nation_resize_stockpiles(uint32_t api_arg_0_value);
float alice_nation_get_national_bank(int32_t api_arg_0_id);
void alice_nation_set_national_bank(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_local_loan(int32_t api_arg_0_id);
void alice_nation_set_local_loan(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_stockpile_targets(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_stockpile_targets(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_nation_get_stockpile_targets_size();
void alice_nation_resize_stockpile_targets(uint32_t api_arg_0_value);
bool alice_nation_get_drawing_on_stockpiles(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_drawing_on_stockpiles(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_nation_get_drawing_on_stockpiles_size();
void alice_nation_resize_drawing_on_stockpiles(uint32_t api_arg_0_value);
float alice_nation_get_overseas_penalty(int32_t api_arg_0_id);
void alice_nation_set_overseas_penalty(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_nation_get_is_player_controlled(int32_t api_arg_0_id);
void alice_nation_set_is_player_controlled(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_nation_get_is_debt_spending(int32_t api_arg_0_id);
void alice_nation_set_is_debt_spending(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_nation_get_is_colonial_nation(int32_t api_arg_0_id);
void alice_nation_set_is_colonial_nation(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_nation_get_dominant_culture(int32_t api_arg_0_id);
void alice_nation_set_dominant_culture(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_get_dominant_religion(int32_t api_arg_0_id);
void alice_nation_set_dominant_religion(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_get_dominant_ideology(int32_t api_arg_0_id);
void alice_nation_set_dominant_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_get_dominant_issue_option(int32_t api_arg_0_id);
void alice_nation_set_dominant_issue_option(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_get_constructing_cb_target(int32_t api_arg_0_id);
void alice_nation_set_constructing_cb_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_get_constructing_cb_target_state(int32_t api_arg_0_id);
void alice_nation_set_constructing_cb_target_state(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_nation_get_constructing_cb_progress(int32_t api_arg_0_id);
void alice_nation_set_constructing_cb_progress(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_nation_get_constructing_cb_type(int32_t api_arg_0_id);
void alice_nation_set_constructing_cb_type(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_nation_get_constructing_cb_is_discovered(int32_t api_arg_0_id);
void alice_nation_set_constructing_cb_is_discovered(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_nation_get_non_colonial_population(int32_t api_arg_0_id);
void alice_nation_set_non_colonial_population(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_non_colonial_bureaucrats(int32_t api_arg_0_id);
void alice_nation_set_non_colonial_bureaucrats(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_administrative_efficiency(int32_t api_arg_0_id);
void alice_nation_set_administrative_efficiency(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_research_points(int32_t api_arg_0_id);
void alice_nation_set_research_points(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_nation_get_current_research(int32_t api_arg_0_id);
void alice_nation_set_current_research(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint16_t alice_nation_get_active_regiments(int32_t api_arg_0_id);
void alice_nation_set_active_regiments(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_recruitable_regiments(int32_t api_arg_0_id);
void alice_nation_set_recruitable_regiments(int32_t api_arg_0_id, uint16_t api_arg_1_value);
bool alice_nation_get_overlord_commanding_units(int32_t api_arg_0_id);
void alice_nation_set_overlord_commanding_units(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_nation_get_averge_land_unit_score(int32_t api_arg_0_id);
void alice_nation_set_averge_land_unit_score(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_capital_ship_score(int32_t api_arg_0_id);
void alice_nation_set_capital_ship_score(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_suppression_points(int32_t api_arg_0_id);
void alice_nation_set_suppression_points(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_diplomatic_points(int32_t api_arg_0_id);
void alice_nation_set_diplomatic_points(int32_t api_arg_0_id, float api_arg_1_value);
float alice_nation_get_leadership_points(int32_t api_arg_0_id);
void alice_nation_set_leadership_points(int32_t api_arg_0_id, float api_arg_1_value);
uint16_t alice_nation_get_naval_supply_points(int32_t api_arg_0_id);
void alice_nation_set_naval_supply_points(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_nation_get_used_naval_supply_points(int32_t api_arg_0_id);
void alice_nation_set_used_naval_supply_points(int32_t api_arg_0_id, uint16_t api_arg_1_value);
bool alice_nation_get_has_flash_point_state(int32_t api_arg_0_id);
void alice_nation_set_has_flash_point_state(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_nation_get_is_target_of_some_cb(int32_t api_arg_0_id);
void alice_nation_set_is_target_of_some_cb(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_nation_get_is_interesting(int32_t api_arg_0_id);
void alice_nation_set_is_interesting(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_nation_get_ai_is_threatened(int32_t api_arg_0_id);
void alice_nation_set_ai_is_threatened(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_nation_get_ai_rival(int32_t api_arg_0_id);
void alice_nation_set_ai_rival(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_get_ai_home_port(int32_t api_arg_0_id);
void alice_nation_set_ai_home_port(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_nation_get_mobilized_is_ai_controlled(int32_t api_arg_0_id);
void alice_nation_set_mobilized_is_ai_controlled(int32_t api_arg_0_id, bool api_arg_1_value);
int alice_nation_get_ai_strategy(int32_t api_arg_0_id);
void alice_nation_set_ai_strategy(int32_t api_arg_0_id, int api_arg_1_value);
bool alice_nation_get_utility_tag(int32_t api_arg_0_id);
void alice_nation_set_utility_tag(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_nation_get_production_directive(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_set_production_directive(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_nation_get_production_directive_size();
void alice_nation_resize_production_directive(uint32_t api_arg_0_value);
int32_t alice_nation_get_range_nation_adjacency_as_connected_nations(int32_t i);
int32_t alice_nation_get_index_nation_adjacency_as_connected_nations(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_army_control_as_controller(int32_t i);
int32_t alice_nation_get_index_army_control_as_controller(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_navy_control_as_controller(int32_t i);
int32_t alice_nation_get_index_navy_control_as_controller(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_leader_loyalty_as_nation(int32_t i);
int32_t alice_nation_get_index_leader_loyalty_as_nation(int32_t i, int32_t subindex);
int32_t alice_nation_get_pending_peace_offer_as_nation(int32_t api_arg_0_id);
int32_t alice_nation_get_pending_peace_offer(int32_t api_arg_0_id);
int32_t alice_nation_get_range_war_participant_as_nation(int32_t i);
int32_t alice_nation_get_index_war_participant_as_nation(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_nation_administration_as_nation(int32_t i);
int32_t alice_nation_get_index_nation_administration_as_nation(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_colonization_as_colonizer(int32_t i);
int32_t alice_nation_get_index_colonization_as_colonizer(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_state_ownership_as_nation(int32_t i);
int32_t alice_nation_get_index_state_ownership_as_nation(int32_t i, int32_t subindex);
int32_t alice_nation_get_flashpoint_focus_as_nation(int32_t api_arg_0_id);
int32_t alice_nation_get_flashpoint_focus(int32_t api_arg_0_id);
int32_t alice_nation_get_identity_holder_as_nation(int32_t api_arg_0_id);
int32_t alice_nation_get_identity_holder(int32_t api_arg_0_id);
int32_t alice_nation_get_range_diplomatic_relation_as_related_nations(int32_t i);
int32_t alice_nation_get_index_diplomatic_relation_as_related_nations(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_unilateral_relationship_as_target(int32_t i);
int32_t alice_nation_get_index_unilateral_relationship_as_target(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_unilateral_relationship_as_source(int32_t i);
int32_t alice_nation_get_index_unilateral_relationship_as_source(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_gp_relationship_as_influence_target(int32_t i);
int32_t alice_nation_get_index_gp_relationship_as_influence_target(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_gp_relationship_as_great_power(int32_t i);
int32_t alice_nation_get_index_gp_relationship_as_great_power(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_province_ownership_as_nation(int32_t i);
int32_t alice_nation_get_index_province_ownership_as_nation(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_province_control_as_nation(int32_t i);
int32_t alice_nation_get_index_province_control_as_nation(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_province_land_construction_as_nation(int32_t i);
int32_t alice_nation_get_index_province_land_construction_as_nation(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_province_naval_construction_as_nation(int32_t i);
int32_t alice_nation_get_index_province_naval_construction_as_nation(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_province_building_construction_as_nation(int32_t i);
int32_t alice_nation_get_index_province_building_construction_as_nation(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_factory_construction_as_nation(int32_t i);
int32_t alice_nation_get_index_factory_construction_as_nation(int32_t i, int32_t subindex);
int32_t alice_nation_get_overlord_as_subject(int32_t api_arg_0_id);
int32_t alice_nation_get_range_overlord_as_ruler(int32_t i);
int32_t alice_nation_get_index_overlord_as_ruler(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_rebellion_within_as_ruler(int32_t i);
int32_t alice_nation_get_index_rebellion_within_as_ruler(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_movement_within_as_nation(int32_t i);
int32_t alice_nation_get_index_movement_within_as_nation(int32_t i, int32_t subindex);
int32_t alice_nation_get_range_player_nation_as_nation(int32_t i);
int32_t alice_nation_get_index_player_nation_as_nation(int32_t i, int32_t subindex);
]]
NATION = {}
---@param id nation_id
---@return number
function NATION.is_valid(id)
	return ffi.C.alice_nation_is_valid(id)
end
---@return number
function NATION.size()
	return ffi.C.alice_nation_size()
end
---@param value number
function NATION.resize(value)
	return ffi.C.alice_nation_resize(value)
end
---@param id nation_id
---@return number
function NATION.get_color(id)
	return ffi.C.alice_nation_get_color(id)
end
---@param id nation_id
---@param value number
function NATION.set_color(id, value)
	return ffi.C.alice_nation_set_color(id, value)
end
---@param id nation_id
---@return national_identity_id
function NATION.get_masquerade_identity(id)
	return ffi.C.alice_nation_get_masquerade_identity(id)
end
---@param id nation_id
---@param value national_identity_id
function NATION.set_masquerade_identity(id, value)
	return ffi.C.alice_nation_set_masquerade_identity(id, value)
end
---@param id nation_id
---@return culture_id
function NATION.get_primary_culture(id)
	return ffi.C.alice_nation_get_primary_culture(id)
end
---@param id nation_id
---@param value culture_id
function NATION.set_primary_culture(id, value)
	return ffi.C.alice_nation_set_primary_culture(id, value)
end
---@param id nation_id
---@param index culture_id
---@return boolean
function NATION.get_accepted_cultures(id, index)
	return ffi.C.alice_nation_get_accepted_cultures(id, index)
end
---@param id nation_id
---@param index culture_id
---@param value boolean
function NATION.set_accepted_cultures(id, index, value)
	return ffi.C.alice_nation_set_accepted_cultures(id, index, value)
end
---@return number
function NATION.get_accepted_cultures_size()
	return ffi.C.alice_nation_get_accepted_cultures_size()
end
---@param value number
function NATION.resize_accepted_cultures(value)
	return ffi.C.alice_nation_resize_accepted_cultures(value)
end
---@param id nation_id
---@return religion_id
function NATION.get_religion(id)
	return ffi.C.alice_nation_get_religion(id)
end
---@param id nation_id
---@param value religion_id
function NATION.set_religion(id, value)
	return ffi.C.alice_nation_set_religion(id, value)
end
---@param id nation_id
---@return province_id
function NATION.get_capital(id)
	return ffi.C.alice_nation_get_capital(id)
end
---@param id nation_id
---@param value province_id
function NATION.set_capital(id, value)
	return ffi.C.alice_nation_set_capital(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_is_civilized(id)
	return ffi.C.alice_nation_get_is_civilized(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_is_civilized(id, value)
	return ffi.C.alice_nation_set_is_civilized(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_marked_for_gc(id)
	return ffi.C.alice_nation_get_marked_for_gc(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_marked_for_gc(id, value)
	return ffi.C.alice_nation_set_marked_for_gc(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_is_great_power(id)
	return ffi.C.alice_nation_get_is_great_power(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_is_great_power(id, value)
	return ffi.C.alice_nation_set_is_great_power(id, value)
end
---@param id nation_id
---@return modifier_id
function NATION.get_national_value(id)
	return ffi.C.alice_nation_get_national_value(id)
end
---@param id nation_id
---@param value modifier_id
function NATION.set_national_value(id, value)
	return ffi.C.alice_nation_set_national_value(id, value)
end
---@param id nation_id
---@return modifier_id
function NATION.get_tech_school(id)
	return ffi.C.alice_nation_get_tech_school(id)
end
---@param id nation_id
---@param value modifier_id
function NATION.set_tech_school(id, value)
	return ffi.C.alice_nation_set_tech_school(id, value)
end
---@param id nation_id
---@return government_type_id
function NATION.get_government_type(id)
	return ffi.C.alice_nation_get_government_type(id)
end
---@param id nation_id
---@param value government_type_id
function NATION.set_government_type(id, value)
	return ffi.C.alice_nation_set_government_type(id, value)
end
---@param id nation_id
---@return number
function NATION.get_plurality(id)
	return ffi.C.alice_nation_get_plurality(id)
end
---@param id nation_id
---@param value number
function NATION.set_plurality(id, value)
	return ffi.C.alice_nation_set_plurality(id, value)
end
---@param id nation_id
---@return number
function NATION.get_prestige(id)
	return ffi.C.alice_nation_get_prestige(id)
end
---@param id nation_id
---@param value number
function NATION.set_prestige(id, value)
	return ffi.C.alice_nation_set_prestige(id, value)
end
---@param id nation_id
---@return number
function NATION.get_infamy(id)
	return ffi.C.alice_nation_get_infamy(id)
end
---@param id nation_id
---@param value number
function NATION.set_infamy(id, value)
	return ffi.C.alice_nation_set_infamy(id, value)
end
---@param id nation_id
---@return number
function NATION.get_revanchism(id)
	return ffi.C.alice_nation_get_revanchism(id)
end
---@param id nation_id
---@param value number
function NATION.set_revanchism(id, value)
	return ffi.C.alice_nation_set_revanchism(id, value)
end
---@param id nation_id
---@return number
function NATION.get_permanent_colonial_points(id)
	return ffi.C.alice_nation_get_permanent_colonial_points(id)
end
---@param id nation_id
---@param value number
function NATION.set_permanent_colonial_points(id, value)
	return ffi.C.alice_nation_set_permanent_colonial_points(id, value)
end
---@param id nation_id
---@param index technology_id
---@return boolean
function NATION.get_active_technologies(id, index)
	return ffi.C.alice_nation_get_active_technologies(id, index)
end
---@param id nation_id
---@param index technology_id
---@param value boolean
function NATION.set_active_technologies(id, index, value)
	return ffi.C.alice_nation_set_active_technologies(id, index, value)
end
---@return number
function NATION.get_active_technologies_size()
	return ffi.C.alice_nation_get_active_technologies_size()
end
---@param value number
function NATION.resize_active_technologies(value)
	return ffi.C.alice_nation_resize_active_technologies(value)
end
---@param id nation_id
---@param index invention_id
---@return boolean
function NATION.get_active_inventions(id, index)
	return ffi.C.alice_nation_get_active_inventions(id, index)
end
---@param id nation_id
---@param index invention_id
---@param value boolean
function NATION.set_active_inventions(id, index, value)
	return ffi.C.alice_nation_set_active_inventions(id, index, value)
end
---@return number
function NATION.get_active_inventions_size()
	return ffi.C.alice_nation_get_active_inventions_size()
end
---@param value number
function NATION.resize_active_inventions(value)
	return ffi.C.alice_nation_resize_active_inventions(value)
end
---@param id nation_id
---@return political_party_id
function NATION.get_ruling_party(id)
	return ffi.C.alice_nation_get_ruling_party(id)
end
---@param id nation_id
---@param value political_party_id
function NATION.set_ruling_party(id, value)
	return ffi.C.alice_nation_set_ruling_party(id, value)
end
---@param id nation_id
---@param index issue_id
---@return issue_option_id
function NATION.get_issues(id, index)
	return ffi.C.alice_nation_get_issues(id, index)
end
---@param id nation_id
---@param index issue_id
---@param value issue_option_id
function NATION.set_issues(id, index, value)
	return ffi.C.alice_nation_set_issues(id, index, value)
end
---@return number
function NATION.get_issues_size()
	return ffi.C.alice_nation_get_issues_size()
end
---@param value number
function NATION.resize_issues(value)
	return ffi.C.alice_nation_resize_issues(value)
end
---@param id nation_id
---@param index reform_id
---@return reform_option_id
function NATION.get_reforms(id, index)
	return ffi.C.alice_nation_get_reforms(id, index)
end
---@param id nation_id
---@param index reform_id
---@param value reform_option_id
function NATION.set_reforms(id, index, value)
	return ffi.C.alice_nation_set_reforms(id, index, value)
end
---@return number
function NATION.get_reforms_size()
	return ffi.C.alice_nation_get_reforms_size()
end
---@param value number
function NATION.resize_reforms(value)
	return ffi.C.alice_nation_resize_reforms(value)
end
---@param id nation_id
---@return number
function NATION.get_combined_issue_rules(id)
	return ffi.C.alice_nation_get_combined_issue_rules(id)
end
---@param id nation_id
---@param value number
function NATION.set_combined_issue_rules(id, value)
	return ffi.C.alice_nation_set_combined_issue_rules(id, value)
end
---@param id nation_id
---@param index ideology_id
---@return number
function NATION.get_upper_house(id, index)
	return ffi.C.alice_nation_get_upper_house(id, index)
end
---@param id nation_id
---@param index ideology_id
---@param value number
function NATION.set_upper_house(id, index, value)
	return ffi.C.alice_nation_set_upper_house(id, index, value)
end
---@return number
function NATION.get_upper_house_size()
	return ffi.C.alice_nation_get_upper_house_size()
end
---@param value number
function NATION.resize_upper_house(value)
	return ffi.C.alice_nation_resize_upper_house(value)
end
---@param id nation_id
---@return boolean
function NATION.get_is_substate(id)
	return ffi.C.alice_nation_get_is_substate(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_is_substate(id, value)
	return ffi.C.alice_nation_set_is_substate(id, value)
end
---@param id nation_id
---@param index national_flag_id
---@return boolean
function NATION.get_flag_variables(id, index)
	return ffi.C.alice_nation_get_flag_variables(id, index)
end
---@param id nation_id
---@param index national_flag_id
---@param value boolean
function NATION.set_flag_variables(id, index, value)
	return ffi.C.alice_nation_set_flag_variables(id, index, value)
end
---@return number
function NATION.get_flag_variables_size()
	return ffi.C.alice_nation_get_flag_variables_size()
end
---@param value number
function NATION.resize_flag_variables(value)
	return ffi.C.alice_nation_resize_flag_variables(value)
end
---@param id nation_id
---@param index national_variable_id
---@return number
function NATION.get_variables(id, index)
	return ffi.C.alice_nation_get_variables(id, index)
end
---@param id nation_id
---@param index national_variable_id
---@param value number
function NATION.set_variables(id, index, value)
	return ffi.C.alice_nation_set_variables(id, index, value)
end
---@return number
function NATION.get_variables_size()
	return ffi.C.alice_nation_get_variables_size()
end
---@param value number
function NATION.resize_variables(value)
	return ffi.C.alice_nation_resize_variables(value)
end
---@param id nation_id
---@param index national_modifier_value
---@return number
function NATION.get_modifier_values(id, index)
	return ffi.C.alice_nation_get_modifier_values(id, index)
end
---@param id nation_id
---@param index national_modifier_value
---@param value number
function NATION.set_modifier_values(id, index, value)
	return ffi.C.alice_nation_set_modifier_values(id, index, value)
end
---@return number
function NATION.get_modifier_values_size()
	return ffi.C.alice_nation_get_modifier_values_size()
end
---@param value number
function NATION.resize_modifier_values(value)
	return ffi.C.alice_nation_resize_modifier_values(value)
end
---@param id nation_id
---@param index commodity_id
---@return number
function NATION.get_rgo_goods_output(id, index)
	return ffi.C.alice_nation_get_rgo_goods_output(id, index)
end
---@param id nation_id
---@param index commodity_id
---@param value number
function NATION.set_rgo_goods_output(id, index, value)
	return ffi.C.alice_nation_set_rgo_goods_output(id, index, value)
end
---@return number
function NATION.get_rgo_goods_output_size()
	return ffi.C.alice_nation_get_rgo_goods_output_size()
end
---@param value number
function NATION.resize_rgo_goods_output(value)
	return ffi.C.alice_nation_resize_rgo_goods_output(value)
end
---@param id nation_id
---@param index commodity_id
---@return number
function NATION.get_factory_goods_output(id, index)
	return ffi.C.alice_nation_get_factory_goods_output(id, index)
end
---@param id nation_id
---@param index commodity_id
---@param value number
function NATION.set_factory_goods_output(id, index, value)
	return ffi.C.alice_nation_set_factory_goods_output(id, index, value)
end
---@return number
function NATION.get_factory_goods_output_size()
	return ffi.C.alice_nation_get_factory_goods_output_size()
end
---@param value number
function NATION.resize_factory_goods_output(value)
	return ffi.C.alice_nation_resize_factory_goods_output(value)
end
---@param id nation_id
---@param index commodity_id
---@return number
function NATION.get_rgo_size(id, index)
	return ffi.C.alice_nation_get_rgo_size(id, index)
end
---@param id nation_id
---@param index commodity_id
---@param value number
function NATION.set_rgo_size(id, index, value)
	return ffi.C.alice_nation_set_rgo_size(id, index, value)
end
---@return number
function NATION.get_rgo_size_size()
	return ffi.C.alice_nation_get_rgo_size_size()
end
---@param value number
function NATION.resize_rgo_size(value)
	return ffi.C.alice_nation_resize_rgo_size(value)
end
---@param id nation_id
---@param index commodity_id
---@return number
function NATION.get_factory_goods_throughput(id, index)
	return ffi.C.alice_nation_get_factory_goods_throughput(id, index)
end
---@param id nation_id
---@param index commodity_id
---@param value number
function NATION.set_factory_goods_throughput(id, index, value)
	return ffi.C.alice_nation_set_factory_goods_throughput(id, index, value)
end
---@return number
function NATION.get_factory_goods_throughput_size()
	return ffi.C.alice_nation_get_factory_goods_throughput_size()
end
---@param value number
function NATION.resize_factory_goods_throughput(value)
	return ffi.C.alice_nation_resize_factory_goods_throughput(value)
end
---@param id nation_id
---@param index rebel_type_id
---@return number
function NATION.get_rebel_org_modifier(id, index)
	return ffi.C.alice_nation_get_rebel_org_modifier(id, index)
end
---@param id nation_id
---@param index rebel_type_id
---@param value number
function NATION.set_rebel_org_modifier(id, index, value)
	return ffi.C.alice_nation_set_rebel_org_modifier(id, index, value)
end
---@return number
function NATION.get_rebel_org_modifier_size()
	return ffi.C.alice_nation_get_rebel_org_modifier_size()
end
---@param value number
function NATION.resize_rebel_org_modifier(value)
	return ffi.C.alice_nation_resize_rebel_org_modifier(value)
end
---@return number
function NATION.get_unit_stats_size()
	return ffi.C.alice_nation_get_unit_stats_size()
end
---@param value number
function NATION.resize_unit_stats(value)
	return ffi.C.alice_nation_resize_unit_stats(value)
end
---@param id nation_id
---@param index unit_type_id
---@return boolean
function NATION.get_active_unit(id, index)
	return ffi.C.alice_nation_get_active_unit(id, index)
end
---@param id nation_id
---@param index unit_type_id
---@param value boolean
function NATION.set_active_unit(id, index, value)
	return ffi.C.alice_nation_set_active_unit(id, index, value)
end
---@return number
function NATION.get_active_unit_size()
	return ffi.C.alice_nation_get_active_unit_size()
end
---@param value number
function NATION.resize_active_unit(value)
	return ffi.C.alice_nation_resize_active_unit(value)
end
---@param id nation_id
---@param index crime_id
---@return boolean
function NATION.get_active_crime(id, index)
	return ffi.C.alice_nation_get_active_crime(id, index)
end
---@param id nation_id
---@param index crime_id
---@param value boolean
function NATION.set_active_crime(id, index, value)
	return ffi.C.alice_nation_set_active_crime(id, index, value)
end
---@return number
function NATION.get_active_crime_size()
	return ffi.C.alice_nation_get_active_crime_size()
end
---@param value number
function NATION.resize_active_crime(value)
	return ffi.C.alice_nation_resize_active_crime(value)
end
---@param id nation_id
---@param index factory_type_id
---@return boolean
function NATION.get_active_building(id, index)
	return ffi.C.alice_nation_get_active_building(id, index)
end
---@param id nation_id
---@param index factory_type_id
---@param value boolean
function NATION.set_active_building(id, index, value)
	return ffi.C.alice_nation_set_active_building(id, index, value)
end
---@return number
function NATION.get_active_building_size()
	return ffi.C.alice_nation_get_active_building_size()
end
---@param value number
function NATION.resize_active_building(value)
	return ffi.C.alice_nation_resize_active_building(value)
end
---@param id nation_id
---@param index commodity_id
---@return boolean
function NATION.get_unlocked_commodities(id, index)
	return ffi.C.alice_nation_get_unlocked_commodities(id, index)
end
---@param id nation_id
---@param index commodity_id
---@param value boolean
function NATION.set_unlocked_commodities(id, index, value)
	return ffi.C.alice_nation_set_unlocked_commodities(id, index, value)
end
---@return number
function NATION.get_unlocked_commodities_size()
	return ffi.C.alice_nation_get_unlocked_commodities_size()
end
---@param value number
function NATION.resize_unlocked_commodities(value)
	return ffi.C.alice_nation_resize_unlocked_commodities(value)
end
---@param id nation_id
---@param index factory_type_id
---@return number
function NATION.get_factory_type_experience(id, index)
	return ffi.C.alice_nation_get_factory_type_experience(id, index)
end
---@param id nation_id
---@param index factory_type_id
---@param value number
function NATION.set_factory_type_experience(id, index, value)
	return ffi.C.alice_nation_set_factory_type_experience(id, index, value)
end
---@return number
function NATION.get_factory_type_experience_size()
	return ffi.C.alice_nation_get_factory_type_experience_size()
end
---@param value number
function NATION.resize_factory_type_experience(value)
	return ffi.C.alice_nation_resize_factory_type_experience(value)
end
---@param id nation_id
---@param index factory_type_id
---@return number
function NATION.get_factory_type_experience_priority_national(id, index)
	return ffi.C.alice_nation_get_factory_type_experience_priority_national(id, index)
end
---@param id nation_id
---@param index factory_type_id
---@param value number
function NATION.set_factory_type_experience_priority_national(id, index, value)
	return ffi.C.alice_nation_set_factory_type_experience_priority_national(id, index, value)
end
---@return number
function NATION.get_factory_type_experience_priority_national_size()
	return ffi.C.alice_nation_get_factory_type_experience_priority_national_size()
end
---@param value number
function NATION.resize_factory_type_experience_priority_national(value)
	return ffi.C.alice_nation_resize_factory_type_experience_priority_national(value)
end
---@param id nation_id
---@param index factory_type_id
---@return number
function NATION.get_factory_type_experience_priority_private(id, index)
	return ffi.C.alice_nation_get_factory_type_experience_priority_private(id, index)
end
---@param id nation_id
---@param index factory_type_id
---@param value number
function NATION.set_factory_type_experience_priority_private(id, index, value)
	return ffi.C.alice_nation_set_factory_type_experience_priority_private(id, index, value)
end
---@return number
function NATION.get_factory_type_experience_priority_private_size()
	return ffi.C.alice_nation_get_factory_type_experience_priority_private_size()
end
---@param value number
function NATION.resize_factory_type_experience_priority_private(value)
	return ffi.C.alice_nation_resize_factory_type_experience_priority_private(value)
end
---@param id nation_id
---@return boolean
function NATION.get_has_gas_attack(id)
	return ffi.C.alice_nation_get_has_gas_attack(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_has_gas_attack(id, value)
	return ffi.C.alice_nation_set_has_gas_attack(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_has_gas_defense(id)
	return ffi.C.alice_nation_get_has_gas_defense(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_has_gas_defense(id, value)
	return ffi.C.alice_nation_set_has_gas_defense(id, value)
end
---@param id nation_id
---@param index number
---@return number
function NATION.get_max_building_level(id, index)
	return ffi.C.alice_nation_get_max_building_level(id, index)
end
---@param id nation_id
---@param index number
---@param value number
function NATION.set_max_building_level(id, index, value)
	return ffi.C.alice_nation_set_max_building_level(id, index, value)
end
---@return number
function NATION.get_max_building_level_size()
	return ffi.C.alice_nation_get_max_building_level_size()
end
---@param value number
function NATION.resize_max_building_level(value)
	return ffi.C.alice_nation_resize_max_building_level(value)
end
---@param id nation_id
---@return nation_id
function NATION.get_in_sphere_of(id)
	return ffi.C.alice_nation_get_in_sphere_of(id)
end
---@param id nation_id
---@param value nation_id
function NATION.set_in_sphere_of(id, value)
	return ffi.C.alice_nation_set_in_sphere_of(id, value)
end
---@param id nation_id
---@return number
function NATION.get_rank(id)
	return ffi.C.alice_nation_get_rank(id)
end
---@param id nation_id
---@param value number
function NATION.set_rank(id, value)
	return ffi.C.alice_nation_set_rank(id, value)
end
---@param id nation_id
---@return number
function NATION.get_industrial_rank(id)
	return ffi.C.alice_nation_get_industrial_rank(id)
end
---@param id nation_id
---@param value number
function NATION.set_industrial_rank(id, value)
	return ffi.C.alice_nation_set_industrial_rank(id, value)
end
---@param id nation_id
---@return number
function NATION.get_military_rank(id)
	return ffi.C.alice_nation_get_military_rank(id)
end
---@param id nation_id
---@param value number
function NATION.set_military_rank(id, value)
	return ffi.C.alice_nation_set_military_rank(id, value)
end
---@param id nation_id
---@return number
function NATION.get_prestige_rank(id)
	return ffi.C.alice_nation_get_prestige_rank(id)
end
---@param id nation_id
---@param value number
function NATION.set_prestige_rank(id, value)
	return ffi.C.alice_nation_set_prestige_rank(id, value)
end
---@param id nation_id
---@param index demographics_key
---@return number
function NATION.get_demographics(id, index)
	return ffi.C.alice_nation_get_demographics(id, index)
end
---@param id nation_id
---@param index demographics_key
---@param value number
function NATION.set_demographics(id, index, value)
	return ffi.C.alice_nation_set_demographics(id, index, value)
end
---@return number
function NATION.get_demographics_size()
	return ffi.C.alice_nation_get_demographics_size()
end
---@param value number
function NATION.resize_demographics(value)
	return ffi.C.alice_nation_resize_demographics(value)
end
---@param id nation_id
---@param index demographics_key
---@return number
function NATION.get_demographics_alt(id, index)
	return ffi.C.alice_nation_get_demographics_alt(id, index)
end
---@param id nation_id
---@param index demographics_key
---@param value number
function NATION.set_demographics_alt(id, index, value)
	return ffi.C.alice_nation_set_demographics_alt(id, index, value)
end
---@return number
function NATION.get_demographics_alt_size()
	return ffi.C.alice_nation_get_demographics_alt_size()
end
---@param value number
function NATION.resize_demographics_alt(value)
	return ffi.C.alice_nation_resize_demographics_alt(value)
end
---@param id nation_id
---@return number
function NATION.get_war_exhaustion(id)
	return ffi.C.alice_nation_get_war_exhaustion(id)
end
---@param id nation_id
---@param value number
function NATION.set_war_exhaustion(id, value)
	return ffi.C.alice_nation_set_war_exhaustion(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_is_at_war(id)
	return ffi.C.alice_nation_get_is_at_war(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_is_at_war(id, value)
	return ffi.C.alice_nation_set_is_at_war(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_is_mobilized(id)
	return ffi.C.alice_nation_get_is_mobilized(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_is_mobilized(id, value)
	return ffi.C.alice_nation_set_is_mobilized(id, value)
end
---@param id nation_id
---@return number
function NATION.get_mobilization_remaining(id)
	return ffi.C.alice_nation_get_mobilization_remaining(id)
end
---@param id nation_id
---@param value number
function NATION.set_mobilization_remaining(id, value)
	return ffi.C.alice_nation_set_mobilization_remaining(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_is_bankrupt(id)
	return ffi.C.alice_nation_get_is_bankrupt(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_is_bankrupt(id, value)
	return ffi.C.alice_nation_set_is_bankrupt(id, value)
end
---@param id nation_id
---@return number
function NATION.get_education_spending(id)
	return ffi.C.alice_nation_get_education_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_education_spending(id, value)
	return ffi.C.alice_nation_set_education_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_military_spending(id)
	return ffi.C.alice_nation_get_military_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_military_spending(id, value)
	return ffi.C.alice_nation_set_military_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_administrative_spending(id)
	return ffi.C.alice_nation_get_administrative_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_administrative_spending(id, value)
	return ffi.C.alice_nation_set_administrative_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_administration_employment_target_in_capital(id)
	return ffi.C.alice_nation_get_administration_employment_target_in_capital(id)
end
---@param id nation_id
---@param value number
function NATION.set_administration_employment_target_in_capital(id, value)
	return ffi.C.alice_nation_set_administration_employment_target_in_capital(id, value)
end
---@param id nation_id
---@return number
function NATION.get_social_spending(id)
	return ffi.C.alice_nation_get_social_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_social_spending(id, value)
	return ffi.C.alice_nation_set_social_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_domestic_investment_spending(id)
	return ffi.C.alice_nation_get_domestic_investment_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_domestic_investment_spending(id, value)
	return ffi.C.alice_nation_set_domestic_investment_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_overseas_spending(id)
	return ffi.C.alice_nation_get_overseas_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_overseas_spending(id, value)
	return ffi.C.alice_nation_set_overseas_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_land_spending(id)
	return ffi.C.alice_nation_get_land_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_land_spending(id, value)
	return ffi.C.alice_nation_set_land_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_naval_spending(id)
	return ffi.C.alice_nation_get_naval_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_naval_spending(id, value)
	return ffi.C.alice_nation_set_naval_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_construction_spending(id)
	return ffi.C.alice_nation_get_construction_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_construction_spending(id, value)
	return ffi.C.alice_nation_set_construction_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_land_reinforcement_buffer(id)
	return ffi.C.alice_nation_get_land_reinforcement_buffer(id)
end
---@param id nation_id
---@param value number
function NATION.set_land_reinforcement_buffer(id, value)
	return ffi.C.alice_nation_set_land_reinforcement_buffer(id, value)
end
---@param id nation_id
---@return number
function NATION.get_naval_reinforcement_buffer(id)
	return ffi.C.alice_nation_get_naval_reinforcement_buffer(id)
end
---@param id nation_id
---@param value number
function NATION.set_naval_reinforcement_buffer(id, value)
	return ffi.C.alice_nation_set_naval_reinforcement_buffer(id, value)
end
---@param id nation_id
---@return number
function NATION.get_effective_land_spending(id)
	return ffi.C.alice_nation_get_effective_land_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_effective_land_spending(id, value)
	return ffi.C.alice_nation_set_effective_land_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_effective_naval_spending(id)
	return ffi.C.alice_nation_get_effective_naval_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_effective_naval_spending(id, value)
	return ffi.C.alice_nation_set_effective_naval_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_effective_construction_spending(id)
	return ffi.C.alice_nation_get_effective_construction_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_effective_construction_spending(id, value)
	return ffi.C.alice_nation_set_effective_construction_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_maximum_military_costs(id)
	return ffi.C.alice_nation_get_maximum_military_costs(id)
end
---@param id nation_id
---@param value number
function NATION.set_maximum_military_costs(id, value)
	return ffi.C.alice_nation_set_maximum_military_costs(id, value)
end
---@param id nation_id
---@return number
function NATION.get_subsidy_token_price(id)
	return ffi.C.alice_nation_get_subsidy_token_price(id)
end
---@param id nation_id
---@param value number
function NATION.set_subsidy_token_price(id, value)
	return ffi.C.alice_nation_set_subsidy_token_price(id, value)
end
---@param id nation_id
---@return number
function NATION.get_subsidy_token_total(id)
	return ffi.C.alice_nation_get_subsidy_token_total(id)
end
---@param id nation_id
---@param value number
function NATION.set_subsidy_token_total(id, value)
	return ffi.C.alice_nation_set_subsidy_token_total(id, value)
end
---@param id nation_id
---@return number
function NATION.get_subsidies_spending(id)
	return ffi.C.alice_nation_get_subsidies_spending(id)
end
---@param id nation_id
---@param value number
function NATION.set_subsidies_spending(id, value)
	return ffi.C.alice_nation_set_subsidies_spending(id, value)
end
---@param id nation_id
---@return number
function NATION.get_spending_level(id)
	return ffi.C.alice_nation_get_spending_level(id)
end
---@param id nation_id
---@param value number
function NATION.set_spending_level(id, value)
	return ffi.C.alice_nation_set_spending_level(id, value)
end
---@param id nation_id
---@return number
function NATION.get_last_base_budget(id)
	return ffi.C.alice_nation_get_last_base_budget(id)
end
---@param id nation_id
---@param value number
function NATION.set_last_base_budget(id, value)
	return ffi.C.alice_nation_set_last_base_budget(id, value)
end
---@param id nation_id
---@return number
function NATION.get_private_investment(id)
	return ffi.C.alice_nation_get_private_investment(id)
end
---@param id nation_id
---@param value number
function NATION.set_private_investment(id, value)
	return ffi.C.alice_nation_set_private_investment(id, value)
end
---@param id nation_id
---@return number
function NATION.get_private_investment_effective_fraction(id)
	return ffi.C.alice_nation_get_private_investment_effective_fraction(id)
end
---@param id nation_id
---@param value number
function NATION.set_private_investment_effective_fraction(id, value)
	return ffi.C.alice_nation_set_private_investment_effective_fraction(id, value)
end
---@param id nation_id
---@return number
function NATION.get_total_rich_income(id)
	return ffi.C.alice_nation_get_total_rich_income(id)
end
---@param id nation_id
---@param value number
function NATION.set_total_rich_income(id, value)
	return ffi.C.alice_nation_set_total_rich_income(id, value)
end
---@param id nation_id
---@return number
function NATION.get_total_middle_income(id)
	return ffi.C.alice_nation_get_total_middle_income(id)
end
---@param id nation_id
---@param value number
function NATION.set_total_middle_income(id, value)
	return ffi.C.alice_nation_set_total_middle_income(id, value)
end
---@param id nation_id
---@return number
function NATION.get_total_poor_income(id)
	return ffi.C.alice_nation_get_total_poor_income(id)
end
---@param id nation_id
---@param value number
function NATION.set_total_poor_income(id, value)
	return ffi.C.alice_nation_set_total_poor_income(id, value)
end
---@param id nation_id
---@return number
function NATION.get_poor_tax(id)
	return ffi.C.alice_nation_get_poor_tax(id)
end
---@param id nation_id
---@param value number
function NATION.set_poor_tax(id, value)
	return ffi.C.alice_nation_set_poor_tax(id, value)
end
---@param id nation_id
---@return number
function NATION.get_middle_tax(id)
	return ffi.C.alice_nation_get_middle_tax(id)
end
---@param id nation_id
---@param value number
function NATION.set_middle_tax(id, value)
	return ffi.C.alice_nation_set_middle_tax(id, value)
end
---@param id nation_id
---@return number
function NATION.get_rich_tax(id)
	return ffi.C.alice_nation_get_rich_tax(id)
end
---@param id nation_id
---@param value number
function NATION.set_rich_tax(id, value)
	return ffi.C.alice_nation_set_rich_tax(id, value)
end
---@param id nation_id
---@return number
function NATION.get_tariffs_import(id)
	return ffi.C.alice_nation_get_tariffs_import(id)
end
---@param id nation_id
---@param value number
function NATION.set_tariffs_import(id, value)
	return ffi.C.alice_nation_set_tariffs_import(id, value)
end
---@param id nation_id
---@return number
function NATION.get_tariffs_export(id)
	return ffi.C.alice_nation_get_tariffs_export(id)
end
---@param id nation_id
---@param value number
function NATION.set_tariffs_export(id, value)
	return ffi.C.alice_nation_set_tariffs_export(id, value)
end
---@param id nation_id
---@return number
function NATION.get_last_treasury(id)
	return ffi.C.alice_nation_get_last_treasury(id)
end
---@param id nation_id
---@param value number
function NATION.set_last_treasury(id, value)
	return ffi.C.alice_nation_set_last_treasury(id, value)
end
---@param id nation_id
---@return number
function NATION.get_industrial_score(id)
	return ffi.C.alice_nation_get_industrial_score(id)
end
---@param id nation_id
---@param value number
function NATION.set_industrial_score(id, value)
	return ffi.C.alice_nation_set_industrial_score(id, value)
end
---@param id nation_id
---@return number
function NATION.get_military_score(id)
	return ffi.C.alice_nation_get_military_score(id)
end
---@param id nation_id
---@param value number
function NATION.set_military_score(id, value)
	return ffi.C.alice_nation_set_military_score(id, value)
end
---@param id nation_id
---@return number
function NATION.get_central_blockaded(id)
	return ffi.C.alice_nation_get_central_blockaded(id)
end
---@param id nation_id
---@param value number
function NATION.set_central_blockaded(id, value)
	return ffi.C.alice_nation_set_central_blockaded(id, value)
end
---@param id nation_id
---@return number
function NATION.get_central_rebel_controlled(id)
	return ffi.C.alice_nation_get_central_rebel_controlled(id)
end
---@param id nation_id
---@param value number
function NATION.set_central_rebel_controlled(id, value)
	return ffi.C.alice_nation_set_central_rebel_controlled(id, value)
end
---@param id nation_id
---@return number
function NATION.get_owned_province_count(id)
	return ffi.C.alice_nation_get_owned_province_count(id)
end
---@param id nation_id
---@param value number
function NATION.set_owned_province_count(id, value)
	return ffi.C.alice_nation_set_owned_province_count(id, value)
end
---@param id nation_id
---@return number
function NATION.get_owned_state_count(id)
	return ffi.C.alice_nation_get_owned_state_count(id)
end
---@param id nation_id
---@param value number
function NATION.set_owned_state_count(id, value)
	return ffi.C.alice_nation_set_owned_state_count(id, value)
end
---@param id nation_id
---@return number
function NATION.get_central_province_count(id)
	return ffi.C.alice_nation_get_central_province_count(id)
end
---@param id nation_id
---@param value number
function NATION.set_central_province_count(id, value)
	return ffi.C.alice_nation_set_central_province_count(id, value)
end
---@param id nation_id
---@return number
function NATION.get_rebel_controlled_count(id)
	return ffi.C.alice_nation_get_rebel_controlled_count(id)
end
---@param id nation_id
---@param value number
function NATION.set_rebel_controlled_count(id, value)
	return ffi.C.alice_nation_set_rebel_controlled_count(id, value)
end
---@param id nation_id
---@return number
function NATION.get_occupied_count(id)
	return ffi.C.alice_nation_get_occupied_count(id)
end
---@param id nation_id
---@param value number
function NATION.set_occupied_count(id, value)
	return ffi.C.alice_nation_set_occupied_count(id, value)
end
---@param id nation_id
---@return number
function NATION.get_central_ports(id)
	return ffi.C.alice_nation_get_central_ports(id)
end
---@param id nation_id
---@param value number
function NATION.set_central_ports(id, value)
	return ffi.C.alice_nation_set_central_ports(id, value)
end
---@param id nation_id
---@return number
function NATION.get_total_ports(id)
	return ffi.C.alice_nation_get_total_ports(id)
end
---@param id nation_id
---@param value number
function NATION.set_total_ports(id, value)
	return ffi.C.alice_nation_set_total_ports(id, value)
end
---@param id nation_id
---@return number
function NATION.get_central_crime_count(id)
	return ffi.C.alice_nation_get_central_crime_count(id)
end
---@param id nation_id
---@param value number
function NATION.set_central_crime_count(id, value)
	return ffi.C.alice_nation_set_central_crime_count(id, value)
end
---@param id nation_id
---@return number
function NATION.get_allies_count(id)
	return ffi.C.alice_nation_get_allies_count(id)
end
---@param id nation_id
---@param value number
function NATION.set_allies_count(id, value)
	return ffi.C.alice_nation_set_allies_count(id, value)
end
---@param id nation_id
---@return number
function NATION.get_vassals_count(id)
	return ffi.C.alice_nation_get_vassals_count(id)
end
---@param id nation_id
---@param value number
function NATION.set_vassals_count(id, value)
	return ffi.C.alice_nation_set_vassals_count(id, value)
end
---@param id nation_id
---@return number
function NATION.get_substates_count(id)
	return ffi.C.alice_nation_get_substates_count(id)
end
---@param id nation_id
---@param value number
function NATION.set_substates_count(id, value)
	return ffi.C.alice_nation_set_substates_count(id, value)
end
---@param id nation_id
---@return number
function NATION.get_gdp(id)
	return ffi.C.alice_nation_get_gdp(id)
end
---@param id nation_id
---@param value number
function NATION.set_gdp(id, value)
	return ffi.C.alice_nation_set_gdp(id, value)
end
---@param id nation_id
---@param index number
---@return number
function NATION.get_gdp_record(id, index)
	return ffi.C.alice_nation_get_gdp_record(id, index)
end
---@param id nation_id
---@param index number
---@param value number
function NATION.set_gdp_record(id, index, value)
	return ffi.C.alice_nation_set_gdp_record(id, index, value)
end
---@return number
function NATION.get_gdp_record_size()
	return ffi.C.alice_nation_get_gdp_record_size()
end
---@param value number
function NATION.resize_gdp_record(value)
	return ffi.C.alice_nation_resize_gdp_record(value)
end
---@param id nation_id
---@param index commodity_id
---@return number
function NATION.get_stockpiles(id, index)
	return ffi.C.alice_nation_get_stockpiles(id, index)
end
---@param id nation_id
---@param index commodity_id
---@param value number
function NATION.set_stockpiles(id, index, value)
	return ffi.C.alice_nation_set_stockpiles(id, index, value)
end
---@return number
function NATION.get_stockpiles_size()
	return ffi.C.alice_nation_get_stockpiles_size()
end
---@param value number
function NATION.resize_stockpiles(value)
	return ffi.C.alice_nation_resize_stockpiles(value)
end
---@param id nation_id
---@return number
function NATION.get_national_bank(id)
	return ffi.C.alice_nation_get_national_bank(id)
end
---@param id nation_id
---@param value number
function NATION.set_national_bank(id, value)
	return ffi.C.alice_nation_set_national_bank(id, value)
end
---@param id nation_id
---@return number
function NATION.get_local_loan(id)
	return ffi.C.alice_nation_get_local_loan(id)
end
---@param id nation_id
---@param value number
function NATION.set_local_loan(id, value)
	return ffi.C.alice_nation_set_local_loan(id, value)
end
---@param id nation_id
---@param index commodity_id
---@return number
function NATION.get_stockpile_targets(id, index)
	return ffi.C.alice_nation_get_stockpile_targets(id, index)
end
---@param id nation_id
---@param index commodity_id
---@param value number
function NATION.set_stockpile_targets(id, index, value)
	return ffi.C.alice_nation_set_stockpile_targets(id, index, value)
end
---@return number
function NATION.get_stockpile_targets_size()
	return ffi.C.alice_nation_get_stockpile_targets_size()
end
---@param value number
function NATION.resize_stockpile_targets(value)
	return ffi.C.alice_nation_resize_stockpile_targets(value)
end
---@param id nation_id
---@param index commodity_id
---@return boolean
function NATION.get_drawing_on_stockpiles(id, index)
	return ffi.C.alice_nation_get_drawing_on_stockpiles(id, index)
end
---@param id nation_id
---@param index commodity_id
---@param value boolean
function NATION.set_drawing_on_stockpiles(id, index, value)
	return ffi.C.alice_nation_set_drawing_on_stockpiles(id, index, value)
end
---@return number
function NATION.get_drawing_on_stockpiles_size()
	return ffi.C.alice_nation_get_drawing_on_stockpiles_size()
end
---@param value number
function NATION.resize_drawing_on_stockpiles(value)
	return ffi.C.alice_nation_resize_drawing_on_stockpiles(value)
end
---@param id nation_id
---@return number
function NATION.get_overseas_penalty(id)
	return ffi.C.alice_nation_get_overseas_penalty(id)
end
---@param id nation_id
---@param value number
function NATION.set_overseas_penalty(id, value)
	return ffi.C.alice_nation_set_overseas_penalty(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_is_player_controlled(id)
	return ffi.C.alice_nation_get_is_player_controlled(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_is_player_controlled(id, value)
	return ffi.C.alice_nation_set_is_player_controlled(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_is_debt_spending(id)
	return ffi.C.alice_nation_get_is_debt_spending(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_is_debt_spending(id, value)
	return ffi.C.alice_nation_set_is_debt_spending(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_is_colonial_nation(id)
	return ffi.C.alice_nation_get_is_colonial_nation(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_is_colonial_nation(id, value)
	return ffi.C.alice_nation_set_is_colonial_nation(id, value)
end
---@param id nation_id
---@return culture_id
function NATION.get_dominant_culture(id)
	return ffi.C.alice_nation_get_dominant_culture(id)
end
---@param id nation_id
---@param value culture_id
function NATION.set_dominant_culture(id, value)
	return ffi.C.alice_nation_set_dominant_culture(id, value)
end
---@param id nation_id
---@return religion_id
function NATION.get_dominant_religion(id)
	return ffi.C.alice_nation_get_dominant_religion(id)
end
---@param id nation_id
---@param value religion_id
function NATION.set_dominant_religion(id, value)
	return ffi.C.alice_nation_set_dominant_religion(id, value)
end
---@param id nation_id
---@return ideology_id
function NATION.get_dominant_ideology(id)
	return ffi.C.alice_nation_get_dominant_ideology(id)
end
---@param id nation_id
---@param value ideology_id
function NATION.set_dominant_ideology(id, value)
	return ffi.C.alice_nation_set_dominant_ideology(id, value)
end
---@param id nation_id
---@return issue_option_id
function NATION.get_dominant_issue_option(id)
	return ffi.C.alice_nation_get_dominant_issue_option(id)
end
---@param id nation_id
---@param value issue_option_id
function NATION.set_dominant_issue_option(id, value)
	return ffi.C.alice_nation_set_dominant_issue_option(id, value)
end
---@param id nation_id
---@return nation_id
function NATION.get_constructing_cb_target(id)
	return ffi.C.alice_nation_get_constructing_cb_target(id)
end
---@param id nation_id
---@param value nation_id
function NATION.set_constructing_cb_target(id, value)
	return ffi.C.alice_nation_set_constructing_cb_target(id, value)
end
---@param id nation_id
---@return state_definition_id
function NATION.get_constructing_cb_target_state(id)
	return ffi.C.alice_nation_get_constructing_cb_target_state(id)
end
---@param id nation_id
---@param value state_definition_id
function NATION.set_constructing_cb_target_state(id, value)
	return ffi.C.alice_nation_set_constructing_cb_target_state(id, value)
end
---@param id nation_id
---@return number
function NATION.get_constructing_cb_progress(id)
	return ffi.C.alice_nation_get_constructing_cb_progress(id)
end
---@param id nation_id
---@param value number
function NATION.set_constructing_cb_progress(id, value)
	return ffi.C.alice_nation_set_constructing_cb_progress(id, value)
end
---@param id nation_id
---@return cb_type_id
function NATION.get_constructing_cb_type(id)
	return ffi.C.alice_nation_get_constructing_cb_type(id)
end
---@param id nation_id
---@param value cb_type_id
function NATION.set_constructing_cb_type(id, value)
	return ffi.C.alice_nation_set_constructing_cb_type(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_constructing_cb_is_discovered(id)
	return ffi.C.alice_nation_get_constructing_cb_is_discovered(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_constructing_cb_is_discovered(id, value)
	return ffi.C.alice_nation_set_constructing_cb_is_discovered(id, value)
end
---@param id nation_id
---@return number
function NATION.get_non_colonial_population(id)
	return ffi.C.alice_nation_get_non_colonial_population(id)
end
---@param id nation_id
---@param value number
function NATION.set_non_colonial_population(id, value)
	return ffi.C.alice_nation_set_non_colonial_population(id, value)
end
---@param id nation_id
---@return number
function NATION.get_non_colonial_bureaucrats(id)
	return ffi.C.alice_nation_get_non_colonial_bureaucrats(id)
end
---@param id nation_id
---@param value number
function NATION.set_non_colonial_bureaucrats(id, value)
	return ffi.C.alice_nation_set_non_colonial_bureaucrats(id, value)
end
---@param id nation_id
---@return number
function NATION.get_administrative_efficiency(id)
	return ffi.C.alice_nation_get_administrative_efficiency(id)
end
---@param id nation_id
---@param value number
function NATION.set_administrative_efficiency(id, value)
	return ffi.C.alice_nation_set_administrative_efficiency(id, value)
end
---@param id nation_id
---@return number
function NATION.get_research_points(id)
	return ffi.C.alice_nation_get_research_points(id)
end
---@param id nation_id
---@param value number
function NATION.set_research_points(id, value)
	return ffi.C.alice_nation_set_research_points(id, value)
end
---@param id nation_id
---@return technology_id
function NATION.get_current_research(id)
	return ffi.C.alice_nation_get_current_research(id)
end
---@param id nation_id
---@param value technology_id
function NATION.set_current_research(id, value)
	return ffi.C.alice_nation_set_current_research(id, value)
end
---@param id nation_id
---@return number
function NATION.get_active_regiments(id)
	return ffi.C.alice_nation_get_active_regiments(id)
end
---@param id nation_id
---@param value number
function NATION.set_active_regiments(id, value)
	return ffi.C.alice_nation_set_active_regiments(id, value)
end
---@param id nation_id
---@return number
function NATION.get_recruitable_regiments(id)
	return ffi.C.alice_nation_get_recruitable_regiments(id)
end
---@param id nation_id
---@param value number
function NATION.set_recruitable_regiments(id, value)
	return ffi.C.alice_nation_set_recruitable_regiments(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_overlord_commanding_units(id)
	return ffi.C.alice_nation_get_overlord_commanding_units(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_overlord_commanding_units(id, value)
	return ffi.C.alice_nation_set_overlord_commanding_units(id, value)
end
---@param id nation_id
---@return number
function NATION.get_averge_land_unit_score(id)
	return ffi.C.alice_nation_get_averge_land_unit_score(id)
end
---@param id nation_id
---@param value number
function NATION.set_averge_land_unit_score(id, value)
	return ffi.C.alice_nation_set_averge_land_unit_score(id, value)
end
---@param id nation_id
---@return number
function NATION.get_capital_ship_score(id)
	return ffi.C.alice_nation_get_capital_ship_score(id)
end
---@param id nation_id
---@param value number
function NATION.set_capital_ship_score(id, value)
	return ffi.C.alice_nation_set_capital_ship_score(id, value)
end
---@param id nation_id
---@return number
function NATION.get_suppression_points(id)
	return ffi.C.alice_nation_get_suppression_points(id)
end
---@param id nation_id
---@param value number
function NATION.set_suppression_points(id, value)
	return ffi.C.alice_nation_set_suppression_points(id, value)
end
---@param id nation_id
---@return number
function NATION.get_diplomatic_points(id)
	return ffi.C.alice_nation_get_diplomatic_points(id)
end
---@param id nation_id
---@param value number
function NATION.set_diplomatic_points(id, value)
	return ffi.C.alice_nation_set_diplomatic_points(id, value)
end
---@param id nation_id
---@return number
function NATION.get_leadership_points(id)
	return ffi.C.alice_nation_get_leadership_points(id)
end
---@param id nation_id
---@param value number
function NATION.set_leadership_points(id, value)
	return ffi.C.alice_nation_set_leadership_points(id, value)
end
---@param id nation_id
---@return number
function NATION.get_naval_supply_points(id)
	return ffi.C.alice_nation_get_naval_supply_points(id)
end
---@param id nation_id
---@param value number
function NATION.set_naval_supply_points(id, value)
	return ffi.C.alice_nation_set_naval_supply_points(id, value)
end
---@param id nation_id
---@return number
function NATION.get_used_naval_supply_points(id)
	return ffi.C.alice_nation_get_used_naval_supply_points(id)
end
---@param id nation_id
---@param value number
function NATION.set_used_naval_supply_points(id, value)
	return ffi.C.alice_nation_set_used_naval_supply_points(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_has_flash_point_state(id)
	return ffi.C.alice_nation_get_has_flash_point_state(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_has_flash_point_state(id, value)
	return ffi.C.alice_nation_set_has_flash_point_state(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_is_target_of_some_cb(id)
	return ffi.C.alice_nation_get_is_target_of_some_cb(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_is_target_of_some_cb(id, value)
	return ffi.C.alice_nation_set_is_target_of_some_cb(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_is_interesting(id)
	return ffi.C.alice_nation_get_is_interesting(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_is_interesting(id, value)
	return ffi.C.alice_nation_set_is_interesting(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_ai_is_threatened(id)
	return ffi.C.alice_nation_get_ai_is_threatened(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_ai_is_threatened(id, value)
	return ffi.C.alice_nation_set_ai_is_threatened(id, value)
end
---@param id nation_id
---@return nation_id
function NATION.get_ai_rival(id)
	return ffi.C.alice_nation_get_ai_rival(id)
end
---@param id nation_id
---@param value nation_id
function NATION.set_ai_rival(id, value)
	return ffi.C.alice_nation_set_ai_rival(id, value)
end
---@param id nation_id
---@return province_id
function NATION.get_ai_home_port(id)
	return ffi.C.alice_nation_get_ai_home_port(id)
end
---@param id nation_id
---@param value province_id
function NATION.set_ai_home_port(id, value)
	return ffi.C.alice_nation_set_ai_home_port(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_mobilized_is_ai_controlled(id)
	return ffi.C.alice_nation_get_mobilized_is_ai_controlled(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_mobilized_is_ai_controlled(id, value)
	return ffi.C.alice_nation_set_mobilized_is_ai_controlled(id, value)
end
---@param id nation_id
---@return number
function NATION.get_ai_strategy(id)
	return ffi.C.alice_nation_get_ai_strategy(id)
end
---@param id nation_id
---@param value number
function NATION.set_ai_strategy(id, value)
	return ffi.C.alice_nation_set_ai_strategy(id, value)
end
---@param id nation_id
---@return boolean
function NATION.get_utility_tag(id)
	return ffi.C.alice_nation_get_utility_tag(id)
end
---@param id nation_id
---@param value boolean
function NATION.set_utility_tag(id, value)
	return ffi.C.alice_nation_set_utility_tag(id, value)
end
---@param id nation_id
---@param index production_directive_id
---@return boolean
function NATION.get_production_directive(id, index)
	return ffi.C.alice_nation_get_production_directive(id, index)
end
---@param id nation_id
---@param index production_directive_id
---@param value boolean
function NATION.set_production_directive(id, index, value)
	return ffi.C.alice_nation_set_production_directive(id, index, value)
end
---@return number
function NATION.get_production_directive_size()
	return ffi.C.alice_nation_get_production_directive_size()
end
---@param value number
function NATION.resize_production_directive(value)
	return ffi.C.alice_nation_resize_production_directive(value)
end
---@param id nation_id
---@return number
function NATION.get_range_length_nation_adjacency(id)
	return ffi.C.alice_nation_get_range_nation_adjacency_as_connected_nations(id)
end
---@param id nation_id
---@param index number
---@return nation_adjacency_id
function NATION.get_item_from_range_nation_adjacency(id, index)
	return ffi.C.alice_nation_get_index_nation_adjacency_as_connected_nations(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_army_control(id)
	return ffi.C.alice_nation_get_range_army_control_as_controller(id)
end
---@param id nation_id
---@param index number
---@return army_control_id
function NATION.get_item_from_range_army_control(id, index)
	return ffi.C.alice_nation_get_index_army_control_as_controller(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_navy_control(id)
	return ffi.C.alice_nation_get_range_navy_control_as_controller(id)
end
---@param id nation_id
---@param index number
---@return navy_control_id
function NATION.get_item_from_range_navy_control(id, index)
	return ffi.C.alice_nation_get_index_navy_control_as_controller(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_leader_loyalty(id)
	return ffi.C.alice_nation_get_range_leader_loyalty_as_nation(id)
end
---@param id nation_id
---@param index number
---@return leader_loyalty_id
function NATION.get_item_from_range_leader_loyalty(id, index)
	return ffi.C.alice_nation_get_index_leader_loyalty_as_nation(id, index)
end
---@param id nation_id
---@return pending_peace_offer_id
function NATION.get_pending_peace_offer_as_nation(id)
	return ffi.C.alice_nation_get_pending_peace_offer_as_nation(id)
end
---@param id nation_id
---@return pending_peace_offer_id
function NATION.get_pending_peace_offer(id)
	return ffi.C.alice_nation_get_pending_peace_offer(id)
end
---@param id nation_id
---@return number
function NATION.get_range_length_war_participant(id)
	return ffi.C.alice_nation_get_range_war_participant_as_nation(id)
end
---@param id nation_id
---@param index number
---@return war_participant_id
function NATION.get_item_from_range_war_participant(id, index)
	return ffi.C.alice_nation_get_index_war_participant_as_nation(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_nation_administration(id)
	return ffi.C.alice_nation_get_range_nation_administration_as_nation(id)
end
---@param id nation_id
---@param index number
---@return nation_administration_id
function NATION.get_item_from_range_nation_administration(id, index)
	return ffi.C.alice_nation_get_index_nation_administration_as_nation(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_colonization(id)
	return ffi.C.alice_nation_get_range_colonization_as_colonizer(id)
end
---@param id nation_id
---@param index number
---@return colonization_id
function NATION.get_item_from_range_colonization(id, index)
	return ffi.C.alice_nation_get_index_colonization_as_colonizer(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_state_ownership(id)
	return ffi.C.alice_nation_get_range_state_ownership_as_nation(id)
end
---@param id nation_id
---@param index number
---@return state_ownership_id
function NATION.get_item_from_range_state_ownership(id, index)
	return ffi.C.alice_nation_get_index_state_ownership_as_nation(id, index)
end
---@param id nation_id
---@return flashpoint_focus_id
function NATION.get_flashpoint_focus_as_nation(id)
	return ffi.C.alice_nation_get_flashpoint_focus_as_nation(id)
end
---@param id nation_id
---@return flashpoint_focus_id
function NATION.get_flashpoint_focus(id)
	return ffi.C.alice_nation_get_flashpoint_focus(id)
end
---@param id nation_id
---@return identity_holder_id
function NATION.get_identity_holder_as_nation(id)
	return ffi.C.alice_nation_get_identity_holder_as_nation(id)
end
---@param id nation_id
---@return identity_holder_id
function NATION.get_identity_holder(id)
	return ffi.C.alice_nation_get_identity_holder(id)
end
---@param id nation_id
---@return number
function NATION.get_range_length_diplomatic_relation(id)
	return ffi.C.alice_nation_get_range_diplomatic_relation_as_related_nations(id)
end
---@param id nation_id
---@param index number
---@return diplomatic_relation_id
function NATION.get_item_from_range_diplomatic_relation(id, index)
	return ffi.C.alice_nation_get_index_diplomatic_relation_as_related_nations(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_unilateral_relationship(id)
	return ffi.C.alice_nation_get_range_unilateral_relationship_as_target(id)
end
---@param id nation_id
---@param index number
---@return unilateral_relationship_id
function NATION.get_item_from_range_unilateral_relationship(id, index)
	return ffi.C.alice_nation_get_index_unilateral_relationship_as_target(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_unilateral_relationship(id)
	return ffi.C.alice_nation_get_range_unilateral_relationship_as_source(id)
end
---@param id nation_id
---@param index number
---@return unilateral_relationship_id
function NATION.get_item_from_range_unilateral_relationship(id, index)
	return ffi.C.alice_nation_get_index_unilateral_relationship_as_source(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_gp_relationship(id)
	return ffi.C.alice_nation_get_range_gp_relationship_as_influence_target(id)
end
---@param id nation_id
---@param index number
---@return gp_relationship_id
function NATION.get_item_from_range_gp_relationship(id, index)
	return ffi.C.alice_nation_get_index_gp_relationship_as_influence_target(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_gp_relationship(id)
	return ffi.C.alice_nation_get_range_gp_relationship_as_great_power(id)
end
---@param id nation_id
---@param index number
---@return gp_relationship_id
function NATION.get_item_from_range_gp_relationship(id, index)
	return ffi.C.alice_nation_get_index_gp_relationship_as_great_power(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_province_ownership(id)
	return ffi.C.alice_nation_get_range_province_ownership_as_nation(id)
end
---@param id nation_id
---@param index number
---@return province_ownership_id
function NATION.get_item_from_range_province_ownership(id, index)
	return ffi.C.alice_nation_get_index_province_ownership_as_nation(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_province_control(id)
	return ffi.C.alice_nation_get_range_province_control_as_nation(id)
end
---@param id nation_id
---@param index number
---@return province_control_id
function NATION.get_item_from_range_province_control(id, index)
	return ffi.C.alice_nation_get_index_province_control_as_nation(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_province_land_construction(id)
	return ffi.C.alice_nation_get_range_province_land_construction_as_nation(id)
end
---@param id nation_id
---@param index number
---@return province_land_construction_id
function NATION.get_item_from_range_province_land_construction(id, index)
	return ffi.C.alice_nation_get_index_province_land_construction_as_nation(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_province_naval_construction(id)
	return ffi.C.alice_nation_get_range_province_naval_construction_as_nation(id)
end
---@param id nation_id
---@param index number
---@return province_naval_construction_id
function NATION.get_item_from_range_province_naval_construction(id, index)
	return ffi.C.alice_nation_get_index_province_naval_construction_as_nation(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_province_building_construction(id)
	return ffi.C.alice_nation_get_range_province_building_construction_as_nation(id)
end
---@param id nation_id
---@param index number
---@return province_building_construction_id
function NATION.get_item_from_range_province_building_construction(id, index)
	return ffi.C.alice_nation_get_index_province_building_construction_as_nation(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_factory_construction(id)
	return ffi.C.alice_nation_get_range_factory_construction_as_nation(id)
end
---@param id nation_id
---@param index number
---@return factory_construction_id
function NATION.get_item_from_range_factory_construction(id, index)
	return ffi.C.alice_nation_get_index_factory_construction_as_nation(id, index)
end
---@param id nation_id
---@return overlord_id
function NATION.get_overlord_as_subject(id)
	return ffi.C.alice_nation_get_overlord_as_subject(id)
end
---@param id nation_id
---@return number
function NATION.get_range_length_overlord(id)
	return ffi.C.alice_nation_get_range_overlord_as_ruler(id)
end
---@param id nation_id
---@param index number
---@return overlord_id
function NATION.get_item_from_range_overlord(id, index)
	return ffi.C.alice_nation_get_index_overlord_as_ruler(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_rebellion_within(id)
	return ffi.C.alice_nation_get_range_rebellion_within_as_ruler(id)
end
---@param id nation_id
---@param index number
---@return rebellion_within_id
function NATION.get_item_from_range_rebellion_within(id, index)
	return ffi.C.alice_nation_get_index_rebellion_within_as_ruler(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_movement_within(id)
	return ffi.C.alice_nation_get_range_movement_within_as_nation(id)
end
---@param id nation_id
---@param index number
---@return movement_within_id
function NATION.get_item_from_range_movement_within(id, index)
	return ffi.C.alice_nation_get_index_movement_within_as_nation(id, index)
end
---@param id nation_id
---@return number
function NATION.get_range_length_player_nation(id)
	return ffi.C.alice_nation_get_range_player_nation_as_nation(id)
end
---@param id nation_id
---@param index number
---@return player_nation_id
function NATION.get_item_from_range_player_nation(id, index)
	return ffi.C.alice_nation_get_index_player_nation_as_nation(id, index)
end
