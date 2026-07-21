-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_army_membership_is_valid(int32_t api_arg_0_id);
uint32_t alice_army_membership_size();
void alice_army_membership_resize(uint32_t api_arg_0_value);
int32_t alice_army_membership_get_regiment(int32_t api_arg_0_id);
void alice_army_membership_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_membership_try_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_army_membership_get_army(int32_t api_arg_0_id);
void alice_army_membership_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_membership_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
ARMY_MEMBERSHIP = {}
---@param id army_membership_id
---@return number
function ARMY_MEMBERSHIP.is_valid(id)
	return ffi.C.alice_army_membership_is_valid(id)
end
---@return number
function ARMY_MEMBERSHIP.size()
	return ffi.C.alice_army_membership_size()
end
---@param value number
function ARMY_MEMBERSHIP.resize(value)
	return ffi.C.alice_army_membership_resize(value)
end
---@param id army_membership_id
---@return regiment_id
function ARMY_MEMBERSHIP.get_regiment(id)
	return ffi.C.alice_army_membership_get_regiment(id)
end
---@param id army_membership_id
---@param linked_id regiment_id
function ARMY_MEMBERSHIP.set_regiment(id, linked_id)
	return ffi.C.alice_army_membership_set_regiment(id, linked_id)
end
---@param id army_membership_id
---@param linked_id regiment_id
function ARMY_MEMBERSHIP.try_set_regiment(id, linked_id)
	return ffi.C.alice_army_membership_try_set_regiment(id, linked_id)
end
---@param id army_membership_id
---@return army_id
function ARMY_MEMBERSHIP.get_army(id)
	return ffi.C.alice_army_membership_get_army(id)
end
---@param id army_membership_id
---@param linked_id army_id
function ARMY_MEMBERSHIP.set_army(id, linked_id)
	return ffi.C.alice_army_membership_set_army(id, linked_id)
end
---@param id army_membership_id
---@param linked_id army_id
function ARMY_MEMBERSHIP.try_set_army(id, linked_id)
	return ffi.C.alice_army_membership_try_set_army(id, linked_id)
end
