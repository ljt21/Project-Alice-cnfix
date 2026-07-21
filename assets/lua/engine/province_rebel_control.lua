-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_province_rebel_control_is_valid(int32_t api_arg_0_id);
uint32_t alice_province_rebel_control_size();
void alice_province_rebel_control_resize(uint32_t api_arg_0_value);
int32_t alice_province_rebel_control_get_province(int32_t api_arg_0_id);
void alice_province_rebel_control_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_rebel_control_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_province_rebel_control_get_rebel_faction(int32_t api_arg_0_id);
void alice_province_rebel_control_set_rebel_faction(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_province_rebel_control_try_set_rebel_faction(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
PROVINCE_REBEL_CONTROL = {}
---@param id province_rebel_control_id
---@return number
function PROVINCE_REBEL_CONTROL.is_valid(id)
	return ffi.C.alice_province_rebel_control_is_valid(id)
end
---@return number
function PROVINCE_REBEL_CONTROL.size()
	return ffi.C.alice_province_rebel_control_size()
end
---@param value number
function PROVINCE_REBEL_CONTROL.resize(value)
	return ffi.C.alice_province_rebel_control_resize(value)
end
---@param id province_rebel_control_id
---@return province_id
function PROVINCE_REBEL_CONTROL.get_province(id)
	return ffi.C.alice_province_rebel_control_get_province(id)
end
---@param id province_rebel_control_id
---@param linked_id province_id
function PROVINCE_REBEL_CONTROL.set_province(id, linked_id)
	return ffi.C.alice_province_rebel_control_set_province(id, linked_id)
end
---@param id province_rebel_control_id
---@param linked_id province_id
function PROVINCE_REBEL_CONTROL.try_set_province(id, linked_id)
	return ffi.C.alice_province_rebel_control_try_set_province(id, linked_id)
end
---@param id province_rebel_control_id
---@return rebel_faction_id
function PROVINCE_REBEL_CONTROL.get_rebel_faction(id)
	return ffi.C.alice_province_rebel_control_get_rebel_faction(id)
end
---@param id province_rebel_control_id
---@param linked_id rebel_faction_id
function PROVINCE_REBEL_CONTROL.set_rebel_faction(id, linked_id)
	return ffi.C.alice_province_rebel_control_set_rebel_faction(id, linked_id)
end
---@param id province_rebel_control_id
---@param linked_id rebel_faction_id
function PROVINCE_REBEL_CONTROL.try_set_rebel_faction(id, linked_id)
	return ffi.C.alice_province_rebel_control_try_set_rebel_faction(id, linked_id)
end
