-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_state_definition_is_valid(int32_t api_arg_0_id);
uint32_t alice_state_definition_size();
void alice_state_definition_resize(uint32_t api_arg_0_value);
int32_t alice_state_definition_get_name(int32_t api_arg_0_id);
void alice_state_definition_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_state_definition_get_colonization_temperature(int32_t api_arg_0_id);
void alice_state_definition_set_colonization_temperature(int32_t api_arg_0_id, float api_arg_1_value);
uint8_t alice_state_definition_get_colonization_stage(int32_t api_arg_0_id);
void alice_state_definition_set_colonization_stage(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int32_t alice_state_definition_get_range_colonization_as_state(int32_t i);
int32_t alice_state_definition_get_index_colonization_as_state(int32_t i, int32_t subindex);
int32_t alice_state_definition_get_range_abstract_state_membership_as_state(int32_t i);
int32_t alice_state_definition_get_index_abstract_state_membership_as_state(int32_t i, int32_t subindex);
]]
STATE_DEFINITION = {}
---@param id state_definition_id
---@return number
function STATE_DEFINITION.is_valid(id)
	return ffi.C.alice_state_definition_is_valid(id)
end
---@return number
function STATE_DEFINITION.size()
	return ffi.C.alice_state_definition_size()
end
---@param value number
function STATE_DEFINITION.resize(value)
	return ffi.C.alice_state_definition_resize(value)
end
---@param id state_definition_id
---@return text_key
function STATE_DEFINITION.get_name(id)
	return ffi.C.alice_state_definition_get_name(id)
end
---@param id state_definition_id
---@param value text_key
function STATE_DEFINITION.set_name(id, value)
	return ffi.C.alice_state_definition_set_name(id, value)
end
---@param id state_definition_id
---@return number
function STATE_DEFINITION.get_colonization_temperature(id)
	return ffi.C.alice_state_definition_get_colonization_temperature(id)
end
---@param id state_definition_id
---@param value number
function STATE_DEFINITION.set_colonization_temperature(id, value)
	return ffi.C.alice_state_definition_set_colonization_temperature(id, value)
end
---@param id state_definition_id
---@return number
function STATE_DEFINITION.get_colonization_stage(id)
	return ffi.C.alice_state_definition_get_colonization_stage(id)
end
---@param id state_definition_id
---@param value number
function STATE_DEFINITION.set_colonization_stage(id, value)
	return ffi.C.alice_state_definition_set_colonization_stage(id, value)
end
---@param id state_definition_id
---@return number
function STATE_DEFINITION.get_range_length_colonization(id)
	return ffi.C.alice_state_definition_get_range_colonization_as_state(id)
end
---@param id state_definition_id
---@param index number
---@return colonization_id
function STATE_DEFINITION.get_item_from_range_colonization(id, index)
	return ffi.C.alice_state_definition_get_index_colonization_as_state(id, index)
end
---@param id state_definition_id
---@return number
function STATE_DEFINITION.get_range_length_abstract_state_membership(id)
	return ffi.C.alice_state_definition_get_range_abstract_state_membership_as_state(id)
end
---@param id state_definition_id
---@param index number
---@return abstract_state_membership_id
function STATE_DEFINITION.get_item_from_range_abstract_state_membership(id, index)
	return ffi.C.alice_state_definition_get_index_abstract_state_membership_as_state(id, index)
end
