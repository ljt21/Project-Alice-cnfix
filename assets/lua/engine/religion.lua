-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_religion_is_valid(int32_t api_arg_0_id);
uint32_t alice_religion_size();
void alice_religion_resize(uint32_t api_arg_0_value);
int32_t alice_religion_get_name(int32_t api_arg_0_id);
void alice_religion_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint32_t alice_religion_get_color(int32_t api_arg_0_id);
void alice_religion_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value);
uint8_t alice_religion_get_icon(int32_t api_arg_0_id);
void alice_religion_set_icon(int32_t api_arg_0_id, uint8_t api_arg_1_value);
bool alice_religion_get_is_pagan(int32_t api_arg_0_id);
void alice_religion_set_is_pagan(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_religion_get_nation_modifier(int32_t api_arg_0_id);
void alice_religion_set_nation_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
RELIGION = {}
---@param id religion_id
---@return number
function RELIGION.is_valid(id)
	return ffi.C.alice_religion_is_valid(id)
end
---@return number
function RELIGION.size()
	return ffi.C.alice_religion_size()
end
---@param value number
function RELIGION.resize(value)
	return ffi.C.alice_religion_resize(value)
end
---@param id religion_id
---@return text_key
function RELIGION.get_name(id)
	return ffi.C.alice_religion_get_name(id)
end
---@param id religion_id
---@param value text_key
function RELIGION.set_name(id, value)
	return ffi.C.alice_religion_set_name(id, value)
end
---@param id religion_id
---@return number
function RELIGION.get_color(id)
	return ffi.C.alice_religion_get_color(id)
end
---@param id religion_id
---@param value number
function RELIGION.set_color(id, value)
	return ffi.C.alice_religion_set_color(id, value)
end
---@param id religion_id
---@return number
function RELIGION.get_icon(id)
	return ffi.C.alice_religion_get_icon(id)
end
---@param id religion_id
---@param value number
function RELIGION.set_icon(id, value)
	return ffi.C.alice_religion_set_icon(id, value)
end
---@param id religion_id
---@return boolean
function RELIGION.get_is_pagan(id)
	return ffi.C.alice_religion_get_is_pagan(id)
end
---@param id religion_id
---@param value boolean
function RELIGION.set_is_pagan(id, value)
	return ffi.C.alice_religion_set_is_pagan(id, value)
end
---@param id religion_id
---@return modifier_id
function RELIGION.get_nation_modifier(id)
	return ffi.C.alice_religion_get_nation_modifier(id)
end
---@param id religion_id
---@param value modifier_id
function RELIGION.set_nation_modifier(id, value)
	return ffi.C.alice_religion_set_nation_modifier(id, value)
end
