-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_wargoal_is_valid(int32_t api_arg_0_id);
uint32_t alice_wargoal_size();
void alice_wargoal_resize(uint32_t api_arg_0_value);
int32_t alice_wargoal_get_added_by(int32_t api_arg_0_id);
void alice_wargoal_set_added_by(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_wargoal_get_target_nation(int32_t api_arg_0_id);
void alice_wargoal_set_target_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_wargoal_get_type(int32_t api_arg_0_id);
void alice_wargoal_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_wargoal_get_associated_tag(int32_t api_arg_0_id);
void alice_wargoal_set_associated_tag(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_wargoal_get_secondary_nation(int32_t api_arg_0_id);
void alice_wargoal_set_secondary_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_wargoal_get_associated_state(int32_t api_arg_0_id);
void alice_wargoal_set_associated_state(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_wargoal_get_ticking_war_score(int32_t api_arg_0_id);
void alice_wargoal_set_ticking_war_score(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_wargoal_get_wargoals_attached_as_wargoal(int32_t api_arg_0_id);
int32_t alice_wargoal_get_wargoals_attached(int32_t api_arg_0_id);
int32_t alice_wargoal_get_peace_offer_item_as_wargoal(int32_t api_arg_0_id);
int32_t alice_wargoal_get_peace_offer_item(int32_t api_arg_0_id);
]]
WARGOAL = {}
---@param id wargoal_id
---@return number
function WARGOAL.is_valid(id)
	return ffi.C.alice_wargoal_is_valid(id)
end
---@return number
function WARGOAL.size()
	return ffi.C.alice_wargoal_size()
end
---@param value number
function WARGOAL.resize(value)
	return ffi.C.alice_wargoal_resize(value)
end
---@param id wargoal_id
---@return nation_id
function WARGOAL.get_added_by(id)
	return ffi.C.alice_wargoal_get_added_by(id)
end
---@param id wargoal_id
---@param value nation_id
function WARGOAL.set_added_by(id, value)
	return ffi.C.alice_wargoal_set_added_by(id, value)
end
---@param id wargoal_id
---@return nation_id
function WARGOAL.get_target_nation(id)
	return ffi.C.alice_wargoal_get_target_nation(id)
end
---@param id wargoal_id
---@param value nation_id
function WARGOAL.set_target_nation(id, value)
	return ffi.C.alice_wargoal_set_target_nation(id, value)
end
---@param id wargoal_id
---@return cb_type_id
function WARGOAL.get_type(id)
	return ffi.C.alice_wargoal_get_type(id)
end
---@param id wargoal_id
---@param value cb_type_id
function WARGOAL.set_type(id, value)
	return ffi.C.alice_wargoal_set_type(id, value)
end
---@param id wargoal_id
---@return national_identity_id
function WARGOAL.get_associated_tag(id)
	return ffi.C.alice_wargoal_get_associated_tag(id)
end
---@param id wargoal_id
---@param value national_identity_id
function WARGOAL.set_associated_tag(id, value)
	return ffi.C.alice_wargoal_set_associated_tag(id, value)
end
---@param id wargoal_id
---@return nation_id
function WARGOAL.get_secondary_nation(id)
	return ffi.C.alice_wargoal_get_secondary_nation(id)
end
---@param id wargoal_id
---@param value nation_id
function WARGOAL.set_secondary_nation(id, value)
	return ffi.C.alice_wargoal_set_secondary_nation(id, value)
end
---@param id wargoal_id
---@return state_definition_id
function WARGOAL.get_associated_state(id)
	return ffi.C.alice_wargoal_get_associated_state(id)
end
---@param id wargoal_id
---@param value state_definition_id
function WARGOAL.set_associated_state(id, value)
	return ffi.C.alice_wargoal_set_associated_state(id, value)
end
---@param id wargoal_id
---@return number
function WARGOAL.get_ticking_war_score(id)
	return ffi.C.alice_wargoal_get_ticking_war_score(id)
end
---@param id wargoal_id
---@param value number
function WARGOAL.set_ticking_war_score(id, value)
	return ffi.C.alice_wargoal_set_ticking_war_score(id, value)
end
---@param id wargoal_id
---@return wargoals_attached_id
function WARGOAL.get_wargoals_attached_as_wargoal(id)
	return ffi.C.alice_wargoal_get_wargoals_attached_as_wargoal(id)
end
---@param id wargoal_id
---@return wargoals_attached_id
function WARGOAL.get_wargoals_attached(id)
	return ffi.C.alice_wargoal_get_wargoals_attached(id)
end
---@param id wargoal_id
---@return peace_offer_item_id
function WARGOAL.get_peace_offer_item_as_wargoal(id)
	return ffi.C.alice_wargoal_get_peace_offer_item_as_wargoal(id)
end
---@param id wargoal_id
---@return peace_offer_item_id
function WARGOAL.get_peace_offer_item(id)
	return ffi.C.alice_wargoal_get_peace_offer_item(id)
end
