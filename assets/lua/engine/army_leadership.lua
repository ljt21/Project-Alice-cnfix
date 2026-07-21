-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_army_leadership_is_valid(int32_t api_arg_0_id);
uint32_t alice_army_leadership_size();
void alice_army_leadership_resize(uint32_t api_arg_0_value);
int32_t alice_army_leadership_get_army(int32_t api_arg_0_id);
void alice_army_leadership_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_leadership_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_army_leadership_get_general(int32_t api_arg_0_id);
void alice_army_leadership_set_general(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_leadership_try_set_general(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
ARMY_LEADERSHIP = {}
---@param id army_leadership_id
---@return number
function ARMY_LEADERSHIP.is_valid(id)
	return ffi.C.alice_army_leadership_is_valid(id)
end
---@return number
function ARMY_LEADERSHIP.size()
	return ffi.C.alice_army_leadership_size()
end
---@param value number
function ARMY_LEADERSHIP.resize(value)
	return ffi.C.alice_army_leadership_resize(value)
end
---@param id army_leadership_id
---@return army_id
function ARMY_LEADERSHIP.get_army(id)
	return ffi.C.alice_army_leadership_get_army(id)
end
---@param id army_leadership_id
---@param linked_id army_id
function ARMY_LEADERSHIP.set_army(id, linked_id)
	return ffi.C.alice_army_leadership_set_army(id, linked_id)
end
---@param id army_leadership_id
---@param linked_id army_id
function ARMY_LEADERSHIP.try_set_army(id, linked_id)
	return ffi.C.alice_army_leadership_try_set_army(id, linked_id)
end
---@param id army_leadership_id
---@return leader_id
function ARMY_LEADERSHIP.get_general(id)
	return ffi.C.alice_army_leadership_get_general(id)
end
---@param id army_leadership_id
---@param linked_id leader_id
function ARMY_LEADERSHIP.set_general(id, linked_id)
	return ffi.C.alice_army_leadership_set_general(id, linked_id)
end
---@param id army_leadership_id
---@param linked_id leader_id
function ARMY_LEADERSHIP.try_set_general(id, linked_id)
	return ffi.C.alice_army_leadership_try_set_general(id, linked_id)
end
