-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_naval_battle_is_valid(int32_t api_arg_0_id);
uint32_t alice_naval_battle_size();
void alice_naval_battle_resize(uint32_t api_arg_0_value);
bool alice_naval_battle_get_war_attacker_is_attacker(int32_t api_arg_0_id);
void alice_naval_battle_set_war_attacker_is_attacker(int32_t api_arg_0_id, bool api_arg_1_value);
uint8_t alice_naval_battle_get_dice_rolls(int32_t api_arg_0_id);
void alice_naval_battle_set_dice_rolls(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint16_t alice_naval_battle_get_attacker_big_ships(int32_t api_arg_0_id);
void alice_naval_battle_set_attacker_big_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_naval_battle_get_attacker_small_ships(int32_t api_arg_0_id);
void alice_naval_battle_set_attacker_small_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_naval_battle_get_attacker_transport_ships(int32_t api_arg_0_id);
void alice_naval_battle_set_attacker_transport_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_naval_battle_get_attacker_big_ships_lost(int32_t api_arg_0_id);
void alice_naval_battle_set_attacker_big_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_naval_battle_get_attacker_small_ships_lost(int32_t api_arg_0_id);
void alice_naval_battle_set_attacker_small_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_naval_battle_get_attacker_transport_ships_lost(int32_t api_arg_0_id);
void alice_naval_battle_set_attacker_transport_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_naval_battle_get_defender_big_ships(int32_t api_arg_0_id);
void alice_naval_battle_set_defender_big_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_naval_battle_get_defender_small_ships(int32_t api_arg_0_id);
void alice_naval_battle_set_defender_small_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_naval_battle_get_defender_transport_ships(int32_t api_arg_0_id);
void alice_naval_battle_set_defender_transport_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_naval_battle_get_defender_big_ships_lost(int32_t api_arg_0_id);
void alice_naval_battle_set_defender_big_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_naval_battle_get_defender_small_ships_lost(int32_t api_arg_0_id);
void alice_naval_battle_set_defender_small_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_naval_battle_get_defender_transport_ships_lost(int32_t api_arg_0_id);
void alice_naval_battle_set_defender_transport_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value);
float alice_naval_battle_get_attacker_loss_value(int32_t api_arg_0_id);
void alice_naval_battle_set_attacker_loss_value(int32_t api_arg_0_id, float api_arg_1_value);
float alice_naval_battle_get_defender_loss_value(int32_t api_arg_0_id);
void alice_naval_battle_set_defender_loss_value(int32_t api_arg_0_id, float api_arg_1_value);
float alice_naval_battle_get_avg_distance_from_center_line(int32_t api_arg_0_id);
void alice_naval_battle_set_avg_distance_from_center_line(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_naval_battle_get_naval_battle_location_as_battle(int32_t api_arg_0_id);
int32_t alice_naval_battle_get_naval_battle_location(int32_t api_arg_0_id);
int32_t alice_naval_battle_get_naval_battle_in_war_as_battle(int32_t api_arg_0_id);
int32_t alice_naval_battle_get_naval_battle_in_war(int32_t api_arg_0_id);
int32_t alice_naval_battle_get_range_navy_battle_participation_as_battle(int32_t i);
int32_t alice_naval_battle_get_index_navy_battle_participation_as_battle(int32_t i, int32_t subindex);
int32_t alice_naval_battle_get_attacking_admiral_as_battle(int32_t api_arg_0_id);
int32_t alice_naval_battle_get_attacking_admiral(int32_t api_arg_0_id);
int32_t alice_naval_battle_get_defending_admiral_as_battle(int32_t api_arg_0_id);
int32_t alice_naval_battle_get_defending_admiral(int32_t api_arg_0_id);
]]
NAVAL_BATTLE = {}
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.is_valid(id)
	return ffi.C.alice_naval_battle_is_valid(id)
end
---@return number
function NAVAL_BATTLE.size()
	return ffi.C.alice_naval_battle_size()
end
---@param value number
function NAVAL_BATTLE.resize(value)
	return ffi.C.alice_naval_battle_resize(value)
end
---@param id naval_battle_id
---@return boolean
function NAVAL_BATTLE.get_war_attacker_is_attacker(id)
	return ffi.C.alice_naval_battle_get_war_attacker_is_attacker(id)
end
---@param id naval_battle_id
---@param value boolean
function NAVAL_BATTLE.set_war_attacker_is_attacker(id, value)
	return ffi.C.alice_naval_battle_set_war_attacker_is_attacker(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_dice_rolls(id)
	return ffi.C.alice_naval_battle_get_dice_rolls(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_dice_rolls(id, value)
	return ffi.C.alice_naval_battle_set_dice_rolls(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_attacker_big_ships(id)
	return ffi.C.alice_naval_battle_get_attacker_big_ships(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_attacker_big_ships(id, value)
	return ffi.C.alice_naval_battle_set_attacker_big_ships(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_attacker_small_ships(id)
	return ffi.C.alice_naval_battle_get_attacker_small_ships(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_attacker_small_ships(id, value)
	return ffi.C.alice_naval_battle_set_attacker_small_ships(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_attacker_transport_ships(id)
	return ffi.C.alice_naval_battle_get_attacker_transport_ships(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_attacker_transport_ships(id, value)
	return ffi.C.alice_naval_battle_set_attacker_transport_ships(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_attacker_big_ships_lost(id)
	return ffi.C.alice_naval_battle_get_attacker_big_ships_lost(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_attacker_big_ships_lost(id, value)
	return ffi.C.alice_naval_battle_set_attacker_big_ships_lost(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_attacker_small_ships_lost(id)
	return ffi.C.alice_naval_battle_get_attacker_small_ships_lost(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_attacker_small_ships_lost(id, value)
	return ffi.C.alice_naval_battle_set_attacker_small_ships_lost(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_attacker_transport_ships_lost(id)
	return ffi.C.alice_naval_battle_get_attacker_transport_ships_lost(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_attacker_transport_ships_lost(id, value)
	return ffi.C.alice_naval_battle_set_attacker_transport_ships_lost(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_defender_big_ships(id)
	return ffi.C.alice_naval_battle_get_defender_big_ships(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_defender_big_ships(id, value)
	return ffi.C.alice_naval_battle_set_defender_big_ships(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_defender_small_ships(id)
	return ffi.C.alice_naval_battle_get_defender_small_ships(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_defender_small_ships(id, value)
	return ffi.C.alice_naval_battle_set_defender_small_ships(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_defender_transport_ships(id)
	return ffi.C.alice_naval_battle_get_defender_transport_ships(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_defender_transport_ships(id, value)
	return ffi.C.alice_naval_battle_set_defender_transport_ships(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_defender_big_ships_lost(id)
	return ffi.C.alice_naval_battle_get_defender_big_ships_lost(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_defender_big_ships_lost(id, value)
	return ffi.C.alice_naval_battle_set_defender_big_ships_lost(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_defender_small_ships_lost(id)
	return ffi.C.alice_naval_battle_get_defender_small_ships_lost(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_defender_small_ships_lost(id, value)
	return ffi.C.alice_naval_battle_set_defender_small_ships_lost(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_defender_transport_ships_lost(id)
	return ffi.C.alice_naval_battle_get_defender_transport_ships_lost(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_defender_transport_ships_lost(id, value)
	return ffi.C.alice_naval_battle_set_defender_transport_ships_lost(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_attacker_loss_value(id)
	return ffi.C.alice_naval_battle_get_attacker_loss_value(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_attacker_loss_value(id, value)
	return ffi.C.alice_naval_battle_set_attacker_loss_value(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_defender_loss_value(id)
	return ffi.C.alice_naval_battle_get_defender_loss_value(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_defender_loss_value(id, value)
	return ffi.C.alice_naval_battle_set_defender_loss_value(id, value)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_avg_distance_from_center_line(id)
	return ffi.C.alice_naval_battle_get_avg_distance_from_center_line(id)
end
---@param id naval_battle_id
---@param value number
function NAVAL_BATTLE.set_avg_distance_from_center_line(id, value)
	return ffi.C.alice_naval_battle_set_avg_distance_from_center_line(id, value)
end
---@param id naval_battle_id
---@return naval_battle_location_id
function NAVAL_BATTLE.get_naval_battle_location_as_battle(id)
	return ffi.C.alice_naval_battle_get_naval_battle_location_as_battle(id)
end
---@param id naval_battle_id
---@return naval_battle_location_id
function NAVAL_BATTLE.get_naval_battle_location(id)
	return ffi.C.alice_naval_battle_get_naval_battle_location(id)
end
---@param id naval_battle_id
---@return naval_battle_in_war_id
function NAVAL_BATTLE.get_naval_battle_in_war_as_battle(id)
	return ffi.C.alice_naval_battle_get_naval_battle_in_war_as_battle(id)
end
---@param id naval_battle_id
---@return naval_battle_in_war_id
function NAVAL_BATTLE.get_naval_battle_in_war(id)
	return ffi.C.alice_naval_battle_get_naval_battle_in_war(id)
end
---@param id naval_battle_id
---@return number
function NAVAL_BATTLE.get_range_length_navy_battle_participation(id)
	return ffi.C.alice_naval_battle_get_range_navy_battle_participation_as_battle(id)
end
---@param id naval_battle_id
---@param index number
---@return navy_battle_participation_id
function NAVAL_BATTLE.get_item_from_range_navy_battle_participation(id, index)
	return ffi.C.alice_naval_battle_get_index_navy_battle_participation_as_battle(id, index)
end
---@param id naval_battle_id
---@return attacking_admiral_id
function NAVAL_BATTLE.get_attacking_admiral_as_battle(id)
	return ffi.C.alice_naval_battle_get_attacking_admiral_as_battle(id)
end
---@param id naval_battle_id
---@return attacking_admiral_id
function NAVAL_BATTLE.get_attacking_admiral(id)
	return ffi.C.alice_naval_battle_get_attacking_admiral(id)
end
---@param id naval_battle_id
---@return defending_admiral_id
function NAVAL_BATTLE.get_defending_admiral_as_battle(id)
	return ffi.C.alice_naval_battle_get_defending_admiral_as_battle(id)
end
---@param id naval_battle_id
---@return defending_admiral_id
function NAVAL_BATTLE.get_defending_admiral(id)
	return ffi.C.alice_naval_battle_get_defending_admiral(id)
end
