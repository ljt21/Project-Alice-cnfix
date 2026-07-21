-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_nation_adjacency_is_valid(int32_t api_arg_0_id);
uint32_t alice_nation_adjacency_size();
void alice_nation_adjacency_resize(uint32_t api_arg_0_value);
int32_t alice_nation_adjacency_get_connected_nations(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_nation_adjacency_set_connected_nations(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id);
void alice_nation_adjacency_try_set_connected_nations(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id);
]]
NATION_ADJACENCY = {}
---@param id nation_adjacency_id
---@return number
function NATION_ADJACENCY.is_valid(id)
	return ffi.C.alice_nation_adjacency_is_valid(id)
end
---@return number
function NATION_ADJACENCY.size()
	return ffi.C.alice_nation_adjacency_size()
end
---@param value number
function NATION_ADJACENCY.resize(value)
	return ffi.C.alice_nation_adjacency_resize(value)
end
---@param id nation_adjacency_id
---@param value number
---@return nation_id
function NATION_ADJACENCY.get_connected_nations(id, value)
	return ffi.C.alice_nation_adjacency_get_connected_nations(id, value)
end
---@param id nation_adjacency_id
---@param value number
---@param linked_id nation_id
function NATION_ADJACENCY.set_connected_nations(id, value, linked_id)
	return ffi.C.alice_nation_adjacency_set_connected_nations(id, value, linked_id)
end
---@param id nation_adjacency_id
---@param value number
---@param linked_id nation_id
function NATION_ADJACENCY.try_set_connected_nations(id, value, linked_id)
	return ffi.C.alice_nation_adjacency_try_set_connected_nations(id, value, linked_id)
end
