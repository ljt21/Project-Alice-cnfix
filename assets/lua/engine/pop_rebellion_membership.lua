-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_pop_rebellion_membership_is_valid(int32_t api_arg_0_id);
uint32_t alice_pop_rebellion_membership_size();
void alice_pop_rebellion_membership_resize(uint32_t api_arg_0_value);
int32_t alice_pop_rebellion_membership_get_pop(int32_t api_arg_0_id);
void alice_pop_rebellion_membership_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_rebellion_membership_try_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_pop_rebellion_membership_get_rebel_faction(int32_t api_arg_0_id);
void alice_pop_rebellion_membership_set_rebel_faction(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_rebellion_membership_try_set_rebel_faction(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
POP_REBELLION_MEMBERSHIP = {}
---@param id pop_rebellion_membership_id
---@return number
function POP_REBELLION_MEMBERSHIP.is_valid(id)
	return ffi.C.alice_pop_rebellion_membership_is_valid(id)
end
---@return number
function POP_REBELLION_MEMBERSHIP.size()
	return ffi.C.alice_pop_rebellion_membership_size()
end
---@param value number
function POP_REBELLION_MEMBERSHIP.resize(value)
	return ffi.C.alice_pop_rebellion_membership_resize(value)
end
---@param id pop_rebellion_membership_id
---@return pop_id
function POP_REBELLION_MEMBERSHIP.get_pop(id)
	return ffi.C.alice_pop_rebellion_membership_get_pop(id)
end
---@param id pop_rebellion_membership_id
---@param linked_id pop_id
function POP_REBELLION_MEMBERSHIP.set_pop(id, linked_id)
	return ffi.C.alice_pop_rebellion_membership_set_pop(id, linked_id)
end
---@param id pop_rebellion_membership_id
---@param linked_id pop_id
function POP_REBELLION_MEMBERSHIP.try_set_pop(id, linked_id)
	return ffi.C.alice_pop_rebellion_membership_try_set_pop(id, linked_id)
end
---@param id pop_rebellion_membership_id
---@return rebel_faction_id
function POP_REBELLION_MEMBERSHIP.get_rebel_faction(id)
	return ffi.C.alice_pop_rebellion_membership_get_rebel_faction(id)
end
---@param id pop_rebellion_membership_id
---@param linked_id rebel_faction_id
function POP_REBELLION_MEMBERSHIP.set_rebel_faction(id, linked_id)
	return ffi.C.alice_pop_rebellion_membership_set_rebel_faction(id, linked_id)
end
---@param id pop_rebellion_membership_id
---@param linked_id rebel_faction_id
function POP_REBELLION_MEMBERSHIP.try_set_rebel_faction(id, linked_id)
	return ffi.C.alice_pop_rebellion_membership_try_set_rebel_faction(id, linked_id)
end
