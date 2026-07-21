-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_player_nation_is_valid(int32_t api_arg_0_id);
uint32_t alice_player_nation_size();
void alice_player_nation_resize(uint32_t api_arg_0_value);
int32_t alice_player_nation_get_nation(int32_t api_arg_0_id);
void alice_player_nation_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_player_nation_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_player_nation_get_mp_player(int32_t api_arg_0_id);
void alice_player_nation_set_mp_player(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_player_nation_try_set_mp_player(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
PLAYER_NATION = {}
---@param id player_nation_id
---@return number
function PLAYER_NATION.is_valid(id)
	return ffi.C.alice_player_nation_is_valid(id)
end
---@return number
function PLAYER_NATION.size()
	return ffi.C.alice_player_nation_size()
end
---@param value number
function PLAYER_NATION.resize(value)
	return ffi.C.alice_player_nation_resize(value)
end
---@param id player_nation_id
---@return nation_id
function PLAYER_NATION.get_nation(id)
	return ffi.C.alice_player_nation_get_nation(id)
end
---@param id player_nation_id
---@param linked_id nation_id
function PLAYER_NATION.set_nation(id, linked_id)
	return ffi.C.alice_player_nation_set_nation(id, linked_id)
end
---@param id player_nation_id
---@param linked_id nation_id
function PLAYER_NATION.try_set_nation(id, linked_id)
	return ffi.C.alice_player_nation_try_set_nation(id, linked_id)
end
---@param id player_nation_id
---@return mp_player_id
function PLAYER_NATION.get_mp_player(id)
	return ffi.C.alice_player_nation_get_mp_player(id)
end
---@param id player_nation_id
---@param linked_id mp_player_id
function PLAYER_NATION.set_mp_player(id, linked_id)
	return ffi.C.alice_player_nation_set_mp_player(id, linked_id)
end
---@param id player_nation_id
---@param linked_id mp_player_id
function PLAYER_NATION.try_set_mp_player(id, linked_id)
	return ffi.C.alice_player_nation_try_set_mp_player(id, linked_id)
end
