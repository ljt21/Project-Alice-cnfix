-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_pop_location_is_valid(int32_t api_arg_0_id);
uint32_t alice_pop_location_size();
void alice_pop_location_resize(uint32_t api_arg_0_value);
int32_t alice_pop_location_get_pop(int32_t api_arg_0_id);
void alice_pop_location_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_location_try_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_pop_location_get_province(int32_t api_arg_0_id);
void alice_pop_location_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_location_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
POP_LOCATION = {}
---@param id pop_location_id
---@return number
function POP_LOCATION.is_valid(id)
	return ffi.C.alice_pop_location_is_valid(id)
end
---@return number
function POP_LOCATION.size()
	return ffi.C.alice_pop_location_size()
end
---@param value number
function POP_LOCATION.resize(value)
	return ffi.C.alice_pop_location_resize(value)
end
---@param id pop_location_id
---@return pop_id
function POP_LOCATION.get_pop(id)
	return ffi.C.alice_pop_location_get_pop(id)
end
---@param id pop_location_id
---@param linked_id pop_id
function POP_LOCATION.set_pop(id, linked_id)
	return ffi.C.alice_pop_location_set_pop(id, linked_id)
end
---@param id pop_location_id
---@param linked_id pop_id
function POP_LOCATION.try_set_pop(id, linked_id)
	return ffi.C.alice_pop_location_try_set_pop(id, linked_id)
end
---@param id pop_location_id
---@return province_id
function POP_LOCATION.get_province(id)
	return ffi.C.alice_pop_location_get_province(id)
end
---@param id pop_location_id
---@param linked_id province_id
function POP_LOCATION.set_province(id, linked_id)
	return ffi.C.alice_pop_location_set_province(id, linked_id)
end
---@param id pop_location_id
---@param linked_id province_id
function POP_LOCATION.try_set_province(id, linked_id)
	return ffi.C.alice_pop_location_try_set_province(id, linked_id)
end
