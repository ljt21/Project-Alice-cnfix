-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_ideology_is_valid(int32_t api_arg_0_id);
uint32_t alice_ideology_size();
void alice_ideology_resize(uint32_t api_arg_0_value);
int32_t alice_ideology_get_name(int32_t api_arg_0_id);
void alice_ideology_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint32_t alice_ideology_get_color(int32_t api_arg_0_id);
void alice_ideology_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value);
bool alice_ideology_get_is_civilized_only(int32_t api_arg_0_id);
void alice_ideology_set_is_civilized_only(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_ideology_get_add_political_reform(int32_t api_arg_0_id);
void alice_ideology_set_add_political_reform(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_ideology_get_remove_political_reform(int32_t api_arg_0_id);
void alice_ideology_set_remove_political_reform(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_ideology_get_add_social_reform(int32_t api_arg_0_id);
void alice_ideology_set_add_social_reform(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_ideology_get_remove_social_reform(int32_t api_arg_0_id);
void alice_ideology_set_remove_social_reform(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_ideology_get_add_military_reform(int32_t api_arg_0_id);
void alice_ideology_set_add_military_reform(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_ideology_get_add_economic_reform(int32_t api_arg_0_id);
void alice_ideology_set_add_economic_reform(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_ideology_get_enabled(int32_t api_arg_0_id);
void alice_ideology_set_enabled(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_ideology_get_ideology_group_membership_as_ideology(int32_t api_arg_0_id);
int32_t alice_ideology_get_ideology_group_membership(int32_t api_arg_0_id);
]]
IDEOLOGY = {}
---@param id ideology_id
---@return number
function IDEOLOGY.is_valid(id)
	return ffi.C.alice_ideology_is_valid(id)
end
---@return number
function IDEOLOGY.size()
	return ffi.C.alice_ideology_size()
end
---@param value number
function IDEOLOGY.resize(value)
	return ffi.C.alice_ideology_resize(value)
end
---@param id ideology_id
---@return text_key
function IDEOLOGY.get_name(id)
	return ffi.C.alice_ideology_get_name(id)
end
---@param id ideology_id
---@param value text_key
function IDEOLOGY.set_name(id, value)
	return ffi.C.alice_ideology_set_name(id, value)
end
---@param id ideology_id
---@return number
function IDEOLOGY.get_color(id)
	return ffi.C.alice_ideology_get_color(id)
end
---@param id ideology_id
---@param value number
function IDEOLOGY.set_color(id, value)
	return ffi.C.alice_ideology_set_color(id, value)
end
---@param id ideology_id
---@return boolean
function IDEOLOGY.get_is_civilized_only(id)
	return ffi.C.alice_ideology_get_is_civilized_only(id)
end
---@param id ideology_id
---@param value boolean
function IDEOLOGY.set_is_civilized_only(id, value)
	return ffi.C.alice_ideology_set_is_civilized_only(id, value)
end
---@param id ideology_id
---@return value_modifier_key
function IDEOLOGY.get_add_political_reform(id)
	return ffi.C.alice_ideology_get_add_political_reform(id)
end
---@param id ideology_id
---@param value value_modifier_key
function IDEOLOGY.set_add_political_reform(id, value)
	return ffi.C.alice_ideology_set_add_political_reform(id, value)
end
---@param id ideology_id
---@return value_modifier_key
function IDEOLOGY.get_remove_political_reform(id)
	return ffi.C.alice_ideology_get_remove_political_reform(id)
end
---@param id ideology_id
---@param value value_modifier_key
function IDEOLOGY.set_remove_political_reform(id, value)
	return ffi.C.alice_ideology_set_remove_political_reform(id, value)
end
---@param id ideology_id
---@return value_modifier_key
function IDEOLOGY.get_add_social_reform(id)
	return ffi.C.alice_ideology_get_add_social_reform(id)
end
---@param id ideology_id
---@param value value_modifier_key
function IDEOLOGY.set_add_social_reform(id, value)
	return ffi.C.alice_ideology_set_add_social_reform(id, value)
end
---@param id ideology_id
---@return value_modifier_key
function IDEOLOGY.get_remove_social_reform(id)
	return ffi.C.alice_ideology_get_remove_social_reform(id)
end
---@param id ideology_id
---@param value value_modifier_key
function IDEOLOGY.set_remove_social_reform(id, value)
	return ffi.C.alice_ideology_set_remove_social_reform(id, value)
end
---@param id ideology_id
---@return value_modifier_key
function IDEOLOGY.get_add_military_reform(id)
	return ffi.C.alice_ideology_get_add_military_reform(id)
end
---@param id ideology_id
---@param value value_modifier_key
function IDEOLOGY.set_add_military_reform(id, value)
	return ffi.C.alice_ideology_set_add_military_reform(id, value)
end
---@param id ideology_id
---@return value_modifier_key
function IDEOLOGY.get_add_economic_reform(id)
	return ffi.C.alice_ideology_get_add_economic_reform(id)
end
---@param id ideology_id
---@param value value_modifier_key
function IDEOLOGY.set_add_economic_reform(id, value)
	return ffi.C.alice_ideology_set_add_economic_reform(id, value)
end
---@param id ideology_id
---@return boolean
function IDEOLOGY.get_enabled(id)
	return ffi.C.alice_ideology_get_enabled(id)
end
---@param id ideology_id
---@param value boolean
function IDEOLOGY.set_enabled(id, value)
	return ffi.C.alice_ideology_set_enabled(id, value)
end
---@param id ideology_id
---@return ideology_group_membership_id
function IDEOLOGY.get_ideology_group_membership_as_ideology(id)
	return ffi.C.alice_ideology_get_ideology_group_membership_as_ideology(id)
end
---@param id ideology_id
---@return ideology_group_membership_id
function IDEOLOGY.get_ideology_group_membership(id)
	return ffi.C.alice_ideology_get_ideology_group_membership(id)
end
