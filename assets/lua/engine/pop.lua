-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_pop_is_valid(int32_t api_arg_0_id);
uint32_t alice_pop_size();
void alice_pop_resize(uint32_t api_arg_0_value);
int32_t alice_pop_get_poptype(int32_t api_arg_0_id);
void alice_pop_set_poptype(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_pop_get_religion(int32_t api_arg_0_id);
void alice_pop_set_religion(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_pop_get_culture(int32_t api_arg_0_id);
void alice_pop_set_culture(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_pop_get_size(int32_t api_arg_0_id);
void alice_pop_set_size(int32_t api_arg_0_id, float api_arg_1_value);
float alice_pop_get_savings(int32_t api_arg_0_id);
void alice_pop_set_savings(int32_t api_arg_0_id, float api_arg_1_value);
uint16_t alice_pop_get_uconsciousness(int32_t api_arg_0_id);
void alice_pop_set_uconsciousness(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_pop_get_umilitancy(int32_t api_arg_0_id);
void alice_pop_set_umilitancy(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint16_t alice_pop_get_uliteracy(int32_t api_arg_0_id);
void alice_pop_set_uliteracy(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint8_t alice_pop_get_uemployment(int32_t api_arg_0_id);
void alice_pop_set_uemployment(int32_t api_arg_0_id, uint8_t api_arg_1_value);
float alice_pop_get_satisfaction(int32_t api_arg_0_id);
void alice_pop_set_satisfaction(int32_t api_arg_0_id, float api_arg_1_value);
uint8_t alice_pop_get_upolitical_reform_desire(int32_t api_arg_0_id);
void alice_pop_set_upolitical_reform_desire(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_pop_get_usocial_reform_desire(int32_t api_arg_0_id);
void alice_pop_set_usocial_reform_desire(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_pop_get_udemographics(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_set_udemographics(int32_t api_arg_0_id, int32_t api_arg_1_id, uint8_t api_arg_2_value);
uint32_t alice_pop_get_udemographics_size();
void alice_pop_resize_udemographics(uint32_t api_arg_0_value);
int32_t alice_pop_get_dominant_ideology(int32_t api_arg_0_id);
void alice_pop_set_dominant_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_pop_get_dominant_issue_option(int32_t api_arg_0_id);
void alice_pop_set_dominant_issue_option(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_pop_get_is_primary_or_accepted_culture(int32_t api_arg_0_id);
void alice_pop_set_is_primary_or_accepted_culture(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_pop_get_range_regiment_source_as_pop(int32_t i);
int32_t alice_pop_get_index_regiment_source_as_pop(int32_t i, int32_t subindex);
int32_t alice_pop_get_range_province_land_construction_as_pop(int32_t i);
int32_t alice_pop_get_index_province_land_construction_as_pop(int32_t i, int32_t subindex);
int32_t alice_pop_get_pop_movement_membership_as_pop(int32_t api_arg_0_id);
int32_t alice_pop_get_pop_movement_membership(int32_t api_arg_0_id);
int32_t alice_pop_get_pop_rebellion_membership_as_pop(int32_t api_arg_0_id);
int32_t alice_pop_get_pop_rebellion_membership(int32_t api_arg_0_id);
int32_t alice_pop_get_pop_location_as_pop(int32_t api_arg_0_id);
int32_t alice_pop_get_pop_location(int32_t api_arg_0_id);
]]
POP = {}
---@param id pop_id
---@return number
function POP.is_valid(id)
	return ffi.C.alice_pop_is_valid(id)
end
---@return number
function POP.size()
	return ffi.C.alice_pop_size()
end
---@param value number
function POP.resize(value)
	return ffi.C.alice_pop_resize(value)
end
---@param id pop_id
---@return pop_type_id
function POP.get_poptype(id)
	return ffi.C.alice_pop_get_poptype(id)
end
---@param id pop_id
---@param value pop_type_id
function POP.set_poptype(id, value)
	return ffi.C.alice_pop_set_poptype(id, value)
end
---@param id pop_id
---@return religion_id
function POP.get_religion(id)
	return ffi.C.alice_pop_get_religion(id)
end
---@param id pop_id
---@param value religion_id
function POP.set_religion(id, value)
	return ffi.C.alice_pop_set_religion(id, value)
end
---@param id pop_id
---@return culture_id
function POP.get_culture(id)
	return ffi.C.alice_pop_get_culture(id)
end
---@param id pop_id
---@param value culture_id
function POP.set_culture(id, value)
	return ffi.C.alice_pop_set_culture(id, value)
end
---@param id pop_id
---@return number
function POP.get_size(id)
	return ffi.C.alice_pop_get_size(id)
end
---@param id pop_id
---@param value number
function POP.set_size(id, value)
	return ffi.C.alice_pop_set_size(id, value)
end
---@param id pop_id
---@return number
function POP.get_savings(id)
	return ffi.C.alice_pop_get_savings(id)
end
---@param id pop_id
---@param value number
function POP.set_savings(id, value)
	return ffi.C.alice_pop_set_savings(id, value)
end
---@param id pop_id
---@return number
function POP.get_uconsciousness(id)
	return ffi.C.alice_pop_get_uconsciousness(id)
end
---@param id pop_id
---@param value number
function POP.set_uconsciousness(id, value)
	return ffi.C.alice_pop_set_uconsciousness(id, value)
end
---@param id pop_id
---@return number
function POP.get_umilitancy(id)
	return ffi.C.alice_pop_get_umilitancy(id)
end
---@param id pop_id
---@param value number
function POP.set_umilitancy(id, value)
	return ffi.C.alice_pop_set_umilitancy(id, value)
end
---@param id pop_id
---@return number
function POP.get_uliteracy(id)
	return ffi.C.alice_pop_get_uliteracy(id)
end
---@param id pop_id
---@param value number
function POP.set_uliteracy(id, value)
	return ffi.C.alice_pop_set_uliteracy(id, value)
end
---@param id pop_id
---@return number
function POP.get_uemployment(id)
	return ffi.C.alice_pop_get_uemployment(id)
end
---@param id pop_id
---@param value number
function POP.set_uemployment(id, value)
	return ffi.C.alice_pop_set_uemployment(id, value)
end
---@param id pop_id
---@return number
function POP.get_satisfaction(id)
	return ffi.C.alice_pop_get_satisfaction(id)
end
---@param id pop_id
---@param value number
function POP.set_satisfaction(id, value)
	return ffi.C.alice_pop_set_satisfaction(id, value)
end
---@param id pop_id
---@return number
function POP.get_upolitical_reform_desire(id)
	return ffi.C.alice_pop_get_upolitical_reform_desire(id)
end
---@param id pop_id
---@param value number
function POP.set_upolitical_reform_desire(id, value)
	return ffi.C.alice_pop_set_upolitical_reform_desire(id, value)
end
---@param id pop_id
---@return number
function POP.get_usocial_reform_desire(id)
	return ffi.C.alice_pop_get_usocial_reform_desire(id)
end
---@param id pop_id
---@param value number
function POP.set_usocial_reform_desire(id, value)
	return ffi.C.alice_pop_set_usocial_reform_desire(id, value)
end
---@param id pop_id
---@param index pop_demographics_key
---@return number
function POP.get_udemographics(id, index)
	return ffi.C.alice_pop_get_udemographics(id, index)
end
---@param id pop_id
---@param index pop_demographics_key
---@param value number
function POP.set_udemographics(id, index, value)
	return ffi.C.alice_pop_set_udemographics(id, index, value)
end
---@return number
function POP.get_udemographics_size()
	return ffi.C.alice_pop_get_udemographics_size()
end
---@param value number
function POP.resize_udemographics(value)
	return ffi.C.alice_pop_resize_udemographics(value)
end
---@param id pop_id
---@return ideology_id
function POP.get_dominant_ideology(id)
	return ffi.C.alice_pop_get_dominant_ideology(id)
end
---@param id pop_id
---@param value ideology_id
function POP.set_dominant_ideology(id, value)
	return ffi.C.alice_pop_set_dominant_ideology(id, value)
end
---@param id pop_id
---@return issue_option_id
function POP.get_dominant_issue_option(id)
	return ffi.C.alice_pop_get_dominant_issue_option(id)
end
---@param id pop_id
---@param value issue_option_id
function POP.set_dominant_issue_option(id, value)
	return ffi.C.alice_pop_set_dominant_issue_option(id, value)
end
---@param id pop_id
---@return boolean
function POP.get_is_primary_or_accepted_culture(id)
	return ffi.C.alice_pop_get_is_primary_or_accepted_culture(id)
end
---@param id pop_id
---@param value boolean
function POP.set_is_primary_or_accepted_culture(id, value)
	return ffi.C.alice_pop_set_is_primary_or_accepted_culture(id, value)
end
---@param id pop_id
---@return number
function POP.get_range_length_regiment_source(id)
	return ffi.C.alice_pop_get_range_regiment_source_as_pop(id)
end
---@param id pop_id
---@param index number
---@return regiment_source_id
function POP.get_item_from_range_regiment_source(id, index)
	return ffi.C.alice_pop_get_index_regiment_source_as_pop(id, index)
end
---@param id pop_id
---@return number
function POP.get_range_length_province_land_construction(id)
	return ffi.C.alice_pop_get_range_province_land_construction_as_pop(id)
end
---@param id pop_id
---@param index number
---@return province_land_construction_id
function POP.get_item_from_range_province_land_construction(id, index)
	return ffi.C.alice_pop_get_index_province_land_construction_as_pop(id, index)
end
---@param id pop_id
---@return pop_movement_membership_id
function POP.get_pop_movement_membership_as_pop(id)
	return ffi.C.alice_pop_get_pop_movement_membership_as_pop(id)
end
---@param id pop_id
---@return pop_movement_membership_id
function POP.get_pop_movement_membership(id)
	return ffi.C.alice_pop_get_pop_movement_membership(id)
end
---@param id pop_id
---@return pop_rebellion_membership_id
function POP.get_pop_rebellion_membership_as_pop(id)
	return ffi.C.alice_pop_get_pop_rebellion_membership_as_pop(id)
end
---@param id pop_id
---@return pop_rebellion_membership_id
function POP.get_pop_rebellion_membership(id)
	return ffi.C.alice_pop_get_pop_rebellion_membership(id)
end
---@param id pop_id
---@return pop_location_id
function POP.get_pop_location_as_pop(id)
	return ffi.C.alice_pop_get_pop_location_as_pop(id)
end
---@param id pop_id
---@return pop_location_id
function POP.get_pop_location(id)
	return ffi.C.alice_pop_get_pop_location(id)
end
