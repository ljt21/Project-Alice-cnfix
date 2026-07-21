-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_cb_type_is_valid(int32_t api_arg_0_id);
uint32_t alice_cb_type_size();
void alice_cb_type_resize(uint32_t api_arg_0_value);
int32_t alice_cb_type_get_name(int32_t api_arg_0_id);
void alice_cb_type_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_cb_type_get_short_desc(int32_t api_arg_0_id);
void alice_cb_type_set_short_desc(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_cb_type_get_shortest_desc(int32_t api_arg_0_id);
void alice_cb_type_set_shortest_desc(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_cb_type_get_long_desc(int32_t api_arg_0_id);
void alice_cb_type_set_long_desc(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_cb_type_get_war_name(int32_t api_arg_0_id);
void alice_cb_type_set_war_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint32_t alice_cb_type_get_type_bits(int32_t api_arg_0_id);
void alice_cb_type_set_type_bits(int32_t api_arg_0_id, uint32_t api_arg_1_value);
uint8_t alice_cb_type_get_months(int32_t api_arg_0_id);
void alice_cb_type_set_months(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_cb_type_get_truce_months(int32_t api_arg_0_id);
void alice_cb_type_set_truce_months(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_cb_type_get_sprite_index(int32_t api_arg_0_id);
void alice_cb_type_set_sprite_index(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int32_t alice_cb_type_get_allowed_states(int32_t api_arg_0_id);
void alice_cb_type_set_allowed_states(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_cb_type_get_allowed_states_in_crisis(int32_t api_arg_0_id);
void alice_cb_type_set_allowed_states_in_crisis(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_cb_type_get_allowed_substate_regions(int32_t api_arg_0_id);
void alice_cb_type_set_allowed_substate_regions(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_cb_type_get_allowed_countries(int32_t api_arg_0_id);
void alice_cb_type_set_allowed_countries(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_cb_type_get_can_use(int32_t api_arg_0_id);
void alice_cb_type_set_can_use(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_cb_type_get_on_add(int32_t api_arg_0_id);
void alice_cb_type_set_on_add(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_cb_type_get_on_po_accepted(int32_t api_arg_0_id);
void alice_cb_type_set_on_po_accepted(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_cb_type_get_badboy_factor(int32_t api_arg_0_id);
void alice_cb_type_set_badboy_factor(int32_t api_arg_0_id, float api_arg_1_value);
float alice_cb_type_get_prestige_factor(int32_t api_arg_0_id);
void alice_cb_type_set_prestige_factor(int32_t api_arg_0_id, float api_arg_1_value);
float alice_cb_type_get_peace_cost_factor(int32_t api_arg_0_id);
void alice_cb_type_set_peace_cost_factor(int32_t api_arg_0_id, float api_arg_1_value);
float alice_cb_type_get_penalty_factor(int32_t api_arg_0_id);
void alice_cb_type_set_penalty_factor(int32_t api_arg_0_id, float api_arg_1_value);
float alice_cb_type_get_break_truce_prestige_factor(int32_t api_arg_0_id);
void alice_cb_type_set_break_truce_prestige_factor(int32_t api_arg_0_id, float api_arg_1_value);
float alice_cb_type_get_break_truce_infamy_factor(int32_t api_arg_0_id);
void alice_cb_type_set_break_truce_infamy_factor(int32_t api_arg_0_id, float api_arg_1_value);
float alice_cb_type_get_break_truce_militancy_factor(int32_t api_arg_0_id);
void alice_cb_type_set_break_truce_militancy_factor(int32_t api_arg_0_id, float api_arg_1_value);
float alice_cb_type_get_good_relation_prestige_factor(int32_t api_arg_0_id);
void alice_cb_type_set_good_relation_prestige_factor(int32_t api_arg_0_id, float api_arg_1_value);
float alice_cb_type_get_good_relation_infamy_factor(int32_t api_arg_0_id);
void alice_cb_type_set_good_relation_infamy_factor(int32_t api_arg_0_id, float api_arg_1_value);
float alice_cb_type_get_good_relation_militancy_factor(int32_t api_arg_0_id);
void alice_cb_type_set_good_relation_militancy_factor(int32_t api_arg_0_id, float api_arg_1_value);
float alice_cb_type_get_construction_speed(int32_t api_arg_0_id);
void alice_cb_type_set_construction_speed(int32_t api_arg_0_id, float api_arg_1_value);
float alice_cb_type_get_tws_battle_factor(int32_t api_arg_0_id);
void alice_cb_type_set_tws_battle_factor(int32_t api_arg_0_id, float api_arg_1_value);
]]
CB_TYPE = {}
---@param id cb_type_id
---@return number
function CB_TYPE.is_valid(id)
	return ffi.C.alice_cb_type_is_valid(id)
end
---@return number
function CB_TYPE.size()
	return ffi.C.alice_cb_type_size()
end
---@param value number
function CB_TYPE.resize(value)
	return ffi.C.alice_cb_type_resize(value)
end
---@param id cb_type_id
---@return text_key
function CB_TYPE.get_name(id)
	return ffi.C.alice_cb_type_get_name(id)
end
---@param id cb_type_id
---@param value text_key
function CB_TYPE.set_name(id, value)
	return ffi.C.alice_cb_type_set_name(id, value)
end
---@param id cb_type_id
---@return text_key
function CB_TYPE.get_short_desc(id)
	return ffi.C.alice_cb_type_get_short_desc(id)
end
---@param id cb_type_id
---@param value text_key
function CB_TYPE.set_short_desc(id, value)
	return ffi.C.alice_cb_type_set_short_desc(id, value)
end
---@param id cb_type_id
---@return text_key
function CB_TYPE.get_shortest_desc(id)
	return ffi.C.alice_cb_type_get_shortest_desc(id)
end
---@param id cb_type_id
---@param value text_key
function CB_TYPE.set_shortest_desc(id, value)
	return ffi.C.alice_cb_type_set_shortest_desc(id, value)
end
---@param id cb_type_id
---@return text_key
function CB_TYPE.get_long_desc(id)
	return ffi.C.alice_cb_type_get_long_desc(id)
end
---@param id cb_type_id
---@param value text_key
function CB_TYPE.set_long_desc(id, value)
	return ffi.C.alice_cb_type_set_long_desc(id, value)
end
---@param id cb_type_id
---@return text_key
function CB_TYPE.get_war_name(id)
	return ffi.C.alice_cb_type_get_war_name(id)
end
---@param id cb_type_id
---@param value text_key
function CB_TYPE.set_war_name(id, value)
	return ffi.C.alice_cb_type_set_war_name(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_type_bits(id)
	return ffi.C.alice_cb_type_get_type_bits(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_type_bits(id, value)
	return ffi.C.alice_cb_type_set_type_bits(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_months(id)
	return ffi.C.alice_cb_type_get_months(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_months(id, value)
	return ffi.C.alice_cb_type_set_months(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_truce_months(id)
	return ffi.C.alice_cb_type_get_truce_months(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_truce_months(id, value)
	return ffi.C.alice_cb_type_set_truce_months(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_sprite_index(id)
	return ffi.C.alice_cb_type_get_sprite_index(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_sprite_index(id, value)
	return ffi.C.alice_cb_type_set_sprite_index(id, value)
end
---@param id cb_type_id
---@return trigger_key
function CB_TYPE.get_allowed_states(id)
	return ffi.C.alice_cb_type_get_allowed_states(id)
end
---@param id cb_type_id
---@param value trigger_key
function CB_TYPE.set_allowed_states(id, value)
	return ffi.C.alice_cb_type_set_allowed_states(id, value)
end
---@param id cb_type_id
---@return trigger_key
function CB_TYPE.get_allowed_states_in_crisis(id)
	return ffi.C.alice_cb_type_get_allowed_states_in_crisis(id)
end
---@param id cb_type_id
---@param value trigger_key
function CB_TYPE.set_allowed_states_in_crisis(id, value)
	return ffi.C.alice_cb_type_set_allowed_states_in_crisis(id, value)
end
---@param id cb_type_id
---@return trigger_key
function CB_TYPE.get_allowed_substate_regions(id)
	return ffi.C.alice_cb_type_get_allowed_substate_regions(id)
end
---@param id cb_type_id
---@param value trigger_key
function CB_TYPE.set_allowed_substate_regions(id, value)
	return ffi.C.alice_cb_type_set_allowed_substate_regions(id, value)
end
---@param id cb_type_id
---@return trigger_key
function CB_TYPE.get_allowed_countries(id)
	return ffi.C.alice_cb_type_get_allowed_countries(id)
end
---@param id cb_type_id
---@param value trigger_key
function CB_TYPE.set_allowed_countries(id, value)
	return ffi.C.alice_cb_type_set_allowed_countries(id, value)
end
---@param id cb_type_id
---@return trigger_key
function CB_TYPE.get_can_use(id)
	return ffi.C.alice_cb_type_get_can_use(id)
end
---@param id cb_type_id
---@param value trigger_key
function CB_TYPE.set_can_use(id, value)
	return ffi.C.alice_cb_type_set_can_use(id, value)
end
---@param id cb_type_id
---@return effect_key
function CB_TYPE.get_on_add(id)
	return ffi.C.alice_cb_type_get_on_add(id)
end
---@param id cb_type_id
---@param value effect_key
function CB_TYPE.set_on_add(id, value)
	return ffi.C.alice_cb_type_set_on_add(id, value)
end
---@param id cb_type_id
---@return effect_key
function CB_TYPE.get_on_po_accepted(id)
	return ffi.C.alice_cb_type_get_on_po_accepted(id)
end
---@param id cb_type_id
---@param value effect_key
function CB_TYPE.set_on_po_accepted(id, value)
	return ffi.C.alice_cb_type_set_on_po_accepted(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_badboy_factor(id)
	return ffi.C.alice_cb_type_get_badboy_factor(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_badboy_factor(id, value)
	return ffi.C.alice_cb_type_set_badboy_factor(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_prestige_factor(id)
	return ffi.C.alice_cb_type_get_prestige_factor(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_prestige_factor(id, value)
	return ffi.C.alice_cb_type_set_prestige_factor(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_peace_cost_factor(id)
	return ffi.C.alice_cb_type_get_peace_cost_factor(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_peace_cost_factor(id, value)
	return ffi.C.alice_cb_type_set_peace_cost_factor(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_penalty_factor(id)
	return ffi.C.alice_cb_type_get_penalty_factor(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_penalty_factor(id, value)
	return ffi.C.alice_cb_type_set_penalty_factor(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_break_truce_prestige_factor(id)
	return ffi.C.alice_cb_type_get_break_truce_prestige_factor(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_break_truce_prestige_factor(id, value)
	return ffi.C.alice_cb_type_set_break_truce_prestige_factor(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_break_truce_infamy_factor(id)
	return ffi.C.alice_cb_type_get_break_truce_infamy_factor(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_break_truce_infamy_factor(id, value)
	return ffi.C.alice_cb_type_set_break_truce_infamy_factor(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_break_truce_militancy_factor(id)
	return ffi.C.alice_cb_type_get_break_truce_militancy_factor(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_break_truce_militancy_factor(id, value)
	return ffi.C.alice_cb_type_set_break_truce_militancy_factor(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_good_relation_prestige_factor(id)
	return ffi.C.alice_cb_type_get_good_relation_prestige_factor(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_good_relation_prestige_factor(id, value)
	return ffi.C.alice_cb_type_set_good_relation_prestige_factor(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_good_relation_infamy_factor(id)
	return ffi.C.alice_cb_type_get_good_relation_infamy_factor(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_good_relation_infamy_factor(id, value)
	return ffi.C.alice_cb_type_set_good_relation_infamy_factor(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_good_relation_militancy_factor(id)
	return ffi.C.alice_cb_type_get_good_relation_militancy_factor(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_good_relation_militancy_factor(id, value)
	return ffi.C.alice_cb_type_set_good_relation_militancy_factor(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_construction_speed(id)
	return ffi.C.alice_cb_type_get_construction_speed(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_construction_speed(id, value)
	return ffi.C.alice_cb_type_set_construction_speed(id, value)
end
---@param id cb_type_id
---@return number
function CB_TYPE.get_tws_battle_factor(id)
	return ffi.C.alice_cb_type_get_tws_battle_factor(id)
end
---@param id cb_type_id
---@param value number
function CB_TYPE.set_tws_battle_factor(id, value)
	return ffi.C.alice_cb_type_set_tws_battle_factor(id, value)
end
