-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_automated_army_group_is_valid(int32_t api_arg_0_id);
uint32_t alice_automated_army_group_size();
void alice_automated_army_group_resize(uint32_t api_arg_0_value);
int32_t alice_automated_army_group_get_owner(int32_t api_arg_0_id);
void alice_automated_army_group_set_owner(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_automated_army_group_get_hq(int32_t api_arg_0_id);
void alice_automated_army_group_set_hq(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_automated_army_group_get_range_automated_army_group_membership_regiment_as_army(int32_t i);
int32_t alice_automated_army_group_get_index_automated_army_group_membership_regiment_as_army(int32_t i, int32_t subindex);
int32_t alice_automated_army_group_get_range_automated_army_group_membership_navy_as_army(int32_t i);
int32_t alice_automated_army_group_get_index_automated_army_group_membership_navy_as_army(int32_t i, int32_t subindex);
]]
AUTOMATED_ARMY_GROUP = {}
---@param id automated_army_group_id
---@return number
function AUTOMATED_ARMY_GROUP.is_valid(id)
	return ffi.C.alice_automated_army_group_is_valid(id)
end
---@return number
function AUTOMATED_ARMY_GROUP.size()
	return ffi.C.alice_automated_army_group_size()
end
---@param value number
function AUTOMATED_ARMY_GROUP.resize(value)
	return ffi.C.alice_automated_army_group_resize(value)
end
---@param id automated_army_group_id
---@return nation_id
function AUTOMATED_ARMY_GROUP.get_owner(id)
	return ffi.C.alice_automated_army_group_get_owner(id)
end
---@param id automated_army_group_id
---@param value nation_id
function AUTOMATED_ARMY_GROUP.set_owner(id, value)
	return ffi.C.alice_automated_army_group_set_owner(id, value)
end
---@param id automated_army_group_id
---@return province_id
function AUTOMATED_ARMY_GROUP.get_hq(id)
	return ffi.C.alice_automated_army_group_get_hq(id)
end
---@param id automated_army_group_id
---@param value province_id
function AUTOMATED_ARMY_GROUP.set_hq(id, value)
	return ffi.C.alice_automated_army_group_set_hq(id, value)
end
---@param id automated_army_group_id
---@return number
function AUTOMATED_ARMY_GROUP.get_range_length_automated_army_group_membership_regiment(id)
	return ffi.C.alice_automated_army_group_get_range_automated_army_group_membership_regiment_as_army(id)
end
---@param id automated_army_group_id
---@param index number
---@return automated_army_group_membership_regiment_id
function AUTOMATED_ARMY_GROUP.get_item_from_range_automated_army_group_membership_regiment(id, index)
	return ffi.C.alice_automated_army_group_get_index_automated_army_group_membership_regiment_as_army(id, index)
end
---@param id automated_army_group_id
---@return number
function AUTOMATED_ARMY_GROUP.get_range_length_automated_army_group_membership_navy(id)
	return ffi.C.alice_automated_army_group_get_range_automated_army_group_membership_navy_as_army(id)
end
---@param id automated_army_group_id
---@param index number
---@return automated_army_group_membership_navy_id
function AUTOMATED_ARMY_GROUP.get_item_from_range_automated_army_group_membership_navy(id, index)
	return ffi.C.alice_automated_army_group_get_index_automated_army_group_membership_navy_as_army(id, index)
end
