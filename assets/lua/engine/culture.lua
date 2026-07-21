-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_culture_is_valid(int32_t api_arg_0_id);
uint32_t alice_culture_size();
void alice_culture_resize(uint32_t api_arg_0_value);
int32_t alice_culture_get_name(int32_t api_arg_0_id);
void alice_culture_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint32_t alice_culture_get_color(int32_t api_arg_0_id);
void alice_culture_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value);
int8_t alice_culture_get_radicalism(int32_t api_arg_0_id);
void alice_culture_set_radicalism(int32_t api_arg_0_id, int8_t api_arg_1_value);
int32_t alice_culture_get_culture_group_membership_as_member(int32_t api_arg_0_id);
int32_t alice_culture_get_culture_group_membership(int32_t api_arg_0_id);
]]
CULTURE = {}
---@param id culture_id
---@return number
function CULTURE.is_valid(id)
	return ffi.C.alice_culture_is_valid(id)
end
---@return number
function CULTURE.size()
	return ffi.C.alice_culture_size()
end
---@param value number
function CULTURE.resize(value)
	return ffi.C.alice_culture_resize(value)
end
---@param id culture_id
---@return text_key
function CULTURE.get_name(id)
	return ffi.C.alice_culture_get_name(id)
end
---@param id culture_id
---@param value text_key
function CULTURE.set_name(id, value)
	return ffi.C.alice_culture_set_name(id, value)
end
---@param id culture_id
---@return number
function CULTURE.get_color(id)
	return ffi.C.alice_culture_get_color(id)
end
---@param id culture_id
---@param value number
function CULTURE.set_color(id, value)
	return ffi.C.alice_culture_set_color(id, value)
end
---@param id culture_id
---@return number
function CULTURE.get_radicalism(id)
	return ffi.C.alice_culture_get_radicalism(id)
end
---@param id culture_id
---@param value number
function CULTURE.set_radicalism(id, value)
	return ffi.C.alice_culture_set_radicalism(id, value)
end
---@param id culture_id
---@return culture_group_membership_id
function CULTURE.get_culture_group_membership_as_member(id)
	return ffi.C.alice_culture_get_culture_group_membership_as_member(id)
end
---@param id culture_id
---@return culture_group_membership_id
function CULTURE.get_culture_group_membership(id)
	return ffi.C.alice_culture_get_culture_group_membership(id)
end
