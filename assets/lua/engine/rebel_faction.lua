-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_rebel_faction_is_valid(int32_t api_arg_0_id);
uint32_t alice_rebel_faction_size();
void alice_rebel_faction_resize(uint32_t api_arg_0_value);
int32_t alice_rebel_faction_get_type(int32_t api_arg_0_id);
void alice_rebel_faction_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_faction_get_defection_target(int32_t api_arg_0_id);
void alice_rebel_faction_set_defection_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_faction_get_primary_culture(int32_t api_arg_0_id);
void alice_rebel_faction_set_primary_culture(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_faction_get_primary_culture_group(int32_t api_arg_0_id);
void alice_rebel_faction_set_primary_culture_group(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_faction_get_religion(int32_t api_arg_0_id);
void alice_rebel_faction_set_religion(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_rebel_faction_get_possible_regiments(int32_t api_arg_0_id);
void alice_rebel_faction_set_possible_regiments(int32_t api_arg_0_id, int32_t api_arg_1_value);
float alice_rebel_faction_get_organization(int32_t api_arg_0_id);
void alice_rebel_faction_set_organization(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_rebel_faction_get_range_army_rebel_control_as_controller(int32_t i);
int32_t alice_rebel_faction_get_index_army_rebel_control_as_controller(int32_t i, int32_t subindex);
int32_t alice_rebel_faction_get_range_province_rebel_control_as_rebel_faction(int32_t i);
int32_t alice_rebel_faction_get_index_province_rebel_control_as_rebel_faction(int32_t i, int32_t subindex);
int32_t alice_rebel_faction_get_rebellion_within_as_rebels(int32_t api_arg_0_id);
int32_t alice_rebel_faction_get_rebellion_within(int32_t api_arg_0_id);
int32_t alice_rebel_faction_get_range_pop_rebellion_membership_as_rebel_faction(int32_t i);
int32_t alice_rebel_faction_get_index_pop_rebellion_membership_as_rebel_faction(int32_t i, int32_t subindex);
]]
REBEL_FACTION = {}
---@param id rebel_faction_id
---@return number
function REBEL_FACTION.is_valid(id)
	return ffi.C.alice_rebel_faction_is_valid(id)
end
---@return number
function REBEL_FACTION.size()
	return ffi.C.alice_rebel_faction_size()
end
---@param value number
function REBEL_FACTION.resize(value)
	return ffi.C.alice_rebel_faction_resize(value)
end
---@param id rebel_faction_id
---@return rebel_type_id
function REBEL_FACTION.get_type(id)
	return ffi.C.alice_rebel_faction_get_type(id)
end
---@param id rebel_faction_id
---@param value rebel_type_id
function REBEL_FACTION.set_type(id, value)
	return ffi.C.alice_rebel_faction_set_type(id, value)
end
---@param id rebel_faction_id
---@return national_identity_id
function REBEL_FACTION.get_defection_target(id)
	return ffi.C.alice_rebel_faction_get_defection_target(id)
end
---@param id rebel_faction_id
---@param value national_identity_id
function REBEL_FACTION.set_defection_target(id, value)
	return ffi.C.alice_rebel_faction_set_defection_target(id, value)
end
---@param id rebel_faction_id
---@return culture_id
function REBEL_FACTION.get_primary_culture(id)
	return ffi.C.alice_rebel_faction_get_primary_culture(id)
end
---@param id rebel_faction_id
---@param value culture_id
function REBEL_FACTION.set_primary_culture(id, value)
	return ffi.C.alice_rebel_faction_set_primary_culture(id, value)
end
---@param id rebel_faction_id
---@return culture_group_id
function REBEL_FACTION.get_primary_culture_group(id)
	return ffi.C.alice_rebel_faction_get_primary_culture_group(id)
end
---@param id rebel_faction_id
---@param value culture_group_id
function REBEL_FACTION.set_primary_culture_group(id, value)
	return ffi.C.alice_rebel_faction_set_primary_culture_group(id, value)
end
---@param id rebel_faction_id
---@return religion_id
function REBEL_FACTION.get_religion(id)
	return ffi.C.alice_rebel_faction_get_religion(id)
end
---@param id rebel_faction_id
---@param value religion_id
function REBEL_FACTION.set_religion(id, value)
	return ffi.C.alice_rebel_faction_set_religion(id, value)
end
---@param id rebel_faction_id
---@return number
function REBEL_FACTION.get_possible_regiments(id)
	return ffi.C.alice_rebel_faction_get_possible_regiments(id)
end
---@param id rebel_faction_id
---@param value number
function REBEL_FACTION.set_possible_regiments(id, value)
	return ffi.C.alice_rebel_faction_set_possible_regiments(id, value)
end
---@param id rebel_faction_id
---@return number
function REBEL_FACTION.get_organization(id)
	return ffi.C.alice_rebel_faction_get_organization(id)
end
---@param id rebel_faction_id
---@param value number
function REBEL_FACTION.set_organization(id, value)
	return ffi.C.alice_rebel_faction_set_organization(id, value)
end
---@param id rebel_faction_id
---@return number
function REBEL_FACTION.get_range_length_army_rebel_control(id)
	return ffi.C.alice_rebel_faction_get_range_army_rebel_control_as_controller(id)
end
---@param id rebel_faction_id
---@param index number
---@return army_rebel_control_id
function REBEL_FACTION.get_item_from_range_army_rebel_control(id, index)
	return ffi.C.alice_rebel_faction_get_index_army_rebel_control_as_controller(id, index)
end
---@param id rebel_faction_id
---@return number
function REBEL_FACTION.get_range_length_province_rebel_control(id)
	return ffi.C.alice_rebel_faction_get_range_province_rebel_control_as_rebel_faction(id)
end
---@param id rebel_faction_id
---@param index number
---@return province_rebel_control_id
function REBEL_FACTION.get_item_from_range_province_rebel_control(id, index)
	return ffi.C.alice_rebel_faction_get_index_province_rebel_control_as_rebel_faction(id, index)
end
---@param id rebel_faction_id
---@return rebellion_within_id
function REBEL_FACTION.get_rebellion_within_as_rebels(id)
	return ffi.C.alice_rebel_faction_get_rebellion_within_as_rebels(id)
end
---@param id rebel_faction_id
---@return rebellion_within_id
function REBEL_FACTION.get_rebellion_within(id)
	return ffi.C.alice_rebel_faction_get_rebellion_within(id)
end
---@param id rebel_faction_id
---@return number
function REBEL_FACTION.get_range_length_pop_rebellion_membership(id)
	return ffi.C.alice_rebel_faction_get_range_pop_rebellion_membership_as_rebel_faction(id)
end
---@param id rebel_faction_id
---@param index number
---@return pop_rebellion_membership_id
function REBEL_FACTION.get_item_from_range_pop_rebellion_membership(id, index)
	return ffi.C.alice_rebel_faction_get_index_pop_rebellion_membership_as_rebel_faction(id, index)
end
