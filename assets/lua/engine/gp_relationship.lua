-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_gp_relationship_is_valid(int32_t api_arg_0_id);
uint32_t alice_gp_relationship_size();
void alice_gp_relationship_resize(uint32_t api_arg_0_value);
float alice_gp_relationship_get_influence(int32_t api_arg_0_id);
void alice_gp_relationship_set_influence(int32_t api_arg_0_id, float api_arg_1_value);
uint8_t alice_gp_relationship_get_status(int32_t api_arg_0_id);
void alice_gp_relationship_set_status(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int32_t alice_gp_relationship_get_influence_target(int32_t api_arg_0_id);
void alice_gp_relationship_set_influence_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_gp_relationship_try_set_influence_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_gp_relationship_get_great_power(int32_t api_arg_0_id);
void alice_gp_relationship_set_great_power(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_gp_relationship_try_set_great_power(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
GP_RELATIONSHIP = {}
---@param id gp_relationship_id
---@return number
function GP_RELATIONSHIP.is_valid(id)
	return ffi.C.alice_gp_relationship_is_valid(id)
end
---@return number
function GP_RELATIONSHIP.size()
	return ffi.C.alice_gp_relationship_size()
end
---@param value number
function GP_RELATIONSHIP.resize(value)
	return ffi.C.alice_gp_relationship_resize(value)
end
---@param id gp_relationship_id
---@return number
function GP_RELATIONSHIP.get_influence(id)
	return ffi.C.alice_gp_relationship_get_influence(id)
end
---@param id gp_relationship_id
---@param value number
function GP_RELATIONSHIP.set_influence(id, value)
	return ffi.C.alice_gp_relationship_set_influence(id, value)
end
---@param id gp_relationship_id
---@return number
function GP_RELATIONSHIP.get_status(id)
	return ffi.C.alice_gp_relationship_get_status(id)
end
---@param id gp_relationship_id
---@param value number
function GP_RELATIONSHIP.set_status(id, value)
	return ffi.C.alice_gp_relationship_set_status(id, value)
end
---@param id gp_relationship_id
---@return nation_id
function GP_RELATIONSHIP.get_influence_target(id)
	return ffi.C.alice_gp_relationship_get_influence_target(id)
end
---@param id gp_relationship_id
---@param linked_id nation_id
function GP_RELATIONSHIP.set_influence_target(id, linked_id)
	return ffi.C.alice_gp_relationship_set_influence_target(id, linked_id)
end
---@param id gp_relationship_id
---@param linked_id nation_id
function GP_RELATIONSHIP.try_set_influence_target(id, linked_id)
	return ffi.C.alice_gp_relationship_try_set_influence_target(id, linked_id)
end
---@param id gp_relationship_id
---@return nation_id
function GP_RELATIONSHIP.get_great_power(id)
	return ffi.C.alice_gp_relationship_get_great_power(id)
end
---@param id gp_relationship_id
---@param linked_id nation_id
function GP_RELATIONSHIP.set_great_power(id, linked_id)
	return ffi.C.alice_gp_relationship_set_great_power(id, linked_id)
end
---@param id gp_relationship_id
---@param linked_id nation_id
function GP_RELATIONSHIP.try_set_great_power(id, linked_id)
	return ffi.C.alice_gp_relationship_try_set_great_power(id, linked_id)
end
