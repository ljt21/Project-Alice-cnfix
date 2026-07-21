-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_army_rebel_control_is_valid(int32_t api_arg_0_id);
uint32_t alice_army_rebel_control_size();
void alice_army_rebel_control_resize(uint32_t api_arg_0_value);
int32_t alice_army_rebel_control_get_army(int32_t api_arg_0_id);
void alice_army_rebel_control_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_rebel_control_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_army_rebel_control_get_controller(int32_t api_arg_0_id);
void alice_army_rebel_control_set_controller(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_rebel_control_try_set_controller(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
ARMY_REBEL_CONTROL = {}
---@param id army_rebel_control_id
---@return number
function ARMY_REBEL_CONTROL.is_valid(id)
	return ffi.C.alice_army_rebel_control_is_valid(id)
end
---@return number
function ARMY_REBEL_CONTROL.size()
	return ffi.C.alice_army_rebel_control_size()
end
---@param value number
function ARMY_REBEL_CONTROL.resize(value)
	return ffi.C.alice_army_rebel_control_resize(value)
end
---@param id army_rebel_control_id
---@return army_id
function ARMY_REBEL_CONTROL.get_army(id)
	return ffi.C.alice_army_rebel_control_get_army(id)
end
---@param id army_rebel_control_id
---@param linked_id army_id
function ARMY_REBEL_CONTROL.set_army(id, linked_id)
	return ffi.C.alice_army_rebel_control_set_army(id, linked_id)
end
---@param id army_rebel_control_id
---@param linked_id army_id
function ARMY_REBEL_CONTROL.try_set_army(id, linked_id)
	return ffi.C.alice_army_rebel_control_try_set_army(id, linked_id)
end
---@param id army_rebel_control_id
---@return rebel_faction_id
function ARMY_REBEL_CONTROL.get_controller(id)
	return ffi.C.alice_army_rebel_control_get_controller(id)
end
---@param id army_rebel_control_id
---@param linked_id rebel_faction_id
function ARMY_REBEL_CONTROL.set_controller(id, linked_id)
	return ffi.C.alice_army_rebel_control_set_controller(id, linked_id)
end
---@param id army_rebel_control_id
---@param linked_id rebel_faction_id
function ARMY_REBEL_CONTROL.try_set_controller(id, linked_id)
	return ffi.C.alice_army_rebel_control_try_set_controller(id, linked_id)
end
