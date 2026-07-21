-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_gamerule_is_valid(int32_t api_arg_0_id);
uint32_t alice_gamerule_size();
void alice_gamerule_resize(uint32_t api_arg_0_value);
int32_t alice_gamerule_get_name(int32_t api_arg_0_id);
void alice_gamerule_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_gamerule_get_tooltip_explain(int32_t api_arg_0_id);
void alice_gamerule_set_tooltip_explain(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint8_t alice_gamerule_get_default_setting(int32_t api_arg_0_id);
void alice_gamerule_set_default_setting(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_gamerule_get_settings_count(int32_t api_arg_0_id);
void alice_gamerule_set_settings_count(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_gamerule_get_current_setting(int32_t api_arg_0_id);
void alice_gamerule_set_current_setting(int32_t api_arg_0_id, uint8_t api_arg_1_value);
]]
GAMERULE = {}
---@param id gamerule_id
---@return number
function GAMERULE.is_valid(id)
	return ffi.C.alice_gamerule_is_valid(id)
end
---@return number
function GAMERULE.size()
	return ffi.C.alice_gamerule_size()
end
---@param value number
function GAMERULE.resize(value)
	return ffi.C.alice_gamerule_resize(value)
end
---@param id gamerule_id
---@return text_key
function GAMERULE.get_name(id)
	return ffi.C.alice_gamerule_get_name(id)
end
---@param id gamerule_id
---@param value text_key
function GAMERULE.set_name(id, value)
	return ffi.C.alice_gamerule_set_name(id, value)
end
---@param id gamerule_id
---@return text_key
function GAMERULE.get_tooltip_explain(id)
	return ffi.C.alice_gamerule_get_tooltip_explain(id)
end
---@param id gamerule_id
---@param value text_key
function GAMERULE.set_tooltip_explain(id, value)
	return ffi.C.alice_gamerule_set_tooltip_explain(id, value)
end
---@param id gamerule_id
---@return number
function GAMERULE.get_default_setting(id)
	return ffi.C.alice_gamerule_get_default_setting(id)
end
---@param id gamerule_id
---@param value number
function GAMERULE.set_default_setting(id, value)
	return ffi.C.alice_gamerule_set_default_setting(id, value)
end
---@param id gamerule_id
---@return number
function GAMERULE.get_settings_count(id)
	return ffi.C.alice_gamerule_get_settings_count(id)
end
---@param id gamerule_id
---@param value number
function GAMERULE.set_settings_count(id, value)
	return ffi.C.alice_gamerule_set_settings_count(id, value)
end
---@param id gamerule_id
---@return number
function GAMERULE.get_current_setting(id)
	return ffi.C.alice_gamerule_get_current_setting(id)
end
---@param id gamerule_id
---@param value number
function GAMERULE.set_current_setting(id, value)
	return ffi.C.alice_gamerule_set_current_setting(id, value)
end
