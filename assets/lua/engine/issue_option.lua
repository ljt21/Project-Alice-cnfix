-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_issue_option_is_valid(int32_t api_arg_0_id);
uint32_t alice_issue_option_size();
void alice_issue_option_resize(uint32_t api_arg_0_value);
int32_t alice_issue_option_get_name(int32_t api_arg_0_id);
void alice_issue_option_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_issue_option_get_desc(int32_t api_arg_0_id);
void alice_issue_option_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_issue_option_get_movement_name(int32_t api_arg_0_id);
void alice_issue_option_set_movement_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint32_t alice_issue_option_get_rules(int32_t api_arg_0_id);
void alice_issue_option_set_rules(int32_t api_arg_0_id, uint32_t api_arg_1_value);
int32_t alice_issue_option_get_modifier(int32_t api_arg_0_id);
void alice_issue_option_set_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_issue_option_get_war_exhaustion_effect(int32_t api_arg_0_id);
void alice_issue_option_set_war_exhaustion_effect(int32_t api_arg_0_id, float api_arg_1_value);
float alice_issue_option_get_administrative_multiplier(int32_t api_arg_0_id);
void alice_issue_option_set_administrative_multiplier(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_issue_option_get_allow(int32_t api_arg_0_id);
void alice_issue_option_set_allow(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_issue_option_get_on_execute_trigger(int32_t api_arg_0_id);
void alice_issue_option_set_on_execute_trigger(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_issue_option_get_on_execute_effect(int32_t api_arg_0_id);
void alice_issue_option_set_on_execute_effect(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_issue_option_get_parent_issue(int32_t api_arg_0_id);
void alice_issue_option_set_parent_issue(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_issue_option_get_support_modifiers(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_issue_option_set_support_modifiers(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_issue_option_get_support_modifiers_size();
void alice_issue_option_resize_support_modifiers(uint32_t api_arg_0_value);
]]
ISSUE_OPTION = {}
---@param id issue_option_id
---@return number
function ISSUE_OPTION.is_valid(id)
	return ffi.C.alice_issue_option_is_valid(id)
end
---@return number
function ISSUE_OPTION.size()
	return ffi.C.alice_issue_option_size()
end
---@param value number
function ISSUE_OPTION.resize(value)
	return ffi.C.alice_issue_option_resize(value)
end
---@param id issue_option_id
---@return text_key
function ISSUE_OPTION.get_name(id)
	return ffi.C.alice_issue_option_get_name(id)
end
---@param id issue_option_id
---@param value text_key
function ISSUE_OPTION.set_name(id, value)
	return ffi.C.alice_issue_option_set_name(id, value)
end
---@param id issue_option_id
---@return text_key
function ISSUE_OPTION.get_desc(id)
	return ffi.C.alice_issue_option_get_desc(id)
end
---@param id issue_option_id
---@param value text_key
function ISSUE_OPTION.set_desc(id, value)
	return ffi.C.alice_issue_option_set_desc(id, value)
end
---@param id issue_option_id
---@return text_key
function ISSUE_OPTION.get_movement_name(id)
	return ffi.C.alice_issue_option_get_movement_name(id)
end
---@param id issue_option_id
---@param value text_key
function ISSUE_OPTION.set_movement_name(id, value)
	return ffi.C.alice_issue_option_set_movement_name(id, value)
end
---@param id issue_option_id
---@return number
function ISSUE_OPTION.get_rules(id)
	return ffi.C.alice_issue_option_get_rules(id)
end
---@param id issue_option_id
---@param value number
function ISSUE_OPTION.set_rules(id, value)
	return ffi.C.alice_issue_option_set_rules(id, value)
end
---@param id issue_option_id
---@return modifier_id
function ISSUE_OPTION.get_modifier(id)
	return ffi.C.alice_issue_option_get_modifier(id)
end
---@param id issue_option_id
---@param value modifier_id
function ISSUE_OPTION.set_modifier(id, value)
	return ffi.C.alice_issue_option_set_modifier(id, value)
end
---@param id issue_option_id
---@return number
function ISSUE_OPTION.get_war_exhaustion_effect(id)
	return ffi.C.alice_issue_option_get_war_exhaustion_effect(id)
end
---@param id issue_option_id
---@param value number
function ISSUE_OPTION.set_war_exhaustion_effect(id, value)
	return ffi.C.alice_issue_option_set_war_exhaustion_effect(id, value)
end
---@param id issue_option_id
---@return number
function ISSUE_OPTION.get_administrative_multiplier(id)
	return ffi.C.alice_issue_option_get_administrative_multiplier(id)
end
---@param id issue_option_id
---@param value number
function ISSUE_OPTION.set_administrative_multiplier(id, value)
	return ffi.C.alice_issue_option_set_administrative_multiplier(id, value)
end
---@param id issue_option_id
---@return trigger_key
function ISSUE_OPTION.get_allow(id)
	return ffi.C.alice_issue_option_get_allow(id)
end
---@param id issue_option_id
---@param value trigger_key
function ISSUE_OPTION.set_allow(id, value)
	return ffi.C.alice_issue_option_set_allow(id, value)
end
---@param id issue_option_id
---@return trigger_key
function ISSUE_OPTION.get_on_execute_trigger(id)
	return ffi.C.alice_issue_option_get_on_execute_trigger(id)
end
---@param id issue_option_id
---@param value trigger_key
function ISSUE_OPTION.set_on_execute_trigger(id, value)
	return ffi.C.alice_issue_option_set_on_execute_trigger(id, value)
end
---@param id issue_option_id
---@return effect_key
function ISSUE_OPTION.get_on_execute_effect(id)
	return ffi.C.alice_issue_option_get_on_execute_effect(id)
end
---@param id issue_option_id
---@param value effect_key
function ISSUE_OPTION.set_on_execute_effect(id, value)
	return ffi.C.alice_issue_option_set_on_execute_effect(id, value)
end
---@param id issue_option_id
---@return issue_id
function ISSUE_OPTION.get_parent_issue(id)
	return ffi.C.alice_issue_option_get_parent_issue(id)
end
---@param id issue_option_id
---@param value issue_id
function ISSUE_OPTION.set_parent_issue(id, value)
	return ffi.C.alice_issue_option_set_parent_issue(id, value)
end
---@param id issue_option_id
---@param index issue_option_id
---@return value_modifier_key
function ISSUE_OPTION.get_support_modifiers(id, index)
	return ffi.C.alice_issue_option_get_support_modifiers(id, index)
end
---@param id issue_option_id
---@param index issue_option_id
---@param value value_modifier_key
function ISSUE_OPTION.set_support_modifiers(id, index, value)
	return ffi.C.alice_issue_option_set_support_modifiers(id, index, value)
end
---@return number
function ISSUE_OPTION.get_support_modifiers_size()
	return ffi.C.alice_issue_option_get_support_modifiers_size()
end
---@param value number
function ISSUE_OPTION.resize_support_modifiers(value)
	return ffi.C.alice_issue_option_resize_support_modifiers(value)
end
