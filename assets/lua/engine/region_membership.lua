-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_region_membership_is_valid(int32_t api_arg_0_id);
uint32_t alice_region_membership_size();
void alice_region_membership_resize(uint32_t api_arg_0_value);
int32_t alice_region_membership_get_province(int32_t api_arg_0_id);
void alice_region_membership_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_region_membership_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_region_membership_get_region(int32_t api_arg_0_id);
void alice_region_membership_set_region(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_region_membership_try_set_region(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
REGION_MEMBERSHIP = {}
---@param id region_membership_id
---@return number
function REGION_MEMBERSHIP.is_valid(id)
	return ffi.C.alice_region_membership_is_valid(id)
end
---@return number
function REGION_MEMBERSHIP.size()
	return ffi.C.alice_region_membership_size()
end
---@param value number
function REGION_MEMBERSHIP.resize(value)
	return ffi.C.alice_region_membership_resize(value)
end
---@param id region_membership_id
---@return province_id
function REGION_MEMBERSHIP.get_province(id)
	return ffi.C.alice_region_membership_get_province(id)
end
---@param id region_membership_id
---@param linked_id province_id
function REGION_MEMBERSHIP.set_province(id, linked_id)
	return ffi.C.alice_region_membership_set_province(id, linked_id)
end
---@param id region_membership_id
---@param linked_id province_id
function REGION_MEMBERSHIP.try_set_province(id, linked_id)
	return ffi.C.alice_region_membership_try_set_province(id, linked_id)
end
---@param id region_membership_id
---@return region_id
function REGION_MEMBERSHIP.get_region(id)
	return ffi.C.alice_region_membership_get_region(id)
end
---@param id region_membership_id
---@param linked_id region_id
function REGION_MEMBERSHIP.set_region(id, linked_id)
	return ffi.C.alice_region_membership_set_region(id, linked_id)
end
---@param id region_membership_id
---@param linked_id region_id
function REGION_MEMBERSHIP.try_set_region(id, linked_id)
	return ffi.C.alice_region_membership_try_set_region(id, linked_id)
end
