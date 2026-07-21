-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_decision_is_valid(int32_t api_arg_0_id);
uint32_t alice_decision_size();
void alice_decision_resize(uint32_t api_arg_0_value);
int32_t alice_decision_get_name(int32_t api_arg_0_id);
void alice_decision_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_decision_get_description(int32_t api_arg_0_id);
void alice_decision_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_decision_get_potential(int32_t api_arg_0_id);
void alice_decision_set_potential(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_decision_get_allow(int32_t api_arg_0_id);
void alice_decision_set_allow(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_decision_get_effect(int32_t api_arg_0_id);
void alice_decision_set_effect(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_decision_get_ai_will_do(int32_t api_arg_0_id);
void alice_decision_set_ai_will_do(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_decision_get_hide_notification(int32_t api_arg_0_id);
void alice_decision_set_hide_notification(int32_t api_arg_0_id, bool api_arg_1_value);
]]
DECISION = {}
---@param id decision_id
---@return number
function DECISION.is_valid(id)
	return ffi.C.alice_decision_is_valid(id)
end
---@return number
function DECISION.size()
	return ffi.C.alice_decision_size()
end
---@param value number
function DECISION.resize(value)
	return ffi.C.alice_decision_resize(value)
end
---@param id decision_id
---@return text_key
function DECISION.get_name(id)
	return ffi.C.alice_decision_get_name(id)
end
---@param id decision_id
---@param value text_key
function DECISION.set_name(id, value)
	return ffi.C.alice_decision_set_name(id, value)
end
---@param id decision_id
---@return text_key
function DECISION.get_description(id)
	return ffi.C.alice_decision_get_description(id)
end
---@param id decision_id
---@param value text_key
function DECISION.set_description(id, value)
	return ffi.C.alice_decision_set_description(id, value)
end
---@param id decision_id
---@return trigger_key
function DECISION.get_potential(id)
	return ffi.C.alice_decision_get_potential(id)
end
---@param id decision_id
---@param value trigger_key
function DECISION.set_potential(id, value)
	return ffi.C.alice_decision_set_potential(id, value)
end
---@param id decision_id
---@return trigger_key
function DECISION.get_allow(id)
	return ffi.C.alice_decision_get_allow(id)
end
---@param id decision_id
---@param value trigger_key
function DECISION.set_allow(id, value)
	return ffi.C.alice_decision_set_allow(id, value)
end
---@param id decision_id
---@return effect_key
function DECISION.get_effect(id)
	return ffi.C.alice_decision_get_effect(id)
end
---@param id decision_id
---@param value effect_key
function DECISION.set_effect(id, value)
	return ffi.C.alice_decision_set_effect(id, value)
end
---@param id decision_id
---@return value_modifier_key
function DECISION.get_ai_will_do(id)
	return ffi.C.alice_decision_get_ai_will_do(id)
end
---@param id decision_id
---@param value value_modifier_key
function DECISION.set_ai_will_do(id, value)
	return ffi.C.alice_decision_set_ai_will_do(id, value)
end
---@param id decision_id
---@return boolean
function DECISION.get_hide_notification(id)
	return ffi.C.alice_decision_get_hide_notification(id)
end
---@param id decision_id
---@param value boolean
function DECISION.set_hide_notification(id, value)
	return ffi.C.alice_decision_set_hide_notification(id, value)
end
