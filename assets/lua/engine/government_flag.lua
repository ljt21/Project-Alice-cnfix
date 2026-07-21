-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_government_flag_is_valid(int32_t api_arg_0_id);
uint32_t alice_government_flag_size();
void alice_government_flag_resize(uint32_t api_arg_0_value);
int32_t alice_government_flag_get_filename(int32_t api_arg_0_id);
void alice_government_flag_set_filename(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
GOVERNMENT_FLAG = {}
---@param id government_flag_id
---@return number
function GOVERNMENT_FLAG.is_valid(id)
	return ffi.C.alice_government_flag_is_valid(id)
end
---@return number
function GOVERNMENT_FLAG.size()
	return ffi.C.alice_government_flag_size()
end
---@param value number
function GOVERNMENT_FLAG.resize(value)
	return ffi.C.alice_government_flag_resize(value)
end
---@param id government_flag_id
---@return text_key
function GOVERNMENT_FLAG.get_filename(id)
	return ffi.C.alice_government_flag_get_filename(id)
end
---@param id government_flag_id
---@param value text_key
function GOVERNMENT_FLAG.set_filename(id, value)
	return ffi.C.alice_government_flag_set_filename(id, value)
end
