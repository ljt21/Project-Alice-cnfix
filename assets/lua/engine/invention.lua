-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_invention_is_valid(int32_t api_arg_0_id);
uint32_t alice_invention_size();
void alice_invention_resize(uint32_t api_arg_0_value);
int32_t alice_invention_get_name(int32_t api_arg_0_id);
void alice_invention_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_invention_get_desc(int32_t api_arg_0_id);
void alice_invention_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint8_t alice_invention_get_technology_type(int32_t api_arg_0_id);
void alice_invention_set_technology_type(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int16_t alice_invention_get_colonial_points(int32_t api_arg_0_id);
void alice_invention_set_colonial_points(int32_t api_arg_0_id, int16_t api_arg_1_value);
uint32_t alice_invention_get_increase_building_size();
void alice_invention_resize_increase_building(uint32_t api_arg_0_value);
int32_t alice_invention_get_modifier(int32_t api_arg_0_id);
void alice_invention_set_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_invention_get_chance(int32_t api_arg_0_id);
void alice_invention_set_chance(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_invention_get_limit(int32_t api_arg_0_id);
void alice_invention_set_limit(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_invention_get_enable_gas_attack(int32_t api_arg_0_id);
void alice_invention_set_enable_gas_attack(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_invention_get_enable_gas_defense(int32_t api_arg_0_id);
void alice_invention_set_enable_gas_defense(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_invention_get_shared_prestige(int32_t api_arg_0_id);
void alice_invention_set_shared_prestige(int32_t api_arg_0_id, float api_arg_1_value);
float alice_invention_get_plurality(int32_t api_arg_0_id);
void alice_invention_set_plurality(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_invention_get_activate_unit(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_invention_set_activate_unit(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_invention_get_activate_unit_size();
void alice_invention_resize_activate_unit(uint32_t api_arg_0_value);
bool alice_invention_get_activate_crime(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_invention_set_activate_crime(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_invention_get_activate_crime_size();
void alice_invention_resize_activate_crime(uint32_t api_arg_0_value);
bool alice_invention_get_activate_building(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_invention_set_activate_building(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_invention_get_activate_building_size();
void alice_invention_resize_activate_building(uint32_t api_arg_0_value);
]]
INVENTION = {}
---@param id invention_id
---@return number
function INVENTION.is_valid(id)
	return ffi.C.alice_invention_is_valid(id)
end
---@return number
function INVENTION.size()
	return ffi.C.alice_invention_size()
end
---@param value number
function INVENTION.resize(value)
	return ffi.C.alice_invention_resize(value)
end
---@param id invention_id
---@return text_key
function INVENTION.get_name(id)
	return ffi.C.alice_invention_get_name(id)
end
---@param id invention_id
---@param value text_key
function INVENTION.set_name(id, value)
	return ffi.C.alice_invention_set_name(id, value)
end
---@param id invention_id
---@return text_key
function INVENTION.get_desc(id)
	return ffi.C.alice_invention_get_desc(id)
end
---@param id invention_id
---@param value text_key
function INVENTION.set_desc(id, value)
	return ffi.C.alice_invention_set_desc(id, value)
end
---@param id invention_id
---@return number
function INVENTION.get_technology_type(id)
	return ffi.C.alice_invention_get_technology_type(id)
end
---@param id invention_id
---@param value number
function INVENTION.set_technology_type(id, value)
	return ffi.C.alice_invention_set_technology_type(id, value)
end
---@param id invention_id
---@return number
function INVENTION.get_colonial_points(id)
	return ffi.C.alice_invention_get_colonial_points(id)
end
---@param id invention_id
---@param value number
function INVENTION.set_colonial_points(id, value)
	return ffi.C.alice_invention_set_colonial_points(id, value)
end
---@return number
function INVENTION.get_increase_building_size()
	return ffi.C.alice_invention_get_increase_building_size()
end
---@param value number
function INVENTION.resize_increase_building(value)
	return ffi.C.alice_invention_resize_increase_building(value)
end
---@param id invention_id
---@return modifier_id
function INVENTION.get_modifier(id)
	return ffi.C.alice_invention_get_modifier(id)
end
---@param id invention_id
---@param value modifier_id
function INVENTION.set_modifier(id, value)
	return ffi.C.alice_invention_set_modifier(id, value)
end
---@param id invention_id
---@return value_modifier_key
function INVENTION.get_chance(id)
	return ffi.C.alice_invention_get_chance(id)
end
---@param id invention_id
---@param value value_modifier_key
function INVENTION.set_chance(id, value)
	return ffi.C.alice_invention_set_chance(id, value)
end
---@param id invention_id
---@return trigger_key
function INVENTION.get_limit(id)
	return ffi.C.alice_invention_get_limit(id)
end
---@param id invention_id
---@param value trigger_key
function INVENTION.set_limit(id, value)
	return ffi.C.alice_invention_set_limit(id, value)
end
---@param id invention_id
---@return boolean
function INVENTION.get_enable_gas_attack(id)
	return ffi.C.alice_invention_get_enable_gas_attack(id)
end
---@param id invention_id
---@param value boolean
function INVENTION.set_enable_gas_attack(id, value)
	return ffi.C.alice_invention_set_enable_gas_attack(id, value)
end
---@param id invention_id
---@return boolean
function INVENTION.get_enable_gas_defense(id)
	return ffi.C.alice_invention_get_enable_gas_defense(id)
end
---@param id invention_id
---@param value boolean
function INVENTION.set_enable_gas_defense(id, value)
	return ffi.C.alice_invention_set_enable_gas_defense(id, value)
end
---@param id invention_id
---@return number
function INVENTION.get_shared_prestige(id)
	return ffi.C.alice_invention_get_shared_prestige(id)
end
---@param id invention_id
---@param value number
function INVENTION.set_shared_prestige(id, value)
	return ffi.C.alice_invention_set_shared_prestige(id, value)
end
---@param id invention_id
---@return number
function INVENTION.get_plurality(id)
	return ffi.C.alice_invention_get_plurality(id)
end
---@param id invention_id
---@param value number
function INVENTION.set_plurality(id, value)
	return ffi.C.alice_invention_set_plurality(id, value)
end
---@param id invention_id
---@param index unit_type_id
---@return boolean
function INVENTION.get_activate_unit(id, index)
	return ffi.C.alice_invention_get_activate_unit(id, index)
end
---@param id invention_id
---@param index unit_type_id
---@param value boolean
function INVENTION.set_activate_unit(id, index, value)
	return ffi.C.alice_invention_set_activate_unit(id, index, value)
end
---@return number
function INVENTION.get_activate_unit_size()
	return ffi.C.alice_invention_get_activate_unit_size()
end
---@param value number
function INVENTION.resize_activate_unit(value)
	return ffi.C.alice_invention_resize_activate_unit(value)
end
---@param id invention_id
---@param index crime_id
---@return boolean
function INVENTION.get_activate_crime(id, index)
	return ffi.C.alice_invention_get_activate_crime(id, index)
end
---@param id invention_id
---@param index crime_id
---@param value boolean
function INVENTION.set_activate_crime(id, index, value)
	return ffi.C.alice_invention_set_activate_crime(id, index, value)
end
---@return number
function INVENTION.get_activate_crime_size()
	return ffi.C.alice_invention_get_activate_crime_size()
end
---@param value number
function INVENTION.resize_activate_crime(value)
	return ffi.C.alice_invention_resize_activate_crime(value)
end
---@param id invention_id
---@param index factory_type_id
---@return boolean
function INVENTION.get_activate_building(id, index)
	return ffi.C.alice_invention_get_activate_building(id, index)
end
---@param id invention_id
---@param index factory_type_id
---@param value boolean
function INVENTION.set_activate_building(id, index, value)
	return ffi.C.alice_invention_set_activate_building(id, index, value)
end
---@return number
function INVENTION.get_activate_building_size()
	return ffi.C.alice_invention_get_activate_building_size()
end
---@param value number
function INVENTION.resize_activate_building(value)
	return ffi.C.alice_invention_resize_activate_building(value)
end
