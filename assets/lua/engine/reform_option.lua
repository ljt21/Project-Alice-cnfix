-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_reform_option_is_valid(int32_t api_arg_0_id);
uint32_t alice_reform_option_size();
void alice_reform_option_resize(uint32_t api_arg_0_value);
int32_t alice_reform_option_get_name(int32_t api_arg_0_id);
void alice_reform_option_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_reform_option_get_desc(int32_t api_arg_0_id);
void alice_reform_option_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint32_t alice_reform_option_get_rules(int32_t api_arg_0_id);
void alice_reform_option_set_rules(int32_t api_arg_0_id, uint32_t api_arg_1_value);
int32_t alice_reform_option_get_modifier(int32_t api_arg_0_id);
void alice_reform_option_set_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_reform_option_get_technology_cost(int32_t api_arg_0_id);
void alice_reform_option_set_technology_cost(int32_t api_arg_0_id, int32_t api_arg_1_value);
float alice_reform_option_get_war_exhaustion_effect(int32_t api_arg_0_id);
void alice_reform_option_set_war_exhaustion_effect(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_reform_option_get_allow(int32_t api_arg_0_id);
void alice_reform_option_set_allow(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_reform_option_get_on_execute_trigger(int32_t api_arg_0_id);
void alice_reform_option_set_on_execute_trigger(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_reform_option_get_on_execute_effect(int32_t api_arg_0_id);
void alice_reform_option_set_on_execute_effect(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_reform_option_get_parent_reform(int32_t api_arg_0_id);
void alice_reform_option_set_parent_reform(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
REFORM_OPTION = {}
---@param id reform_option_id
---@return number
function REFORM_OPTION.is_valid(id)
	return ffi.C.alice_reform_option_is_valid(id)
end
---@return number
function REFORM_OPTION.size()
	return ffi.C.alice_reform_option_size()
end
---@param value number
function REFORM_OPTION.resize(value)
	return ffi.C.alice_reform_option_resize(value)
end
---@param id reform_option_id
---@return text_key
function REFORM_OPTION.get_name(id)
	return ffi.C.alice_reform_option_get_name(id)
end
---@param id reform_option_id
---@param value text_key
function REFORM_OPTION.set_name(id, value)
	return ffi.C.alice_reform_option_set_name(id, value)
end
---@param id reform_option_id
---@return text_key
function REFORM_OPTION.get_desc(id)
	return ffi.C.alice_reform_option_get_desc(id)
end
---@param id reform_option_id
---@param value text_key
function REFORM_OPTION.set_desc(id, value)
	return ffi.C.alice_reform_option_set_desc(id, value)
end
---@param id reform_option_id
---@return number
function REFORM_OPTION.get_rules(id)
	return ffi.C.alice_reform_option_get_rules(id)
end
---@param id reform_option_id
---@param value number
function REFORM_OPTION.set_rules(id, value)
	return ffi.C.alice_reform_option_set_rules(id, value)
end
---@param id reform_option_id
---@return modifier_id
function REFORM_OPTION.get_modifier(id)
	return ffi.C.alice_reform_option_get_modifier(id)
end
---@param id reform_option_id
---@param value modifier_id
function REFORM_OPTION.set_modifier(id, value)
	return ffi.C.alice_reform_option_set_modifier(id, value)
end
---@param id reform_option_id
---@return number
function REFORM_OPTION.get_technology_cost(id)
	return ffi.C.alice_reform_option_get_technology_cost(id)
end
---@param id reform_option_id
---@param value number
function REFORM_OPTION.set_technology_cost(id, value)
	return ffi.C.alice_reform_option_set_technology_cost(id, value)
end
---@param id reform_option_id
---@return number
function REFORM_OPTION.get_war_exhaustion_effect(id)
	return ffi.C.alice_reform_option_get_war_exhaustion_effect(id)
end
---@param id reform_option_id
---@param value number
function REFORM_OPTION.set_war_exhaustion_effect(id, value)
	return ffi.C.alice_reform_option_set_war_exhaustion_effect(id, value)
end
---@param id reform_option_id
---@return trigger_key
function REFORM_OPTION.get_allow(id)
	return ffi.C.alice_reform_option_get_allow(id)
end
---@param id reform_option_id
---@param value trigger_key
function REFORM_OPTION.set_allow(id, value)
	return ffi.C.alice_reform_option_set_allow(id, value)
end
---@param id reform_option_id
---@return trigger_key
function REFORM_OPTION.get_on_execute_trigger(id)
	return ffi.C.alice_reform_option_get_on_execute_trigger(id)
end
---@param id reform_option_id
---@param value trigger_key
function REFORM_OPTION.set_on_execute_trigger(id, value)
	return ffi.C.alice_reform_option_set_on_execute_trigger(id, value)
end
---@param id reform_option_id
---@return effect_key
function REFORM_OPTION.get_on_execute_effect(id)
	return ffi.C.alice_reform_option_get_on_execute_effect(id)
end
---@param id reform_option_id
---@param value effect_key
function REFORM_OPTION.set_on_execute_effect(id, value)
	return ffi.C.alice_reform_option_set_on_execute_effect(id, value)
end
---@param id reform_option_id
---@return reform_id
function REFORM_OPTION.get_parent_reform(id)
	return ffi.C.alice_reform_option_get_parent_reform(id)
end
---@param id reform_option_id
---@param value reform_id
function REFORM_OPTION.set_parent_reform(id, value)
	return ffi.C.alice_reform_option_set_parent_reform(id, value)
end
