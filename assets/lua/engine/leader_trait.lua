-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_leader_trait_is_valid(int32_t api_arg_0_id);
uint32_t alice_leader_trait_size();
void alice_leader_trait_resize(uint32_t api_arg_0_value);
int32_t alice_leader_trait_get_name(int32_t api_arg_0_id);
void alice_leader_trait_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_leader_trait_get_organisation(int32_t api_arg_0_id);
void alice_leader_trait_set_organisation(int32_t api_arg_0_id, float api_arg_1_value);
float alice_leader_trait_get_morale(int32_t api_arg_0_id);
void alice_leader_trait_set_morale(int32_t api_arg_0_id, float api_arg_1_value);
float alice_leader_trait_get_attack(int32_t api_arg_0_id);
void alice_leader_trait_set_attack(int32_t api_arg_0_id, float api_arg_1_value);
float alice_leader_trait_get_defense(int32_t api_arg_0_id);
void alice_leader_trait_set_defense(int32_t api_arg_0_id, float api_arg_1_value);
float alice_leader_trait_get_reconnaissance(int32_t api_arg_0_id);
void alice_leader_trait_set_reconnaissance(int32_t api_arg_0_id, float api_arg_1_value);
float alice_leader_trait_get_speed(int32_t api_arg_0_id);
void alice_leader_trait_set_speed(int32_t api_arg_0_id, float api_arg_1_value);
float alice_leader_trait_get_experience(int32_t api_arg_0_id);
void alice_leader_trait_set_experience(int32_t api_arg_0_id, float api_arg_1_value);
float alice_leader_trait_get_reliability(int32_t api_arg_0_id);
void alice_leader_trait_set_reliability(int32_t api_arg_0_id, float api_arg_1_value);
]]
LEADER_TRAIT = {}
---@param id leader_trait_id
---@return number
function LEADER_TRAIT.is_valid(id)
	return ffi.C.alice_leader_trait_is_valid(id)
end
---@return number
function LEADER_TRAIT.size()
	return ffi.C.alice_leader_trait_size()
end
---@param value number
function LEADER_TRAIT.resize(value)
	return ffi.C.alice_leader_trait_resize(value)
end
---@param id leader_trait_id
---@return text_key
function LEADER_TRAIT.get_name(id)
	return ffi.C.alice_leader_trait_get_name(id)
end
---@param id leader_trait_id
---@param value text_key
function LEADER_TRAIT.set_name(id, value)
	return ffi.C.alice_leader_trait_set_name(id, value)
end
---@param id leader_trait_id
---@return number
function LEADER_TRAIT.get_organisation(id)
	return ffi.C.alice_leader_trait_get_organisation(id)
end
---@param id leader_trait_id
---@param value number
function LEADER_TRAIT.set_organisation(id, value)
	return ffi.C.alice_leader_trait_set_organisation(id, value)
end
---@param id leader_trait_id
---@return number
function LEADER_TRAIT.get_morale(id)
	return ffi.C.alice_leader_trait_get_morale(id)
end
---@param id leader_trait_id
---@param value number
function LEADER_TRAIT.set_morale(id, value)
	return ffi.C.alice_leader_trait_set_morale(id, value)
end
---@param id leader_trait_id
---@return number
function LEADER_TRAIT.get_attack(id)
	return ffi.C.alice_leader_trait_get_attack(id)
end
---@param id leader_trait_id
---@param value number
function LEADER_TRAIT.set_attack(id, value)
	return ffi.C.alice_leader_trait_set_attack(id, value)
end
---@param id leader_trait_id
---@return number
function LEADER_TRAIT.get_defense(id)
	return ffi.C.alice_leader_trait_get_defense(id)
end
---@param id leader_trait_id
---@param value number
function LEADER_TRAIT.set_defense(id, value)
	return ffi.C.alice_leader_trait_set_defense(id, value)
end
---@param id leader_trait_id
---@return number
function LEADER_TRAIT.get_reconnaissance(id)
	return ffi.C.alice_leader_trait_get_reconnaissance(id)
end
---@param id leader_trait_id
---@param value number
function LEADER_TRAIT.set_reconnaissance(id, value)
	return ffi.C.alice_leader_trait_set_reconnaissance(id, value)
end
---@param id leader_trait_id
---@return number
function LEADER_TRAIT.get_speed(id)
	return ffi.C.alice_leader_trait_get_speed(id)
end
---@param id leader_trait_id
---@param value number
function LEADER_TRAIT.set_speed(id, value)
	return ffi.C.alice_leader_trait_set_speed(id, value)
end
---@param id leader_trait_id
---@return number
function LEADER_TRAIT.get_experience(id)
	return ffi.C.alice_leader_trait_get_experience(id)
end
---@param id leader_trait_id
---@param value number
function LEADER_TRAIT.set_experience(id, value)
	return ffi.C.alice_leader_trait_set_experience(id, value)
end
---@param id leader_trait_id
---@return number
function LEADER_TRAIT.get_reliability(id)
	return ffi.C.alice_leader_trait_get_reliability(id)
end
---@param id leader_trait_id
---@param value number
function LEADER_TRAIT.set_reliability(id, value)
	return ffi.C.alice_leader_trait_set_reliability(id, value)
end
