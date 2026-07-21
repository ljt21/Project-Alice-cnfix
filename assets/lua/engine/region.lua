-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_region_is_valid(int32_t api_arg_0_id);
uint32_t alice_region_size();
void alice_region_resize(uint32_t api_arg_0_value);
int32_t alice_region_get_name(int32_t api_arg_0_id);
void alice_region_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_region_get_range_region_membership_as_region(int32_t i);
int32_t alice_region_get_index_region_membership_as_region(int32_t i, int32_t subindex);
]]
REGION = {}
---@param id region_id
---@return number
function REGION.is_valid(id)
	return ffi.C.alice_region_is_valid(id)
end
---@return number
function REGION.size()
	return ffi.C.alice_region_size()
end
---@param value number
function REGION.resize(value)
	return ffi.C.alice_region_resize(value)
end
---@param id region_id
---@return text_key
function REGION.get_name(id)
	return ffi.C.alice_region_get_name(id)
end
---@param id region_id
---@param value text_key
function REGION.set_name(id, value)
	return ffi.C.alice_region_set_name(id, value)
end
---@param id region_id
---@return number
function REGION.get_range_length_region_membership(id)
	return ffi.C.alice_region_get_range_region_membership_as_region(id)
end
---@param id region_id
---@param index number
---@return region_membership_id
function REGION.get_item_from_range_region_membership(id, index)
	return ffi.C.alice_region_get_index_region_membership_as_region(id, index)
end
