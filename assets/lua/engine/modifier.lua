-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_modifier_is_valid(int32_t api_arg_0_id);
uint32_t alice_modifier_size();
void alice_modifier_resize(uint32_t api_arg_0_value);
int32_t alice_modifier_get_name(int32_t api_arg_0_id);
void alice_modifier_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_modifier_get_desc(int32_t api_arg_0_id);
void alice_modifier_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint8_t alice_modifier_get_icon(int32_t api_arg_0_id);
void alice_modifier_set_icon(int32_t api_arg_0_id, uint8_t api_arg_1_value);
]]
MODIFIER = {}
---@param id modifier_id
---@return number
function MODIFIER.is_valid(id)
	return ffi.C.alice_modifier_is_valid(id)
end
---@return number
function MODIFIER.size()
	return ffi.C.alice_modifier_size()
end
---@param value number
function MODIFIER.resize(value)
	return ffi.C.alice_modifier_resize(value)
end
---@param id modifier_id
---@return text_key
function MODIFIER.get_name(id)
	return ffi.C.alice_modifier_get_name(id)
end
---@param id modifier_id
---@param value text_key
function MODIFIER.set_name(id, value)
	return ffi.C.alice_modifier_set_name(id, value)
end
---@param id modifier_id
---@return text_key
function MODIFIER.get_desc(id)
	return ffi.C.alice_modifier_get_desc(id)
end
---@param id modifier_id
---@param value text_key
function MODIFIER.set_desc(id, value)
	return ffi.C.alice_modifier_set_desc(id, value)
end
---@param id modifier_id
---@return number
function MODIFIER.get_icon(id)
	return ffi.C.alice_modifier_get_icon(id)
end
---@param id modifier_id
---@param value number
function MODIFIER.set_icon(id, value)
	return ffi.C.alice_modifier_set_icon(id, value)
end
