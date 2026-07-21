-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_army_is_valid(int32_t api_arg_0_id);
uint32_t alice_army_size();
void alice_army_resize(uint32_t api_arg_0_value);
int32_t alice_army_get_name(int32_t api_arg_0_id);
void alice_army_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_army_get_black_flag(int32_t api_arg_0_id);
void alice_army_set_black_flag(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_army_get_is_retreating(int32_t api_arg_0_id);
void alice_army_set_is_retreating(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_army_get_is_rebel_hunter(int32_t api_arg_0_id);
void alice_army_set_is_rebel_hunter(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_army_get_moving_to_merge(int32_t api_arg_0_id);
void alice_army_set_moving_to_merge(int32_t api_arg_0_id, bool api_arg_1_value);
uint8_t alice_army_get_special_order(int32_t api_arg_0_id);
void alice_army_set_special_order(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_army_get_dig_in(int32_t api_arg_0_id);
void alice_army_set_dig_in(int32_t api_arg_0_id, uint8_t api_arg_1_value);
float alice_army_get_unused_travel_days(int32_t api_arg_0_id);
void alice_army_set_unused_travel_days(int32_t api_arg_0_id, float api_arg_1_value);
uint8_t alice_army_get_ai_activity(int32_t api_arg_0_id);
void alice_army_set_ai_activity(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int32_t alice_army_get_ai_province(int32_t api_arg_0_id);
void alice_army_set_ai_province(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_army_get_is_ai_controlled(int32_t api_arg_0_id);
void alice_army_set_is_ai_controlled(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_army_get_army_pursuit_as_source(int32_t api_arg_0_id);
int32_t alice_army_get_range_army_pursuit_as_target(int32_t i);
int32_t alice_army_get_index_army_pursuit_as_target(int32_t i, int32_t subindex);
int32_t alice_army_get_army_transport_as_army(int32_t api_arg_0_id);
int32_t alice_army_get_army_transport(int32_t api_arg_0_id);
int32_t alice_army_get_army_control_as_army(int32_t api_arg_0_id);
int32_t alice_army_get_army_control(int32_t api_arg_0_id);
int32_t alice_army_get_army_rebel_control_as_army(int32_t api_arg_0_id);
int32_t alice_army_get_army_rebel_control(int32_t api_arg_0_id);
int32_t alice_army_get_army_location_as_army(int32_t api_arg_0_id);
int32_t alice_army_get_army_location(int32_t api_arg_0_id);
int32_t alice_army_get_range_army_membership_as_army(int32_t i);
int32_t alice_army_get_index_army_membership_as_army(int32_t i, int32_t subindex);
int32_t alice_army_get_army_battle_participation_as_army(int32_t api_arg_0_id);
int32_t alice_army_get_army_battle_participation(int32_t api_arg_0_id);
int32_t alice_army_get_army_leadership_as_army(int32_t api_arg_0_id);
int32_t alice_army_get_army_leadership(int32_t api_arg_0_id);
]]
ARMY = {}
---@param id army_id
---@return number
function ARMY.is_valid(id)
	return ffi.C.alice_army_is_valid(id)
end
---@return number
function ARMY.size()
	return ffi.C.alice_army_size()
end
---@param value number
function ARMY.resize(value)
	return ffi.C.alice_army_resize(value)
end
---@param id army_id
---@return unit_name_id
function ARMY.get_name(id)
	return ffi.C.alice_army_get_name(id)
end
---@param id army_id
---@param value unit_name_id
function ARMY.set_name(id, value)
	return ffi.C.alice_army_set_name(id, value)
end
---@param id army_id
---@return boolean
function ARMY.get_black_flag(id)
	return ffi.C.alice_army_get_black_flag(id)
end
---@param id army_id
---@param value boolean
function ARMY.set_black_flag(id, value)
	return ffi.C.alice_army_set_black_flag(id, value)
end
---@param id army_id
---@return boolean
function ARMY.get_is_retreating(id)
	return ffi.C.alice_army_get_is_retreating(id)
end
---@param id army_id
---@param value boolean
function ARMY.set_is_retreating(id, value)
	return ffi.C.alice_army_set_is_retreating(id, value)
end
---@param id army_id
---@return boolean
function ARMY.get_is_rebel_hunter(id)
	return ffi.C.alice_army_get_is_rebel_hunter(id)
end
---@param id army_id
---@param value boolean
function ARMY.set_is_rebel_hunter(id, value)
	return ffi.C.alice_army_set_is_rebel_hunter(id, value)
end
---@param id army_id
---@return boolean
function ARMY.get_moving_to_merge(id)
	return ffi.C.alice_army_get_moving_to_merge(id)
end
---@param id army_id
---@param value boolean
function ARMY.set_moving_to_merge(id, value)
	return ffi.C.alice_army_set_moving_to_merge(id, value)
end
---@param id army_id
---@return number
function ARMY.get_special_order(id)
	return ffi.C.alice_army_get_special_order(id)
end
---@param id army_id
---@param value number
function ARMY.set_special_order(id, value)
	return ffi.C.alice_army_set_special_order(id, value)
end
---@param id army_id
---@return number
function ARMY.get_dig_in(id)
	return ffi.C.alice_army_get_dig_in(id)
end
---@param id army_id
---@param value number
function ARMY.set_dig_in(id, value)
	return ffi.C.alice_army_set_dig_in(id, value)
end
---@param id army_id
---@return number
function ARMY.get_unused_travel_days(id)
	return ffi.C.alice_army_get_unused_travel_days(id)
end
---@param id army_id
---@param value number
function ARMY.set_unused_travel_days(id, value)
	return ffi.C.alice_army_set_unused_travel_days(id, value)
end
---@param id army_id
---@return number
function ARMY.get_ai_activity(id)
	return ffi.C.alice_army_get_ai_activity(id)
end
---@param id army_id
---@param value number
function ARMY.set_ai_activity(id, value)
	return ffi.C.alice_army_set_ai_activity(id, value)
end
---@param id army_id
---@return province_id
function ARMY.get_ai_province(id)
	return ffi.C.alice_army_get_ai_province(id)
end
---@param id army_id
---@param value province_id
function ARMY.set_ai_province(id, value)
	return ffi.C.alice_army_set_ai_province(id, value)
end
---@param id army_id
---@return boolean
function ARMY.get_is_ai_controlled(id)
	return ffi.C.alice_army_get_is_ai_controlled(id)
end
---@param id army_id
---@param value boolean
function ARMY.set_is_ai_controlled(id, value)
	return ffi.C.alice_army_set_is_ai_controlled(id, value)
end
---@param id army_id
---@return army_pursuit_id
function ARMY.get_army_pursuit_as_source(id)
	return ffi.C.alice_army_get_army_pursuit_as_source(id)
end
---@param id army_id
---@return number
function ARMY.get_range_length_army_pursuit(id)
	return ffi.C.alice_army_get_range_army_pursuit_as_target(id)
end
---@param id army_id
---@param index number
---@return army_pursuit_id
function ARMY.get_item_from_range_army_pursuit(id, index)
	return ffi.C.alice_army_get_index_army_pursuit_as_target(id, index)
end
---@param id army_id
---@return army_transport_id
function ARMY.get_army_transport_as_army(id)
	return ffi.C.alice_army_get_army_transport_as_army(id)
end
---@param id army_id
---@return army_transport_id
function ARMY.get_army_transport(id)
	return ffi.C.alice_army_get_army_transport(id)
end
---@param id army_id
---@return army_control_id
function ARMY.get_army_control_as_army(id)
	return ffi.C.alice_army_get_army_control_as_army(id)
end
---@param id army_id
---@return army_control_id
function ARMY.get_army_control(id)
	return ffi.C.alice_army_get_army_control(id)
end
---@param id army_id
---@return army_rebel_control_id
function ARMY.get_army_rebel_control_as_army(id)
	return ffi.C.alice_army_get_army_rebel_control_as_army(id)
end
---@param id army_id
---@return army_rebel_control_id
function ARMY.get_army_rebel_control(id)
	return ffi.C.alice_army_get_army_rebel_control(id)
end
---@param id army_id
---@return army_location_id
function ARMY.get_army_location_as_army(id)
	return ffi.C.alice_army_get_army_location_as_army(id)
end
---@param id army_id
---@return army_location_id
function ARMY.get_army_location(id)
	return ffi.C.alice_army_get_army_location(id)
end
---@param id army_id
---@return number
function ARMY.get_range_length_army_membership(id)
	return ffi.C.alice_army_get_range_army_membership_as_army(id)
end
---@param id army_id
---@param index number
---@return army_membership_id
function ARMY.get_item_from_range_army_membership(id, index)
	return ffi.C.alice_army_get_index_army_membership_as_army(id, index)
end
---@param id army_id
---@return army_battle_participation_id
function ARMY.get_army_battle_participation_as_army(id)
	return ffi.C.alice_army_get_army_battle_participation_as_army(id)
end
---@param id army_id
---@return army_battle_participation_id
function ARMY.get_army_battle_participation(id)
	return ffi.C.alice_army_get_army_battle_participation(id)
end
---@param id army_id
---@return army_leadership_id
function ARMY.get_army_leadership_as_army(id)
	return ffi.C.alice_army_get_army_leadership_as_army(id)
end
---@param id army_id
---@return army_leadership_id
function ARMY.get_army_leadership(id)
	return ffi.C.alice_army_get_army_leadership(id)
end
