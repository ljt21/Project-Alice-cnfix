-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_unilateral_relationship_is_valid(int32_t api_arg_0_id);
uint32_t alice_unilateral_relationship_size();
void alice_unilateral_relationship_resize(uint32_t api_arg_0_value);
float alice_unilateral_relationship_get_foreign_investment(int32_t api_arg_0_id);
void alice_unilateral_relationship_set_foreign_investment(int32_t api_arg_0_id, float api_arg_1_value);
float alice_unilateral_relationship_get_owns_debt_of(int32_t api_arg_0_id);
void alice_unilateral_relationship_set_owns_debt_of(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_unilateral_relationship_get_military_access(int32_t api_arg_0_id);
void alice_unilateral_relationship_set_military_access(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_unilateral_relationship_get_war_subsidies(int32_t api_arg_0_id);
void alice_unilateral_relationship_set_war_subsidies(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_unilateral_relationship_get_reparations(int32_t api_arg_0_id);
void alice_unilateral_relationship_set_reparations(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_unilateral_relationship_get_interested_in_alliance(int32_t api_arg_0_id);
void alice_unilateral_relationship_set_interested_in_alliance(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_unilateral_relationship_get_embargo(int32_t api_arg_0_id);
void alice_unilateral_relationship_set_embargo(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_unilateral_relationship_get_target(int32_t api_arg_0_id);
void alice_unilateral_relationship_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_unilateral_relationship_try_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_unilateral_relationship_get_source(int32_t api_arg_0_id);
void alice_unilateral_relationship_set_source(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_unilateral_relationship_try_set_source(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
UNILATERAL_RELATIONSHIP = {}
---@param id unilateral_relationship_id
---@return number
function UNILATERAL_RELATIONSHIP.is_valid(id)
	return ffi.C.alice_unilateral_relationship_is_valid(id)
end
---@return number
function UNILATERAL_RELATIONSHIP.size()
	return ffi.C.alice_unilateral_relationship_size()
end
---@param value number
function UNILATERAL_RELATIONSHIP.resize(value)
	return ffi.C.alice_unilateral_relationship_resize(value)
end
---@param id unilateral_relationship_id
---@return number
function UNILATERAL_RELATIONSHIP.get_foreign_investment(id)
	return ffi.C.alice_unilateral_relationship_get_foreign_investment(id)
end
---@param id unilateral_relationship_id
---@param value number
function UNILATERAL_RELATIONSHIP.set_foreign_investment(id, value)
	return ffi.C.alice_unilateral_relationship_set_foreign_investment(id, value)
end
---@param id unilateral_relationship_id
---@return number
function UNILATERAL_RELATIONSHIP.get_owns_debt_of(id)
	return ffi.C.alice_unilateral_relationship_get_owns_debt_of(id)
end
---@param id unilateral_relationship_id
---@param value number
function UNILATERAL_RELATIONSHIP.set_owns_debt_of(id, value)
	return ffi.C.alice_unilateral_relationship_set_owns_debt_of(id, value)
end
---@param id unilateral_relationship_id
---@return boolean
function UNILATERAL_RELATIONSHIP.get_military_access(id)
	return ffi.C.alice_unilateral_relationship_get_military_access(id)
end
---@param id unilateral_relationship_id
---@param value boolean
function UNILATERAL_RELATIONSHIP.set_military_access(id, value)
	return ffi.C.alice_unilateral_relationship_set_military_access(id, value)
end
---@param id unilateral_relationship_id
---@return boolean
function UNILATERAL_RELATIONSHIP.get_war_subsidies(id)
	return ffi.C.alice_unilateral_relationship_get_war_subsidies(id)
end
---@param id unilateral_relationship_id
---@param value boolean
function UNILATERAL_RELATIONSHIP.set_war_subsidies(id, value)
	return ffi.C.alice_unilateral_relationship_set_war_subsidies(id, value)
end
---@param id unilateral_relationship_id
---@return boolean
function UNILATERAL_RELATIONSHIP.get_reparations(id)
	return ffi.C.alice_unilateral_relationship_get_reparations(id)
end
---@param id unilateral_relationship_id
---@param value boolean
function UNILATERAL_RELATIONSHIP.set_reparations(id, value)
	return ffi.C.alice_unilateral_relationship_set_reparations(id, value)
end
---@param id unilateral_relationship_id
---@return boolean
function UNILATERAL_RELATIONSHIP.get_interested_in_alliance(id)
	return ffi.C.alice_unilateral_relationship_get_interested_in_alliance(id)
end
---@param id unilateral_relationship_id
---@param value boolean
function UNILATERAL_RELATIONSHIP.set_interested_in_alliance(id, value)
	return ffi.C.alice_unilateral_relationship_set_interested_in_alliance(id, value)
end
---@param id unilateral_relationship_id
---@return boolean
function UNILATERAL_RELATIONSHIP.get_embargo(id)
	return ffi.C.alice_unilateral_relationship_get_embargo(id)
end
---@param id unilateral_relationship_id
---@param value boolean
function UNILATERAL_RELATIONSHIP.set_embargo(id, value)
	return ffi.C.alice_unilateral_relationship_set_embargo(id, value)
end
---@param id unilateral_relationship_id
---@return nation_id
function UNILATERAL_RELATIONSHIP.get_target(id)
	return ffi.C.alice_unilateral_relationship_get_target(id)
end
---@param id unilateral_relationship_id
---@param linked_id nation_id
function UNILATERAL_RELATIONSHIP.set_target(id, linked_id)
	return ffi.C.alice_unilateral_relationship_set_target(id, linked_id)
end
---@param id unilateral_relationship_id
---@param linked_id nation_id
function UNILATERAL_RELATIONSHIP.try_set_target(id, linked_id)
	return ffi.C.alice_unilateral_relationship_try_set_target(id, linked_id)
end
---@param id unilateral_relationship_id
---@return nation_id
function UNILATERAL_RELATIONSHIP.get_source(id)
	return ffi.C.alice_unilateral_relationship_get_source(id)
end
---@param id unilateral_relationship_id
---@param linked_id nation_id
function UNILATERAL_RELATIONSHIP.set_source(id, linked_id)
	return ffi.C.alice_unilateral_relationship_set_source(id, linked_id)
end
---@param id unilateral_relationship_id
---@param linked_id nation_id
function UNILATERAL_RELATIONSHIP.try_set_source(id, linked_id)
	return ffi.C.alice_unilateral_relationship_try_set_source(id, linked_id)
end
