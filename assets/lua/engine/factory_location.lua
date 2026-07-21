-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_factory_location_is_valid(int32_t api_arg_0_id);
uint32_t alice_factory_location_size();
void alice_factory_location_resize(uint32_t api_arg_0_value);
int32_t alice_factory_location_get_factory(int32_t api_arg_0_id);
void alice_factory_location_set_factory(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_factory_location_try_set_factory(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_factory_location_get_province(int32_t api_arg_0_id);
void alice_factory_location_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_factory_location_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
FACTORY_LOCATION = {}
---@param id factory_location_id
---@return number
function FACTORY_LOCATION.is_valid(id)
	return ffi.C.alice_factory_location_is_valid(id)
end
---@return number
function FACTORY_LOCATION.size()
	return ffi.C.alice_factory_location_size()
end
---@param value number
function FACTORY_LOCATION.resize(value)
	return ffi.C.alice_factory_location_resize(value)
end
---@param id factory_location_id
---@return factory_id
function FACTORY_LOCATION.get_factory(id)
	return ffi.C.alice_factory_location_get_factory(id)
end
---@param id factory_location_id
---@param linked_id factory_id
function FACTORY_LOCATION.set_factory(id, linked_id)
	return ffi.C.alice_factory_location_set_factory(id, linked_id)
end
---@param id factory_location_id
---@param linked_id factory_id
function FACTORY_LOCATION.try_set_factory(id, linked_id)
	return ffi.C.alice_factory_location_try_set_factory(id, linked_id)
end
---@param id factory_location_id
---@return province_id
function FACTORY_LOCATION.get_province(id)
	return ffi.C.alice_factory_location_get_province(id)
end
---@param id factory_location_id
---@param linked_id province_id
function FACTORY_LOCATION.set_province(id, linked_id)
	return ffi.C.alice_factory_location_set_province(id, linked_id)
end
---@param id factory_location_id
---@param linked_id province_id
function FACTORY_LOCATION.try_set_province(id, linked_id)
	return ffi.C.alice_factory_location_try_set_province(id, linked_id)
end
