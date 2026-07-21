-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_land_battle_in_war_is_valid(int32_t api_arg_0_id);
uint32_t alice_land_battle_in_war_size();
void alice_land_battle_in_war_resize(uint32_t api_arg_0_value);
int32_t alice_land_battle_in_war_get_battle(int32_t api_arg_0_id);
void alice_land_battle_in_war_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_land_battle_in_war_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_land_battle_in_war_get_war(int32_t api_arg_0_id);
void alice_land_battle_in_war_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_land_battle_in_war_try_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
LAND_BATTLE_IN_WAR = {}
---@param id land_battle_in_war_id
---@return number
function LAND_BATTLE_IN_WAR.is_valid(id)
	return ffi.C.alice_land_battle_in_war_is_valid(id)
end
---@return number
function LAND_BATTLE_IN_WAR.size()
	return ffi.C.alice_land_battle_in_war_size()
end
---@param value number
function LAND_BATTLE_IN_WAR.resize(value)
	return ffi.C.alice_land_battle_in_war_resize(value)
end
---@param id land_battle_in_war_id
---@return land_battle_id
function LAND_BATTLE_IN_WAR.get_battle(id)
	return ffi.C.alice_land_battle_in_war_get_battle(id)
end
---@param id land_battle_in_war_id
---@param linked_id land_battle_id
function LAND_BATTLE_IN_WAR.set_battle(id, linked_id)
	return ffi.C.alice_land_battle_in_war_set_battle(id, linked_id)
end
---@param id land_battle_in_war_id
---@param linked_id land_battle_id
function LAND_BATTLE_IN_WAR.try_set_battle(id, linked_id)
	return ffi.C.alice_land_battle_in_war_try_set_battle(id, linked_id)
end
---@param id land_battle_in_war_id
---@return war_id
function LAND_BATTLE_IN_WAR.get_war(id)
	return ffi.C.alice_land_battle_in_war_get_war(id)
end
---@param id land_battle_in_war_id
---@param linked_id war_id
function LAND_BATTLE_IN_WAR.set_war(id, linked_id)
	return ffi.C.alice_land_battle_in_war_set_war(id, linked_id)
end
---@param id land_battle_in_war_id
---@param linked_id war_id
function LAND_BATTLE_IN_WAR.try_set_war(id, linked_id)
	return ffi.C.alice_land_battle_in_war_try_set_war(id, linked_id)
end
