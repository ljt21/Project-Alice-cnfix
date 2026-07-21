-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_player_client_is_valid(int32_t api_arg_0_id);
uint32_t alice_player_client_size();
void alice_player_client_resize(uint32_t api_arg_0_value);
int32_t alice_player_client_get_client(int32_t api_arg_0_id);
void alice_player_client_set_client(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_player_client_try_set_client(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_player_client_get_mp_player(int32_t api_arg_0_id);
void alice_player_client_set_mp_player(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_player_client_try_set_mp_player(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
PLAYER_CLIENT = {}
---@param id player_client_id
---@return number
function PLAYER_CLIENT.is_valid(id)
	return ffi.C.alice_player_client_is_valid(id)
end
---@return number
function PLAYER_CLIENT.size()
	return ffi.C.alice_player_client_size()
end
---@param value number
function PLAYER_CLIENT.resize(value)
	return ffi.C.alice_player_client_resize(value)
end
---@param id player_client_id
---@return client_id
function PLAYER_CLIENT.get_client(id)
	return ffi.C.alice_player_client_get_client(id)
end
---@param id player_client_id
---@param linked_id client_id
function PLAYER_CLIENT.set_client(id, linked_id)
	return ffi.C.alice_player_client_set_client(id, linked_id)
end
---@param id player_client_id
---@param linked_id client_id
function PLAYER_CLIENT.try_set_client(id, linked_id)
	return ffi.C.alice_player_client_try_set_client(id, linked_id)
end
---@param id player_client_id
---@return mp_player_id
function PLAYER_CLIENT.get_mp_player(id)
	return ffi.C.alice_player_client_get_mp_player(id)
end
---@param id player_client_id
---@param linked_id mp_player_id
function PLAYER_CLIENT.set_mp_player(id, linked_id)
	return ffi.C.alice_player_client_set_mp_player(id, linked_id)
end
---@param id player_client_id
---@param linked_id mp_player_id
function PLAYER_CLIENT.try_set_mp_player(id, linked_id)
	return ffi.C.alice_player_client_try_set_mp_player(id, linked_id)
end
