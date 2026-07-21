-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_flashpoint_focus_is_valid(int32_t api_arg_0_id);
uint32_t alice_flashpoint_focus_size();
void alice_flashpoint_focus_resize(uint32_t api_arg_0_value);
int32_t alice_flashpoint_focus_get_state(int32_t api_arg_0_id);
void alice_flashpoint_focus_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_flashpoint_focus_try_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_flashpoint_focus_get_nation(int32_t api_arg_0_id);
void alice_flashpoint_focus_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_flashpoint_focus_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
FLASHPOINT_FOCUS = {}
---@param id flashpoint_focus_id
---@return number
function FLASHPOINT_FOCUS.is_valid(id)
	return ffi.C.alice_flashpoint_focus_is_valid(id)
end
---@return number
function FLASHPOINT_FOCUS.size()
	return ffi.C.alice_flashpoint_focus_size()
end
---@param value number
function FLASHPOINT_FOCUS.resize(value)
	return ffi.C.alice_flashpoint_focus_resize(value)
end
---@param id flashpoint_focus_id
---@return state_instance_id
function FLASHPOINT_FOCUS.get_state(id)
	return ffi.C.alice_flashpoint_focus_get_state(id)
end
---@param id flashpoint_focus_id
---@param linked_id state_instance_id
function FLASHPOINT_FOCUS.set_state(id, linked_id)
	return ffi.C.alice_flashpoint_focus_set_state(id, linked_id)
end
---@param id flashpoint_focus_id
---@param linked_id state_instance_id
function FLASHPOINT_FOCUS.try_set_state(id, linked_id)
	return ffi.C.alice_flashpoint_focus_try_set_state(id, linked_id)
end
---@param id flashpoint_focus_id
---@return nation_id
function FLASHPOINT_FOCUS.get_nation(id)
	return ffi.C.alice_flashpoint_focus_get_nation(id)
end
---@param id flashpoint_focus_id
---@param linked_id nation_id
function FLASHPOINT_FOCUS.set_nation(id, linked_id)
	return ffi.C.alice_flashpoint_focus_set_nation(id, linked_id)
end
---@param id flashpoint_focus_id
---@param linked_id nation_id
function FLASHPOINT_FOCUS.try_set_nation(id, linked_id)
	return ffi.C.alice_flashpoint_focus_try_set_nation(id, linked_id)
end
