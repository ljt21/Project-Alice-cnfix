-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_free_provincial_event_is_valid(int32_t api_arg_0_id);
uint32_t alice_free_provincial_event_size();
void alice_free_provincial_event_resize(uint32_t api_arg_0_value);
int32_t alice_free_provincial_event_get_name(int32_t api_arg_0_id);
void alice_free_provincial_event_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_free_provincial_event_get_description(int32_t api_arg_0_id);
void alice_free_provincial_event_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_free_provincial_event_get_only_once(int32_t api_arg_0_id);
void alice_free_provincial_event_set_only_once(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_free_provincial_event_get_has_been_triggered(int32_t api_arg_0_id);
void alice_free_provincial_event_set_has_been_triggered(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_free_provincial_event_get_trigger(int32_t api_arg_0_id);
void alice_free_provincial_event_set_trigger(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_free_provincial_event_get_mtth(int32_t api_arg_0_id);
void alice_free_provincial_event_set_mtth(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_free_provincial_event_get_immediate_effect(int32_t api_arg_0_id);
void alice_free_provincial_event_set_immediate_effect(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint8_t alice_free_provincial_event_get_auto_choice(int32_t api_arg_0_id);
void alice_free_provincial_event_set_auto_choice(int32_t api_arg_0_id, uint8_t api_arg_1_value);
]]
FREE_PROVINCIAL_EVENT = {}
---@param id free_provincial_event_id
---@return number
function FREE_PROVINCIAL_EVENT.is_valid(id)
	return ffi.C.alice_free_provincial_event_is_valid(id)
end
---@return number
function FREE_PROVINCIAL_EVENT.size()
	return ffi.C.alice_free_provincial_event_size()
end
---@param value number
function FREE_PROVINCIAL_EVENT.resize(value)
	return ffi.C.alice_free_provincial_event_resize(value)
end
---@param id free_provincial_event_id
---@return text_key
function FREE_PROVINCIAL_EVENT.get_name(id)
	return ffi.C.alice_free_provincial_event_get_name(id)
end
---@param id free_provincial_event_id
---@param value text_key
function FREE_PROVINCIAL_EVENT.set_name(id, value)
	return ffi.C.alice_free_provincial_event_set_name(id, value)
end
---@param id free_provincial_event_id
---@return text_key
function FREE_PROVINCIAL_EVENT.get_description(id)
	return ffi.C.alice_free_provincial_event_get_description(id)
end
---@param id free_provincial_event_id
---@param value text_key
function FREE_PROVINCIAL_EVENT.set_description(id, value)
	return ffi.C.alice_free_provincial_event_set_description(id, value)
end
---@param id free_provincial_event_id
---@return boolean
function FREE_PROVINCIAL_EVENT.get_only_once(id)
	return ffi.C.alice_free_provincial_event_get_only_once(id)
end
---@param id free_provincial_event_id
---@param value boolean
function FREE_PROVINCIAL_EVENT.set_only_once(id, value)
	return ffi.C.alice_free_provincial_event_set_only_once(id, value)
end
---@param id free_provincial_event_id
---@return boolean
function FREE_PROVINCIAL_EVENT.get_has_been_triggered(id)
	return ffi.C.alice_free_provincial_event_get_has_been_triggered(id)
end
---@param id free_provincial_event_id
---@param value boolean
function FREE_PROVINCIAL_EVENT.set_has_been_triggered(id, value)
	return ffi.C.alice_free_provincial_event_set_has_been_triggered(id, value)
end
---@param id free_provincial_event_id
---@return trigger_key
function FREE_PROVINCIAL_EVENT.get_trigger(id)
	return ffi.C.alice_free_provincial_event_get_trigger(id)
end
---@param id free_provincial_event_id
---@param value trigger_key
function FREE_PROVINCIAL_EVENT.set_trigger(id, value)
	return ffi.C.alice_free_provincial_event_set_trigger(id, value)
end
---@param id free_provincial_event_id
---@return value_modifier_key
function FREE_PROVINCIAL_EVENT.get_mtth(id)
	return ffi.C.alice_free_provincial_event_get_mtth(id)
end
---@param id free_provincial_event_id
---@param value value_modifier_key
function FREE_PROVINCIAL_EVENT.set_mtth(id, value)
	return ffi.C.alice_free_provincial_event_set_mtth(id, value)
end
---@param id free_provincial_event_id
---@return effect_key
function FREE_PROVINCIAL_EVENT.get_immediate_effect(id)
	return ffi.C.alice_free_provincial_event_get_immediate_effect(id)
end
---@param id free_provincial_event_id
---@param value effect_key
function FREE_PROVINCIAL_EVENT.set_immediate_effect(id, value)
	return ffi.C.alice_free_provincial_event_set_immediate_effect(id, value)
end
---@param id free_provincial_event_id
---@return number
function FREE_PROVINCIAL_EVENT.get_auto_choice(id)
	return ffi.C.alice_free_provincial_event_get_auto_choice(id)
end
---@param id free_provincial_event_id
---@param value number
function FREE_PROVINCIAL_EVENT.set_auto_choice(id, value)
	return ffi.C.alice_free_provincial_event_set_auto_choice(id, value)
end
