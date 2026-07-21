-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_rebellion_within_is_valid(int32_t api_arg_0_id);
uint32_t alice_rebellion_within_size();
void alice_rebellion_within_resize(uint32_t api_arg_0_value);
int32_t alice_rebellion_within_get_rebels(int32_t api_arg_0_id);
void alice_rebellion_within_set_rebels(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_rebellion_within_try_set_rebels(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebellion_within_get_ruler(int32_t api_arg_0_id);
void alice_rebellion_within_set_ruler(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_rebellion_within_try_set_ruler(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
REBELLION_WITHIN = {}
---@param id rebellion_within_id
---@return number
function REBELLION_WITHIN.is_valid(id)
	return ffi.C.alice_rebellion_within_is_valid(id)
end
---@return number
function REBELLION_WITHIN.size()
	return ffi.C.alice_rebellion_within_size()
end
---@param value number
function REBELLION_WITHIN.resize(value)
	return ffi.C.alice_rebellion_within_resize(value)
end
---@param id rebellion_within_id
---@return rebel_faction_id
function REBELLION_WITHIN.get_rebels(id)
	return ffi.C.alice_rebellion_within_get_rebels(id)
end
---@param id rebellion_within_id
---@param linked_id rebel_faction_id
function REBELLION_WITHIN.set_rebels(id, linked_id)
	return ffi.C.alice_rebellion_within_set_rebels(id, linked_id)
end
---@param id rebellion_within_id
---@param linked_id rebel_faction_id
function REBELLION_WITHIN.try_set_rebels(id, linked_id)
	return ffi.C.alice_rebellion_within_try_set_rebels(id, linked_id)
end
---@param id rebellion_within_id
---@return nation_id
function REBELLION_WITHIN.get_ruler(id)
	return ffi.C.alice_rebellion_within_get_ruler(id)
end
---@param id rebellion_within_id
---@param linked_id nation_id
function REBELLION_WITHIN.set_ruler(id, linked_id)
	return ffi.C.alice_rebellion_within_set_ruler(id, linked_id)
end
---@param id rebellion_within_id
---@param linked_id nation_id
function REBELLION_WITHIN.try_set_ruler(id, linked_id)
	return ffi.C.alice_rebellion_within_try_set_ruler(id, linked_id)
end
