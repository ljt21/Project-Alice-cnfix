-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_technology_is_valid(int32_t api_arg_0_id);
uint32_t alice_technology_size();
void alice_technology_resize(uint32_t api_arg_0_value);
int32_t alice_technology_get_name(int32_t api_arg_0_id);
void alice_technology_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_technology_get_desc(int32_t api_arg_0_id);
void alice_technology_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_technology_get_modifier(int32_t api_arg_0_id);
void alice_technology_set_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_technology_get_plurality(int32_t api_arg_0_id);
void alice_technology_set_plurality(int32_t api_arg_0_id, float api_arg_1_value);
uint8_t alice_technology_get_folder_index(int32_t api_arg_0_id);
void alice_technology_set_folder_index(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int16_t alice_technology_get_year(int32_t api_arg_0_id);
void alice_technology_set_year(int32_t api_arg_0_id, int16_t api_arg_1_value);
int32_t alice_technology_get_ai_chance(int32_t api_arg_0_id);
void alice_technology_set_ai_chance(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_technology_get_ai_weight(int32_t api_arg_0_id);
void alice_technology_set_ai_weight(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_technology_get_cost(int32_t api_arg_0_id);
void alice_technology_set_cost(int32_t api_arg_0_id, int32_t api_arg_1_value);
int32_t alice_technology_get_leadership_cost(int32_t api_arg_0_id);
void alice_technology_set_leadership_cost(int32_t api_arg_0_id, int32_t api_arg_1_value);
int16_t alice_technology_get_colonial_points(int32_t api_arg_0_id);
void alice_technology_set_colonial_points(int32_t api_arg_0_id, int16_t api_arg_1_value);
uint32_t alice_technology_get_increase_building_size();
void alice_technology_resize_increase_building(uint32_t api_arg_0_value);
bool alice_technology_get_activate_unit(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_technology_set_activate_unit(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_technology_get_activate_unit_size();
void alice_technology_resize_activate_unit(uint32_t api_arg_0_value);
bool alice_technology_get_activate_building(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_technology_set_activate_building(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_technology_get_activate_building_size();
void alice_technology_resize_activate_building(uint32_t api_arg_0_value);
]]
TECHNOLOGY = {}
---@param id technology_id
---@return number
function TECHNOLOGY.is_valid(id)
	return ffi.C.alice_technology_is_valid(id)
end
---@return number
function TECHNOLOGY.size()
	return ffi.C.alice_technology_size()
end
---@param value number
function TECHNOLOGY.resize(value)
	return ffi.C.alice_technology_resize(value)
end
---@param id technology_id
---@return text_key
function TECHNOLOGY.get_name(id)
	return ffi.C.alice_technology_get_name(id)
end
---@param id technology_id
---@param value text_key
function TECHNOLOGY.set_name(id, value)
	return ffi.C.alice_technology_set_name(id, value)
end
---@param id technology_id
---@return text_key
function TECHNOLOGY.get_desc(id)
	return ffi.C.alice_technology_get_desc(id)
end
---@param id technology_id
---@param value text_key
function TECHNOLOGY.set_desc(id, value)
	return ffi.C.alice_technology_set_desc(id, value)
end
---@param id technology_id
---@return modifier_id
function TECHNOLOGY.get_modifier(id)
	return ffi.C.alice_technology_get_modifier(id)
end
---@param id technology_id
---@param value modifier_id
function TECHNOLOGY.set_modifier(id, value)
	return ffi.C.alice_technology_set_modifier(id, value)
end
---@param id technology_id
---@return number
function TECHNOLOGY.get_plurality(id)
	return ffi.C.alice_technology_get_plurality(id)
end
---@param id technology_id
---@param value number
function TECHNOLOGY.set_plurality(id, value)
	return ffi.C.alice_technology_set_plurality(id, value)
end
---@param id technology_id
---@return number
function TECHNOLOGY.get_folder_index(id)
	return ffi.C.alice_technology_get_folder_index(id)
end
---@param id technology_id
---@param value number
function TECHNOLOGY.set_folder_index(id, value)
	return ffi.C.alice_technology_set_folder_index(id, value)
end
---@param id technology_id
---@return number
function TECHNOLOGY.get_year(id)
	return ffi.C.alice_technology_get_year(id)
end
---@param id technology_id
---@param value number
function TECHNOLOGY.set_year(id, value)
	return ffi.C.alice_technology_set_year(id, value)
end
---@param id technology_id
---@return value_modifier_key
function TECHNOLOGY.get_ai_chance(id)
	return ffi.C.alice_technology_get_ai_chance(id)
end
---@param id technology_id
---@param value value_modifier_key
function TECHNOLOGY.set_ai_chance(id, value)
	return ffi.C.alice_technology_set_ai_chance(id, value)
end
---@param id technology_id
---@return number
function TECHNOLOGY.get_ai_weight(id)
	return ffi.C.alice_technology_get_ai_weight(id)
end
---@param id technology_id
---@param value number
function TECHNOLOGY.set_ai_weight(id, value)
	return ffi.C.alice_technology_set_ai_weight(id, value)
end
---@param id technology_id
---@return number
function TECHNOLOGY.get_cost(id)
	return ffi.C.alice_technology_get_cost(id)
end
---@param id technology_id
---@param value number
function TECHNOLOGY.set_cost(id, value)
	return ffi.C.alice_technology_set_cost(id, value)
end
---@param id technology_id
---@return number
function TECHNOLOGY.get_leadership_cost(id)
	return ffi.C.alice_technology_get_leadership_cost(id)
end
---@param id technology_id
---@param value number
function TECHNOLOGY.set_leadership_cost(id, value)
	return ffi.C.alice_technology_set_leadership_cost(id, value)
end
---@param id technology_id
---@return number
function TECHNOLOGY.get_colonial_points(id)
	return ffi.C.alice_technology_get_colonial_points(id)
end
---@param id technology_id
---@param value number
function TECHNOLOGY.set_colonial_points(id, value)
	return ffi.C.alice_technology_set_colonial_points(id, value)
end
---@return number
function TECHNOLOGY.get_increase_building_size()
	return ffi.C.alice_technology_get_increase_building_size()
end
---@param value number
function TECHNOLOGY.resize_increase_building(value)
	return ffi.C.alice_technology_resize_increase_building(value)
end
---@param id technology_id
---@param index unit_type_id
---@return boolean
function TECHNOLOGY.get_activate_unit(id, index)
	return ffi.C.alice_technology_get_activate_unit(id, index)
end
---@param id technology_id
---@param index unit_type_id
---@param value boolean
function TECHNOLOGY.set_activate_unit(id, index, value)
	return ffi.C.alice_technology_set_activate_unit(id, index, value)
end
---@return number
function TECHNOLOGY.get_activate_unit_size()
	return ffi.C.alice_technology_get_activate_unit_size()
end
---@param value number
function TECHNOLOGY.resize_activate_unit(value)
	return ffi.C.alice_technology_resize_activate_unit(value)
end
---@param id technology_id
---@param index factory_type_id
---@return boolean
function TECHNOLOGY.get_activate_building(id, index)
	return ffi.C.alice_technology_get_activate_building(id, index)
end
---@param id technology_id
---@param index factory_type_id
---@param value boolean
function TECHNOLOGY.set_activate_building(id, index, value)
	return ffi.C.alice_technology_set_activate_building(id, index, value)
end
---@return number
function TECHNOLOGY.get_activate_building_size()
	return ffi.C.alice_technology_get_activate_building_size()
end
---@param value number
function TECHNOLOGY.resize_activate_building(value)
	return ffi.C.alice_technology_resize_activate_building(value)
end
