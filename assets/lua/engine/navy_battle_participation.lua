-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_navy_battle_participation_is_valid(int32_t api_arg_0_id);
uint32_t alice_navy_battle_participation_size();
void alice_navy_battle_participation_resize(uint32_t api_arg_0_value);
int32_t alice_navy_battle_participation_get_navy(int32_t api_arg_0_id);
void alice_navy_battle_participation_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_navy_battle_participation_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_navy_battle_participation_get_battle(int32_t api_arg_0_id);
void alice_navy_battle_participation_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_navy_battle_participation_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
NAVY_BATTLE_PARTICIPATION = {}
---@param id navy_battle_participation_id
---@return number
function NAVY_BATTLE_PARTICIPATION.is_valid(id)
	return ffi.C.alice_navy_battle_participation_is_valid(id)
end
---@return number
function NAVY_BATTLE_PARTICIPATION.size()
	return ffi.C.alice_navy_battle_participation_size()
end
---@param value number
function NAVY_BATTLE_PARTICIPATION.resize(value)
	return ffi.C.alice_navy_battle_participation_resize(value)
end
---@param id navy_battle_participation_id
---@return navy_id
function NAVY_BATTLE_PARTICIPATION.get_navy(id)
	return ffi.C.alice_navy_battle_participation_get_navy(id)
end
---@param id navy_battle_participation_id
---@param linked_id navy_id
function NAVY_BATTLE_PARTICIPATION.set_navy(id, linked_id)
	return ffi.C.alice_navy_battle_participation_set_navy(id, linked_id)
end
---@param id navy_battle_participation_id
---@param linked_id navy_id
function NAVY_BATTLE_PARTICIPATION.try_set_navy(id, linked_id)
	return ffi.C.alice_navy_battle_participation_try_set_navy(id, linked_id)
end
---@param id navy_battle_participation_id
---@return naval_battle_id
function NAVY_BATTLE_PARTICIPATION.get_battle(id)
	return ffi.C.alice_navy_battle_participation_get_battle(id)
end
---@param id navy_battle_participation_id
---@param linked_id naval_battle_id
function NAVY_BATTLE_PARTICIPATION.set_battle(id, linked_id)
	return ffi.C.alice_navy_battle_participation_set_battle(id, linked_id)
end
---@param id navy_battle_participation_id
---@param linked_id naval_battle_id
function NAVY_BATTLE_PARTICIPATION.try_set_battle(id, linked_id)
	return ffi.C.alice_navy_battle_participation_try_set_battle(id, linked_id)
end
