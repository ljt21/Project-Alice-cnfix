-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_land_battle_location_is_valid(int32_t api_arg_0_id);
uint32_t alice_land_battle_location_size();
void alice_land_battle_location_resize(uint32_t api_arg_0_value);
int32_t alice_land_battle_location_get_battle(int32_t api_arg_0_id);
void alice_land_battle_location_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_land_battle_location_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_land_battle_location_get_location(int32_t api_arg_0_id);
void alice_land_battle_location_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_land_battle_location_try_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
LAND_BATTLE_LOCATION = {}
---@param id land_battle_location_id
---@return number
function LAND_BATTLE_LOCATION.is_valid(id)
	return ffi.C.alice_land_battle_location_is_valid(id)
end
---@return number
function LAND_BATTLE_LOCATION.size()
	return ffi.C.alice_land_battle_location_size()
end
---@param value number
function LAND_BATTLE_LOCATION.resize(value)
	return ffi.C.alice_land_battle_location_resize(value)
end
---@param id land_battle_location_id
---@return land_battle_id
function LAND_BATTLE_LOCATION.get_battle(id)
	return ffi.C.alice_land_battle_location_get_battle(id)
end
---@param id land_battle_location_id
---@param linked_id land_battle_id
function LAND_BATTLE_LOCATION.set_battle(id, linked_id)
	return ffi.C.alice_land_battle_location_set_battle(id, linked_id)
end
---@param id land_battle_location_id
---@param linked_id land_battle_id
function LAND_BATTLE_LOCATION.try_set_battle(id, linked_id)
	return ffi.C.alice_land_battle_location_try_set_battle(id, linked_id)
end
---@param id land_battle_location_id
---@return province_id
function LAND_BATTLE_LOCATION.get_location(id)
	return ffi.C.alice_land_battle_location_get_location(id)
end
---@param id land_battle_location_id
---@param linked_id province_id
function LAND_BATTLE_LOCATION.set_location(id, linked_id)
	return ffi.C.alice_land_battle_location_set_location(id, linked_id)
end
---@param id land_battle_location_id
---@param linked_id province_id
function LAND_BATTLE_LOCATION.try_set_location(id, linked_id)
	return ffi.C.alice_land_battle_location_try_set_location(id, linked_id)
end
