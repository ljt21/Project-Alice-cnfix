-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_culture_group_membership_is_valid(int32_t api_arg_0_id);
uint32_t alice_culture_group_membership_size();
void alice_culture_group_membership_resize(uint32_t api_arg_0_value);
int32_t alice_culture_group_membership_get_member(int32_t api_arg_0_id);
void alice_culture_group_membership_set_member(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_culture_group_membership_try_set_member(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_culture_group_membership_get_group(int32_t api_arg_0_id);
void alice_culture_group_membership_set_group(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_culture_group_membership_try_set_group(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
CULTURE_GROUP_MEMBERSHIP = {}
---@param id culture_group_membership_id
---@return number
function CULTURE_GROUP_MEMBERSHIP.is_valid(id)
	return ffi.C.alice_culture_group_membership_is_valid(id)
end
---@return number
function CULTURE_GROUP_MEMBERSHIP.size()
	return ffi.C.alice_culture_group_membership_size()
end
---@param value number
function CULTURE_GROUP_MEMBERSHIP.resize(value)
	return ffi.C.alice_culture_group_membership_resize(value)
end
---@param id culture_group_membership_id
---@return culture_id
function CULTURE_GROUP_MEMBERSHIP.get_member(id)
	return ffi.C.alice_culture_group_membership_get_member(id)
end
---@param id culture_group_membership_id
---@param linked_id culture_id
function CULTURE_GROUP_MEMBERSHIP.set_member(id, linked_id)
	return ffi.C.alice_culture_group_membership_set_member(id, linked_id)
end
---@param id culture_group_membership_id
---@param linked_id culture_id
function CULTURE_GROUP_MEMBERSHIP.try_set_member(id, linked_id)
	return ffi.C.alice_culture_group_membership_try_set_member(id, linked_id)
end
---@param id culture_group_membership_id
---@return culture_group_id
function CULTURE_GROUP_MEMBERSHIP.get_group(id)
	return ffi.C.alice_culture_group_membership_get_group(id)
end
---@param id culture_group_membership_id
---@param linked_id culture_group_id
function CULTURE_GROUP_MEMBERSHIP.set_group(id, linked_id)
	return ffi.C.alice_culture_group_membership_set_group(id, linked_id)
end
---@param id culture_group_membership_id
---@param linked_id culture_group_id
function CULTURE_GROUP_MEMBERSHIP.try_set_group(id, linked_id)
	return ffi.C.alice_culture_group_membership_try_set_group(id, linked_id)
end
