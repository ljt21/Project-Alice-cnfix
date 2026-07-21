-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_navy_control_is_valid(int32_t api_arg_0_id);
uint32_t alice_navy_control_size();
void alice_navy_control_resize(uint32_t api_arg_0_value);
int32_t alice_navy_control_get_navy(int32_t api_arg_0_id);
void alice_navy_control_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_navy_control_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_navy_control_get_controller(int32_t api_arg_0_id);
void alice_navy_control_set_controller(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_navy_control_try_set_controller(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
NAVY_CONTROL = {}
---@param id navy_control_id
---@return number
function NAVY_CONTROL.is_valid(id)
	return ffi.C.alice_navy_control_is_valid(id)
end
---@return number
function NAVY_CONTROL.size()
	return ffi.C.alice_navy_control_size()
end
---@param value number
function NAVY_CONTROL.resize(value)
	return ffi.C.alice_navy_control_resize(value)
end
---@param id navy_control_id
---@return navy_id
function NAVY_CONTROL.get_navy(id)
	return ffi.C.alice_navy_control_get_navy(id)
end
---@param id navy_control_id
---@param linked_id navy_id
function NAVY_CONTROL.set_navy(id, linked_id)
	return ffi.C.alice_navy_control_set_navy(id, linked_id)
end
---@param id navy_control_id
---@param linked_id navy_id
function NAVY_CONTROL.try_set_navy(id, linked_id)
	return ffi.C.alice_navy_control_try_set_navy(id, linked_id)
end
---@param id navy_control_id
---@return nation_id
function NAVY_CONTROL.get_controller(id)
	return ffi.C.alice_navy_control_get_controller(id)
end
---@param id navy_control_id
---@param linked_id nation_id
function NAVY_CONTROL.set_controller(id, linked_id)
	return ffi.C.alice_navy_control_set_controller(id, linked_id)
end
---@param id navy_control_id
---@param linked_id nation_id
function NAVY_CONTROL.try_set_controller(id, linked_id)
	return ffi.C.alice_navy_control_try_set_controller(id, linked_id)
end
