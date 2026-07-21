-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_province_control_is_valid(int32_t api_arg_0_id);
uint32_t alice_province_control_size();
void alice_province_control_resize(uint32_t api_arg_0_value);
int32_t alice_province_control_get_province(int32_t api_arg_0_id);
void alice_province_control_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_control_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_control_get_nation(int32_t api_arg_0_id);
void alice_province_control_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_control_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
PROVINCE_CONTROL = {}
---@param id province_control_id
---@return number
function PROVINCE_CONTROL.is_valid(id)
	return ffi.C.alice_province_control_is_valid(id)
end
---@return number
function PROVINCE_CONTROL.size()
	return ffi.C.alice_province_control_size()
end
---@param value number
function PROVINCE_CONTROL.resize(value)
	return ffi.C.alice_province_control_resize(value)
end
---@param id province_control_id
---@return province_id
function PROVINCE_CONTROL.get_province(id)
	return ffi.C.alice_province_control_get_province(id)
end
---@param id province_control_id
---@param linked_id province_id
function PROVINCE_CONTROL.set_province(id, linked_id)
	return ffi.C.alice_province_control_set_province(id, linked_id)
end
---@param id province_control_id
---@param linked_id province_id
function PROVINCE_CONTROL.try_set_province(id, linked_id)
	return ffi.C.alice_province_control_try_set_province(id, linked_id)
end
---@param id province_control_id
---@return nation_id
function PROVINCE_CONTROL.get_nation(id)
	return ffi.C.alice_province_control_get_nation(id)
end
---@param id province_control_id
---@param linked_id nation_id
function PROVINCE_CONTROL.set_nation(id, linked_id)
	return ffi.C.alice_province_control_set_nation(id, linked_id)
end
---@param id province_control_id
---@param linked_id nation_id
function PROVINCE_CONTROL.try_set_nation(id, linked_id)
	return ffi.C.alice_province_control_try_set_nation(id, linked_id)
end
