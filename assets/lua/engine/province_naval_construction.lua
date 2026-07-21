-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_province_naval_construction_is_valid(int32_t api_arg_0_id);
uint32_t alice_province_naval_construction_size();
void alice_province_naval_construction_resize(uint32_t api_arg_0_value);
int32_t alice_province_naval_construction_get_type(int32_t api_arg_0_id);
void alice_province_naval_construction_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_naval_construction_get_template_province(int32_t api_arg_0_id);
void alice_province_naval_construction_set_template_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_naval_construction_get_province(int32_t api_arg_0_id);
void alice_province_naval_construction_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_naval_construction_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_naval_construction_get_nation(int32_t api_arg_0_id);
void alice_province_naval_construction_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_naval_construction_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
PROVINCE_NAVAL_CONSTRUCTION = {}
---@param id province_naval_construction_id
---@return number
function PROVINCE_NAVAL_CONSTRUCTION.is_valid(id)
	return ffi.C.alice_province_naval_construction_is_valid(id)
end
---@return number
function PROVINCE_NAVAL_CONSTRUCTION.size()
	return ffi.C.alice_province_naval_construction_size()
end
---@param value number
function PROVINCE_NAVAL_CONSTRUCTION.resize(value)
	return ffi.C.alice_province_naval_construction_resize(value)
end
---@param id province_naval_construction_id
---@return unit_type_id
function PROVINCE_NAVAL_CONSTRUCTION.get_type(id)
	return ffi.C.alice_province_naval_construction_get_type(id)
end
---@param id province_naval_construction_id
---@param value unit_type_id
function PROVINCE_NAVAL_CONSTRUCTION.set_type(id, value)
	return ffi.C.alice_province_naval_construction_set_type(id, value)
end
---@param id province_naval_construction_id
---@return province_id
function PROVINCE_NAVAL_CONSTRUCTION.get_template_province(id)
	return ffi.C.alice_province_naval_construction_get_template_province(id)
end
---@param id province_naval_construction_id
---@param value province_id
function PROVINCE_NAVAL_CONSTRUCTION.set_template_province(id, value)
	return ffi.C.alice_province_naval_construction_set_template_province(id, value)
end
---@param id province_naval_construction_id
---@return province_id
function PROVINCE_NAVAL_CONSTRUCTION.get_province(id)
	return ffi.C.alice_province_naval_construction_get_province(id)
end
---@param id province_naval_construction_id
---@param linked_id province_id
function PROVINCE_NAVAL_CONSTRUCTION.set_province(id, linked_id)
	return ffi.C.alice_province_naval_construction_set_province(id, linked_id)
end
---@param id province_naval_construction_id
---@param linked_id province_id
function PROVINCE_NAVAL_CONSTRUCTION.try_set_province(id, linked_id)
	return ffi.C.alice_province_naval_construction_try_set_province(id, linked_id)
end
---@param id province_naval_construction_id
---@return nation_id
function PROVINCE_NAVAL_CONSTRUCTION.get_nation(id)
	return ffi.C.alice_province_naval_construction_get_nation(id)
end
---@param id province_naval_construction_id
---@param linked_id nation_id
function PROVINCE_NAVAL_CONSTRUCTION.set_nation(id, linked_id)
	return ffi.C.alice_province_naval_construction_set_nation(id, linked_id)
end
---@param id province_naval_construction_id
---@param linked_id nation_id
function PROVINCE_NAVAL_CONSTRUCTION.try_set_nation(id, linked_id)
	return ffi.C.alice_province_naval_construction_try_set_nation(id, linked_id)
end
