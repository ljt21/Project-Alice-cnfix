-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_reform_is_valid(int32_t api_arg_0_id);
uint32_t alice_reform_size();
void alice_reform_resize(uint32_t api_arg_0_value);
int32_t alice_reform_get_name(int32_t api_arg_0_id);
void alice_reform_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_reform_get_desc(int32_t api_arg_0_id);
void alice_reform_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_reform_get_is_next_step_only(int32_t api_arg_0_id);
void alice_reform_set_is_next_step_only(int32_t api_arg_0_id, bool api_arg_1_value);
uint8_t alice_reform_get_reform_type(int32_t api_arg_0_id);
void alice_reform_set_reform_type(int32_t api_arg_0_id, uint8_t api_arg_1_value);
]]
REFORM = {}
---@param id reform_id
---@return number
function REFORM.is_valid(id)
	return ffi.C.alice_reform_is_valid(id)
end
---@return number
function REFORM.size()
	return ffi.C.alice_reform_size()
end
---@param value number
function REFORM.resize(value)
	return ffi.C.alice_reform_resize(value)
end
---@param id reform_id
---@return text_key
function REFORM.get_name(id)
	return ffi.C.alice_reform_get_name(id)
end
---@param id reform_id
---@param value text_key
function REFORM.set_name(id, value)
	return ffi.C.alice_reform_set_name(id, value)
end
---@param id reform_id
---@return text_key
function REFORM.get_desc(id)
	return ffi.C.alice_reform_get_desc(id)
end
---@param id reform_id
---@param value text_key
function REFORM.set_desc(id, value)
	return ffi.C.alice_reform_set_desc(id, value)
end
---@param id reform_id
---@return boolean
function REFORM.get_is_next_step_only(id)
	return ffi.C.alice_reform_get_is_next_step_only(id)
end
---@param id reform_id
---@param value boolean
function REFORM.set_is_next_step_only(id, value)
	return ffi.C.alice_reform_set_is_next_step_only(id, value)
end
---@param id reform_id
---@return number
function REFORM.get_reform_type(id)
	return ffi.C.alice_reform_get_reform_type(id)
end
---@param id reform_id
---@param value number
function REFORM.set_reform_type(id, value)
	return ffi.C.alice_reform_set_reform_type(id, value)
end
