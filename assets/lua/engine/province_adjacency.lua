-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_province_adjacency_is_valid(int32_t api_arg_0_id);
uint32_t alice_province_adjacency_size();
void alice_province_adjacency_resize(uint32_t api_arg_0_value);
float alice_province_adjacency_get_distance(int32_t api_arg_0_id);
void alice_province_adjacency_set_distance(int32_t api_arg_0_id, float api_arg_1_value);
float alice_province_adjacency_get_distance_km(int32_t api_arg_0_id);
void alice_province_adjacency_set_distance_km(int32_t api_arg_0_id, float api_arg_1_value);
uint8_t alice_province_adjacency_get_type(int32_t api_arg_0_id);
void alice_province_adjacency_set_type(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int32_t alice_province_adjacency_get_connected_provinces(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_province_adjacency_set_connected_provinces(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id);
void alice_province_adjacency_try_set_connected_provinces(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id);
]]
PROVINCE_ADJACENCY = {}
---@param id province_adjacency_id
---@return number
function PROVINCE_ADJACENCY.is_valid(id)
	return ffi.C.alice_province_adjacency_is_valid(id)
end
---@return number
function PROVINCE_ADJACENCY.size()
	return ffi.C.alice_province_adjacency_size()
end
---@param value number
function PROVINCE_ADJACENCY.resize(value)
	return ffi.C.alice_province_adjacency_resize(value)
end
---@param id province_adjacency_id
---@return number
function PROVINCE_ADJACENCY.get_distance(id)
	return ffi.C.alice_province_adjacency_get_distance(id)
end
---@param id province_adjacency_id
---@param value number
function PROVINCE_ADJACENCY.set_distance(id, value)
	return ffi.C.alice_province_adjacency_set_distance(id, value)
end
---@param id province_adjacency_id
---@return number
function PROVINCE_ADJACENCY.get_distance_km(id)
	return ffi.C.alice_province_adjacency_get_distance_km(id)
end
---@param id province_adjacency_id
---@param value number
function PROVINCE_ADJACENCY.set_distance_km(id, value)
	return ffi.C.alice_province_adjacency_set_distance_km(id, value)
end
---@param id province_adjacency_id
---@return number
function PROVINCE_ADJACENCY.get_type(id)
	return ffi.C.alice_province_adjacency_get_type(id)
end
---@param id province_adjacency_id
---@param value number
function PROVINCE_ADJACENCY.set_type(id, value)
	return ffi.C.alice_province_adjacency_set_type(id, value)
end
---@param id province_adjacency_id
---@param value number
---@return province_id
function PROVINCE_ADJACENCY.get_connected_provinces(id, value)
	return ffi.C.alice_province_adjacency_get_connected_provinces(id, value)
end
---@param id province_adjacency_id
---@param value number
---@param linked_id province_id
function PROVINCE_ADJACENCY.set_connected_provinces(id, value, linked_id)
	return ffi.C.alice_province_adjacency_set_connected_provinces(id, value, linked_id)
end
---@param id province_adjacency_id
---@param value number
---@param linked_id province_id
function PROVINCE_ADJACENCY.try_set_connected_provinces(id, value, linked_id)
	return ffi.C.alice_province_adjacency_try_set_connected_provinces(id, value, linked_id)
end
