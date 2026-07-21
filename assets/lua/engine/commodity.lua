-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_commodity_is_valid(int32_t api_arg_0_id);
uint32_t alice_commodity_size();
void alice_commodity_resize(uint32_t api_arg_0_value);
int32_t alice_commodity_get_name(int32_t api_arg_0_id);
void alice_commodity_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint32_t alice_commodity_get_color(int32_t api_arg_0_id);
void alice_commodity_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value);
float alice_commodity_get_cost(int32_t api_arg_0_id);
void alice_commodity_set_cost(int32_t api_arg_0_id, float api_arg_1_value);
float alice_commodity_get_median_price(int32_t api_arg_0_id);
void alice_commodity_set_median_price(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_commodity_get_actually_exists_in_nature(int32_t api_arg_0_id);
void alice_commodity_set_actually_exists_in_nature(int32_t api_arg_0_id, bool api_arg_1_value);
uint8_t alice_commodity_get_commodity_group(int32_t api_arg_0_id);
void alice_commodity_set_commodity_group(int32_t api_arg_0_id, uint8_t api_arg_1_value);
bool alice_commodity_get_is_available_from_start(int32_t api_arg_0_id);
void alice_commodity_set_is_available_from_start(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_commodity_get_is_local(int32_t api_arg_0_id);
void alice_commodity_set_is_local(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_commodity_get_money_rgo(int32_t api_arg_0_id);
void alice_commodity_set_money_rgo(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_commodity_get_is_mine(int32_t api_arg_0_id);
void alice_commodity_set_is_mine(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_commodity_get_overseas_penalty(int32_t api_arg_0_id);
void alice_commodity_set_overseas_penalty(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_commodity_get_rgo_amount(int32_t api_arg_0_id);
void alice_commodity_set_rgo_amount(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_commodity_get_rgo_workforce(int32_t api_arg_0_id);
void alice_commodity_set_rgo_workforce(int32_t api_arg_0_id, int32_t api_arg_1_value);
bool alice_commodity_get_rgo_efficiency_inputs_are_defined_in_content(int32_t api_arg_0_id);
void alice_commodity_set_rgo_efficiency_inputs_are_defined_in_content(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_commodity_get_artisan_output_amount(int32_t api_arg_0_id);
void alice_commodity_set_artisan_output_amount(int32_t api_arg_0_id, float api_arg_1_value);
uint8_t alice_commodity_get_icon(int32_t api_arg_0_id);
void alice_commodity_set_icon(int32_t api_arg_0_id, uint8_t api_arg_1_value);
float alice_commodity_get_producer_payout_fraction(int32_t api_arg_0_id);
void alice_commodity_set_producer_payout_fraction(int32_t api_arg_0_id, float api_arg_1_value);
float alice_commodity_get_price_record(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_commodity_set_price_record(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_commodity_get_price_record_size();
void alice_commodity_resize_price_record(uint32_t api_arg_0_value);
bool alice_commodity_get_is_life_need(int32_t api_arg_0_id);
void alice_commodity_set_is_life_need(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_commodity_get_is_everyday_need(int32_t api_arg_0_id);
void alice_commodity_set_is_everyday_need(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_commodity_get_is_luxury_need(int32_t api_arg_0_id);
void alice_commodity_set_is_luxury_need(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_commodity_get_uses_potentials(int32_t api_arg_0_id);
void alice_commodity_set_uses_potentials(int32_t api_arg_0_id, bool api_arg_1_value);
]]
COMMODITY = {}
---@param id commodity_id
---@return number
function COMMODITY.is_valid(id)
	return ffi.C.alice_commodity_is_valid(id)
end
---@return number
function COMMODITY.size()
	return ffi.C.alice_commodity_size()
end
---@param value number
function COMMODITY.resize(value)
	return ffi.C.alice_commodity_resize(value)
end
---@param id commodity_id
---@return text_key
function COMMODITY.get_name(id)
	return ffi.C.alice_commodity_get_name(id)
end
---@param id commodity_id
---@param value text_key
function COMMODITY.set_name(id, value)
	return ffi.C.alice_commodity_set_name(id, value)
end
---@param id commodity_id
---@return number
function COMMODITY.get_color(id)
	return ffi.C.alice_commodity_get_color(id)
end
---@param id commodity_id
---@param value number
function COMMODITY.set_color(id, value)
	return ffi.C.alice_commodity_set_color(id, value)
end
---@param id commodity_id
---@return number
function COMMODITY.get_cost(id)
	return ffi.C.alice_commodity_get_cost(id)
end
---@param id commodity_id
---@param value number
function COMMODITY.set_cost(id, value)
	return ffi.C.alice_commodity_set_cost(id, value)
end
---@param id commodity_id
---@return number
function COMMODITY.get_median_price(id)
	return ffi.C.alice_commodity_get_median_price(id)
end
---@param id commodity_id
---@param value number
function COMMODITY.set_median_price(id, value)
	return ffi.C.alice_commodity_set_median_price(id, value)
end
---@param id commodity_id
---@return boolean
function COMMODITY.get_actually_exists_in_nature(id)
	return ffi.C.alice_commodity_get_actually_exists_in_nature(id)
end
---@param id commodity_id
---@param value boolean
function COMMODITY.set_actually_exists_in_nature(id, value)
	return ffi.C.alice_commodity_set_actually_exists_in_nature(id, value)
end
---@param id commodity_id
---@return number
function COMMODITY.get_commodity_group(id)
	return ffi.C.alice_commodity_get_commodity_group(id)
end
---@param id commodity_id
---@param value number
function COMMODITY.set_commodity_group(id, value)
	return ffi.C.alice_commodity_set_commodity_group(id, value)
end
---@param id commodity_id
---@return boolean
function COMMODITY.get_is_available_from_start(id)
	return ffi.C.alice_commodity_get_is_available_from_start(id)
end
---@param id commodity_id
---@param value boolean
function COMMODITY.set_is_available_from_start(id, value)
	return ffi.C.alice_commodity_set_is_available_from_start(id, value)
end
---@param id commodity_id
---@return boolean
function COMMODITY.get_is_local(id)
	return ffi.C.alice_commodity_get_is_local(id)
end
---@param id commodity_id
---@param value boolean
function COMMODITY.set_is_local(id, value)
	return ffi.C.alice_commodity_set_is_local(id, value)
end
---@param id commodity_id
---@return boolean
function COMMODITY.get_money_rgo(id)
	return ffi.C.alice_commodity_get_money_rgo(id)
end
---@param id commodity_id
---@param value boolean
function COMMODITY.set_money_rgo(id, value)
	return ffi.C.alice_commodity_set_money_rgo(id, value)
end
---@param id commodity_id
---@return boolean
function COMMODITY.get_is_mine(id)
	return ffi.C.alice_commodity_get_is_mine(id)
end
---@param id commodity_id
---@param value boolean
function COMMODITY.set_is_mine(id, value)
	return ffi.C.alice_commodity_set_is_mine(id, value)
end
---@param id commodity_id
---@return boolean
function COMMODITY.get_overseas_penalty(id)
	return ffi.C.alice_commodity_get_overseas_penalty(id)
end
---@param id commodity_id
---@param value boolean
function COMMODITY.set_overseas_penalty(id, value)
	return ffi.C.alice_commodity_set_overseas_penalty(id, value)
end
---@param id commodity_id
---@return number
function COMMODITY.get_rgo_amount(id)
	return ffi.C.alice_commodity_get_rgo_amount(id)
end
---@param id commodity_id
---@param value number
function COMMODITY.set_rgo_amount(id, value)
	return ffi.C.alice_commodity_set_rgo_amount(id, value)
end
---@param id commodity_id
---@return number
function COMMODITY.get_rgo_workforce(id)
	return ffi.C.alice_commodity_get_rgo_workforce(id)
end
---@param id commodity_id
---@param value number
function COMMODITY.set_rgo_workforce(id, value)
	return ffi.C.alice_commodity_set_rgo_workforce(id, value)
end
---@param id commodity_id
---@return boolean
function COMMODITY.get_rgo_efficiency_inputs_are_defined_in_content(id)
	return ffi.C.alice_commodity_get_rgo_efficiency_inputs_are_defined_in_content(id)
end
---@param id commodity_id
---@param value boolean
function COMMODITY.set_rgo_efficiency_inputs_are_defined_in_content(id, value)
	return ffi.C.alice_commodity_set_rgo_efficiency_inputs_are_defined_in_content(id, value)
end
---@param id commodity_id
---@return number
function COMMODITY.get_artisan_output_amount(id)
	return ffi.C.alice_commodity_get_artisan_output_amount(id)
end
---@param id commodity_id
---@param value number
function COMMODITY.set_artisan_output_amount(id, value)
	return ffi.C.alice_commodity_set_artisan_output_amount(id, value)
end
---@param id commodity_id
---@return number
function COMMODITY.get_icon(id)
	return ffi.C.alice_commodity_get_icon(id)
end
---@param id commodity_id
---@param value number
function COMMODITY.set_icon(id, value)
	return ffi.C.alice_commodity_set_icon(id, value)
end
---@param id commodity_id
---@return number
function COMMODITY.get_producer_payout_fraction(id)
	return ffi.C.alice_commodity_get_producer_payout_fraction(id)
end
---@param id commodity_id
---@param value number
function COMMODITY.set_producer_payout_fraction(id, value)
	return ffi.C.alice_commodity_set_producer_payout_fraction(id, value)
end
---@param id commodity_id
---@param index number
---@return number
function COMMODITY.get_price_record(id, index)
	return ffi.C.alice_commodity_get_price_record(id, index)
end
---@param id commodity_id
---@param index number
---@param value number
function COMMODITY.set_price_record(id, index, value)
	return ffi.C.alice_commodity_set_price_record(id, index, value)
end
---@return number
function COMMODITY.get_price_record_size()
	return ffi.C.alice_commodity_get_price_record_size()
end
---@param value number
function COMMODITY.resize_price_record(value)
	return ffi.C.alice_commodity_resize_price_record(value)
end
---@param id commodity_id
---@return boolean
function COMMODITY.get_is_life_need(id)
	return ffi.C.alice_commodity_get_is_life_need(id)
end
---@param id commodity_id
---@param value boolean
function COMMODITY.set_is_life_need(id, value)
	return ffi.C.alice_commodity_set_is_life_need(id, value)
end
---@param id commodity_id
---@return boolean
function COMMODITY.get_is_everyday_need(id)
	return ffi.C.alice_commodity_get_is_everyday_need(id)
end
---@param id commodity_id
---@param value boolean
function COMMODITY.set_is_everyday_need(id, value)
	return ffi.C.alice_commodity_set_is_everyday_need(id, value)
end
---@param id commodity_id
---@return boolean
function COMMODITY.get_is_luxury_need(id)
	return ffi.C.alice_commodity_get_is_luxury_need(id)
end
---@param id commodity_id
---@param value boolean
function COMMODITY.set_is_luxury_need(id, value)
	return ffi.C.alice_commodity_set_is_luxury_need(id, value)
end
---@param id commodity_id
---@return boolean
function COMMODITY.get_uses_potentials(id)
	return ffi.C.alice_commodity_get_uses_potentials(id)
end
---@param id commodity_id
---@param value boolean
function COMMODITY.set_uses_potentials(id, value)
	return ffi.C.alice_commodity_set_uses_potentials(id, value)
end
