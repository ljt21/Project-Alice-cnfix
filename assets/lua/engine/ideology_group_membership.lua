-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_ideology_group_membership_is_valid(int32_t api_arg_0_id);
uint32_t alice_ideology_group_membership_size();
void alice_ideology_group_membership_resize(uint32_t api_arg_0_value);
int32_t alice_ideology_group_membership_get_ideology(int32_t api_arg_0_id);
void alice_ideology_group_membership_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_ideology_group_membership_try_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_ideology_group_membership_get_ideology_group(int32_t api_arg_0_id);
void alice_ideology_group_membership_set_ideology_group(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_ideology_group_membership_try_set_ideology_group(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
IDEOLOGY_GROUP_MEMBERSHIP = {}
---@param id ideology_group_membership_id
---@return number
function IDEOLOGY_GROUP_MEMBERSHIP.is_valid(id)
	return ffi.C.alice_ideology_group_membership_is_valid(id)
end
---@return number
function IDEOLOGY_GROUP_MEMBERSHIP.size()
	return ffi.C.alice_ideology_group_membership_size()
end
---@param value number
function IDEOLOGY_GROUP_MEMBERSHIP.resize(value)
	return ffi.C.alice_ideology_group_membership_resize(value)
end
---@param id ideology_group_membership_id
---@return ideology_id
function IDEOLOGY_GROUP_MEMBERSHIP.get_ideology(id)
	return ffi.C.alice_ideology_group_membership_get_ideology(id)
end
---@param id ideology_group_membership_id
---@param linked_id ideology_id
function IDEOLOGY_GROUP_MEMBERSHIP.set_ideology(id, linked_id)
	return ffi.C.alice_ideology_group_membership_set_ideology(id, linked_id)
end
---@param id ideology_group_membership_id
---@param linked_id ideology_id
function IDEOLOGY_GROUP_MEMBERSHIP.try_set_ideology(id, linked_id)
	return ffi.C.alice_ideology_group_membership_try_set_ideology(id, linked_id)
end
---@param id ideology_group_membership_id
---@return ideology_group_id
function IDEOLOGY_GROUP_MEMBERSHIP.get_ideology_group(id)
	return ffi.C.alice_ideology_group_membership_get_ideology_group(id)
end
---@param id ideology_group_membership_id
---@param linked_id ideology_group_id
function IDEOLOGY_GROUP_MEMBERSHIP.set_ideology_group(id, linked_id)
	return ffi.C.alice_ideology_group_membership_set_ideology_group(id, linked_id)
end
---@param id ideology_group_membership_id
---@param linked_id ideology_group_id
function IDEOLOGY_GROUP_MEMBERSHIP.try_set_ideology_group(id, linked_id)
	return ffi.C.alice_ideology_group_membership_try_set_ideology_group(id, linked_id)
end
