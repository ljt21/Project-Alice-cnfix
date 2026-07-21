-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_land_battle_is_valid(int32_t api_arg_0_id);
uint32_t alice_land_battle_size();
void alice_land_battle_resize(uint32_t api_arg_0_value);
bool alice_land_battle_get_war_attacker_is_attacker(int32_t api_arg_0_id);
void alice_land_battle_set_war_attacker_is_attacker(int32_t api_arg_0_id, bool api_arg_1_value);
uint8_t alice_land_battle_get_dice_rolls(int32_t api_arg_0_id);
void alice_land_battle_set_dice_rolls(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_land_battle_get_combat_width(int32_t api_arg_0_id);
void alice_land_battle_set_combat_width(int32_t api_arg_0_id, uint8_t api_arg_1_value);
float alice_land_battle_get_attacker_infantry(int32_t api_arg_0_id);
void alice_land_battle_set_attacker_infantry(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_attacker_cav(int32_t api_arg_0_id);
void alice_land_battle_set_attacker_cav(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_attacker_support(int32_t api_arg_0_id);
void alice_land_battle_set_attacker_support(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_attacker_infantry_lost(int32_t api_arg_0_id);
void alice_land_battle_set_attacker_infantry_lost(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_attacker_cav_lost(int32_t api_arg_0_id);
void alice_land_battle_set_attacker_cav_lost(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_attacker_support_lost(int32_t api_arg_0_id);
void alice_land_battle_set_attacker_support_lost(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_defender_infantry(int32_t api_arg_0_id);
void alice_land_battle_set_defender_infantry(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_defender_cav(int32_t api_arg_0_id);
void alice_land_battle_set_defender_cav(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_defender_support(int32_t api_arg_0_id);
void alice_land_battle_set_defender_support(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_defender_infantry_lost(int32_t api_arg_0_id);
void alice_land_battle_set_defender_infantry_lost(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_defender_cav_lost(int32_t api_arg_0_id);
void alice_land_battle_set_defender_cav_lost(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_defender_support_lost(int32_t api_arg_0_id);
void alice_land_battle_set_defender_support_lost(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_defender_casualties(int32_t api_arg_0_id);
void alice_land_battle_set_defender_casualties(int32_t api_arg_0_id, float api_arg_1_value);
float alice_land_battle_get_attacker_casualties(int32_t api_arg_0_id);
void alice_land_battle_set_attacker_casualties(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_land_battle_get_land_battle_location_as_battle(int32_t api_arg_0_id);
int32_t alice_land_battle_get_land_battle_location(int32_t api_arg_0_id);
int32_t alice_land_battle_get_land_battle_in_war_as_battle(int32_t api_arg_0_id);
int32_t alice_land_battle_get_land_battle_in_war(int32_t api_arg_0_id);
int32_t alice_land_battle_get_range_army_battle_participation_as_battle(int32_t i);
int32_t alice_land_battle_get_index_army_battle_participation_as_battle(int32_t i, int32_t subindex);
int32_t alice_land_battle_get_attacking_general_as_battle(int32_t api_arg_0_id);
int32_t alice_land_battle_get_attacking_general(int32_t api_arg_0_id);
int32_t alice_land_battle_get_defending_general_as_battle(int32_t api_arg_0_id);
int32_t alice_land_battle_get_defending_general(int32_t api_arg_0_id);
]]
LAND_BATTLE = {}
---@param id land_battle_id
---@return number
function LAND_BATTLE.is_valid(id)
	return ffi.C.alice_land_battle_is_valid(id)
end
---@return number
function LAND_BATTLE.size()
	return ffi.C.alice_land_battle_size()
end
---@param value number
function LAND_BATTLE.resize(value)
	return ffi.C.alice_land_battle_resize(value)
end
---@param id land_battle_id
---@return boolean
function LAND_BATTLE.get_war_attacker_is_attacker(id)
	return ffi.C.alice_land_battle_get_war_attacker_is_attacker(id)
end
---@param id land_battle_id
---@param value boolean
function LAND_BATTLE.set_war_attacker_is_attacker(id, value)
	return ffi.C.alice_land_battle_set_war_attacker_is_attacker(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_dice_rolls(id)
	return ffi.C.alice_land_battle_get_dice_rolls(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_dice_rolls(id, value)
	return ffi.C.alice_land_battle_set_dice_rolls(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_combat_width(id)
	return ffi.C.alice_land_battle_get_combat_width(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_combat_width(id, value)
	return ffi.C.alice_land_battle_set_combat_width(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_attacker_infantry(id)
	return ffi.C.alice_land_battle_get_attacker_infantry(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_attacker_infantry(id, value)
	return ffi.C.alice_land_battle_set_attacker_infantry(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_attacker_cav(id)
	return ffi.C.alice_land_battle_get_attacker_cav(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_attacker_cav(id, value)
	return ffi.C.alice_land_battle_set_attacker_cav(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_attacker_support(id)
	return ffi.C.alice_land_battle_get_attacker_support(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_attacker_support(id, value)
	return ffi.C.alice_land_battle_set_attacker_support(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_attacker_infantry_lost(id)
	return ffi.C.alice_land_battle_get_attacker_infantry_lost(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_attacker_infantry_lost(id, value)
	return ffi.C.alice_land_battle_set_attacker_infantry_lost(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_attacker_cav_lost(id)
	return ffi.C.alice_land_battle_get_attacker_cav_lost(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_attacker_cav_lost(id, value)
	return ffi.C.alice_land_battle_set_attacker_cav_lost(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_attacker_support_lost(id)
	return ffi.C.alice_land_battle_get_attacker_support_lost(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_attacker_support_lost(id, value)
	return ffi.C.alice_land_battle_set_attacker_support_lost(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_defender_infantry(id)
	return ffi.C.alice_land_battle_get_defender_infantry(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_defender_infantry(id, value)
	return ffi.C.alice_land_battle_set_defender_infantry(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_defender_cav(id)
	return ffi.C.alice_land_battle_get_defender_cav(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_defender_cav(id, value)
	return ffi.C.alice_land_battle_set_defender_cav(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_defender_support(id)
	return ffi.C.alice_land_battle_get_defender_support(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_defender_support(id, value)
	return ffi.C.alice_land_battle_set_defender_support(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_defender_infantry_lost(id)
	return ffi.C.alice_land_battle_get_defender_infantry_lost(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_defender_infantry_lost(id, value)
	return ffi.C.alice_land_battle_set_defender_infantry_lost(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_defender_cav_lost(id)
	return ffi.C.alice_land_battle_get_defender_cav_lost(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_defender_cav_lost(id, value)
	return ffi.C.alice_land_battle_set_defender_cav_lost(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_defender_support_lost(id)
	return ffi.C.alice_land_battle_get_defender_support_lost(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_defender_support_lost(id, value)
	return ffi.C.alice_land_battle_set_defender_support_lost(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_defender_casualties(id)
	return ffi.C.alice_land_battle_get_defender_casualties(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_defender_casualties(id, value)
	return ffi.C.alice_land_battle_set_defender_casualties(id, value)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_attacker_casualties(id)
	return ffi.C.alice_land_battle_get_attacker_casualties(id)
end
---@param id land_battle_id
---@param value number
function LAND_BATTLE.set_attacker_casualties(id, value)
	return ffi.C.alice_land_battle_set_attacker_casualties(id, value)
end
---@param id land_battle_id
---@return land_battle_location_id
function LAND_BATTLE.get_land_battle_location_as_battle(id)
	return ffi.C.alice_land_battle_get_land_battle_location_as_battle(id)
end
---@param id land_battle_id
---@return land_battle_location_id
function LAND_BATTLE.get_land_battle_location(id)
	return ffi.C.alice_land_battle_get_land_battle_location(id)
end
---@param id land_battle_id
---@return land_battle_in_war_id
function LAND_BATTLE.get_land_battle_in_war_as_battle(id)
	return ffi.C.alice_land_battle_get_land_battle_in_war_as_battle(id)
end
---@param id land_battle_id
---@return land_battle_in_war_id
function LAND_BATTLE.get_land_battle_in_war(id)
	return ffi.C.alice_land_battle_get_land_battle_in_war(id)
end
---@param id land_battle_id
---@return number
function LAND_BATTLE.get_range_length_army_battle_participation(id)
	return ffi.C.alice_land_battle_get_range_army_battle_participation_as_battle(id)
end
---@param id land_battle_id
---@param index number
---@return army_battle_participation_id
function LAND_BATTLE.get_item_from_range_army_battle_participation(id, index)
	return ffi.C.alice_land_battle_get_index_army_battle_participation_as_battle(id, index)
end
---@param id land_battle_id
---@return attacking_general_id
function LAND_BATTLE.get_attacking_general_as_battle(id)
	return ffi.C.alice_land_battle_get_attacking_general_as_battle(id)
end
---@param id land_battle_id
---@return attacking_general_id
function LAND_BATTLE.get_attacking_general(id)
	return ffi.C.alice_land_battle_get_attacking_general(id)
end
---@param id land_battle_id
---@return defending_general_id
function LAND_BATTLE.get_defending_general_as_battle(id)
	return ffi.C.alice_land_battle_get_defending_general_as_battle(id)
end
---@param id land_battle_id
---@return defending_general_id
function LAND_BATTLE.get_defending_general(id)
	return ffi.C.alice_land_battle_get_defending_general(id)
end
