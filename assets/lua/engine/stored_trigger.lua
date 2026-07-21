-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_stored_trigger_is_valid(int32_t api_arg_0_id);
uint32_t alice_stored_trigger_size();
void alice_stored_trigger_resize(uint32_t api_arg_0_value);
int32_t alice_stored_trigger_get_name(int32_t api_arg_0_id);
void alice_stored_trigger_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_stored_trigger_get_function(int32_t api_arg_0_id);
void alice_stored_trigger_set_function(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
STORED_TRIGGER = {}
---@param id stored_trigger_id
---@return number
function STORED_TRIGGER.is_valid(id)
	return ffi.C.alice_stored_trigger_is_valid(id)
end
---@return number
function STORED_TRIGGER.size()
	return ffi.C.alice_stored_trigger_size()
end
---@param value number
function STORED_TRIGGER.resize(value)
	return ffi.C.alice_stored_trigger_resize(value)
end
---@param id stored_trigger_id
---@return text_key
function STORED_TRIGGER.get_name(id)
	return ffi.C.alice_stored_trigger_get_name(id)
end
---@param id stored_trigger_id
---@param value text_key
function STORED_TRIGGER.set_name(id, value)
	return ffi.C.alice_stored_trigger_set_name(id, value)
end
---@param id stored_trigger_id
---@return trigger_key
function STORED_TRIGGER.get_function(id)
	return ffi.C.alice_stored_trigger_get_function(id)
end
---@param id stored_trigger_id
---@param value trigger_key
function STORED_TRIGGER.set_function(id, value)
	return ffi.C.alice_stored_trigger_set_function(id, value)
end
