-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_navy_is_valid(int32_t api_arg_0_id);
uint32_t alice_navy_size();
void alice_navy_resize(uint32_t api_arg_0_value);
int32_t alice_navy_get_name(int32_t api_arg_0_id);
void alice_navy_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_navy_get_unused_travel_days(int32_t api_arg_0_id);
void alice_navy_set_unused_travel_days(int32_t api_arg_0_id, float api_arg_1_value);
uint8_t alice_navy_get_months_outside_naval_range(int32_t api_arg_0_id);
void alice_navy_set_months_outside_naval_range(int32_t api_arg_0_id, uint8_t api_arg_1_value);
bool alice_navy_get_is_retreating(int32_t api_arg_0_id);
void alice_navy_set_is_retreating(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_navy_get_moving_to_merge(int32_t api_arg_0_id);
void alice_navy_set_moving_to_merge(int32_t api_arg_0_id, bool api_arg_1_value);
uint8_t alice_navy_get_ai_activity(int32_t api_arg_0_id);
void alice_navy_set_ai_activity(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int32_t alice_navy_get_automated_army_group_membership_navy_as_navy(int32_t api_arg_0_id);
int32_t alice_navy_get_automated_army_group_membership_navy(int32_t api_arg_0_id);
int32_t alice_navy_get_range_army_transport_as_navy(int32_t i);
int32_t alice_navy_get_index_army_transport_as_navy(int32_t i, int32_t subindex);
int32_t alice_navy_get_navy_control_as_navy(int32_t api_arg_0_id);
int32_t alice_navy_get_navy_control(int32_t api_arg_0_id);
int32_t alice_navy_get_navy_location_as_navy(int32_t api_arg_0_id);
int32_t alice_navy_get_navy_location(int32_t api_arg_0_id);
int32_t alice_navy_get_range_navy_membership_as_navy(int32_t i);
int32_t alice_navy_get_index_navy_membership_as_navy(int32_t i, int32_t subindex);
int32_t alice_navy_get_navy_battle_participation_as_navy(int32_t api_arg_0_id);
int32_t alice_navy_get_navy_battle_participation(int32_t api_arg_0_id);
int32_t alice_navy_get_navy_leadership_as_navy(int32_t api_arg_0_id);
int32_t alice_navy_get_navy_leadership(int32_t api_arg_0_id);
]]
NAVY = {}
---@param id navy_id
---@return number
function NAVY.is_valid(id)
	return ffi.C.alice_navy_is_valid(id)
end
---@return number
function NAVY.size()
	return ffi.C.alice_navy_size()
end
---@param value number
function NAVY.resize(value)
	return ffi.C.alice_navy_resize(value)
end
---@param id navy_id
---@return unit_name_id
function NAVY.get_name(id)
	return ffi.C.alice_navy_get_name(id)
end
---@param id navy_id
---@param value unit_name_id
function NAVY.set_name(id, value)
	return ffi.C.alice_navy_set_name(id, value)
end
---@param id navy_id
---@return number
function NAVY.get_unused_travel_days(id)
	return ffi.C.alice_navy_get_unused_travel_days(id)
end
---@param id navy_id
---@param value number
function NAVY.set_unused_travel_days(id, value)
	return ffi.C.alice_navy_set_unused_travel_days(id, value)
end
---@param id navy_id
---@return number
function NAVY.get_months_outside_naval_range(id)
	return ffi.C.alice_navy_get_months_outside_naval_range(id)
end
---@param id navy_id
---@param value number
function NAVY.set_months_outside_naval_range(id, value)
	return ffi.C.alice_navy_set_months_outside_naval_range(id, value)
end
---@param id navy_id
---@return boolean
function NAVY.get_is_retreating(id)
	return ffi.C.alice_navy_get_is_retreating(id)
end
---@param id navy_id
---@param value boolean
function NAVY.set_is_retreating(id, value)
	return ffi.C.alice_navy_set_is_retreating(id, value)
end
---@param id navy_id
---@return boolean
function NAVY.get_moving_to_merge(id)
	return ffi.C.alice_navy_get_moving_to_merge(id)
end
---@param id navy_id
---@param value boolean
function NAVY.set_moving_to_merge(id, value)
	return ffi.C.alice_navy_set_moving_to_merge(id, value)
end
---@param id navy_id
---@return number
function NAVY.get_ai_activity(id)
	return ffi.C.alice_navy_get_ai_activity(id)
end
---@param id navy_id
---@param value number
function NAVY.set_ai_activity(id, value)
	return ffi.C.alice_navy_set_ai_activity(id, value)
end
---@param id navy_id
---@return automated_army_group_membership_navy_id
function NAVY.get_automated_army_group_membership_navy_as_navy(id)
	return ffi.C.alice_navy_get_automated_army_group_membership_navy_as_navy(id)
end
---@param id navy_id
---@return automated_army_group_membership_navy_id
function NAVY.get_automated_army_group_membership_navy(id)
	return ffi.C.alice_navy_get_automated_army_group_membership_navy(id)
end
---@param id navy_id
---@return number
function NAVY.get_range_length_army_transport(id)
	return ffi.C.alice_navy_get_range_army_transport_as_navy(id)
end
---@param id navy_id
---@param index number
---@return army_transport_id
function NAVY.get_item_from_range_army_transport(id, index)
	return ffi.C.alice_navy_get_index_army_transport_as_navy(id, index)
end
---@param id navy_id
---@return navy_control_id
function NAVY.get_navy_control_as_navy(id)
	return ffi.C.alice_navy_get_navy_control_as_navy(id)
end
---@param id navy_id
---@return navy_control_id
function NAVY.get_navy_control(id)
	return ffi.C.alice_navy_get_navy_control(id)
end
---@param id navy_id
---@return navy_location_id
function NAVY.get_navy_location_as_navy(id)
	return ffi.C.alice_navy_get_navy_location_as_navy(id)
end
---@param id navy_id
---@return navy_location_id
function NAVY.get_navy_location(id)
	return ffi.C.alice_navy_get_navy_location(id)
end
---@param id navy_id
---@return number
function NAVY.get_range_length_navy_membership(id)
	return ffi.C.alice_navy_get_range_navy_membership_as_navy(id)
end
---@param id navy_id
---@param index number
---@return navy_membership_id
function NAVY.get_item_from_range_navy_membership(id, index)
	return ffi.C.alice_navy_get_index_navy_membership_as_navy(id, index)
end
---@param id navy_id
---@return navy_battle_participation_id
function NAVY.get_navy_battle_participation_as_navy(id)
	return ffi.C.alice_navy_get_navy_battle_participation_as_navy(id)
end
---@param id navy_id
---@return navy_battle_participation_id
function NAVY.get_navy_battle_participation(id)
	return ffi.C.alice_navy_get_navy_battle_participation(id)
end
---@param id navy_id
---@return navy_leadership_id
function NAVY.get_navy_leadership_as_navy(id)
	return ffi.C.alice_navy_get_navy_leadership_as_navy(id)
end
---@param id navy_id
---@return navy_leadership_id
function NAVY.get_navy_leadership(id)
	return ffi.C.alice_navy_get_navy_leadership(id)
end
