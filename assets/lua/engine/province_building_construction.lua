-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_province_building_construction_is_valid(int32_t api_arg_0_id);
uint32_t alice_province_building_construction_size();
void alice_province_building_construction_resize(uint32_t api_arg_0_value);
uint8_t alice_province_building_construction_get_type(int32_t api_arg_0_id);
void alice_province_building_construction_set_type(int32_t api_arg_0_id, uint8_t api_arg_1_value);
bool alice_province_building_construction_get_is_pop_project(int32_t api_arg_0_id);
void alice_province_building_construction_set_is_pop_project(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_province_building_construction_get_province(int32_t api_arg_0_id);
void alice_province_building_construction_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_building_construction_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_building_construction_get_nation(int32_t api_arg_0_id);
void alice_province_building_construction_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_building_construction_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
PROVINCE_BUILDING_CONSTRUCTION = {}
---@param id province_building_construction_id
---@return number
function PROVINCE_BUILDING_CONSTRUCTION.is_valid(id)
	return ffi.C.alice_province_building_construction_is_valid(id)
end
---@return number
function PROVINCE_BUILDING_CONSTRUCTION.size()
	return ffi.C.alice_province_building_construction_size()
end
---@param value number
function PROVINCE_BUILDING_CONSTRUCTION.resize(value)
	return ffi.C.alice_province_building_construction_resize(value)
end
---@param id province_building_construction_id
---@return number
function PROVINCE_BUILDING_CONSTRUCTION.get_type(id)
	return ffi.C.alice_province_building_construction_get_type(id)
end
---@param id province_building_construction_id
---@param value number
function PROVINCE_BUILDING_CONSTRUCTION.set_type(id, value)
	return ffi.C.alice_province_building_construction_set_type(id, value)
end
---@param id province_building_construction_id
---@return boolean
function PROVINCE_BUILDING_CONSTRUCTION.get_is_pop_project(id)
	return ffi.C.alice_province_building_construction_get_is_pop_project(id)
end
---@param id province_building_construction_id
---@param value boolean
function PROVINCE_BUILDING_CONSTRUCTION.set_is_pop_project(id, value)
	return ffi.C.alice_province_building_construction_set_is_pop_project(id, value)
end
---@param id province_building_construction_id
---@return province_id
function PROVINCE_BUILDING_CONSTRUCTION.get_province(id)
	return ffi.C.alice_province_building_construction_get_province(id)
end
---@param id province_building_construction_id
---@param linked_id province_id
function PROVINCE_BUILDING_CONSTRUCTION.set_province(id, linked_id)
	return ffi.C.alice_province_building_construction_set_province(id, linked_id)
end
---@param id province_building_construction_id
---@param linked_id province_id
function PROVINCE_BUILDING_CONSTRUCTION.try_set_province(id, linked_id)
	return ffi.C.alice_province_building_construction_try_set_province(id, linked_id)
end
---@param id province_building_construction_id
---@return nation_id
function PROVINCE_BUILDING_CONSTRUCTION.get_nation(id)
	return ffi.C.alice_province_building_construction_get_nation(id)
end
---@param id province_building_construction_id
---@param linked_id nation_id
function PROVINCE_BUILDING_CONSTRUCTION.set_nation(id, linked_id)
	return ffi.C.alice_province_building_construction_set_nation(id, linked_id)
end
---@param id province_building_construction_id
---@param linked_id nation_id
function PROVINCE_BUILDING_CONSTRUCTION.try_set_nation(id, linked_id)
	return ffi.C.alice_province_building_construction_try_set_nation(id, linked_id)
end
