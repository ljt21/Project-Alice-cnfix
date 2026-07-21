-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_core_is_valid(int32_t api_arg_0_id);
uint32_t alice_core_size();
void alice_core_resize(uint32_t api_arg_0_value);
int32_t alice_core_get_province(int32_t api_arg_0_id);
void alice_core_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_core_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_core_get_identity(int32_t api_arg_0_id);
void alice_core_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_core_try_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
CORE = {}
---@param id core_id
---@return number
function CORE.is_valid(id)
	return ffi.C.alice_core_is_valid(id)
end
---@return number
function CORE.size()
	return ffi.C.alice_core_size()
end
---@param value number
function CORE.resize(value)
	return ffi.C.alice_core_resize(value)
end
---@param id core_id
---@return province_id
function CORE.get_province(id)
	return ffi.C.alice_core_get_province(id)
end
---@param id core_id
---@param linked_id province_id
function CORE.set_province(id, linked_id)
	return ffi.C.alice_core_set_province(id, linked_id)
end
---@param id core_id
---@param linked_id province_id
function CORE.try_set_province(id, linked_id)
	return ffi.C.alice_core_try_set_province(id, linked_id)
end
---@param id core_id
---@return national_identity_id
function CORE.get_identity(id)
	return ffi.C.alice_core_get_identity(id)
end
---@param id core_id
---@param linked_id national_identity_id
function CORE.set_identity(id, linked_id)
	return ffi.C.alice_core_set_identity(id, linked_id)
end
---@param id core_id
---@param linked_id national_identity_id
function CORE.try_set_identity(id, linked_id)
	return ffi.C.alice_core_try_set_identity(id, linked_id)
end
