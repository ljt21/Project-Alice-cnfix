-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_army_location_is_valid(int32_t api_arg_0_id);
uint32_t alice_army_location_size();
void alice_army_location_resize(uint32_t api_arg_0_value);
int32_t alice_army_location_get_army(int32_t api_arg_0_id);
void alice_army_location_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_location_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_army_location_get_location(int32_t api_arg_0_id);
void alice_army_location_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_location_try_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
ARMY_LOCATION = {}
---@param id army_location_id
---@return number
function ARMY_LOCATION.is_valid(id)
	return ffi.C.alice_army_location_is_valid(id)
end
---@return number
function ARMY_LOCATION.size()
	return ffi.C.alice_army_location_size()
end
---@param value number
function ARMY_LOCATION.resize(value)
	return ffi.C.alice_army_location_resize(value)
end
---@param id army_location_id
---@return army_id
function ARMY_LOCATION.get_army(id)
	return ffi.C.alice_army_location_get_army(id)
end
---@param id army_location_id
---@param linked_id army_id
function ARMY_LOCATION.set_army(id, linked_id)
	return ffi.C.alice_army_location_set_army(id, linked_id)
end
---@param id army_location_id
---@param linked_id army_id
function ARMY_LOCATION.try_set_army(id, linked_id)
	return ffi.C.alice_army_location_try_set_army(id, linked_id)
end
---@param id army_location_id
---@return province_id
function ARMY_LOCATION.get_location(id)
	return ffi.C.alice_army_location_get_location(id)
end
---@param id army_location_id
---@param linked_id province_id
function ARMY_LOCATION.set_location(id, linked_id)
	return ffi.C.alice_army_location_set_location(id, linked_id)
end
---@param id army_location_id
---@param linked_id province_id
function ARMY_LOCATION.try_set_location(id, linked_id)
	return ffi.C.alice_army_location_try_set_location(id, linked_id)
end
