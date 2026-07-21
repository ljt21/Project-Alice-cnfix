-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_factory_is_valid(int32_t api_arg_0_id);
uint32_t alice_factory_size();
void alice_factory_resize(uint32_t api_arg_0_value);
int32_t alice_factory_get_building_type(int32_t api_arg_0_id);
void alice_factory_set_building_type(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_factory_get_priority_low(int32_t api_arg_0_id);
void alice_factory_set_priority_low(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_factory_get_priority_high(int32_t api_arg_0_id);
void alice_factory_set_priority_high(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_factory_get_subsidized(int32_t api_arg_0_id);
void alice_factory_set_subsidized(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_factory_get_unprofitable(int32_t api_arg_0_id);
void alice_factory_set_unprofitable(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_factory_get_size(int32_t api_arg_0_id);
void alice_factory_set_size(int32_t api_arg_0_id, float api_arg_1_value);
float alice_factory_get_unqualified_employment(int32_t api_arg_0_id);
void alice_factory_set_unqualified_employment(int32_t api_arg_0_id, float api_arg_1_value);
float alice_factory_get_primary_employment(int32_t api_arg_0_id);
void alice_factory_set_primary_employment(int32_t api_arg_0_id, float api_arg_1_value);
float alice_factory_get_secondary_employment(int32_t api_arg_0_id);
void alice_factory_set_secondary_employment(int32_t api_arg_0_id, float api_arg_1_value);
float alice_factory_get_efficiency_level(int32_t api_arg_0_id, uint8_t api_arg_1_value);
void alice_factory_set_efficiency_level(int32_t api_arg_0_id, uint8_t api_arg_1_value, float api_arg_2_value);
uint32_t alice_factory_get_efficiency_level_size();
void alice_factory_resize_efficiency_level(uint32_t api_arg_0_value);
float alice_factory_get_technology_scale(int32_t api_arg_0_id);
void alice_factory_set_technology_scale(int32_t api_arg_0_id, float api_arg_1_value);
float alice_factory_get_profit(int32_t api_arg_0_id);
void alice_factory_set_profit(int32_t api_arg_0_id, float api_arg_1_value);
float alice_factory_get_triggered_modifiers(int32_t api_arg_0_id);
void alice_factory_set_triggered_modifiers(int32_t api_arg_0_id, float api_arg_1_value);
float alice_factory_get_output(int32_t api_arg_0_id);
void alice_factory_set_output(int32_t api_arg_0_id, float api_arg_1_value);
float alice_factory_get_output_per_worker(int32_t api_arg_0_id);
void alice_factory_set_output_per_worker(int32_t api_arg_0_id, float api_arg_1_value);
float alice_factory_get_input_cost(int32_t api_arg_0_id);
void alice_factory_set_input_cost(int32_t api_arg_0_id, float api_arg_1_value);
float alice_factory_get_input_cost_per_worker(int32_t api_arg_0_id);
void alice_factory_set_input_cost_per_worker(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_factory_get_factory_location_as_factory(int32_t api_arg_0_id);
int32_t alice_factory_get_factory_location(int32_t api_arg_0_id);
]]
FACTORY = {}
---@param id factory_id
---@return number
function FACTORY.is_valid(id)
	return ffi.C.alice_factory_is_valid(id)
end
---@return number
function FACTORY.size()
	return ffi.C.alice_factory_size()
end
---@param value number
function FACTORY.resize(value)
	return ffi.C.alice_factory_resize(value)
end
---@param id factory_id
---@return factory_type_id
function FACTORY.get_building_type(id)
	return ffi.C.alice_factory_get_building_type(id)
end
---@param id factory_id
---@param value factory_type_id
function FACTORY.set_building_type(id, value)
	return ffi.C.alice_factory_set_building_type(id, value)
end
---@param id factory_id
---@return boolean
function FACTORY.get_priority_low(id)
	return ffi.C.alice_factory_get_priority_low(id)
end
---@param id factory_id
---@param value boolean
function FACTORY.set_priority_low(id, value)
	return ffi.C.alice_factory_set_priority_low(id, value)
end
---@param id factory_id
---@return boolean
function FACTORY.get_priority_high(id)
	return ffi.C.alice_factory_get_priority_high(id)
end
---@param id factory_id
---@param value boolean
function FACTORY.set_priority_high(id, value)
	return ffi.C.alice_factory_set_priority_high(id, value)
end
---@param id factory_id
---@return boolean
function FACTORY.get_subsidized(id)
	return ffi.C.alice_factory_get_subsidized(id)
end
---@param id factory_id
---@param value boolean
function FACTORY.set_subsidized(id, value)
	return ffi.C.alice_factory_set_subsidized(id, value)
end
---@param id factory_id
---@return boolean
function FACTORY.get_unprofitable(id)
	return ffi.C.alice_factory_get_unprofitable(id)
end
---@param id factory_id
---@param value boolean
function FACTORY.set_unprofitable(id, value)
	return ffi.C.alice_factory_set_unprofitable(id, value)
end
---@param id factory_id
---@return number
function FACTORY.get_size(id)
	return ffi.C.alice_factory_get_size(id)
end
---@param id factory_id
---@param value number
function FACTORY.set_size(id, value)
	return ffi.C.alice_factory_set_size(id, value)
end
---@param id factory_id
---@return number
function FACTORY.get_unqualified_employment(id)
	return ffi.C.alice_factory_get_unqualified_employment(id)
end
---@param id factory_id
---@param value number
function FACTORY.set_unqualified_employment(id, value)
	return ffi.C.alice_factory_set_unqualified_employment(id, value)
end
---@param id factory_id
---@return number
function FACTORY.get_primary_employment(id)
	return ffi.C.alice_factory_get_primary_employment(id)
end
---@param id factory_id
---@param value number
function FACTORY.set_primary_employment(id, value)
	return ffi.C.alice_factory_set_primary_employment(id, value)
end
---@param id factory_id
---@return number
function FACTORY.get_secondary_employment(id)
	return ffi.C.alice_factory_get_secondary_employment(id)
end
---@param id factory_id
---@param value number
function FACTORY.set_secondary_employment(id, value)
	return ffi.C.alice_factory_set_secondary_employment(id, value)
end
---@param id factory_id
---@param index number
---@return number
function FACTORY.get_efficiency_level(id, index)
	return ffi.C.alice_factory_get_efficiency_level(id, index)
end
---@param id factory_id
---@param index number
---@param value number
function FACTORY.set_efficiency_level(id, index, value)
	return ffi.C.alice_factory_set_efficiency_level(id, index, value)
end
---@return number
function FACTORY.get_efficiency_level_size()
	return ffi.C.alice_factory_get_efficiency_level_size()
end
---@param value number
function FACTORY.resize_efficiency_level(value)
	return ffi.C.alice_factory_resize_efficiency_level(value)
end
---@param id factory_id
---@return number
function FACTORY.get_technology_scale(id)
	return ffi.C.alice_factory_get_technology_scale(id)
end
---@param id factory_id
---@param value number
function FACTORY.set_technology_scale(id, value)
	return ffi.C.alice_factory_set_technology_scale(id, value)
end
---@param id factory_id
---@return number
function FACTORY.get_profit(id)
	return ffi.C.alice_factory_get_profit(id)
end
---@param id factory_id
---@param value number
function FACTORY.set_profit(id, value)
	return ffi.C.alice_factory_set_profit(id, value)
end
---@param id factory_id
---@return number
function FACTORY.get_triggered_modifiers(id)
	return ffi.C.alice_factory_get_triggered_modifiers(id)
end
---@param id factory_id
---@param value number
function FACTORY.set_triggered_modifiers(id, value)
	return ffi.C.alice_factory_set_triggered_modifiers(id, value)
end
---@param id factory_id
---@return number
function FACTORY.get_output(id)
	return ffi.C.alice_factory_get_output(id)
end
---@param id factory_id
---@param value number
function FACTORY.set_output(id, value)
	return ffi.C.alice_factory_set_output(id, value)
end
---@param id factory_id
---@return number
function FACTORY.get_output_per_worker(id)
	return ffi.C.alice_factory_get_output_per_worker(id)
end
---@param id factory_id
---@param value number
function FACTORY.set_output_per_worker(id, value)
	return ffi.C.alice_factory_set_output_per_worker(id, value)
end
---@param id factory_id
---@return number
function FACTORY.get_input_cost(id)
	return ffi.C.alice_factory_get_input_cost(id)
end
---@param id factory_id
---@param value number
function FACTORY.set_input_cost(id, value)
	return ffi.C.alice_factory_set_input_cost(id, value)
end
---@param id factory_id
---@return number
function FACTORY.get_input_cost_per_worker(id)
	return ffi.C.alice_factory_get_input_cost_per_worker(id)
end
---@param id factory_id
---@param value number
function FACTORY.set_input_cost_per_worker(id, value)
	return ffi.C.alice_factory_set_input_cost_per_worker(id, value)
end
---@param id factory_id
---@return factory_location_id
function FACTORY.get_factory_location_as_factory(id)
	return ffi.C.alice_factory_get_factory_location_as_factory(id)
end
---@param id factory_id
---@return factory_location_id
function FACTORY.get_factory_location(id)
	return ffi.C.alice_factory_get_factory_location(id)
end
