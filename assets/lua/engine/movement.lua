-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_movement_is_valid(int32_t api_arg_0_id);
uint32_t alice_movement_size();
void alice_movement_resize(uint32_t api_arg_0_value);
int32_t alice_movement_get_associated_issue_option(int32_t api_arg_0_id);
void alice_movement_set_associated_issue_option(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_movement_get_associated_independence(int32_t api_arg_0_id);
void alice_movement_set_associated_independence(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_movement_get_pop_support(int32_t api_arg_0_id);
void alice_movement_set_pop_support(int32_t api_arg_0_id, float api_arg_1_value);
float alice_movement_get_radicalism(int32_t api_arg_0_id);
void alice_movement_set_radicalism(int32_t api_arg_0_id, float api_arg_1_value);
float alice_movement_get_transient_radicalism(int32_t api_arg_0_id);
void alice_movement_set_transient_radicalism(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_movement_get_movement_within_as_movement(int32_t api_arg_0_id);
int32_t alice_movement_get_movement_within(int32_t api_arg_0_id);
int32_t alice_movement_get_range_pop_movement_membership_as_movement(int32_t i);
int32_t alice_movement_get_index_pop_movement_membership_as_movement(int32_t i, int32_t subindex);
]]
MOVEMENT = {}
---@param id movement_id
---@return number
function MOVEMENT.is_valid(id)
	return ffi.C.alice_movement_is_valid(id)
end
---@return number
function MOVEMENT.size()
	return ffi.C.alice_movement_size()
end
---@param value number
function MOVEMENT.resize(value)
	return ffi.C.alice_movement_resize(value)
end
---@param id movement_id
---@return issue_option_id
function MOVEMENT.get_associated_issue_option(id)
	return ffi.C.alice_movement_get_associated_issue_option(id)
end
---@param id movement_id
---@param value issue_option_id
function MOVEMENT.set_associated_issue_option(id, value)
	return ffi.C.alice_movement_set_associated_issue_option(id, value)
end
---@param id movement_id
---@return national_identity_id
function MOVEMENT.get_associated_independence(id)
	return ffi.C.alice_movement_get_associated_independence(id)
end
---@param id movement_id
---@param value national_identity_id
function MOVEMENT.set_associated_independence(id, value)
	return ffi.C.alice_movement_set_associated_independence(id, value)
end
---@param id movement_id
---@return number
function MOVEMENT.get_pop_support(id)
	return ffi.C.alice_movement_get_pop_support(id)
end
---@param id movement_id
---@param value number
function MOVEMENT.set_pop_support(id, value)
	return ffi.C.alice_movement_set_pop_support(id, value)
end
---@param id movement_id
---@return number
function MOVEMENT.get_radicalism(id)
	return ffi.C.alice_movement_get_radicalism(id)
end
---@param id movement_id
---@param value number
function MOVEMENT.set_radicalism(id, value)
	return ffi.C.alice_movement_set_radicalism(id, value)
end
---@param id movement_id
---@return number
function MOVEMENT.get_transient_radicalism(id)
	return ffi.C.alice_movement_get_transient_radicalism(id)
end
---@param id movement_id
---@param value number
function MOVEMENT.set_transient_radicalism(id, value)
	return ffi.C.alice_movement_set_transient_radicalism(id, value)
end
---@param id movement_id
---@return movement_within_id
function MOVEMENT.get_movement_within_as_movement(id)
	return ffi.C.alice_movement_get_movement_within_as_movement(id)
end
---@param id movement_id
---@return movement_within_id
function MOVEMENT.get_movement_within(id)
	return ffi.C.alice_movement_get_movement_within(id)
end
---@param id movement_id
---@return number
function MOVEMENT.get_range_length_pop_movement_membership(id)
	return ffi.C.alice_movement_get_range_pop_movement_membership_as_movement(id)
end
---@param id movement_id
---@param index number
---@return pop_movement_membership_id
function MOVEMENT.get_item_from_range_pop_movement_membership(id, index)
	return ffi.C.alice_movement_get_index_pop_movement_membership_as_movement(id, index)
end
