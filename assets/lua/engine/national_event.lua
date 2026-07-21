-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_national_event_is_valid(int32_t api_arg_0_id);
uint32_t alice_national_event_size();
void alice_national_event_resize(uint32_t api_arg_0_value);
int32_t alice_national_event_get_name(int32_t api_arg_0_id);
void alice_national_event_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_national_event_get_description(int32_t api_arg_0_id);
void alice_national_event_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_national_event_get_is_major(int32_t api_arg_0_id);
void alice_national_event_set_is_major(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_national_event_get_immediate_effect(int32_t api_arg_0_id);
void alice_national_event_set_immediate_effect(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint8_t alice_national_event_get_auto_choice(int32_t api_arg_0_id);
void alice_national_event_set_auto_choice(int32_t api_arg_0_id, uint8_t api_arg_1_value);
bool alice_national_event_get_allow_multiple_instances(int32_t api_arg_0_id);
void alice_national_event_set_allow_multiple_instances(int32_t api_arg_0_id, bool api_arg_1_value);
]]
NATIONAL_EVENT = {}
---@param id national_event_id
---@return number
function NATIONAL_EVENT.is_valid(id)
	return ffi.C.alice_national_event_is_valid(id)
end
---@return number
function NATIONAL_EVENT.size()
	return ffi.C.alice_national_event_size()
end
---@param value number
function NATIONAL_EVENT.resize(value)
	return ffi.C.alice_national_event_resize(value)
end
---@param id national_event_id
---@return text_key
function NATIONAL_EVENT.get_name(id)
	return ffi.C.alice_national_event_get_name(id)
end
---@param id national_event_id
---@param value text_key
function NATIONAL_EVENT.set_name(id, value)
	return ffi.C.alice_national_event_set_name(id, value)
end
---@param id national_event_id
---@return text_key
function NATIONAL_EVENT.get_description(id)
	return ffi.C.alice_national_event_get_description(id)
end
---@param id national_event_id
---@param value text_key
function NATIONAL_EVENT.set_description(id, value)
	return ffi.C.alice_national_event_set_description(id, value)
end
---@param id national_event_id
---@return boolean
function NATIONAL_EVENT.get_is_major(id)
	return ffi.C.alice_national_event_get_is_major(id)
end
---@param id national_event_id
---@param value boolean
function NATIONAL_EVENT.set_is_major(id, value)
	return ffi.C.alice_national_event_set_is_major(id, value)
end
---@param id national_event_id
---@return effect_key
function NATIONAL_EVENT.get_immediate_effect(id)
	return ffi.C.alice_national_event_get_immediate_effect(id)
end
---@param id national_event_id
---@param value effect_key
function NATIONAL_EVENT.set_immediate_effect(id, value)
	return ffi.C.alice_national_event_set_immediate_effect(id, value)
end
---@param id national_event_id
---@return number
function NATIONAL_EVENT.get_auto_choice(id)
	return ffi.C.alice_national_event_get_auto_choice(id)
end
---@param id national_event_id
---@param value number
function NATIONAL_EVENT.set_auto_choice(id, value)
	return ffi.C.alice_national_event_set_auto_choice(id, value)
end
---@param id national_event_id
---@return boolean
function NATIONAL_EVENT.get_allow_multiple_instances(id)
	return ffi.C.alice_national_event_get_allow_multiple_instances(id)
end
---@param id national_event_id
---@param value boolean
function NATIONAL_EVENT.set_allow_multiple_instances(id, value)
	return ffi.C.alice_national_event_set_allow_multiple_instances(id, value)
end
