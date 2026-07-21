-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_ideology_group_is_valid(int32_t api_arg_0_id);
uint32_t alice_ideology_group_size();
void alice_ideology_group_resize(uint32_t api_arg_0_value);
int32_t alice_ideology_group_get_name(int32_t api_arg_0_id);
void alice_ideology_group_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_ideology_group_get_range_ideology_group_membership_as_ideology_group(int32_t i);
int32_t alice_ideology_group_get_index_ideology_group_membership_as_ideology_group(int32_t i, int32_t subindex);
]]
IDEOLOGY_GROUP = {}
---@param id ideology_group_id
---@return number
function IDEOLOGY_GROUP.is_valid(id)
	return ffi.C.alice_ideology_group_is_valid(id)
end
---@return number
function IDEOLOGY_GROUP.size()
	return ffi.C.alice_ideology_group_size()
end
---@param value number
function IDEOLOGY_GROUP.resize(value)
	return ffi.C.alice_ideology_group_resize(value)
end
---@param id ideology_group_id
---@return text_key
function IDEOLOGY_GROUP.get_name(id)
	return ffi.C.alice_ideology_group_get_name(id)
end
---@param id ideology_group_id
---@param value text_key
function IDEOLOGY_GROUP.set_name(id, value)
	return ffi.C.alice_ideology_group_set_name(id, value)
end
---@param id ideology_group_id
---@return number
function IDEOLOGY_GROUP.get_range_length_ideology_group_membership(id)
	return ffi.C.alice_ideology_group_get_range_ideology_group_membership_as_ideology_group(id)
end
---@param id ideology_group_id
---@param index number
---@return ideology_group_membership_id
function IDEOLOGY_GROUP.get_item_from_range_ideology_group_membership(id, index)
	return ffi.C.alice_ideology_group_get_index_ideology_group_membership_as_ideology_group(id, index)
end
