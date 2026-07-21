-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_locale_is_valid(int32_t api_arg_0_id);
uint32_t alice_locale_size();
void alice_locale_resize(uint32_t api_arg_0_value);
bool alice_locale_get_native_rtl(int32_t api_arg_0_id);
void alice_locale_set_native_rtl(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_locale_get_prevent_letterspace(int32_t api_arg_0_id);
void alice_locale_set_prevent_letterspace(int32_t api_arg_0_id, bool api_arg_1_value);
uint32_t alice_locale_get_hb_script(int32_t api_arg_0_id);
void alice_locale_set_hb_script(int32_t api_arg_0_id, uint32_t api_arg_1_value);
uint16_t alice_locale_get_resolved_body_font(int32_t api_arg_0_id);
void alice_locale_set_resolved_body_font(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_locale_get_resolved_header_font(int32_t api_arg_0_id);
void alice_locale_set_resolved_header_font(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_locale_get_resolved_map_font(int32_t api_arg_0_id);
void alice_locale_set_resolved_map_font(int32_t api_arg_0_id, uint16_t api_arg_1_value);
]]
LOCALE = {}
---@param id locale_id
---@return number
function LOCALE.is_valid(id)
	return ffi.C.alice_locale_is_valid(id)
end
---@return number
function LOCALE.size()
	return ffi.C.alice_locale_size()
end
---@param value number
function LOCALE.resize(value)
	return ffi.C.alice_locale_resize(value)
end
---@param id locale_id
---@return boolean
function LOCALE.get_native_rtl(id)
	return ffi.C.alice_locale_get_native_rtl(id)
end
---@param id locale_id
---@param value boolean
function LOCALE.set_native_rtl(id, value)
	return ffi.C.alice_locale_set_native_rtl(id, value)
end
---@param id locale_id
---@return boolean
function LOCALE.get_prevent_letterspace(id)
	return ffi.C.alice_locale_get_prevent_letterspace(id)
end
---@param id locale_id
---@param value boolean
function LOCALE.set_prevent_letterspace(id, value)
	return ffi.C.alice_locale_set_prevent_letterspace(id, value)
end
---@param id locale_id
---@return number
function LOCALE.get_hb_script(id)
	return ffi.C.alice_locale_get_hb_script(id)
end
---@param id locale_id
---@param value number
function LOCALE.set_hb_script(id, value)
	return ffi.C.alice_locale_set_hb_script(id, value)
end
---@param id locale_id
---@return number
function LOCALE.get_resolved_body_font(id)
	return ffi.C.alice_locale_get_resolved_body_font(id)
end
---@param id locale_id
---@param value number
function LOCALE.set_resolved_body_font(id, value)
	return ffi.C.alice_locale_set_resolved_body_font(id, value)
end
---@param id locale_id
---@return number
function LOCALE.get_resolved_header_font(id)
	return ffi.C.alice_locale_get_resolved_header_font(id)
end
---@param id locale_id
---@param value number
function LOCALE.set_resolved_header_font(id, value)
	return ffi.C.alice_locale_set_resolved_header_font(id, value)
end
---@param id locale_id
---@return number
function LOCALE.get_resolved_map_font(id)
	return ffi.C.alice_locale_get_resolved_map_font(id)
end
---@param id locale_id
---@param value number
function LOCALE.set_resolved_map_font(id, value)
	return ffi.C.alice_locale_set_resolved_map_font(id, value)
end
