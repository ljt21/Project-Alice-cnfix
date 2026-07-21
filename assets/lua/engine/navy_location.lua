-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_navy_location_is_valid(int32_t api_arg_0_id);
uint32_t alice_navy_location_size();
void alice_navy_location_resize(uint32_t api_arg_0_value);
int32_t alice_navy_location_get_navy(int32_t api_arg_0_id);
void alice_navy_location_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_navy_location_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_navy_location_get_location(int32_t api_arg_0_id);
void alice_navy_location_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_navy_location_try_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
NAVY_LOCATION = {}
---@param id navy_location_id
---@return number
function NAVY_LOCATION.is_valid(id)
	return ffi.C.alice_navy_location_is_valid(id)
end
---@return number
function NAVY_LOCATION.size()
	return ffi.C.alice_navy_location_size()
end
---@param value number
function NAVY_LOCATION.resize(value)
	return ffi.C.alice_navy_location_resize(value)
end
---@param id navy_location_id
---@return navy_id
function NAVY_LOCATION.get_navy(id)
	return ffi.C.alice_navy_location_get_navy(id)
end
---@param id navy_location_id
---@param linked_id navy_id
function NAVY_LOCATION.set_navy(id, linked_id)
	return ffi.C.alice_navy_location_set_navy(id, linked_id)
end
---@param id navy_location_id
---@param linked_id navy_id
function NAVY_LOCATION.try_set_navy(id, linked_id)
	return ffi.C.alice_navy_location_try_set_navy(id, linked_id)
end
---@param id navy_location_id
---@return province_id
function NAVY_LOCATION.get_location(id)
	return ffi.C.alice_navy_location_get_location(id)
end
---@param id navy_location_id
---@param linked_id province_id
function NAVY_LOCATION.set_location(id, linked_id)
	return ffi.C.alice_navy_location_set_location(id, linked_id)
end
---@param id navy_location_id
---@param linked_id province_id
function NAVY_LOCATION.try_set_location(id, linked_id)
	return ffi.C.alice_navy_location_try_set_location(id, linked_id)
end
