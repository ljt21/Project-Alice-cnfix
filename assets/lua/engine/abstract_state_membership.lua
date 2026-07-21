-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_abstract_state_membership_is_valid(int32_t api_arg_0_id);
uint32_t alice_abstract_state_membership_size();
void alice_abstract_state_membership_resize(uint32_t api_arg_0_value);
int16_t alice_abstract_state_membership_get_priority(int32_t api_arg_0_id);
void alice_abstract_state_membership_set_priority(int32_t api_arg_0_id, int16_t api_arg_1_value);
int32_t alice_abstract_state_membership_get_province(int32_t api_arg_0_id);
void alice_abstract_state_membership_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_abstract_state_membership_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_abstract_state_membership_get_state(int32_t api_arg_0_id);
void alice_abstract_state_membership_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_abstract_state_membership_try_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
ABSTRACT_STATE_MEMBERSHIP = {}
---@param id abstract_state_membership_id
---@return number
function ABSTRACT_STATE_MEMBERSHIP.is_valid(id)
	return ffi.C.alice_abstract_state_membership_is_valid(id)
end
---@return number
function ABSTRACT_STATE_MEMBERSHIP.size()
	return ffi.C.alice_abstract_state_membership_size()
end
---@param value number
function ABSTRACT_STATE_MEMBERSHIP.resize(value)
	return ffi.C.alice_abstract_state_membership_resize(value)
end
---@param id abstract_state_membership_id
---@return number
function ABSTRACT_STATE_MEMBERSHIP.get_priority(id)
	return ffi.C.alice_abstract_state_membership_get_priority(id)
end
---@param id abstract_state_membership_id
---@param value number
function ABSTRACT_STATE_MEMBERSHIP.set_priority(id, value)
	return ffi.C.alice_abstract_state_membership_set_priority(id, value)
end
---@param id abstract_state_membership_id
---@return province_id
function ABSTRACT_STATE_MEMBERSHIP.get_province(id)
	return ffi.C.alice_abstract_state_membership_get_province(id)
end
---@param id abstract_state_membership_id
---@param linked_id province_id
function ABSTRACT_STATE_MEMBERSHIP.set_province(id, linked_id)
	return ffi.C.alice_abstract_state_membership_set_province(id, linked_id)
end
---@param id abstract_state_membership_id
---@param linked_id province_id
function ABSTRACT_STATE_MEMBERSHIP.try_set_province(id, linked_id)
	return ffi.C.alice_abstract_state_membership_try_set_province(id, linked_id)
end
---@param id abstract_state_membership_id
---@return state_definition_id
function ABSTRACT_STATE_MEMBERSHIP.get_state(id)
	return ffi.C.alice_abstract_state_membership_get_state(id)
end
---@param id abstract_state_membership_id
---@param linked_id state_definition_id
function ABSTRACT_STATE_MEMBERSHIP.set_state(id, linked_id)
	return ffi.C.alice_abstract_state_membership_set_state(id, linked_id)
end
---@param id abstract_state_membership_id
---@param linked_id state_definition_id
function ABSTRACT_STATE_MEMBERSHIP.try_set_state(id, linked_id)
	return ffi.C.alice_abstract_state_membership_try_set_state(id, linked_id)
end
