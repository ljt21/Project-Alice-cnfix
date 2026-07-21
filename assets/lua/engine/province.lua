-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_province_is_valid(int32_t api_arg_0_id);
uint32_t alice_province_size();
void alice_province_resize(uint32_t api_arg_0_value);
uint32_t alice_province_get_provid(int32_t api_arg_0_id);
void alice_province_set_provid(int32_t api_arg_0_id, uint32_t api_arg_1_value);
int32_t alice_province_get_name(int32_t api_arg_0_id);
void alice_province_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_get_continent(int32_t api_arg_0_id);
void alice_province_set_continent(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_get_climate(int32_t api_arg_0_id);
void alice_province_set_climate(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_get_terrain(int32_t api_arg_0_id);
void alice_province_set_terrain(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint8_t alice_province_get_life_rating(int32_t api_arg_0_id);
void alice_province_set_life_rating(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int32_t alice_province_get_rgo(int32_t api_arg_0_id);
void alice_province_set_rgo(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint8_t alice_province_get_building_level(int32_t api_arg_0_id, uint8_t api_arg_1_value);
void alice_province_set_building_level(int32_t api_arg_0_id, uint8_t api_arg_1_value, uint8_t api_arg_2_value);
uint32_t alice_province_get_building_level_size();
void alice_province_resize_building_level(uint32_t api_arg_0_value);
bool alice_province_get_is_slave(int32_t api_arg_0_id);
void alice_province_set_is_slave(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_province_get_naval_rally_point(int32_t api_arg_0_id);
void alice_province_set_naval_rally_point(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_province_get_land_rally_point(int32_t api_arg_0_id);
void alice_province_set_land_rally_point(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_province_get_is_colonial(int32_t api_arg_0_id);
void alice_province_set_is_colonial(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_province_get_has_major_river(int32_t api_arg_0_id);
void alice_province_set_has_major_river(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_province_get_has_minor_river(int32_t api_arg_0_id);
void alice_province_set_has_minor_river(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_province_get_crime(int32_t api_arg_0_id);
void alice_province_set_crime(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_get_port_to(int32_t api_arg_0_id);
void alice_province_set_port_to(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_province_get_party_loyalty(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_party_loyalty(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_party_loyalty_size();
void alice_province_resize_party_loyalty(uint32_t api_arg_0_value);
float alice_province_get_modifier_values(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_modifier_values(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_modifier_values_size();
void alice_province_resize_modifier_values(uint32_t api_arg_0_value);
float alice_province_get_nationalism(int32_t api_arg_0_id);
void alice_province_set_nationalism(int32_t api_arg_0_id, float api_arg_1_value);
uint16_t alice_province_get_connected_region_id(int32_t api_arg_0_id);
void alice_province_set_connected_region_id(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_province_get_connected_coast_id(int32_t api_arg_0_id);
void alice_province_set_connected_coast_id(int32_t api_arg_0_id, uint16_t api_arg_1_value);
int32_t alice_province_get_state_membership(int32_t api_arg_0_id);
void alice_province_set_state_membership(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_province_get_is_coast(int32_t api_arg_0_id);
void alice_province_set_is_coast(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_province_get_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_demographics_size();
void alice_province_resize_demographics(uint32_t api_arg_0_value);
float alice_province_get_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_demographics_alt_size();
void alice_province_resize_demographics_alt(uint32_t api_arg_0_value);
int32_t alice_province_get_dominant_culture(int32_t api_arg_0_id);
void alice_province_set_dominant_culture(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_get_dominant_accepted_culture(int32_t api_arg_0_id);
void alice_province_set_dominant_accepted_culture(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_get_dominant_religion(int32_t api_arg_0_id);
void alice_province_set_dominant_religion(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_get_dominant_ideology(int32_t api_arg_0_id);
void alice_province_set_dominant_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_get_dominant_issue_option(int32_t api_arg_0_id);
void alice_province_set_dominant_issue_option(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_province_get_is_owner_core(int32_t api_arg_0_id);
void alice_province_set_is_owner_core(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_province_get_rgo_base_size(int32_t api_arg_0_id);
void alice_province_set_rgo_base_size(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_province_get_rgo_was_set_during_scenario_creation(int32_t api_arg_0_id);
void alice_province_set_rgo_was_set_during_scenario_creation(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_province_get_rgo_size(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_rgo_size(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_rgo_size_size();
void alice_province_resize_rgo_size(uint32_t api_arg_0_value);
float alice_province_get_rgo_max_size(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_rgo_max_size(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_rgo_max_size_size();
void alice_province_resize_rgo_max_size(uint32_t api_arg_0_value);
float alice_province_get_rgo_potential(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_rgo_potential(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_rgo_potential_size();
void alice_province_resize_rgo_potential(uint32_t api_arg_0_value);
float alice_province_get_rgo_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_rgo_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_rgo_efficiency_size();
void alice_province_resize_rgo_efficiency(uint32_t api_arg_0_value);
float alice_province_get_rgo_max_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_rgo_max_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_rgo_max_efficiency_size();
void alice_province_resize_rgo_max_efficiency(uint32_t api_arg_0_value);
float alice_province_get_rgo_base_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_rgo_base_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_rgo_base_efficiency_size();
void alice_province_resize_rgo_base_efficiency(uint32_t api_arg_0_value);
float alice_province_get_rgo_target_employment(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_rgo_target_employment(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_rgo_target_employment_size();
void alice_province_resize_rgo_target_employment(uint32_t api_arg_0_value);
float alice_province_get_rgo_output(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_rgo_output(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_rgo_output_size();
void alice_province_resize_rgo_output(uint32_t api_arg_0_value);
float alice_province_get_rgo_output_per_worker(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_rgo_output_per_worker(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_rgo_output_per_worker_size();
void alice_province_resize_rgo_output_per_worker(uint32_t api_arg_0_value);
bool alice_province_get_factory_limit_was_set_during_scenario_creation(int32_t api_arg_0_id);
void alice_province_set_factory_limit_was_set_during_scenario_creation(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_province_get_factory_max_size(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_factory_max_size(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_factory_max_size_size();
void alice_province_resize_factory_max_size(uint32_t api_arg_0_value);
float alice_province_get_rgo_profit(int32_t api_arg_0_id);
void alice_province_set_rgo_profit(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_artisan_score(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_artisan_score(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_artisan_score_size();
void alice_province_resize_artisan_score(uint32_t api_arg_0_value);
float alice_province_get_artisan_actual_production(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_set_artisan_actual_production(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_province_get_artisan_actual_production_size();
void alice_province_resize_artisan_actual_production(uint32_t api_arg_0_value);
float alice_province_get_artisan_profit(int32_t api_arg_0_id);
void alice_province_set_artisan_profit(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_artisan_bank(int32_t api_arg_0_id);
void alice_province_set_artisan_bank(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_rgo_bank(int32_t api_arg_0_id);
void alice_province_set_rgo_bank(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_factory_bank(int32_t api_arg_0_id);
void alice_province_set_factory_bank(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_subsistence_score(int32_t api_arg_0_id);
void alice_province_set_subsistence_score(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_landowners_share(int32_t api_arg_0_id);
void alice_province_set_landowners_share(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_capitalists_share(int32_t api_arg_0_id);
void alice_province_set_capitalists_share(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_subsistence_employment(int32_t api_arg_0_id);
void alice_province_set_subsistence_employment(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_tax_base_poor(int32_t api_arg_0_id);
void alice_province_set_tax_base_poor(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_tax_base_middle(int32_t api_arg_0_id);
void alice_province_set_tax_base_middle(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_tax_base_rich(int32_t api_arg_0_id);
void alice_province_set_tax_base_rich(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_daily_net_migration(int32_t api_arg_0_id);
void alice_province_set_daily_net_migration(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_daily_net_immigration(int32_t api_arg_0_id);
void alice_province_set_daily_net_immigration(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_siege_progress(int32_t api_arg_0_id);
void alice_province_set_siege_progress(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_province_get_is_blockaded(int32_t api_arg_0_id);
void alice_province_set_is_blockaded(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_province_get_advanced_province_building_national_size(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_advanced_province_building_national_size(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_advanced_province_building_national_size_size();
void alice_province_resize_advanced_province_building_national_size(uint32_t api_arg_0_value);
float alice_province_get_advanced_province_building_max_national_size(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_advanced_province_building_max_national_size(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_advanced_province_building_max_national_size_size();
void alice_province_resize_advanced_province_building_max_national_size(uint32_t api_arg_0_value);
float alice_province_get_advanced_province_building_private_size(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_advanced_province_building_private_size(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_advanced_province_building_private_size_size();
void alice_province_resize_advanced_province_building_private_size(uint32_t api_arg_0_value);
float alice_province_get_advanced_province_building_private_savings(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_advanced_province_building_private_savings(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_advanced_province_building_private_savings_size();
void alice_province_resize_advanced_province_building_private_savings(uint32_t api_arg_0_value);
float alice_province_get_advanced_province_building_max_private_size(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_advanced_province_building_max_private_size(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_advanced_province_building_max_private_size_size();
void alice_province_resize_advanced_province_building_max_private_size(uint32_t api_arg_0_value);
float alice_province_get_advanced_province_building_private_output(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_advanced_province_building_private_output(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_advanced_province_building_private_output_size();
void alice_province_resize_advanced_province_building_private_output(uint32_t api_arg_0_value);
float alice_province_get_service_price(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_service_price(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_service_price_size();
void alice_province_resize_service_price(uint32_t api_arg_0_value);
float alice_province_get_service_supply_private(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_service_supply_private(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_service_supply_private_size();
void alice_province_resize_service_supply_private(uint32_t api_arg_0_value);
float alice_province_get_service_supply_public(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_service_supply_public(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_service_supply_public_size();
void alice_province_resize_service_supply_public(uint32_t api_arg_0_value);
float alice_province_get_service_demand_allowed_public_supply(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_service_demand_allowed_public_supply(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_service_demand_allowed_public_supply_size();
void alice_province_resize_service_demand_allowed_public_supply(uint32_t api_arg_0_value);
float alice_province_get_service_demand_forbidden_public_supply(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_service_demand_forbidden_public_supply(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_service_demand_forbidden_public_supply_size();
void alice_province_resize_service_demand_forbidden_public_supply(uint32_t api_arg_0_value);
float alice_province_get_service_satisfaction(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_service_satisfaction(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_service_satisfaction_size();
void alice_province_resize_service_satisfaction(uint32_t api_arg_0_value);
float alice_province_get_service_satisfaction_for_free(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_service_satisfaction_for_free(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_service_satisfaction_for_free_size();
void alice_province_resize_service_satisfaction_for_free(uint32_t api_arg_0_value);
float alice_province_get_service_sold(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_service_sold(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_service_sold_size();
void alice_province_resize_service_sold(uint32_t api_arg_0_value);
float alice_province_get_labor_price(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_labor_price(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_labor_price_size();
void alice_province_resize_labor_price(uint32_t api_arg_0_value);
float alice_province_get_labor_supply(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_labor_supply(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_labor_supply_size();
void alice_province_resize_labor_supply(uint32_t api_arg_0_value);
float alice_province_get_labor_demand(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_labor_demand(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_labor_demand_size();
void alice_province_resize_labor_demand(uint32_t api_arg_0_value);
float alice_province_get_labor_demand_satisfaction(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_labor_demand_satisfaction(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_labor_demand_satisfaction_size();
void alice_province_resize_labor_demand_satisfaction(uint32_t api_arg_0_value);
float alice_province_get_labor_supply_sold(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_labor_supply_sold(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_labor_supply_sold_size();
void alice_province_resize_labor_supply_sold(uint32_t api_arg_0_value);
float alice_province_get_administration_employment_target(int32_t api_arg_0_id);
void alice_province_set_administration_employment_target(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_pop_labor_distribution(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_set_pop_labor_distribution(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_province_get_pop_labor_distribution_size();
void alice_province_resize_pop_labor_distribution(uint32_t api_arg_0_value);
float alice_province_get_control_scale(int32_t api_arg_0_id);
void alice_province_set_control_scale(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_get_control_ratio(int32_t api_arg_0_id);
void alice_province_set_control_ratio(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_province_get_range_province_adjacency_as_connected_provinces(int32_t i);
int32_t alice_province_get_index_province_adjacency_as_connected_provinces(int32_t i, int32_t subindex);
int32_t alice_province_get_range_army_location_as_location(int32_t i);
int32_t alice_province_get_index_army_location_as_location(int32_t i, int32_t subindex);
int32_t alice_province_get_range_navy_location_as_location(int32_t i);
int32_t alice_province_get_index_navy_location_as_location(int32_t i, int32_t subindex);
int32_t alice_province_get_range_naval_battle_location_as_location(int32_t i);
int32_t alice_province_get_index_naval_battle_location_as_location(int32_t i, int32_t subindex);
int32_t alice_province_get_range_land_battle_location_as_location(int32_t i);
int32_t alice_province_get_index_land_battle_location_as_location(int32_t i, int32_t subindex);
int32_t alice_province_get_abstract_state_membership_as_province(int32_t api_arg_0_id);
int32_t alice_province_get_abstract_state_membership(int32_t api_arg_0_id);
int32_t alice_province_get_range_region_membership_as_province(int32_t i);
int32_t alice_province_get_index_region_membership_as_province(int32_t i, int32_t subindex);
int32_t alice_province_get_range_core_as_province(int32_t i);
int32_t alice_province_get_index_core_as_province(int32_t i, int32_t subindex);
int32_t alice_province_get_range_factory_location_as_province(int32_t i);
int32_t alice_province_get_index_factory_location_as_province(int32_t i, int32_t subindex);
int32_t alice_province_get_province_ownership_as_province(int32_t api_arg_0_id);
int32_t alice_province_get_province_ownership(int32_t api_arg_0_id);
int32_t alice_province_get_province_control_as_province(int32_t api_arg_0_id);
int32_t alice_province_get_province_control(int32_t api_arg_0_id);
int32_t alice_province_get_province_rebel_control_as_province(int32_t api_arg_0_id);
int32_t alice_province_get_province_rebel_control(int32_t api_arg_0_id);
int32_t alice_province_get_range_province_naval_construction_as_province(int32_t i);
int32_t alice_province_get_index_province_naval_construction_as_province(int32_t i, int32_t subindex);
int32_t alice_province_get_range_province_building_construction_as_province(int32_t i);
int32_t alice_province_get_index_province_building_construction_as_province(int32_t i, int32_t subindex);
int32_t alice_province_get_range_factory_construction_as_province(int32_t i);
int32_t alice_province_get_index_factory_construction_as_province(int32_t i, int32_t subindex);
int32_t alice_province_get_range_pop_location_as_province(int32_t i);
int32_t alice_province_get_index_pop_location_as_province(int32_t i, int32_t subindex);
]]
PROVINCE = {}
---@param id province_id
---@return number
function PROVINCE.is_valid(id)
	return ffi.C.alice_province_is_valid(id)
end
---@return number
function PROVINCE.size()
	return ffi.C.alice_province_size()
end
---@param value number
function PROVINCE.resize(value)
	return ffi.C.alice_province_resize(value)
end
---@param id province_id
---@return number
function PROVINCE.get_provid(id)
	return ffi.C.alice_province_get_provid(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_provid(id, value)
	return ffi.C.alice_province_set_provid(id, value)
end
---@param id province_id
---@return text_key
function PROVINCE.get_name(id)
	return ffi.C.alice_province_get_name(id)
end
---@param id province_id
---@param value text_key
function PROVINCE.set_name(id, value)
	return ffi.C.alice_province_set_name(id, value)
end
---@param id province_id
---@return modifier_id
function PROVINCE.get_continent(id)
	return ffi.C.alice_province_get_continent(id)
end
---@param id province_id
---@param value modifier_id
function PROVINCE.set_continent(id, value)
	return ffi.C.alice_province_set_continent(id, value)
end
---@param id province_id
---@return modifier_id
function PROVINCE.get_climate(id)
	return ffi.C.alice_province_get_climate(id)
end
---@param id province_id
---@param value modifier_id
function PROVINCE.set_climate(id, value)
	return ffi.C.alice_province_set_climate(id, value)
end
---@param id province_id
---@return modifier_id
function PROVINCE.get_terrain(id)
	return ffi.C.alice_province_get_terrain(id)
end
---@param id province_id
---@param value modifier_id
function PROVINCE.set_terrain(id, value)
	return ffi.C.alice_province_set_terrain(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_life_rating(id)
	return ffi.C.alice_province_get_life_rating(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_life_rating(id, value)
	return ffi.C.alice_province_set_life_rating(id, value)
end
---@param id province_id
---@return commodity_id
function PROVINCE.get_rgo(id)
	return ffi.C.alice_province_get_rgo(id)
end
---@param id province_id
---@param value commodity_id
function PROVINCE.set_rgo(id, value)
	return ffi.C.alice_province_set_rgo(id, value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_building_level(id, index)
	return ffi.C.alice_province_get_building_level(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_building_level(id, index, value)
	return ffi.C.alice_province_set_building_level(id, index, value)
end
---@return number
function PROVINCE.get_building_level_size()
	return ffi.C.alice_province_get_building_level_size()
end
---@param value number
function PROVINCE.resize_building_level(value)
	return ffi.C.alice_province_resize_building_level(value)
end
---@param id province_id
---@return boolean
function PROVINCE.get_is_slave(id)
	return ffi.C.alice_province_get_is_slave(id)
end
---@param id province_id
---@param value boolean
function PROVINCE.set_is_slave(id, value)
	return ffi.C.alice_province_set_is_slave(id, value)
end
---@param id province_id
---@return boolean
function PROVINCE.get_naval_rally_point(id)
	return ffi.C.alice_province_get_naval_rally_point(id)
end
---@param id province_id
---@param value boolean
function PROVINCE.set_naval_rally_point(id, value)
	return ffi.C.alice_province_set_naval_rally_point(id, value)
end
---@param id province_id
---@return boolean
function PROVINCE.get_land_rally_point(id)
	return ffi.C.alice_province_get_land_rally_point(id)
end
---@param id province_id
---@param value boolean
function PROVINCE.set_land_rally_point(id, value)
	return ffi.C.alice_province_set_land_rally_point(id, value)
end
---@param id province_id
---@return boolean
function PROVINCE.get_is_colonial(id)
	return ffi.C.alice_province_get_is_colonial(id)
end
---@param id province_id
---@param value boolean
function PROVINCE.set_is_colonial(id, value)
	return ffi.C.alice_province_set_is_colonial(id, value)
end
---@param id province_id
---@return boolean
function PROVINCE.get_has_major_river(id)
	return ffi.C.alice_province_get_has_major_river(id)
end
---@param id province_id
---@param value boolean
function PROVINCE.set_has_major_river(id, value)
	return ffi.C.alice_province_set_has_major_river(id, value)
end
---@param id province_id
---@return boolean
function PROVINCE.get_has_minor_river(id)
	return ffi.C.alice_province_get_has_minor_river(id)
end
---@param id province_id
---@param value boolean
function PROVINCE.set_has_minor_river(id, value)
	return ffi.C.alice_province_set_has_minor_river(id, value)
end
---@param id province_id
---@return crime_id
function PROVINCE.get_crime(id)
	return ffi.C.alice_province_get_crime(id)
end
---@param id province_id
---@param value crime_id
function PROVINCE.set_crime(id, value)
	return ffi.C.alice_province_set_crime(id, value)
end
---@param id province_id
---@return province_id
function PROVINCE.get_port_to(id)
	return ffi.C.alice_province_get_port_to(id)
end
---@param id province_id
---@param value province_id
function PROVINCE.set_port_to(id, value)
	return ffi.C.alice_province_set_port_to(id, value)
end
---@param id province_id
---@param index ideology_id
---@return number
function PROVINCE.get_party_loyalty(id, index)
	return ffi.C.alice_province_get_party_loyalty(id, index)
end
---@param id province_id
---@param index ideology_id
---@param value number
function PROVINCE.set_party_loyalty(id, index, value)
	return ffi.C.alice_province_set_party_loyalty(id, index, value)
end
---@return number
function PROVINCE.get_party_loyalty_size()
	return ffi.C.alice_province_get_party_loyalty_size()
end
---@param value number
function PROVINCE.resize_party_loyalty(value)
	return ffi.C.alice_province_resize_party_loyalty(value)
end
---@param id province_id
---@param index provincial_modifier_value
---@return number
function PROVINCE.get_modifier_values(id, index)
	return ffi.C.alice_province_get_modifier_values(id, index)
end
---@param id province_id
---@param index provincial_modifier_value
---@param value number
function PROVINCE.set_modifier_values(id, index, value)
	return ffi.C.alice_province_set_modifier_values(id, index, value)
end
---@return number
function PROVINCE.get_modifier_values_size()
	return ffi.C.alice_province_get_modifier_values_size()
end
---@param value number
function PROVINCE.resize_modifier_values(value)
	return ffi.C.alice_province_resize_modifier_values(value)
end
---@param id province_id
---@return number
function PROVINCE.get_nationalism(id)
	return ffi.C.alice_province_get_nationalism(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_nationalism(id, value)
	return ffi.C.alice_province_set_nationalism(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_connected_region_id(id)
	return ffi.C.alice_province_get_connected_region_id(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_connected_region_id(id, value)
	return ffi.C.alice_province_set_connected_region_id(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_connected_coast_id(id)
	return ffi.C.alice_province_get_connected_coast_id(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_connected_coast_id(id, value)
	return ffi.C.alice_province_set_connected_coast_id(id, value)
end
---@param id province_id
---@return state_instance_id
function PROVINCE.get_state_membership(id)
	return ffi.C.alice_province_get_state_membership(id)
end
---@param id province_id
---@param value state_instance_id
function PROVINCE.set_state_membership(id, value)
	return ffi.C.alice_province_set_state_membership(id, value)
end
---@param id province_id
---@return boolean
function PROVINCE.get_is_coast(id)
	return ffi.C.alice_province_get_is_coast(id)
end
---@param id province_id
---@param value boolean
function PROVINCE.set_is_coast(id, value)
	return ffi.C.alice_province_set_is_coast(id, value)
end
---@param id province_id
---@param index demographics_key
---@return number
function PROVINCE.get_demographics(id, index)
	return ffi.C.alice_province_get_demographics(id, index)
end
---@param id province_id
---@param index demographics_key
---@param value number
function PROVINCE.set_demographics(id, index, value)
	return ffi.C.alice_province_set_demographics(id, index, value)
end
---@return number
function PROVINCE.get_demographics_size()
	return ffi.C.alice_province_get_demographics_size()
end
---@param value number
function PROVINCE.resize_demographics(value)
	return ffi.C.alice_province_resize_demographics(value)
end
---@param id province_id
---@param index demographics_key
---@return number
function PROVINCE.get_demographics_alt(id, index)
	return ffi.C.alice_province_get_demographics_alt(id, index)
end
---@param id province_id
---@param index demographics_key
---@param value number
function PROVINCE.set_demographics_alt(id, index, value)
	return ffi.C.alice_province_set_demographics_alt(id, index, value)
end
---@return number
function PROVINCE.get_demographics_alt_size()
	return ffi.C.alice_province_get_demographics_alt_size()
end
---@param value number
function PROVINCE.resize_demographics_alt(value)
	return ffi.C.alice_province_resize_demographics_alt(value)
end
---@param id province_id
---@return culture_id
function PROVINCE.get_dominant_culture(id)
	return ffi.C.alice_province_get_dominant_culture(id)
end
---@param id province_id
---@param value culture_id
function PROVINCE.set_dominant_culture(id, value)
	return ffi.C.alice_province_set_dominant_culture(id, value)
end
---@param id province_id
---@return culture_id
function PROVINCE.get_dominant_accepted_culture(id)
	return ffi.C.alice_province_get_dominant_accepted_culture(id)
end
---@param id province_id
---@param value culture_id
function PROVINCE.set_dominant_accepted_culture(id, value)
	return ffi.C.alice_province_set_dominant_accepted_culture(id, value)
end
---@param id province_id
---@return religion_id
function PROVINCE.get_dominant_religion(id)
	return ffi.C.alice_province_get_dominant_religion(id)
end
---@param id province_id
---@param value religion_id
function PROVINCE.set_dominant_religion(id, value)
	return ffi.C.alice_province_set_dominant_religion(id, value)
end
---@param id province_id
---@return ideology_id
function PROVINCE.get_dominant_ideology(id)
	return ffi.C.alice_province_get_dominant_ideology(id)
end
---@param id province_id
---@param value ideology_id
function PROVINCE.set_dominant_ideology(id, value)
	return ffi.C.alice_province_set_dominant_ideology(id, value)
end
---@param id province_id
---@return issue_option_id
function PROVINCE.get_dominant_issue_option(id)
	return ffi.C.alice_province_get_dominant_issue_option(id)
end
---@param id province_id
---@param value issue_option_id
function PROVINCE.set_dominant_issue_option(id, value)
	return ffi.C.alice_province_set_dominant_issue_option(id, value)
end
---@param id province_id
---@return boolean
function PROVINCE.get_is_owner_core(id)
	return ffi.C.alice_province_get_is_owner_core(id)
end
---@param id province_id
---@param value boolean
function PROVINCE.set_is_owner_core(id, value)
	return ffi.C.alice_province_set_is_owner_core(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_rgo_base_size(id)
	return ffi.C.alice_province_get_rgo_base_size(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_rgo_base_size(id, value)
	return ffi.C.alice_province_set_rgo_base_size(id, value)
end
---@param id province_id
---@return boolean
function PROVINCE.get_rgo_was_set_during_scenario_creation(id)
	return ffi.C.alice_province_get_rgo_was_set_during_scenario_creation(id)
end
---@param id province_id
---@param value boolean
function PROVINCE.set_rgo_was_set_during_scenario_creation(id, value)
	return ffi.C.alice_province_set_rgo_was_set_during_scenario_creation(id, value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_rgo_size(id, index)
	return ffi.C.alice_province_get_rgo_size(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_rgo_size(id, index, value)
	return ffi.C.alice_province_set_rgo_size(id, index, value)
end
---@return number
function PROVINCE.get_rgo_size_size()
	return ffi.C.alice_province_get_rgo_size_size()
end
---@param value number
function PROVINCE.resize_rgo_size(value)
	return ffi.C.alice_province_resize_rgo_size(value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_rgo_max_size(id, index)
	return ffi.C.alice_province_get_rgo_max_size(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_rgo_max_size(id, index, value)
	return ffi.C.alice_province_set_rgo_max_size(id, index, value)
end
---@return number
function PROVINCE.get_rgo_max_size_size()
	return ffi.C.alice_province_get_rgo_max_size_size()
end
---@param value number
function PROVINCE.resize_rgo_max_size(value)
	return ffi.C.alice_province_resize_rgo_max_size(value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_rgo_potential(id, index)
	return ffi.C.alice_province_get_rgo_potential(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_rgo_potential(id, index, value)
	return ffi.C.alice_province_set_rgo_potential(id, index, value)
end
---@return number
function PROVINCE.get_rgo_potential_size()
	return ffi.C.alice_province_get_rgo_potential_size()
end
---@param value number
function PROVINCE.resize_rgo_potential(value)
	return ffi.C.alice_province_resize_rgo_potential(value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_rgo_efficiency(id, index)
	return ffi.C.alice_province_get_rgo_efficiency(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_rgo_efficiency(id, index, value)
	return ffi.C.alice_province_set_rgo_efficiency(id, index, value)
end
---@return number
function PROVINCE.get_rgo_efficiency_size()
	return ffi.C.alice_province_get_rgo_efficiency_size()
end
---@param value number
function PROVINCE.resize_rgo_efficiency(value)
	return ffi.C.alice_province_resize_rgo_efficiency(value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_rgo_max_efficiency(id, index)
	return ffi.C.alice_province_get_rgo_max_efficiency(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_rgo_max_efficiency(id, index, value)
	return ffi.C.alice_province_set_rgo_max_efficiency(id, index, value)
end
---@return number
function PROVINCE.get_rgo_max_efficiency_size()
	return ffi.C.alice_province_get_rgo_max_efficiency_size()
end
---@param value number
function PROVINCE.resize_rgo_max_efficiency(value)
	return ffi.C.alice_province_resize_rgo_max_efficiency(value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_rgo_base_efficiency(id, index)
	return ffi.C.alice_province_get_rgo_base_efficiency(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_rgo_base_efficiency(id, index, value)
	return ffi.C.alice_province_set_rgo_base_efficiency(id, index, value)
end
---@return number
function PROVINCE.get_rgo_base_efficiency_size()
	return ffi.C.alice_province_get_rgo_base_efficiency_size()
end
---@param value number
function PROVINCE.resize_rgo_base_efficiency(value)
	return ffi.C.alice_province_resize_rgo_base_efficiency(value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_rgo_target_employment(id, index)
	return ffi.C.alice_province_get_rgo_target_employment(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_rgo_target_employment(id, index, value)
	return ffi.C.alice_province_set_rgo_target_employment(id, index, value)
end
---@return number
function PROVINCE.get_rgo_target_employment_size()
	return ffi.C.alice_province_get_rgo_target_employment_size()
end
---@param value number
function PROVINCE.resize_rgo_target_employment(value)
	return ffi.C.alice_province_resize_rgo_target_employment(value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_rgo_output(id, index)
	return ffi.C.alice_province_get_rgo_output(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_rgo_output(id, index, value)
	return ffi.C.alice_province_set_rgo_output(id, index, value)
end
---@return number
function PROVINCE.get_rgo_output_size()
	return ffi.C.alice_province_get_rgo_output_size()
end
---@param value number
function PROVINCE.resize_rgo_output(value)
	return ffi.C.alice_province_resize_rgo_output(value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_rgo_output_per_worker(id, index)
	return ffi.C.alice_province_get_rgo_output_per_worker(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_rgo_output_per_worker(id, index, value)
	return ffi.C.alice_province_set_rgo_output_per_worker(id, index, value)
end
---@return number
function PROVINCE.get_rgo_output_per_worker_size()
	return ffi.C.alice_province_get_rgo_output_per_worker_size()
end
---@param value number
function PROVINCE.resize_rgo_output_per_worker(value)
	return ffi.C.alice_province_resize_rgo_output_per_worker(value)
end
---@param id province_id
---@return boolean
function PROVINCE.get_factory_limit_was_set_during_scenario_creation(id)
	return ffi.C.alice_province_get_factory_limit_was_set_during_scenario_creation(id)
end
---@param id province_id
---@param value boolean
function PROVINCE.set_factory_limit_was_set_during_scenario_creation(id, value)
	return ffi.C.alice_province_set_factory_limit_was_set_during_scenario_creation(id, value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_factory_max_size(id, index)
	return ffi.C.alice_province_get_factory_max_size(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_factory_max_size(id, index, value)
	return ffi.C.alice_province_set_factory_max_size(id, index, value)
end
---@return number
function PROVINCE.get_factory_max_size_size()
	return ffi.C.alice_province_get_factory_max_size_size()
end
---@param value number
function PROVINCE.resize_factory_max_size(value)
	return ffi.C.alice_province_resize_factory_max_size(value)
end
---@param id province_id
---@return number
function PROVINCE.get_rgo_profit(id)
	return ffi.C.alice_province_get_rgo_profit(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_rgo_profit(id, value)
	return ffi.C.alice_province_set_rgo_profit(id, value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_artisan_score(id, index)
	return ffi.C.alice_province_get_artisan_score(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_artisan_score(id, index, value)
	return ffi.C.alice_province_set_artisan_score(id, index, value)
end
---@return number
function PROVINCE.get_artisan_score_size()
	return ffi.C.alice_province_get_artisan_score_size()
end
---@param value number
function PROVINCE.resize_artisan_score(value)
	return ffi.C.alice_province_resize_artisan_score(value)
end
---@param id province_id
---@param index commodity_id
---@return number
function PROVINCE.get_artisan_actual_production(id, index)
	return ffi.C.alice_province_get_artisan_actual_production(id, index)
end
---@param id province_id
---@param index commodity_id
---@param value number
function PROVINCE.set_artisan_actual_production(id, index, value)
	return ffi.C.alice_province_set_artisan_actual_production(id, index, value)
end
---@return number
function PROVINCE.get_artisan_actual_production_size()
	return ffi.C.alice_province_get_artisan_actual_production_size()
end
---@param value number
function PROVINCE.resize_artisan_actual_production(value)
	return ffi.C.alice_province_resize_artisan_actual_production(value)
end
---@param id province_id
---@return number
function PROVINCE.get_artisan_profit(id)
	return ffi.C.alice_province_get_artisan_profit(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_artisan_profit(id, value)
	return ffi.C.alice_province_set_artisan_profit(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_artisan_bank(id)
	return ffi.C.alice_province_get_artisan_bank(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_artisan_bank(id, value)
	return ffi.C.alice_province_set_artisan_bank(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_rgo_bank(id)
	return ffi.C.alice_province_get_rgo_bank(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_rgo_bank(id, value)
	return ffi.C.alice_province_set_rgo_bank(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_factory_bank(id)
	return ffi.C.alice_province_get_factory_bank(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_factory_bank(id, value)
	return ffi.C.alice_province_set_factory_bank(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_subsistence_score(id)
	return ffi.C.alice_province_get_subsistence_score(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_subsistence_score(id, value)
	return ffi.C.alice_province_set_subsistence_score(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_landowners_share(id)
	return ffi.C.alice_province_get_landowners_share(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_landowners_share(id, value)
	return ffi.C.alice_province_set_landowners_share(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_capitalists_share(id)
	return ffi.C.alice_province_get_capitalists_share(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_capitalists_share(id, value)
	return ffi.C.alice_province_set_capitalists_share(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_subsistence_employment(id)
	return ffi.C.alice_province_get_subsistence_employment(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_subsistence_employment(id, value)
	return ffi.C.alice_province_set_subsistence_employment(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_tax_base_poor(id)
	return ffi.C.alice_province_get_tax_base_poor(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_tax_base_poor(id, value)
	return ffi.C.alice_province_set_tax_base_poor(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_tax_base_middle(id)
	return ffi.C.alice_province_get_tax_base_middle(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_tax_base_middle(id, value)
	return ffi.C.alice_province_set_tax_base_middle(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_tax_base_rich(id)
	return ffi.C.alice_province_get_tax_base_rich(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_tax_base_rich(id, value)
	return ffi.C.alice_province_set_tax_base_rich(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_daily_net_migration(id)
	return ffi.C.alice_province_get_daily_net_migration(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_daily_net_migration(id, value)
	return ffi.C.alice_province_set_daily_net_migration(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_daily_net_immigration(id)
	return ffi.C.alice_province_get_daily_net_immigration(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_daily_net_immigration(id, value)
	return ffi.C.alice_province_set_daily_net_immigration(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_siege_progress(id)
	return ffi.C.alice_province_get_siege_progress(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_siege_progress(id, value)
	return ffi.C.alice_province_set_siege_progress(id, value)
end
---@param id province_id
---@return boolean
function PROVINCE.get_is_blockaded(id)
	return ffi.C.alice_province_get_is_blockaded(id)
end
---@param id province_id
---@param value boolean
function PROVINCE.set_is_blockaded(id, value)
	return ffi.C.alice_province_set_is_blockaded(id, value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_advanced_province_building_national_size(id, index)
	return ffi.C.alice_province_get_advanced_province_building_national_size(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_advanced_province_building_national_size(id, index, value)
	return ffi.C.alice_province_set_advanced_province_building_national_size(id, index, value)
end
---@return number
function PROVINCE.get_advanced_province_building_national_size_size()
	return ffi.C.alice_province_get_advanced_province_building_national_size_size()
end
---@param value number
function PROVINCE.resize_advanced_province_building_national_size(value)
	return ffi.C.alice_province_resize_advanced_province_building_national_size(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_advanced_province_building_max_national_size(id, index)
	return ffi.C.alice_province_get_advanced_province_building_max_national_size(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_advanced_province_building_max_national_size(id, index, value)
	return ffi.C.alice_province_set_advanced_province_building_max_national_size(id, index, value)
end
---@return number
function PROVINCE.get_advanced_province_building_max_national_size_size()
	return ffi.C.alice_province_get_advanced_province_building_max_national_size_size()
end
---@param value number
function PROVINCE.resize_advanced_province_building_max_national_size(value)
	return ffi.C.alice_province_resize_advanced_province_building_max_national_size(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_advanced_province_building_private_size(id, index)
	return ffi.C.alice_province_get_advanced_province_building_private_size(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_advanced_province_building_private_size(id, index, value)
	return ffi.C.alice_province_set_advanced_province_building_private_size(id, index, value)
end
---@return number
function PROVINCE.get_advanced_province_building_private_size_size()
	return ffi.C.alice_province_get_advanced_province_building_private_size_size()
end
---@param value number
function PROVINCE.resize_advanced_province_building_private_size(value)
	return ffi.C.alice_province_resize_advanced_province_building_private_size(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_advanced_province_building_private_savings(id, index)
	return ffi.C.alice_province_get_advanced_province_building_private_savings(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_advanced_province_building_private_savings(id, index, value)
	return ffi.C.alice_province_set_advanced_province_building_private_savings(id, index, value)
end
---@return number
function PROVINCE.get_advanced_province_building_private_savings_size()
	return ffi.C.alice_province_get_advanced_province_building_private_savings_size()
end
---@param value number
function PROVINCE.resize_advanced_province_building_private_savings(value)
	return ffi.C.alice_province_resize_advanced_province_building_private_savings(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_advanced_province_building_max_private_size(id, index)
	return ffi.C.alice_province_get_advanced_province_building_max_private_size(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_advanced_province_building_max_private_size(id, index, value)
	return ffi.C.alice_province_set_advanced_province_building_max_private_size(id, index, value)
end
---@return number
function PROVINCE.get_advanced_province_building_max_private_size_size()
	return ffi.C.alice_province_get_advanced_province_building_max_private_size_size()
end
---@param value number
function PROVINCE.resize_advanced_province_building_max_private_size(value)
	return ffi.C.alice_province_resize_advanced_province_building_max_private_size(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_advanced_province_building_private_output(id, index)
	return ffi.C.alice_province_get_advanced_province_building_private_output(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_advanced_province_building_private_output(id, index, value)
	return ffi.C.alice_province_set_advanced_province_building_private_output(id, index, value)
end
---@return number
function PROVINCE.get_advanced_province_building_private_output_size()
	return ffi.C.alice_province_get_advanced_province_building_private_output_size()
end
---@param value number
function PROVINCE.resize_advanced_province_building_private_output(value)
	return ffi.C.alice_province_resize_advanced_province_building_private_output(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_service_price(id, index)
	return ffi.C.alice_province_get_service_price(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_service_price(id, index, value)
	return ffi.C.alice_province_set_service_price(id, index, value)
end
---@return number
function PROVINCE.get_service_price_size()
	return ffi.C.alice_province_get_service_price_size()
end
---@param value number
function PROVINCE.resize_service_price(value)
	return ffi.C.alice_province_resize_service_price(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_service_supply_private(id, index)
	return ffi.C.alice_province_get_service_supply_private(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_service_supply_private(id, index, value)
	return ffi.C.alice_province_set_service_supply_private(id, index, value)
end
---@return number
function PROVINCE.get_service_supply_private_size()
	return ffi.C.alice_province_get_service_supply_private_size()
end
---@param value number
function PROVINCE.resize_service_supply_private(value)
	return ffi.C.alice_province_resize_service_supply_private(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_service_supply_public(id, index)
	return ffi.C.alice_province_get_service_supply_public(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_service_supply_public(id, index, value)
	return ffi.C.alice_province_set_service_supply_public(id, index, value)
end
---@return number
function PROVINCE.get_service_supply_public_size()
	return ffi.C.alice_province_get_service_supply_public_size()
end
---@param value number
function PROVINCE.resize_service_supply_public(value)
	return ffi.C.alice_province_resize_service_supply_public(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_service_demand_allowed_public_supply(id, index)
	return ffi.C.alice_province_get_service_demand_allowed_public_supply(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_service_demand_allowed_public_supply(id, index, value)
	return ffi.C.alice_province_set_service_demand_allowed_public_supply(id, index, value)
end
---@return number
function PROVINCE.get_service_demand_allowed_public_supply_size()
	return ffi.C.alice_province_get_service_demand_allowed_public_supply_size()
end
---@param value number
function PROVINCE.resize_service_demand_allowed_public_supply(value)
	return ffi.C.alice_province_resize_service_demand_allowed_public_supply(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_service_demand_forbidden_public_supply(id, index)
	return ffi.C.alice_province_get_service_demand_forbidden_public_supply(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_service_demand_forbidden_public_supply(id, index, value)
	return ffi.C.alice_province_set_service_demand_forbidden_public_supply(id, index, value)
end
---@return number
function PROVINCE.get_service_demand_forbidden_public_supply_size()
	return ffi.C.alice_province_get_service_demand_forbidden_public_supply_size()
end
---@param value number
function PROVINCE.resize_service_demand_forbidden_public_supply(value)
	return ffi.C.alice_province_resize_service_demand_forbidden_public_supply(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_service_satisfaction(id, index)
	return ffi.C.alice_province_get_service_satisfaction(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_service_satisfaction(id, index, value)
	return ffi.C.alice_province_set_service_satisfaction(id, index, value)
end
---@return number
function PROVINCE.get_service_satisfaction_size()
	return ffi.C.alice_province_get_service_satisfaction_size()
end
---@param value number
function PROVINCE.resize_service_satisfaction(value)
	return ffi.C.alice_province_resize_service_satisfaction(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_service_satisfaction_for_free(id, index)
	return ffi.C.alice_province_get_service_satisfaction_for_free(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_service_satisfaction_for_free(id, index, value)
	return ffi.C.alice_province_set_service_satisfaction_for_free(id, index, value)
end
---@return number
function PROVINCE.get_service_satisfaction_for_free_size()
	return ffi.C.alice_province_get_service_satisfaction_for_free_size()
end
---@param value number
function PROVINCE.resize_service_satisfaction_for_free(value)
	return ffi.C.alice_province_resize_service_satisfaction_for_free(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_service_sold(id, index)
	return ffi.C.alice_province_get_service_sold(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_service_sold(id, index, value)
	return ffi.C.alice_province_set_service_sold(id, index, value)
end
---@return number
function PROVINCE.get_service_sold_size()
	return ffi.C.alice_province_get_service_sold_size()
end
---@param value number
function PROVINCE.resize_service_sold(value)
	return ffi.C.alice_province_resize_service_sold(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_labor_price(id, index)
	return ffi.C.alice_province_get_labor_price(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_labor_price(id, index, value)
	return ffi.C.alice_province_set_labor_price(id, index, value)
end
---@return number
function PROVINCE.get_labor_price_size()
	return ffi.C.alice_province_get_labor_price_size()
end
---@param value number
function PROVINCE.resize_labor_price(value)
	return ffi.C.alice_province_resize_labor_price(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_labor_supply(id, index)
	return ffi.C.alice_province_get_labor_supply(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_labor_supply(id, index, value)
	return ffi.C.alice_province_set_labor_supply(id, index, value)
end
---@return number
function PROVINCE.get_labor_supply_size()
	return ffi.C.alice_province_get_labor_supply_size()
end
---@param value number
function PROVINCE.resize_labor_supply(value)
	return ffi.C.alice_province_resize_labor_supply(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_labor_demand(id, index)
	return ffi.C.alice_province_get_labor_demand(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_labor_demand(id, index, value)
	return ffi.C.alice_province_set_labor_demand(id, index, value)
end
---@return number
function PROVINCE.get_labor_demand_size()
	return ffi.C.alice_province_get_labor_demand_size()
end
---@param value number
function PROVINCE.resize_labor_demand(value)
	return ffi.C.alice_province_resize_labor_demand(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_labor_demand_satisfaction(id, index)
	return ffi.C.alice_province_get_labor_demand_satisfaction(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_labor_demand_satisfaction(id, index, value)
	return ffi.C.alice_province_set_labor_demand_satisfaction(id, index, value)
end
---@return number
function PROVINCE.get_labor_demand_satisfaction_size()
	return ffi.C.alice_province_get_labor_demand_satisfaction_size()
end
---@param value number
function PROVINCE.resize_labor_demand_satisfaction(value)
	return ffi.C.alice_province_resize_labor_demand_satisfaction(value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_labor_supply_sold(id, index)
	return ffi.C.alice_province_get_labor_supply_sold(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_labor_supply_sold(id, index, value)
	return ffi.C.alice_province_set_labor_supply_sold(id, index, value)
end
---@return number
function PROVINCE.get_labor_supply_sold_size()
	return ffi.C.alice_province_get_labor_supply_sold_size()
end
---@param value number
function PROVINCE.resize_labor_supply_sold(value)
	return ffi.C.alice_province_resize_labor_supply_sold(value)
end
---@param id province_id
---@return number
function PROVINCE.get_administration_employment_target(id)
	return ffi.C.alice_province_get_administration_employment_target(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_administration_employment_target(id, value)
	return ffi.C.alice_province_set_administration_employment_target(id, value)
end
---@param id province_id
---@param index number
---@return number
function PROVINCE.get_pop_labor_distribution(id, index)
	return ffi.C.alice_province_get_pop_labor_distribution(id, index)
end
---@param id province_id
---@param index number
---@param value number
function PROVINCE.set_pop_labor_distribution(id, index, value)
	return ffi.C.alice_province_set_pop_labor_distribution(id, index, value)
end
---@return number
function PROVINCE.get_pop_labor_distribution_size()
	return ffi.C.alice_province_get_pop_labor_distribution_size()
end
---@param value number
function PROVINCE.resize_pop_labor_distribution(value)
	return ffi.C.alice_province_resize_pop_labor_distribution(value)
end
---@param id province_id
---@return number
function PROVINCE.get_control_scale(id)
	return ffi.C.alice_province_get_control_scale(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_control_scale(id, value)
	return ffi.C.alice_province_set_control_scale(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_control_ratio(id)
	return ffi.C.alice_province_get_control_ratio(id)
end
---@param id province_id
---@param value number
function PROVINCE.set_control_ratio(id, value)
	return ffi.C.alice_province_set_control_ratio(id, value)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_province_adjacency(id)
	return ffi.C.alice_province_get_range_province_adjacency_as_connected_provinces(id)
end
---@param id province_id
---@param index number
---@return province_adjacency_id
function PROVINCE.get_item_from_range_province_adjacency(id, index)
	return ffi.C.alice_province_get_index_province_adjacency_as_connected_provinces(id, index)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_army_location(id)
	return ffi.C.alice_province_get_range_army_location_as_location(id)
end
---@param id province_id
---@param index number
---@return army_location_id
function PROVINCE.get_item_from_range_army_location(id, index)
	return ffi.C.alice_province_get_index_army_location_as_location(id, index)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_navy_location(id)
	return ffi.C.alice_province_get_range_navy_location_as_location(id)
end
---@param id province_id
---@param index number
---@return navy_location_id
function PROVINCE.get_item_from_range_navy_location(id, index)
	return ffi.C.alice_province_get_index_navy_location_as_location(id, index)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_naval_battle_location(id)
	return ffi.C.alice_province_get_range_naval_battle_location_as_location(id)
end
---@param id province_id
---@param index number
---@return naval_battle_location_id
function PROVINCE.get_item_from_range_naval_battle_location(id, index)
	return ffi.C.alice_province_get_index_naval_battle_location_as_location(id, index)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_land_battle_location(id)
	return ffi.C.alice_province_get_range_land_battle_location_as_location(id)
end
---@param id province_id
---@param index number
---@return land_battle_location_id
function PROVINCE.get_item_from_range_land_battle_location(id, index)
	return ffi.C.alice_province_get_index_land_battle_location_as_location(id, index)
end
---@param id province_id
---@return abstract_state_membership_id
function PROVINCE.get_abstract_state_membership_as_province(id)
	return ffi.C.alice_province_get_abstract_state_membership_as_province(id)
end
---@param id province_id
---@return abstract_state_membership_id
function PROVINCE.get_abstract_state_membership(id)
	return ffi.C.alice_province_get_abstract_state_membership(id)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_region_membership(id)
	return ffi.C.alice_province_get_range_region_membership_as_province(id)
end
---@param id province_id
---@param index number
---@return region_membership_id
function PROVINCE.get_item_from_range_region_membership(id, index)
	return ffi.C.alice_province_get_index_region_membership_as_province(id, index)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_core(id)
	return ffi.C.alice_province_get_range_core_as_province(id)
end
---@param id province_id
---@param index number
---@return core_id
function PROVINCE.get_item_from_range_core(id, index)
	return ffi.C.alice_province_get_index_core_as_province(id, index)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_factory_location(id)
	return ffi.C.alice_province_get_range_factory_location_as_province(id)
end
---@param id province_id
---@param index number
---@return factory_location_id
function PROVINCE.get_item_from_range_factory_location(id, index)
	return ffi.C.alice_province_get_index_factory_location_as_province(id, index)
end
---@param id province_id
---@return province_ownership_id
function PROVINCE.get_province_ownership_as_province(id)
	return ffi.C.alice_province_get_province_ownership_as_province(id)
end
---@param id province_id
---@return province_ownership_id
function PROVINCE.get_province_ownership(id)
	return ffi.C.alice_province_get_province_ownership(id)
end
---@param id province_id
---@return province_control_id
function PROVINCE.get_province_control_as_province(id)
	return ffi.C.alice_province_get_province_control_as_province(id)
end
---@param id province_id
---@return province_control_id
function PROVINCE.get_province_control(id)
	return ffi.C.alice_province_get_province_control(id)
end
---@param id province_id
---@return province_rebel_control_id
function PROVINCE.get_province_rebel_control_as_province(id)
	return ffi.C.alice_province_get_province_rebel_control_as_province(id)
end
---@param id province_id
---@return province_rebel_control_id
function PROVINCE.get_province_rebel_control(id)
	return ffi.C.alice_province_get_province_rebel_control(id)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_province_naval_construction(id)
	return ffi.C.alice_province_get_range_province_naval_construction_as_province(id)
end
---@param id province_id
---@param index number
---@return province_naval_construction_id
function PROVINCE.get_item_from_range_province_naval_construction(id, index)
	return ffi.C.alice_province_get_index_province_naval_construction_as_province(id, index)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_province_building_construction(id)
	return ffi.C.alice_province_get_range_province_building_construction_as_province(id)
end
---@param id province_id
---@param index number
---@return province_building_construction_id
function PROVINCE.get_item_from_range_province_building_construction(id, index)
	return ffi.C.alice_province_get_index_province_building_construction_as_province(id, index)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_factory_construction(id)
	return ffi.C.alice_province_get_range_factory_construction_as_province(id)
end
---@param id province_id
---@param index number
---@return factory_construction_id
function PROVINCE.get_item_from_range_factory_construction(id, index)
	return ffi.C.alice_province_get_index_factory_construction_as_province(id, index)
end
---@param id province_id
---@return number
function PROVINCE.get_range_length_pop_location(id)
	return ffi.C.alice_province_get_range_pop_location_as_province(id)
end
---@param id province_id
---@param index number
---@return pop_location_id
function PROVINCE.get_item_from_range_pop_location(id, index)
	return ffi.C.alice_province_get_index_pop_location_as_province(id, index)
end
