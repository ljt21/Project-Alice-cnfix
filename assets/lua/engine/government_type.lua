-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_government_type_is_valid(int32_t api_arg_0_id);
uint32_t alice_government_type_size();
void alice_government_type_resize(uint32_t api_arg_0_value);
int32_t alice_government_type_get_name(int32_t api_arg_0_id);
void alice_government_type_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_government_type_get_desc(int32_t api_arg_0_id);
void alice_government_type_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_government_type_get_ruler_name(int32_t api_arg_0_id);
void alice_government_type_set_ruler_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint64_t alice_government_type_get_ideologies_allowed(int32_t api_arg_0_id);
void alice_government_type_set_ideologies_allowed(int32_t api_arg_0_id, uint64_t api_arg_1_value);
bool alice_government_type_get_has_elections(int32_t api_arg_0_id);
void alice_government_type_set_has_elections(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_government_type_get_can_appoint_ruling_party(int32_t api_arg_0_id);
void alice_government_type_set_can_appoint_ruling_party(int32_t api_arg_0_id, bool api_arg_1_value);
int8_t alice_government_type_get_duration(int32_t api_arg_0_id);
void alice_government_type_set_duration(int32_t api_arg_0_id, int8_t api_arg_1_value);
int32_t alice_government_type_get_flag(int32_t api_arg_0_id);
void alice_government_type_set_flag(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
GOVERNMENT_TYPE = {}
---@param id government_type_id
---@return number
function GOVERNMENT_TYPE.is_valid(id)
	return ffi.C.alice_government_type_is_valid(id)
end
---@return number
function GOVERNMENT_TYPE.size()
	return ffi.C.alice_government_type_size()
end
---@param value number
function GOVERNMENT_TYPE.resize(value)
	return ffi.C.alice_government_type_resize(value)
end
---@param id government_type_id
---@return text_key
function GOVERNMENT_TYPE.get_name(id)
	return ffi.C.alice_government_type_get_name(id)
end
---@param id government_type_id
---@param value text_key
function GOVERNMENT_TYPE.set_name(id, value)
	return ffi.C.alice_government_type_set_name(id, value)
end
---@param id government_type_id
---@return text_key
function GOVERNMENT_TYPE.get_desc(id)
	return ffi.C.alice_government_type_get_desc(id)
end
---@param id government_type_id
---@param value text_key
function GOVERNMENT_TYPE.set_desc(id, value)
	return ffi.C.alice_government_type_set_desc(id, value)
end
---@param id government_type_id
---@return text_key
function GOVERNMENT_TYPE.get_ruler_name(id)
	return ffi.C.alice_government_type_get_ruler_name(id)
end
---@param id government_type_id
---@param value text_key
function GOVERNMENT_TYPE.set_ruler_name(id, value)
	return ffi.C.alice_government_type_set_ruler_name(id, value)
end
---@param id government_type_id
---@return number
function GOVERNMENT_TYPE.get_ideologies_allowed(id)
	return ffi.C.alice_government_type_get_ideologies_allowed(id)
end
---@param id government_type_id
---@param value number
function GOVERNMENT_TYPE.set_ideologies_allowed(id, value)
	return ffi.C.alice_government_type_set_ideologies_allowed(id, value)
end
---@param id government_type_id
---@return boolean
function GOVERNMENT_TYPE.get_has_elections(id)
	return ffi.C.alice_government_type_get_has_elections(id)
end
---@param id government_type_id
---@param value boolean
function GOVERNMENT_TYPE.set_has_elections(id, value)
	return ffi.C.alice_government_type_set_has_elections(id, value)
end
---@param id government_type_id
---@return boolean
function GOVERNMENT_TYPE.get_can_appoint_ruling_party(id)
	return ffi.C.alice_government_type_get_can_appoint_ruling_party(id)
end
---@param id government_type_id
---@param value boolean
function GOVERNMENT_TYPE.set_can_appoint_ruling_party(id, value)
	return ffi.C.alice_government_type_set_can_appoint_ruling_party(id, value)
end
---@param id government_type_id
---@return number
function GOVERNMENT_TYPE.get_duration(id)
	return ffi.C.alice_government_type_get_duration(id)
end
---@param id government_type_id
---@param value number
function GOVERNMENT_TYPE.set_duration(id, value)
	return ffi.C.alice_government_type_set_duration(id, value)
end
---@param id government_type_id
---@return government_flag_id
function GOVERNMENT_TYPE.get_flag(id)
	return ffi.C.alice_government_type_get_flag(id)
end
---@param id government_type_id
---@param value government_flag_id
function GOVERNMENT_TYPE.set_flag(id, value)
	return ffi.C.alice_government_type_set_flag(id, value)
end
