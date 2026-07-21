-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_rebel_type_is_valid(int32_t api_arg_0_id);
uint32_t alice_rebel_type_size();
void alice_rebel_type_resize(uint32_t api_arg_0_value);
int32_t alice_rebel_type_get_name(int32_t api_arg_0_id);
void alice_rebel_type_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_type_get_title(int32_t api_arg_0_id);
void alice_rebel_type_set_title(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_type_get_description(int32_t api_arg_0_id);
void alice_rebel_type_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_type_get_army_name(int32_t api_arg_0_id);
void alice_rebel_type_set_army_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint8_t alice_rebel_type_get_icon(int32_t api_arg_0_id);
void alice_rebel_type_set_icon(int32_t api_arg_0_id, uint8_t api_arg_1_value);
bool alice_rebel_type_get_break_alliance_on_win(int32_t api_arg_0_id);
void alice_rebel_type_set_break_alliance_on_win(int32_t api_arg_0_id, bool api_arg_1_value);
uint8_t alice_rebel_type_get_area(int32_t api_arg_0_id);
void alice_rebel_type_set_area(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_rebel_type_get_defection(int32_t api_arg_0_id);
void alice_rebel_type_set_defection(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_rebel_type_get_independence(int32_t api_arg_0_id);
void alice_rebel_type_set_independence(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int32_t alice_rebel_type_get_ideology(int32_t api_arg_0_id);
void alice_rebel_type_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_rebel_type_get_occupation_multiplier(int32_t api_arg_0_id);
void alice_rebel_type_set_occupation_multiplier(int32_t api_arg_0_id, float api_arg_1_value);
uint8_t alice_rebel_type_get_defect_delay(int32_t api_arg_0_id);
void alice_rebel_type_set_defect_delay(int32_t api_arg_0_id, uint8_t api_arg_1_value);
bool alice_rebel_type_get_culture_restriction(int32_t api_arg_0_id);
void alice_rebel_type_set_culture_restriction(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_rebel_type_get_ideology_restriction(int32_t api_arg_0_id);
void alice_rebel_type_set_ideology_restriction(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_rebel_type_get_culture_group_restriction(int32_t api_arg_0_id);
void alice_rebel_type_set_culture_group_restriction(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_rebel_type_get_will_rise(int32_t api_arg_0_id);
void alice_rebel_type_set_will_rise(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_type_get_spawn_chance(int32_t api_arg_0_id);
void alice_rebel_type_set_spawn_chance(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_type_get_movement_evaluation(int32_t api_arg_0_id);
void alice_rebel_type_set_movement_evaluation(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_type_get_siege_won_trigger(int32_t api_arg_0_id);
void alice_rebel_type_set_siege_won_trigger(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_type_get_siege_won_effect(int32_t api_arg_0_id);
void alice_rebel_type_set_siege_won_effect(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_type_get_demands_enforced_trigger(int32_t api_arg_0_id);
void alice_rebel_type_set_demands_enforced_trigger(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_type_get_demands_enforced_effect(int32_t api_arg_0_id);
void alice_rebel_type_set_demands_enforced_effect(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_type_get_government_change(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_rebel_type_set_government_change(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_rebel_type_get_government_change_size();
void alice_rebel_type_resize_government_change(uint32_t api_arg_0_value);
]]
REBEL_TYPE = {}
---@param id rebel_type_id
---@return number
function REBEL_TYPE.is_valid(id)
	return ffi.C.alice_rebel_type_is_valid(id)
end
---@return number
function REBEL_TYPE.size()
	return ffi.C.alice_rebel_type_size()
end
---@param value number
function REBEL_TYPE.resize(value)
	return ffi.C.alice_rebel_type_resize(value)
end
---@param id rebel_type_id
---@return text_key
function REBEL_TYPE.get_name(id)
	return ffi.C.alice_rebel_type_get_name(id)
end
---@param id rebel_type_id
---@param value text_key
function REBEL_TYPE.set_name(id, value)
	return ffi.C.alice_rebel_type_set_name(id, value)
end
---@param id rebel_type_id
---@return text_key
function REBEL_TYPE.get_title(id)
	return ffi.C.alice_rebel_type_get_title(id)
end
---@param id rebel_type_id
---@param value text_key
function REBEL_TYPE.set_title(id, value)
	return ffi.C.alice_rebel_type_set_title(id, value)
end
---@param id rebel_type_id
---@return text_key
function REBEL_TYPE.get_description(id)
	return ffi.C.alice_rebel_type_get_description(id)
end
---@param id rebel_type_id
---@param value text_key
function REBEL_TYPE.set_description(id, value)
	return ffi.C.alice_rebel_type_set_description(id, value)
end
---@param id rebel_type_id
---@return text_key
function REBEL_TYPE.get_army_name(id)
	return ffi.C.alice_rebel_type_get_army_name(id)
end
---@param id rebel_type_id
---@param value text_key
function REBEL_TYPE.set_army_name(id, value)
	return ffi.C.alice_rebel_type_set_army_name(id, value)
end
---@param id rebel_type_id
---@return number
function REBEL_TYPE.get_icon(id)
	return ffi.C.alice_rebel_type_get_icon(id)
end
---@param id rebel_type_id
---@param value number
function REBEL_TYPE.set_icon(id, value)
	return ffi.C.alice_rebel_type_set_icon(id, value)
end
---@param id rebel_type_id
---@return boolean
function REBEL_TYPE.get_break_alliance_on_win(id)
	return ffi.C.alice_rebel_type_get_break_alliance_on_win(id)
end
---@param id rebel_type_id
---@param value boolean
function REBEL_TYPE.set_break_alliance_on_win(id, value)
	return ffi.C.alice_rebel_type_set_break_alliance_on_win(id, value)
end
---@param id rebel_type_id
---@return number
function REBEL_TYPE.get_area(id)
	return ffi.C.alice_rebel_type_get_area(id)
end
---@param id rebel_type_id
---@param value number
function REBEL_TYPE.set_area(id, value)
	return ffi.C.alice_rebel_type_set_area(id, value)
end
---@param id rebel_type_id
---@return number
function REBEL_TYPE.get_defection(id)
	return ffi.C.alice_rebel_type_get_defection(id)
end
---@param id rebel_type_id
---@param value number
function REBEL_TYPE.set_defection(id, value)
	return ffi.C.alice_rebel_type_set_defection(id, value)
end
---@param id rebel_type_id
---@return number
function REBEL_TYPE.get_independence(id)
	return ffi.C.alice_rebel_type_get_independence(id)
end
---@param id rebel_type_id
---@param value number
function REBEL_TYPE.set_independence(id, value)
	return ffi.C.alice_rebel_type_set_independence(id, value)
end
---@param id rebel_type_id
---@return ideology_id
function REBEL_TYPE.get_ideology(id)
	return ffi.C.alice_rebel_type_get_ideology(id)
end
---@param id rebel_type_id
---@param value ideology_id
function REBEL_TYPE.set_ideology(id, value)
	return ffi.C.alice_rebel_type_set_ideology(id, value)
end
---@param id rebel_type_id
---@return number
function REBEL_TYPE.get_occupation_multiplier(id)
	return ffi.C.alice_rebel_type_get_occupation_multiplier(id)
end
---@param id rebel_type_id
---@param value number
function REBEL_TYPE.set_occupation_multiplier(id, value)
	return ffi.C.alice_rebel_type_set_occupation_multiplier(id, value)
end
---@param id rebel_type_id
---@return number
function REBEL_TYPE.get_defect_delay(id)
	return ffi.C.alice_rebel_type_get_defect_delay(id)
end
---@param id rebel_type_id
---@param value number
function REBEL_TYPE.set_defect_delay(id, value)
	return ffi.C.alice_rebel_type_set_defect_delay(id, value)
end
---@param id rebel_type_id
---@return boolean
function REBEL_TYPE.get_culture_restriction(id)
	return ffi.C.alice_rebel_type_get_culture_restriction(id)
end
---@param id rebel_type_id
---@param value boolean
function REBEL_TYPE.set_culture_restriction(id, value)
	return ffi.C.alice_rebel_type_set_culture_restriction(id, value)
end
---@param id rebel_type_id
---@return boolean
function REBEL_TYPE.get_ideology_restriction(id)
	return ffi.C.alice_rebel_type_get_ideology_restriction(id)
end
---@param id rebel_type_id
---@param value boolean
function REBEL_TYPE.set_ideology_restriction(id, value)
	return ffi.C.alice_rebel_type_set_ideology_restriction(id, value)
end
---@param id rebel_type_id
---@return boolean
function REBEL_TYPE.get_culture_group_restriction(id)
	return ffi.C.alice_rebel_type_get_culture_group_restriction(id)
end
---@param id rebel_type_id
---@param value boolean
function REBEL_TYPE.set_culture_group_restriction(id, value)
	return ffi.C.alice_rebel_type_set_culture_group_restriction(id, value)
end
---@param id rebel_type_id
---@return value_modifier_key
function REBEL_TYPE.get_will_rise(id)
	return ffi.C.alice_rebel_type_get_will_rise(id)
end
---@param id rebel_type_id
---@param value value_modifier_key
function REBEL_TYPE.set_will_rise(id, value)
	return ffi.C.alice_rebel_type_set_will_rise(id, value)
end
---@param id rebel_type_id
---@return value_modifier_key
function REBEL_TYPE.get_spawn_chance(id)
	return ffi.C.alice_rebel_type_get_spawn_chance(id)
end
---@param id rebel_type_id
---@param value value_modifier_key
function REBEL_TYPE.set_spawn_chance(id, value)
	return ffi.C.alice_rebel_type_set_spawn_chance(id, value)
end
---@param id rebel_type_id
---@return value_modifier_key
function REBEL_TYPE.get_movement_evaluation(id)
	return ffi.C.alice_rebel_type_get_movement_evaluation(id)
end
---@param id rebel_type_id
---@param value value_modifier_key
function REBEL_TYPE.set_movement_evaluation(id, value)
	return ffi.C.alice_rebel_type_set_movement_evaluation(id, value)
end
---@param id rebel_type_id
---@return trigger_key
function REBEL_TYPE.get_siege_won_trigger(id)
	return ffi.C.alice_rebel_type_get_siege_won_trigger(id)
end
---@param id rebel_type_id
---@param value trigger_key
function REBEL_TYPE.set_siege_won_trigger(id, value)
	return ffi.C.alice_rebel_type_set_siege_won_trigger(id, value)
end
---@param id rebel_type_id
---@return effect_key
function REBEL_TYPE.get_siege_won_effect(id)
	return ffi.C.alice_rebel_type_get_siege_won_effect(id)
end
---@param id rebel_type_id
---@param value effect_key
function REBEL_TYPE.set_siege_won_effect(id, value)
	return ffi.C.alice_rebel_type_set_siege_won_effect(id, value)
end
---@param id rebel_type_id
---@return trigger_key
function REBEL_TYPE.get_demands_enforced_trigger(id)
	return ffi.C.alice_rebel_type_get_demands_enforced_trigger(id)
end
---@param id rebel_type_id
---@param value trigger_key
function REBEL_TYPE.set_demands_enforced_trigger(id, value)
	return ffi.C.alice_rebel_type_set_demands_enforced_trigger(id, value)
end
---@param id rebel_type_id
---@return effect_key
function REBEL_TYPE.get_demands_enforced_effect(id)
	return ffi.C.alice_rebel_type_get_demands_enforced_effect(id)
end
---@param id rebel_type_id
---@param value effect_key
function REBEL_TYPE.set_demands_enforced_effect(id, value)
	return ffi.C.alice_rebel_type_set_demands_enforced_effect(id, value)
end
---@param id rebel_type_id
---@param index government_type_id
---@return government_type_id
function REBEL_TYPE.get_government_change(id, index)
	return ffi.C.alice_rebel_type_get_government_change(id, index)
end
---@param id rebel_type_id
---@param index government_type_id
---@param value government_type_id
function REBEL_TYPE.set_government_change(id, index, value)
	return ffi.C.alice_rebel_type_set_government_change(id, index, value)
end
---@return number
function REBEL_TYPE.get_government_change_size()
	return ffi.C.alice_rebel_type_get_government_change_size()
end
---@param value number
function REBEL_TYPE.resize_government_change(value)
	return ffi.C.alice_rebel_type_resize_government_change(value)
end
