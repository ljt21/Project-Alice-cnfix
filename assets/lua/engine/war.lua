-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_war_is_valid(int32_t api_arg_0_id);
uint32_t alice_war_size();
void alice_war_resize(uint32_t api_arg_0_value);
int32_t alice_war_get_primary_attacker(int32_t api_arg_0_id);
void alice_war_set_primary_attacker(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_war_get_primary_defender(int32_t api_arg_0_id);
void alice_war_set_primary_defender(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_war_get_name(int32_t api_arg_0_id);
void alice_war_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_war_get_over_state(int32_t api_arg_0_id);
void alice_war_set_over_state(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_war_get_original_target(int32_t api_arg_0_id);
void alice_war_set_original_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_war_get_original_attacker(int32_t api_arg_0_id);
void alice_war_set_original_attacker(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_war_get_over_tag(int32_t api_arg_0_id);
void alice_war_set_over_tag(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_war_get_is_great(int32_t api_arg_0_id);
void alice_war_set_is_great(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_war_get_is_crisis_war(int32_t api_arg_0_id);
void alice_war_set_is_crisis_war(int32_t api_arg_0_id, bool api_arg_1_value);
uint16_t alice_war_get_number_of_battles(int32_t api_arg_0_id);
void alice_war_set_number_of_battles(int32_t api_arg_0_id, uint16_t api_arg_1_value);
float alice_war_get_attacker_battle_score(int32_t api_arg_0_id);
void alice_war_set_attacker_battle_score(int32_t api_arg_0_id, float api_arg_1_value);
float alice_war_get_defender_battle_score(int32_t api_arg_0_id);
void alice_war_set_defender_battle_score(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_war_get_range_naval_battle_in_war_as_war(int32_t i);
int32_t alice_war_get_index_naval_battle_in_war_as_war(int32_t i, int32_t subindex);
int32_t alice_war_get_range_land_battle_in_war_as_war(int32_t i);
int32_t alice_war_get_index_land_battle_in_war_as_war(int32_t i, int32_t subindex);
int32_t alice_war_get_range_war_settlement_as_war(int32_t i);
int32_t alice_war_get_index_war_settlement_as_war(int32_t i, int32_t subindex);
int32_t alice_war_get_range_war_participant_as_war(int32_t i);
int32_t alice_war_get_index_war_participant_as_war(int32_t i, int32_t subindex);
int32_t alice_war_get_range_wargoals_attached_as_war(int32_t i);
int32_t alice_war_get_index_wargoals_attached_as_war(int32_t i, int32_t subindex);
]]
WAR = {}
---@param id war_id
---@return number
function WAR.is_valid(id)
	return ffi.C.alice_war_is_valid(id)
end
---@return number
function WAR.size()
	return ffi.C.alice_war_size()
end
---@param value number
function WAR.resize(value)
	return ffi.C.alice_war_resize(value)
end
---@param id war_id
---@return nation_id
function WAR.get_primary_attacker(id)
	return ffi.C.alice_war_get_primary_attacker(id)
end
---@param id war_id
---@param value nation_id
function WAR.set_primary_attacker(id, value)
	return ffi.C.alice_war_set_primary_attacker(id, value)
end
---@param id war_id
---@return nation_id
function WAR.get_primary_defender(id)
	return ffi.C.alice_war_get_primary_defender(id)
end
---@param id war_id
---@param value nation_id
function WAR.set_primary_defender(id, value)
	return ffi.C.alice_war_set_primary_defender(id, value)
end
---@param id war_id
---@return text_key
function WAR.get_name(id)
	return ffi.C.alice_war_get_name(id)
end
---@param id war_id
---@param value text_key
function WAR.set_name(id, value)
	return ffi.C.alice_war_set_name(id, value)
end
---@param id war_id
---@return state_definition_id
function WAR.get_over_state(id)
	return ffi.C.alice_war_get_over_state(id)
end
---@param id war_id
---@param value state_definition_id
function WAR.set_over_state(id, value)
	return ffi.C.alice_war_set_over_state(id, value)
end
---@param id war_id
---@return nation_id
function WAR.get_original_target(id)
	return ffi.C.alice_war_get_original_target(id)
end
---@param id war_id
---@param value nation_id
function WAR.set_original_target(id, value)
	return ffi.C.alice_war_set_original_target(id, value)
end
---@param id war_id
---@return nation_id
function WAR.get_original_attacker(id)
	return ffi.C.alice_war_get_original_attacker(id)
end
---@param id war_id
---@param value nation_id
function WAR.set_original_attacker(id, value)
	return ffi.C.alice_war_set_original_attacker(id, value)
end
---@param id war_id
---@return national_identity_id
function WAR.get_over_tag(id)
	return ffi.C.alice_war_get_over_tag(id)
end
---@param id war_id
---@param value national_identity_id
function WAR.set_over_tag(id, value)
	return ffi.C.alice_war_set_over_tag(id, value)
end
---@param id war_id
---@return boolean
function WAR.get_is_great(id)
	return ffi.C.alice_war_get_is_great(id)
end
---@param id war_id
---@param value boolean
function WAR.set_is_great(id, value)
	return ffi.C.alice_war_set_is_great(id, value)
end
---@param id war_id
---@return boolean
function WAR.get_is_crisis_war(id)
	return ffi.C.alice_war_get_is_crisis_war(id)
end
---@param id war_id
---@param value boolean
function WAR.set_is_crisis_war(id, value)
	return ffi.C.alice_war_set_is_crisis_war(id, value)
end
---@param id war_id
---@return number
function WAR.get_number_of_battles(id)
	return ffi.C.alice_war_get_number_of_battles(id)
end
---@param id war_id
---@param value number
function WAR.set_number_of_battles(id, value)
	return ffi.C.alice_war_set_number_of_battles(id, value)
end
---@param id war_id
---@return number
function WAR.get_attacker_battle_score(id)
	return ffi.C.alice_war_get_attacker_battle_score(id)
end
---@param id war_id
---@param value number
function WAR.set_attacker_battle_score(id, value)
	return ffi.C.alice_war_set_attacker_battle_score(id, value)
end
---@param id war_id
---@return number
function WAR.get_defender_battle_score(id)
	return ffi.C.alice_war_get_defender_battle_score(id)
end
---@param id war_id
---@param value number
function WAR.set_defender_battle_score(id, value)
	return ffi.C.alice_war_set_defender_battle_score(id, value)
end
---@param id war_id
---@return number
function WAR.get_range_length_naval_battle_in_war(id)
	return ffi.C.alice_war_get_range_naval_battle_in_war_as_war(id)
end
---@param id war_id
---@param index number
---@return naval_battle_in_war_id
function WAR.get_item_from_range_naval_battle_in_war(id, index)
	return ffi.C.alice_war_get_index_naval_battle_in_war_as_war(id, index)
end
---@param id war_id
---@return number
function WAR.get_range_length_land_battle_in_war(id)
	return ffi.C.alice_war_get_range_land_battle_in_war_as_war(id)
end
---@param id war_id
---@param index number
---@return land_battle_in_war_id
function WAR.get_item_from_range_land_battle_in_war(id, index)
	return ffi.C.alice_war_get_index_land_battle_in_war_as_war(id, index)
end
---@param id war_id
---@return number
function WAR.get_range_length_war_settlement(id)
	return ffi.C.alice_war_get_range_war_settlement_as_war(id)
end
---@param id war_id
---@param index number
---@return war_settlement_id
function WAR.get_item_from_range_war_settlement(id, index)
	return ffi.C.alice_war_get_index_war_settlement_as_war(id, index)
end
---@param id war_id
---@return number
function WAR.get_range_length_war_participant(id)
	return ffi.C.alice_war_get_range_war_participant_as_war(id)
end
---@param id war_id
---@param index number
---@return war_participant_id
function WAR.get_item_from_range_war_participant(id, index)
	return ffi.C.alice_war_get_index_war_participant_as_war(id, index)
end
---@param id war_id
---@return number
function WAR.get_range_length_wargoals_attached(id)
	return ffi.C.alice_war_get_range_wargoals_attached_as_war(id)
end
---@param id war_id
---@param index number
---@return wargoals_attached_id
function WAR.get_item_from_range_wargoals_attached(id, index)
	return ffi.C.alice_war_get_index_wargoals_attached_as_war(id, index)
end
