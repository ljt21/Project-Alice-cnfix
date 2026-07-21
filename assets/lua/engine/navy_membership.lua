-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_navy_membership_is_valid(int32_t api_arg_0_id);
uint32_t alice_navy_membership_size();
void alice_navy_membership_resize(uint32_t api_arg_0_value);
int32_t alice_navy_membership_get_ship(int32_t api_arg_0_id);
void alice_navy_membership_set_ship(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_navy_membership_try_set_ship(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_navy_membership_get_navy(int32_t api_arg_0_id);
void alice_navy_membership_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_navy_membership_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
NAVY_MEMBERSHIP = {}
---@param id navy_membership_id
---@return number
function NAVY_MEMBERSHIP.is_valid(id)
	return ffi.C.alice_navy_membership_is_valid(id)
end
---@return number
function NAVY_MEMBERSHIP.size()
	return ffi.C.alice_navy_membership_size()
end
---@param value number
function NAVY_MEMBERSHIP.resize(value)
	return ffi.C.alice_navy_membership_resize(value)
end
---@param id navy_membership_id
---@return ship_id
function NAVY_MEMBERSHIP.get_ship(id)
	return ffi.C.alice_navy_membership_get_ship(id)
end
---@param id navy_membership_id
---@param linked_id ship_id
function NAVY_MEMBERSHIP.set_ship(id, linked_id)
	return ffi.C.alice_navy_membership_set_ship(id, linked_id)
end
---@param id navy_membership_id
---@param linked_id ship_id
function NAVY_MEMBERSHIP.try_set_ship(id, linked_id)
	return ffi.C.alice_navy_membership_try_set_ship(id, linked_id)
end
---@param id navy_membership_id
---@return navy_id
function NAVY_MEMBERSHIP.get_navy(id)
	return ffi.C.alice_navy_membership_get_navy(id)
end
---@param id navy_membership_id
---@param linked_id navy_id
function NAVY_MEMBERSHIP.set_navy(id, linked_id)
	return ffi.C.alice_navy_membership_set_navy(id, linked_id)
end
---@param id navy_membership_id
---@param linked_id navy_id
function NAVY_MEMBERSHIP.try_set_navy(id, linked_id)
	return ffi.C.alice_navy_membership_try_set_navy(id, linked_id)
end
