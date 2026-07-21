-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_administration_is_valid(int32_t api_arg_0_id);
uint32_t alice_administration_size();
void alice_administration_resize(uint32_t api_arg_0_value);
int32_t alice_administration_get_capital(int32_t api_arg_0_id);
void alice_administration_set_capital(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_administration_get_desired_size(int32_t api_arg_0_id);
void alice_administration_set_desired_size(int32_t api_arg_0_id, float api_arg_1_value);
float alice_administration_get_weight(int32_t api_arg_0_id);
void alice_administration_set_weight(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_administration_get_nation_administration_as_administration(int32_t api_arg_0_id);
int32_t alice_administration_get_nation_administration(int32_t api_arg_0_id);
]]
ADMINISTRATION = {}
---@param id administration_id
---@return number
function ADMINISTRATION.is_valid(id)
	return ffi.C.alice_administration_is_valid(id)
end
---@return number
function ADMINISTRATION.size()
	return ffi.C.alice_administration_size()
end
---@param value number
function ADMINISTRATION.resize(value)
	return ffi.C.alice_administration_resize(value)
end
---@param id administration_id
---@return province_id
function ADMINISTRATION.get_capital(id)
	return ffi.C.alice_administration_get_capital(id)
end
---@param id administration_id
---@param value province_id
function ADMINISTRATION.set_capital(id, value)
	return ffi.C.alice_administration_set_capital(id, value)
end
---@param id administration_id
---@return number
function ADMINISTRATION.get_desired_size(id)
	return ffi.C.alice_administration_get_desired_size(id)
end
---@param id administration_id
---@param value number
function ADMINISTRATION.set_desired_size(id, value)
	return ffi.C.alice_administration_set_desired_size(id, value)
end
---@param id administration_id
---@return number
function ADMINISTRATION.get_weight(id)
	return ffi.C.alice_administration_get_weight(id)
end
---@param id administration_id
---@param value number
function ADMINISTRATION.set_weight(id, value)
	return ffi.C.alice_administration_set_weight(id, value)
end
---@param id administration_id
---@return nation_administration_id
function ADMINISTRATION.get_nation_administration_as_administration(id)
	return ffi.C.alice_administration_get_nation_administration_as_administration(id)
end
---@param id administration_id
---@return nation_administration_id
function ADMINISTRATION.get_nation_administration(id)
	return ffi.C.alice_administration_get_nation_administration(id)
end
