-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_mp_player_is_valid(int32_t api_arg_0_id);
uint32_t alice_mp_player_size();
void alice_mp_player_resize(uint32_t api_arg_0_value);
bool alice_mp_player_get_fully_loaded(int32_t api_arg_0_id);
void alice_mp_player_set_fully_loaded(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_mp_player_get_is_oos(int32_t api_arg_0_id);
void alice_mp_player_set_is_oos(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_mp_player_get_player_nation_as_mp_player(int32_t api_arg_0_id);
int32_t alice_mp_player_get_player_nation(int32_t api_arg_0_id);
int32_t alice_mp_player_get_player_client_as_mp_player(int32_t api_arg_0_id);
int32_t alice_mp_player_get_player_client(int32_t api_arg_0_id);
]]
MP_PLAYER = {}
---@param id mp_player_id
---@return number
function MP_PLAYER.is_valid(id)
	return ffi.C.alice_mp_player_is_valid(id)
end
---@return number
function MP_PLAYER.size()
	return ffi.C.alice_mp_player_size()
end
---@param value number
function MP_PLAYER.resize(value)
	return ffi.C.alice_mp_player_resize(value)
end
---@param id mp_player_id
---@return boolean
function MP_PLAYER.get_fully_loaded(id)
	return ffi.C.alice_mp_player_get_fully_loaded(id)
end
---@param id mp_player_id
---@param value boolean
function MP_PLAYER.set_fully_loaded(id, value)
	return ffi.C.alice_mp_player_set_fully_loaded(id, value)
end
---@param id mp_player_id
---@return boolean
function MP_PLAYER.get_is_oos(id)
	return ffi.C.alice_mp_player_get_is_oos(id)
end
---@param id mp_player_id
---@param value boolean
function MP_PLAYER.set_is_oos(id, value)
	return ffi.C.alice_mp_player_set_is_oos(id, value)
end
---@param id mp_player_id
---@return player_nation_id
function MP_PLAYER.get_player_nation_as_mp_player(id)
	return ffi.C.alice_mp_player_get_player_nation_as_mp_player(id)
end
---@param id mp_player_id
---@return player_nation_id
function MP_PLAYER.get_player_nation(id)
	return ffi.C.alice_mp_player_get_player_nation(id)
end
---@param id mp_player_id
---@return player_client_id
function MP_PLAYER.get_player_client_as_mp_player(id)
	return ffi.C.alice_mp_player_get_player_client_as_mp_player(id)
end
---@param id mp_player_id
---@return player_client_id
function MP_PLAYER.get_player_client(id)
	return ffi.C.alice_mp_player_get_player_client(id)
end
