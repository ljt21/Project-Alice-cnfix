-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_automated_army_group_membership_regiment_is_valid(int32_t api_arg_0_id);
uint32_t alice_automated_army_group_membership_regiment_size();
void alice_automated_army_group_membership_regiment_resize(uint32_t api_arg_0_value);
int32_t alice_automated_army_group_membership_regiment_get_regiment(int32_t api_arg_0_id);
void alice_automated_army_group_membership_regiment_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_automated_army_group_membership_regiment_try_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_automated_army_group_membership_regiment_get_army(int32_t api_arg_0_id);
void alice_automated_army_group_membership_regiment_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_automated_army_group_membership_regiment_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
AUTOMATED_ARMY_GROUP_MEMBERSHIP_REGIMENT = {}
---@param id automated_army_group_membership_regiment_id
---@return number
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_REGIMENT.is_valid(id)
	return ffi.C.alice_automated_army_group_membership_regiment_is_valid(id)
end
---@return number
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_REGIMENT.size()
	return ffi.C.alice_automated_army_group_membership_regiment_size()
end
---@param value number
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_REGIMENT.resize(value)
	return ffi.C.alice_automated_army_group_membership_regiment_resize(value)
end
---@param id automated_army_group_membership_regiment_id
---@return regiment_automation_data_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_REGIMENT.get_regiment(id)
	return ffi.C.alice_automated_army_group_membership_regiment_get_regiment(id)
end
---@param id automated_army_group_membership_regiment_id
---@param linked_id regiment_automation_data_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_REGIMENT.set_regiment(id, linked_id)
	return ffi.C.alice_automated_army_group_membership_regiment_set_regiment(id, linked_id)
end
---@param id automated_army_group_membership_regiment_id
---@param linked_id regiment_automation_data_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_REGIMENT.try_set_regiment(id, linked_id)
	return ffi.C.alice_automated_army_group_membership_regiment_try_set_regiment(id, linked_id)
end
---@param id automated_army_group_membership_regiment_id
---@return automated_army_group_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_REGIMENT.get_army(id)
	return ffi.C.alice_automated_army_group_membership_regiment_get_army(id)
end
---@param id automated_army_group_membership_regiment_id
---@param linked_id automated_army_group_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_REGIMENT.set_army(id, linked_id)
	return ffi.C.alice_automated_army_group_membership_regiment_set_army(id, linked_id)
end
---@param id automated_army_group_membership_regiment_id
---@param linked_id automated_army_group_id
function AUTOMATED_ARMY_GROUP_MEMBERSHIP_REGIMENT.try_set_army(id, linked_id)
	return ffi.C.alice_automated_army_group_membership_regiment_try_set_army(id, linked_id)
end
