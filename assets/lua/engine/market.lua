-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_market_is_valid(int32_t api_arg_0_id);
uint32_t alice_market_size();
void alice_market_resize(uint32_t api_arg_0_value);
float alice_market_get_gdp(int32_t api_arg_0_id);
void alice_market_set_gdp(int32_t api_arg_0_id, float api_arg_1_value);
float alice_market_get_income_scale(int32_t api_arg_0_id);
void alice_market_set_income_scale(int32_t api_arg_0_id, float api_arg_1_value);
float alice_market_get_supply(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_supply(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_supply_size();
void alice_market_resize_supply(uint32_t api_arg_0_value);
float alice_market_get_demand(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_demand_size();
void alice_market_resize_demand(uint32_t api_arg_0_value);
float alice_market_get_intermediate_demand(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_intermediate_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_intermediate_demand_size();
void alice_market_resize_intermediate_demand(uint32_t api_arg_0_value);
float alice_market_get_consumption(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_consumption(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_consumption_size();
void alice_market_resize_consumption(uint32_t api_arg_0_value);
float alice_market_get_stockpile(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_stockpile(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_stockpile_size();
void alice_market_resize_stockpile(uint32_t api_arg_0_value);
float alice_market_get_wealth(int32_t api_arg_0_id);
void alice_market_set_wealth(int32_t api_arg_0_id, float api_arg_1_value);
float alice_market_get_price(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_price(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_price_size();
void alice_market_resize_price(uint32_t api_arg_0_value);
float alice_market_get_army_demand(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_army_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_army_demand_size();
void alice_market_resize_army_demand(uint32_t api_arg_0_value);
float alice_market_get_navy_demand(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_navy_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_navy_demand_size();
void alice_market_resize_navy_demand(uint32_t api_arg_0_value);
float alice_market_get_construction_demand(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_construction_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_construction_demand_size();
void alice_market_resize_construction_demand(uint32_t api_arg_0_value);
float alice_market_get_private_construction_demand(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_private_construction_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_private_construction_demand_size();
void alice_market_resize_private_construction_demand(uint32_t api_arg_0_value);
float alice_market_get_aggregated_demand_history(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_aggregated_demand_history(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_aggregated_demand_history_size();
void alice_market_resize_aggregated_demand_history(uint32_t api_arg_0_value);
float alice_market_get_aggregated_supply_history(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_aggregated_supply_history(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_aggregated_supply_history_size();
void alice_market_resize_aggregated_supply_history(uint32_t api_arg_0_value);
float alice_market_get_expected_probability_to_buy(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_expected_probability_to_buy(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_expected_probability_to_buy_size();
void alice_market_resize_expected_probability_to_buy(uint32_t api_arg_0_value);
float alice_market_get_actual_probability_to_buy(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_actual_probability_to_buy(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_actual_probability_to_buy_size();
void alice_market_resize_actual_probability_to_buy(uint32_t api_arg_0_value);
float alice_market_get_expected_probability_to_sell(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_expected_probability_to_sell(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_expected_probability_to_sell_size();
void alice_market_resize_expected_probability_to_sell(uint32_t api_arg_0_value);
float alice_market_get_actual_probability_to_sell(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_actual_probability_to_sell(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_actual_probability_to_sell_size();
void alice_market_resize_actual_probability_to_sell(uint32_t api_arg_0_value);
float alice_market_get_life_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_life_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_life_needs_costs_size();
void alice_market_resize_life_needs_costs(uint32_t api_arg_0_value);
float alice_market_get_everyday_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_everyday_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_everyday_needs_costs_size();
void alice_market_resize_everyday_needs_costs(uint32_t api_arg_0_value);
float alice_market_get_luxury_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_luxury_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_luxury_needs_costs_size();
void alice_market_resize_luxury_needs_costs(uint32_t api_arg_0_value);
float alice_market_get_life_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_life_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_life_needs_scale_size();
void alice_market_resize_life_needs_scale(uint32_t api_arg_0_value);
float alice_market_get_everyday_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_everyday_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_everyday_needs_scale_size();
void alice_market_resize_everyday_needs_scale(uint32_t api_arg_0_value);
float alice_market_get_luxury_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_luxury_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_luxury_needs_scale_size();
void alice_market_resize_luxury_needs_scale(uint32_t api_arg_0_value);
float alice_market_get_satisfied_ratio_of_max_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_satisfied_ratio_of_max_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_satisfied_ratio_of_max_life_needs_size();
void alice_market_resize_satisfied_ratio_of_max_life_needs(uint32_t api_arg_0_value);
float alice_market_get_satisfied_ratio_of_max_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_satisfied_ratio_of_max_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_satisfied_ratio_of_max_everyday_needs_size();
void alice_market_resize_satisfied_ratio_of_max_everyday_needs(uint32_t api_arg_0_value);
float alice_market_get_satisfied_ratio_of_max_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_satisfied_ratio_of_max_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_satisfied_ratio_of_max_luxury_needs_size();
void alice_market_resize_satisfied_ratio_of_max_luxury_needs(uint32_t api_arg_0_value);
float alice_market_get_satisfied_ratio_of_demanded_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_satisfied_ratio_of_demanded_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_satisfied_ratio_of_demanded_life_needs_size();
void alice_market_resize_satisfied_ratio_of_demanded_life_needs(uint32_t api_arg_0_value);
float alice_market_get_satisfied_ratio_of_demanded_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_satisfied_ratio_of_demanded_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_satisfied_ratio_of_demanded_everyday_needs_size();
void alice_market_resize_satisfied_ratio_of_demanded_everyday_needs(uint32_t api_arg_0_value);
float alice_market_get_satisfied_ratio_of_demanded_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_satisfied_ratio_of_demanded_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_satisfied_ratio_of_demanded_luxury_needs_size();
void alice_market_resize_satisfied_ratio_of_demanded_luxury_needs(uint32_t api_arg_0_value);
float alice_market_get_life_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_life_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_life_needs_weights_size();
void alice_market_resize_life_needs_weights(uint32_t api_arg_0_value);
float alice_market_get_everyday_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_everyday_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_everyday_needs_weights_size();
void alice_market_resize_everyday_needs_weights(uint32_t api_arg_0_value);
float alice_market_get_luxury_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_luxury_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_luxury_needs_weights_size();
void alice_market_resize_luxury_needs_weights(uint32_t api_arg_0_value);
float alice_market_get_import(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_import(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_import_size();
void alice_market_resize_import(uint32_t api_arg_0_value);
float alice_market_get_export(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_market_set_export(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_market_get_export_size();
void alice_market_resize_export(uint32_t api_arg_0_value);
float alice_market_get_tariff_collected(int32_t api_arg_0_id);
void alice_market_set_tariff_collected(int32_t api_arg_0_id, float api_arg_1_value);
float alice_market_get_max_throughput(int32_t api_arg_0_id);
void alice_market_set_max_throughput(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_market_get_local_market_as_market(int32_t api_arg_0_id);
int32_t alice_market_get_local_market(int32_t api_arg_0_id);
int32_t alice_market_get_range_trade_route_as_connected_markets(int32_t i);
int32_t alice_market_get_index_trade_route_as_connected_markets(int32_t i, int32_t subindex);
]]
MARKET = {}
---@param id market_id
---@return number
function MARKET.is_valid(id)
	return ffi.C.alice_market_is_valid(id)
end
---@return number
function MARKET.size()
	return ffi.C.alice_market_size()
end
---@param value number
function MARKET.resize(value)
	return ffi.C.alice_market_resize(value)
end
---@param id market_id
---@return number
function MARKET.get_gdp(id)
	return ffi.C.alice_market_get_gdp(id)
end
---@param id market_id
---@param value number
function MARKET.set_gdp(id, value)
	return ffi.C.alice_market_set_gdp(id, value)
end
---@param id market_id
---@return number
function MARKET.get_income_scale(id)
	return ffi.C.alice_market_get_income_scale(id)
end
---@param id market_id
---@param value number
function MARKET.set_income_scale(id, value)
	return ffi.C.alice_market_set_income_scale(id, value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_supply(id, index)
	return ffi.C.alice_market_get_supply(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_supply(id, index, value)
	return ffi.C.alice_market_set_supply(id, index, value)
end
---@return number
function MARKET.get_supply_size()
	return ffi.C.alice_market_get_supply_size()
end
---@param value number
function MARKET.resize_supply(value)
	return ffi.C.alice_market_resize_supply(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_demand(id, index)
	return ffi.C.alice_market_get_demand(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_demand(id, index, value)
	return ffi.C.alice_market_set_demand(id, index, value)
end
---@return number
function MARKET.get_demand_size()
	return ffi.C.alice_market_get_demand_size()
end
---@param value number
function MARKET.resize_demand(value)
	return ffi.C.alice_market_resize_demand(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_intermediate_demand(id, index)
	return ffi.C.alice_market_get_intermediate_demand(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_intermediate_demand(id, index, value)
	return ffi.C.alice_market_set_intermediate_demand(id, index, value)
end
---@return number
function MARKET.get_intermediate_demand_size()
	return ffi.C.alice_market_get_intermediate_demand_size()
end
---@param value number
function MARKET.resize_intermediate_demand(value)
	return ffi.C.alice_market_resize_intermediate_demand(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_consumption(id, index)
	return ffi.C.alice_market_get_consumption(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_consumption(id, index, value)
	return ffi.C.alice_market_set_consumption(id, index, value)
end
---@return number
function MARKET.get_consumption_size()
	return ffi.C.alice_market_get_consumption_size()
end
---@param value number
function MARKET.resize_consumption(value)
	return ffi.C.alice_market_resize_consumption(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_stockpile(id, index)
	return ffi.C.alice_market_get_stockpile(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_stockpile(id, index, value)
	return ffi.C.alice_market_set_stockpile(id, index, value)
end
---@return number
function MARKET.get_stockpile_size()
	return ffi.C.alice_market_get_stockpile_size()
end
---@param value number
function MARKET.resize_stockpile(value)
	return ffi.C.alice_market_resize_stockpile(value)
end
---@param id market_id
---@return number
function MARKET.get_wealth(id)
	return ffi.C.alice_market_get_wealth(id)
end
---@param id market_id
---@param value number
function MARKET.set_wealth(id, value)
	return ffi.C.alice_market_set_wealth(id, value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_price(id, index)
	return ffi.C.alice_market_get_price(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_price(id, index, value)
	return ffi.C.alice_market_set_price(id, index, value)
end
---@return number
function MARKET.get_price_size()
	return ffi.C.alice_market_get_price_size()
end
---@param value number
function MARKET.resize_price(value)
	return ffi.C.alice_market_resize_price(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_army_demand(id, index)
	return ffi.C.alice_market_get_army_demand(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_army_demand(id, index, value)
	return ffi.C.alice_market_set_army_demand(id, index, value)
end
---@return number
function MARKET.get_army_demand_size()
	return ffi.C.alice_market_get_army_demand_size()
end
---@param value number
function MARKET.resize_army_demand(value)
	return ffi.C.alice_market_resize_army_demand(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_navy_demand(id, index)
	return ffi.C.alice_market_get_navy_demand(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_navy_demand(id, index, value)
	return ffi.C.alice_market_set_navy_demand(id, index, value)
end
---@return number
function MARKET.get_navy_demand_size()
	return ffi.C.alice_market_get_navy_demand_size()
end
---@param value number
function MARKET.resize_navy_demand(value)
	return ffi.C.alice_market_resize_navy_demand(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_construction_demand(id, index)
	return ffi.C.alice_market_get_construction_demand(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_construction_demand(id, index, value)
	return ffi.C.alice_market_set_construction_demand(id, index, value)
end
---@return number
function MARKET.get_construction_demand_size()
	return ffi.C.alice_market_get_construction_demand_size()
end
---@param value number
function MARKET.resize_construction_demand(value)
	return ffi.C.alice_market_resize_construction_demand(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_private_construction_demand(id, index)
	return ffi.C.alice_market_get_private_construction_demand(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_private_construction_demand(id, index, value)
	return ffi.C.alice_market_set_private_construction_demand(id, index, value)
end
---@return number
function MARKET.get_private_construction_demand_size()
	return ffi.C.alice_market_get_private_construction_demand_size()
end
---@param value number
function MARKET.resize_private_construction_demand(value)
	return ffi.C.alice_market_resize_private_construction_demand(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_aggregated_demand_history(id, index)
	return ffi.C.alice_market_get_aggregated_demand_history(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_aggregated_demand_history(id, index, value)
	return ffi.C.alice_market_set_aggregated_demand_history(id, index, value)
end
---@return number
function MARKET.get_aggregated_demand_history_size()
	return ffi.C.alice_market_get_aggregated_demand_history_size()
end
---@param value number
function MARKET.resize_aggregated_demand_history(value)
	return ffi.C.alice_market_resize_aggregated_demand_history(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_aggregated_supply_history(id, index)
	return ffi.C.alice_market_get_aggregated_supply_history(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_aggregated_supply_history(id, index, value)
	return ffi.C.alice_market_set_aggregated_supply_history(id, index, value)
end
---@return number
function MARKET.get_aggregated_supply_history_size()
	return ffi.C.alice_market_get_aggregated_supply_history_size()
end
---@param value number
function MARKET.resize_aggregated_supply_history(value)
	return ffi.C.alice_market_resize_aggregated_supply_history(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_expected_probability_to_buy(id, index)
	return ffi.C.alice_market_get_expected_probability_to_buy(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_expected_probability_to_buy(id, index, value)
	return ffi.C.alice_market_set_expected_probability_to_buy(id, index, value)
end
---@return number
function MARKET.get_expected_probability_to_buy_size()
	return ffi.C.alice_market_get_expected_probability_to_buy_size()
end
---@param value number
function MARKET.resize_expected_probability_to_buy(value)
	return ffi.C.alice_market_resize_expected_probability_to_buy(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_actual_probability_to_buy(id, index)
	return ffi.C.alice_market_get_actual_probability_to_buy(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_actual_probability_to_buy(id, index, value)
	return ffi.C.alice_market_set_actual_probability_to_buy(id, index, value)
end
---@return number
function MARKET.get_actual_probability_to_buy_size()
	return ffi.C.alice_market_get_actual_probability_to_buy_size()
end
---@param value number
function MARKET.resize_actual_probability_to_buy(value)
	return ffi.C.alice_market_resize_actual_probability_to_buy(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_expected_probability_to_sell(id, index)
	return ffi.C.alice_market_get_expected_probability_to_sell(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_expected_probability_to_sell(id, index, value)
	return ffi.C.alice_market_set_expected_probability_to_sell(id, index, value)
end
---@return number
function MARKET.get_expected_probability_to_sell_size()
	return ffi.C.alice_market_get_expected_probability_to_sell_size()
end
---@param value number
function MARKET.resize_expected_probability_to_sell(value)
	return ffi.C.alice_market_resize_expected_probability_to_sell(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_actual_probability_to_sell(id, index)
	return ffi.C.alice_market_get_actual_probability_to_sell(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_actual_probability_to_sell(id, index, value)
	return ffi.C.alice_market_set_actual_probability_to_sell(id, index, value)
end
---@return number
function MARKET.get_actual_probability_to_sell_size()
	return ffi.C.alice_market_get_actual_probability_to_sell_size()
end
---@param value number
function MARKET.resize_actual_probability_to_sell(value)
	return ffi.C.alice_market_resize_actual_probability_to_sell(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_life_needs_costs(id, index)
	return ffi.C.alice_market_get_life_needs_costs(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_life_needs_costs(id, index, value)
	return ffi.C.alice_market_set_life_needs_costs(id, index, value)
end
---@return number
function MARKET.get_life_needs_costs_size()
	return ffi.C.alice_market_get_life_needs_costs_size()
end
---@param value number
function MARKET.resize_life_needs_costs(value)
	return ffi.C.alice_market_resize_life_needs_costs(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_everyday_needs_costs(id, index)
	return ffi.C.alice_market_get_everyday_needs_costs(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_everyday_needs_costs(id, index, value)
	return ffi.C.alice_market_set_everyday_needs_costs(id, index, value)
end
---@return number
function MARKET.get_everyday_needs_costs_size()
	return ffi.C.alice_market_get_everyday_needs_costs_size()
end
---@param value number
function MARKET.resize_everyday_needs_costs(value)
	return ffi.C.alice_market_resize_everyday_needs_costs(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_luxury_needs_costs(id, index)
	return ffi.C.alice_market_get_luxury_needs_costs(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_luxury_needs_costs(id, index, value)
	return ffi.C.alice_market_set_luxury_needs_costs(id, index, value)
end
---@return number
function MARKET.get_luxury_needs_costs_size()
	return ffi.C.alice_market_get_luxury_needs_costs_size()
end
---@param value number
function MARKET.resize_luxury_needs_costs(value)
	return ffi.C.alice_market_resize_luxury_needs_costs(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_life_needs_scale(id, index)
	return ffi.C.alice_market_get_life_needs_scale(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_life_needs_scale(id, index, value)
	return ffi.C.alice_market_set_life_needs_scale(id, index, value)
end
---@return number
function MARKET.get_life_needs_scale_size()
	return ffi.C.alice_market_get_life_needs_scale_size()
end
---@param value number
function MARKET.resize_life_needs_scale(value)
	return ffi.C.alice_market_resize_life_needs_scale(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_everyday_needs_scale(id, index)
	return ffi.C.alice_market_get_everyday_needs_scale(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_everyday_needs_scale(id, index, value)
	return ffi.C.alice_market_set_everyday_needs_scale(id, index, value)
end
---@return number
function MARKET.get_everyday_needs_scale_size()
	return ffi.C.alice_market_get_everyday_needs_scale_size()
end
---@param value number
function MARKET.resize_everyday_needs_scale(value)
	return ffi.C.alice_market_resize_everyday_needs_scale(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_luxury_needs_scale(id, index)
	return ffi.C.alice_market_get_luxury_needs_scale(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_luxury_needs_scale(id, index, value)
	return ffi.C.alice_market_set_luxury_needs_scale(id, index, value)
end
---@return number
function MARKET.get_luxury_needs_scale_size()
	return ffi.C.alice_market_get_luxury_needs_scale_size()
end
---@param value number
function MARKET.resize_luxury_needs_scale(value)
	return ffi.C.alice_market_resize_luxury_needs_scale(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_satisfied_ratio_of_max_life_needs(id, index)
	return ffi.C.alice_market_get_satisfied_ratio_of_max_life_needs(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_satisfied_ratio_of_max_life_needs(id, index, value)
	return ffi.C.alice_market_set_satisfied_ratio_of_max_life_needs(id, index, value)
end
---@return number
function MARKET.get_satisfied_ratio_of_max_life_needs_size()
	return ffi.C.alice_market_get_satisfied_ratio_of_max_life_needs_size()
end
---@param value number
function MARKET.resize_satisfied_ratio_of_max_life_needs(value)
	return ffi.C.alice_market_resize_satisfied_ratio_of_max_life_needs(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_satisfied_ratio_of_max_everyday_needs(id, index)
	return ffi.C.alice_market_get_satisfied_ratio_of_max_everyday_needs(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_satisfied_ratio_of_max_everyday_needs(id, index, value)
	return ffi.C.alice_market_set_satisfied_ratio_of_max_everyday_needs(id, index, value)
end
---@return number
function MARKET.get_satisfied_ratio_of_max_everyday_needs_size()
	return ffi.C.alice_market_get_satisfied_ratio_of_max_everyday_needs_size()
end
---@param value number
function MARKET.resize_satisfied_ratio_of_max_everyday_needs(value)
	return ffi.C.alice_market_resize_satisfied_ratio_of_max_everyday_needs(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_satisfied_ratio_of_max_luxury_needs(id, index)
	return ffi.C.alice_market_get_satisfied_ratio_of_max_luxury_needs(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_satisfied_ratio_of_max_luxury_needs(id, index, value)
	return ffi.C.alice_market_set_satisfied_ratio_of_max_luxury_needs(id, index, value)
end
---@return number
function MARKET.get_satisfied_ratio_of_max_luxury_needs_size()
	return ffi.C.alice_market_get_satisfied_ratio_of_max_luxury_needs_size()
end
---@param value number
function MARKET.resize_satisfied_ratio_of_max_luxury_needs(value)
	return ffi.C.alice_market_resize_satisfied_ratio_of_max_luxury_needs(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_satisfied_ratio_of_demanded_life_needs(id, index)
	return ffi.C.alice_market_get_satisfied_ratio_of_demanded_life_needs(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_satisfied_ratio_of_demanded_life_needs(id, index, value)
	return ffi.C.alice_market_set_satisfied_ratio_of_demanded_life_needs(id, index, value)
end
---@return number
function MARKET.get_satisfied_ratio_of_demanded_life_needs_size()
	return ffi.C.alice_market_get_satisfied_ratio_of_demanded_life_needs_size()
end
---@param value number
function MARKET.resize_satisfied_ratio_of_demanded_life_needs(value)
	return ffi.C.alice_market_resize_satisfied_ratio_of_demanded_life_needs(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_satisfied_ratio_of_demanded_everyday_needs(id, index)
	return ffi.C.alice_market_get_satisfied_ratio_of_demanded_everyday_needs(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_satisfied_ratio_of_demanded_everyday_needs(id, index, value)
	return ffi.C.alice_market_set_satisfied_ratio_of_demanded_everyday_needs(id, index, value)
end
---@return number
function MARKET.get_satisfied_ratio_of_demanded_everyday_needs_size()
	return ffi.C.alice_market_get_satisfied_ratio_of_demanded_everyday_needs_size()
end
---@param value number
function MARKET.resize_satisfied_ratio_of_demanded_everyday_needs(value)
	return ffi.C.alice_market_resize_satisfied_ratio_of_demanded_everyday_needs(value)
end
---@param id market_id
---@param index pop_type_id
---@return number
function MARKET.get_satisfied_ratio_of_demanded_luxury_needs(id, index)
	return ffi.C.alice_market_get_satisfied_ratio_of_demanded_luxury_needs(id, index)
end
---@param id market_id
---@param index pop_type_id
---@param value number
function MARKET.set_satisfied_ratio_of_demanded_luxury_needs(id, index, value)
	return ffi.C.alice_market_set_satisfied_ratio_of_demanded_luxury_needs(id, index, value)
end
---@return number
function MARKET.get_satisfied_ratio_of_demanded_luxury_needs_size()
	return ffi.C.alice_market_get_satisfied_ratio_of_demanded_luxury_needs_size()
end
---@param value number
function MARKET.resize_satisfied_ratio_of_demanded_luxury_needs(value)
	return ffi.C.alice_market_resize_satisfied_ratio_of_demanded_luxury_needs(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_life_needs_weights(id, index)
	return ffi.C.alice_market_get_life_needs_weights(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_life_needs_weights(id, index, value)
	return ffi.C.alice_market_set_life_needs_weights(id, index, value)
end
---@return number
function MARKET.get_life_needs_weights_size()
	return ffi.C.alice_market_get_life_needs_weights_size()
end
---@param value number
function MARKET.resize_life_needs_weights(value)
	return ffi.C.alice_market_resize_life_needs_weights(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_everyday_needs_weights(id, index)
	return ffi.C.alice_market_get_everyday_needs_weights(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_everyday_needs_weights(id, index, value)
	return ffi.C.alice_market_set_everyday_needs_weights(id, index, value)
end
---@return number
function MARKET.get_everyday_needs_weights_size()
	return ffi.C.alice_market_get_everyday_needs_weights_size()
end
---@param value number
function MARKET.resize_everyday_needs_weights(value)
	return ffi.C.alice_market_resize_everyday_needs_weights(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_luxury_needs_weights(id, index)
	return ffi.C.alice_market_get_luxury_needs_weights(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_luxury_needs_weights(id, index, value)
	return ffi.C.alice_market_set_luxury_needs_weights(id, index, value)
end
---@return number
function MARKET.get_luxury_needs_weights_size()
	return ffi.C.alice_market_get_luxury_needs_weights_size()
end
---@param value number
function MARKET.resize_luxury_needs_weights(value)
	return ffi.C.alice_market_resize_luxury_needs_weights(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_import(id, index)
	return ffi.C.alice_market_get_import(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_import(id, index, value)
	return ffi.C.alice_market_set_import(id, index, value)
end
---@return number
function MARKET.get_import_size()
	return ffi.C.alice_market_get_import_size()
end
---@param value number
function MARKET.resize_import(value)
	return ffi.C.alice_market_resize_import(value)
end
---@param id market_id
---@param index commodity_id
---@return number
function MARKET.get_export(id, index)
	return ffi.C.alice_market_get_export(id, index)
end
---@param id market_id
---@param index commodity_id
---@param value number
function MARKET.set_export(id, index, value)
	return ffi.C.alice_market_set_export(id, index, value)
end
---@return number
function MARKET.get_export_size()
	return ffi.C.alice_market_get_export_size()
end
---@param value number
function MARKET.resize_export(value)
	return ffi.C.alice_market_resize_export(value)
end
---@param id market_id
---@return number
function MARKET.get_tariff_collected(id)
	return ffi.C.alice_market_get_tariff_collected(id)
end
---@param id market_id
---@param value number
function MARKET.set_tariff_collected(id, value)
	return ffi.C.alice_market_set_tariff_collected(id, value)
end
---@param id market_id
---@return number
function MARKET.get_max_throughput(id)
	return ffi.C.alice_market_get_max_throughput(id)
end
---@param id market_id
---@param value number
function MARKET.set_max_throughput(id, value)
	return ffi.C.alice_market_set_max_throughput(id, value)
end
---@param id market_id
---@return local_market_id
function MARKET.get_local_market_as_market(id)
	return ffi.C.alice_market_get_local_market_as_market(id)
end
---@param id market_id
---@return local_market_id
function MARKET.get_local_market(id)
	return ffi.C.alice_market_get_local_market(id)
end
---@param id market_id
---@return number
function MARKET.get_range_length_trade_route(id)
	return ffi.C.alice_market_get_range_trade_route_as_connected_markets(id)
end
---@param id market_id
---@param index number
---@return trade_route_id
function MARKET.get_item_from_range_trade_route(id, index)
	return ffi.C.alice_market_get_index_trade_route_as_connected_markets(id, index)
end
