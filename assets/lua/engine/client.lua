-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_client_is_valid(int32_t api_arg_0_id);
uint32_t alice_client_size();
void alice_client_resize(uint32_t api_arg_0_value);
size_t alice_client_get_recv_count(int32_t api_arg_0_id);
void alice_client_set_recv_count(int32_t api_arg_0_id, size_t api_arg_1_value);
size_t alice_client_get_total_sent_bytes(int32_t api_arg_0_id);
void alice_client_set_total_sent_bytes(int32_t api_arg_0_id, size_t api_arg_1_value);
bool alice_client_get_handshake(int32_t api_arg_0_id);
void alice_client_set_handshake(int32_t api_arg_0_id, bool api_arg_1_value);
int alice_client_get_recv_buffer_size_used(int32_t api_arg_0_id);
void alice_client_set_recv_buffer_size_used(int32_t api_arg_0_id, int api_arg_1_value);
int alice_client_get_recv_buffer_bytes_read(int32_t api_arg_0_id);
void alice_client_set_recv_buffer_bytes_read(int32_t api_arg_0_id, int api_arg_1_value);
uint8_t alice_client_get_sending_payload(int32_t api_arg_0_id);
void alice_client_set_sending_payload(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint32_t alice_client_get_command_send_count(int32_t api_arg_0_id);
void alice_client_set_command_send_count(int32_t api_arg_0_id, uint32_t api_arg_1_value);
int32_t alice_client_get_player_client_as_client(int32_t api_arg_0_id);
int32_t alice_client_get_player_client(int32_t api_arg_0_id);
]]
CLIENT = {}
---@param id client_id
---@return number
function CLIENT.is_valid(id)
	return ffi.C.alice_client_is_valid(id)
end
---@return number
function CLIENT.size()
	return ffi.C.alice_client_size()
end
---@param value number
function CLIENT.resize(value)
	return ffi.C.alice_client_resize(value)
end
---@param id client_id
---@return number
function CLIENT.get_recv_count(id)
	return ffi.C.alice_client_get_recv_count(id)
end
---@param id client_id
---@param value number
function CLIENT.set_recv_count(id, value)
	return ffi.C.alice_client_set_recv_count(id, value)
end
---@param id client_id
---@return number
function CLIENT.get_total_sent_bytes(id)
	return ffi.C.alice_client_get_total_sent_bytes(id)
end
---@param id client_id
---@param value number
function CLIENT.set_total_sent_bytes(id, value)
	return ffi.C.alice_client_set_total_sent_bytes(id, value)
end
---@param id client_id
---@return boolean
function CLIENT.get_handshake(id)
	return ffi.C.alice_client_get_handshake(id)
end
---@param id client_id
---@param value boolean
function CLIENT.set_handshake(id, value)
	return ffi.C.alice_client_set_handshake(id, value)
end
---@param id client_id
---@return number
function CLIENT.get_recv_buffer_size_used(id)
	return ffi.C.alice_client_get_recv_buffer_size_used(id)
end
---@param id client_id
---@param value number
function CLIENT.set_recv_buffer_size_used(id, value)
	return ffi.C.alice_client_set_recv_buffer_size_used(id, value)
end
---@param id client_id
---@return number
function CLIENT.get_recv_buffer_bytes_read(id)
	return ffi.C.alice_client_get_recv_buffer_bytes_read(id)
end
---@param id client_id
---@param value number
function CLIENT.set_recv_buffer_bytes_read(id, value)
	return ffi.C.alice_client_set_recv_buffer_bytes_read(id, value)
end
---@param id client_id
---@return number
function CLIENT.get_sending_payload(id)
	return ffi.C.alice_client_get_sending_payload(id)
end
---@param id client_id
---@param value number
function CLIENT.set_sending_payload(id, value)
	return ffi.C.alice_client_set_sending_payload(id, value)
end
---@param id client_id
---@return number
function CLIENT.get_command_send_count(id)
	return ffi.C.alice_client_get_command_send_count(id)
end
---@param id client_id
---@param value number
function CLIENT.set_command_send_count(id, value)
	return ffi.C.alice_client_set_command_send_count(id, value)
end
---@param id client_id
---@return player_client_id
function CLIENT.get_player_client_as_client(id)
	return ffi.C.alice_client_get_player_client_as_client(id)
end
---@param id client_id
---@return player_client_id
function CLIENT.get_player_client(id)
	return ffi.C.alice_client_get_player_client(id)
end
