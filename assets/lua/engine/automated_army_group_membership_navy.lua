-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_automated_army_group_membership_navy_is_valid(int32_t api_arg_0_id);
uint32_t alice_automated_army_group_membership_navy_size();
void alice_automated_army_group_membership_navy_resize(uint32_t api_arg_0_value);
int32_t alice_automated_army_group_membership_navy_get_navy(int32_t api_arg_0_id);
void alice_automated_army_group_membership_navy_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_automated_army_group_membership_navy_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_automated_army_group_membership_navy_get_army(int32_t api_arg_0_id);
void alice_automated_army_group_membership_navy_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_automated_army_group_membership_navy_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
AUTOMATED_ARMY_GROUP_MEMBERSHIP_NAVY = {}
---@param id automated_army_group_membership_navy_id
---@return number
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_NAVY.is_valid(id)
	return ffi.C.alice_automated_army_group_membership_navy_is_valid(id)
end
---@return number
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_NAVY.size()
	return ffi.C.alice_automated_army_group_membership_navy_size()
end
---@param value number
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_NAVY.resize(value)
	return ffi.C.alice_automated_army_group_membership_navy_resize(value)
end
---@param id automated_army_group_membership_navy_id
---@return navy_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_NAVY.get_navy(id)
	return ffi.C.alice_automated_army_group_membership_navy_get_navy(id)
end
---@param id automated_army_group_membership_navy_id
---@param linked_id navy_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_NAVY.set_navy(id, linked_id)
	return ffi.C.alice_automated_army_group_membership_navy_set_navy(id, linked_id)
end
---@param id automated_army_group_membership_navy_id
---@param linked_id navy_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_NAVY.try_set_navy(id, linked_id)
	return ffi.C.alice_automated_army_group_membership_navy_try_set_navy(id, linked_id)
end
---@param id automated_army_group_membership_navy_id
---@return automated_army_group_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_NAVY.get_army(id)
	return ffi.C.alice_automated_army_group_membership_navy_get_army(id)
end
---@param id automated_army_group_membership_navy_id
---@param linked_id automated_army_group_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_NAVY.set_army(id, linked_id)
	return ffi.C.alice_automated_army_group_membership_navy_set_army(id, linked_id)
end
---@param id automated_army_group_membership_navy_id
---@param linked_id automated_army_group_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_NAVY.try_set_army(id, linked_id)
	return ffi.C.alice_automated_army_group_membership_navy_try_set_army(id, linked_id)
end
