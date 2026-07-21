-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_state_instance_is_valid(int32_t api_arg_0_id);
uint32_t alice_state_instance_size();
void alice_state_instance_resize(uint32_t api_arg_0_value);
int32_t alice_state_instance_get_definition(int32_t api_arg_0_id);
void alice_state_instance_set_definition(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_state_instance_get_flashpoint_tag(int32_t api_arg_0_id);
void alice_state_instance_set_flashpoint_tag(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_state_instance_get_flashpoint_tension(int32_t api_arg_0_id);
void alice_state_instance_set_flashpoint_tension(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_state_instance_get_capital(int32_t api_arg_0_id);
void alice_state_instance_set_capital(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_state_instance_get_owner_focus(int32_t api_arg_0_id);
void alice_state_instance_set_owner_focus(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_state_instance_get_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_state_instance_set_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_state_instance_get_demographics_size();
void alice_state_instance_resize_demographics(uint32_t api_arg_0_value);
float alice_state_instance_get_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_state_instance_set_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_state_instance_get_demographics_alt_size();
void alice_state_instance_resize_demographics_alt(uint32_t api_arg_0_value);
int32_t alice_state_instance_get_dominant_culture(int32_t api_arg_0_id);
void alice_state_instance_set_dominant_culture(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_state_instance_get_dominant_religion(int32_t api_arg_0_id);
void alice_state_instance_set_dominant_religion(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_state_instance_get_dominant_ideology(int32_t api_arg_0_id);
void alice_state_instance_set_dominant_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_state_instance_get_dominant_issue_option(int32_t api_arg_0_id);
void alice_state_instance_set_dominant_issue_option(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_state_instance_get_naval_base_is_taken(int32_t api_arg_0_id);
void alice_state_instance_set_naval_base_is_taken(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_state_instance_get_production_directive(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_state_instance_set_production_directive(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value);
uint32_t alice_state_instance_get_production_directive_size();
void alice_state_instance_resize_production_directive(uint32_t api_arg_0_value);
int32_t alice_state_instance_get_state_ownership_as_state(int32_t api_arg_0_id);
int32_t alice_state_instance_get_state_ownership(int32_t api_arg_0_id);
int32_t alice_state_instance_get_flashpoint_focus_as_state(int32_t api_arg_0_id);
int32_t alice_state_instance_get_flashpoint_focus(int32_t api_arg_0_id);
int32_t alice_state_instance_get_local_market_as_zone(int32_t api_arg_0_id);
int32_t alice_state_instance_get_local_market(int32_t api_arg_0_id);
]]
STATE_INSTANCE = {}
---@param id state_instance_id
---@return number
function STATE_INSTANCE.is_valid(id)
	return ffi.C.alice_state_instance_is_valid(id)
end
---@return number
function STATE_INSTANCE.size()
	return ffi.C.alice_state_instance_size()
end
---@param value number
function STATE_INSTANCE.resize(value)
	return ffi.C.alice_state_instance_resize(value)
end
---@param id state_instance_id
---@return state_definition_id
function STATE_INSTANCE.get_definition(id)
	return ffi.C.alice_state_instance_get_definition(id)
end
---@param id state_instance_id
---@param value state_definition_id
function STATE_INSTANCE.set_definition(id, value)
	return ffi.C.alice_state_instance_set_definition(id, value)
end
---@param id state_instance_id
---@return national_identity_id
function STATE_INSTANCE.get_flashpoint_tag(id)
	return ffi.C.alice_state_instance_get_flashpoint_tag(id)
end
---@param id state_instance_id
---@param value national_identity_id
function STATE_INSTANCE.set_flashpoint_tag(id, value)
	return ffi.C.alice_state_instance_set_flashpoint_tag(id, value)
end
---@param id state_instance_id
---@return number
function STATE_INSTANCE.get_flashpoint_tension(id)
	return ffi.C.alice_state_instance_get_flashpoint_tension(id)
end
---@param id state_instance_id
---@param value number
function STATE_INSTANCE.set_flashpoint_tension(id, value)
	return ffi.C.alice_state_instance_set_flashpoint_tension(id, value)
end
---@param id state_instance_id
---@return province_id
function STATE_INSTANCE.get_capital(id)
	return ffi.C.alice_state_instance_get_capital(id)
end
---@param id state_instance_id
---@param value province_id
function STATE_INSTANCE.set_capital(id, value)
	return ffi.C.alice_state_instance_set_capital(id, value)
end
---@param id state_instance_id
---@return national_focus_id
function STATE_INSTANCE.get_owner_focus(id)
	return ffi.C.alice_state_instance_get_owner_focus(id)
end
---@param id state_instance_id
---@param value national_focus_id
function STATE_INSTANCE.set_owner_focus(id, value)
	return ffi.C.alice_state_instance_set_owner_focus(id, value)
end
---@param id state_instance_id
---@param index demographics_key
---@return number
function STATE_INSTANCE.get_demographics(id, index)
	return ffi.C.alice_state_instance_get_demographics(id, index)
end
---@param id state_instance_id
---@param index demographics_key
---@param value number
function STATE_INSTANCE.set_demographics(id, index, value)
	return ffi.C.alice_state_instance_set_demographics(id, index, value)
end
---@return number
function STATE_INSTANCE.get_demographics_size()
	return ffi.C.alice_state_instance_get_demographics_size()
end
---@param value number
function STATE_INSTANCE.resize_demographics(value)
	return ffi.C.alice_state_instance_resize_demographics(value)
end
---@param id state_instance_id
---@param index demographics_key
---@return number
function STATE_INSTANCE.get_demographics_alt(id, index)
	return ffi.C.alice_state_instance_get_demographics_alt(id, index)
end
---@param id state_instance_id
---@param index demographics_key
---@param value number
function STATE_INSTANCE.set_demographics_alt(id, index, value)
	return ffi.C.alice_state_instance_set_demographics_alt(id, index, value)
end
---@return number
function STATE_INSTANCE.get_demographics_alt_size()
	return ffi.C.alice_state_instance_get_demographics_alt_size()
end
---@param value number
function STATE_INSTANCE.resize_demographics_alt(value)
	return ffi.C.alice_state_instance_resize_demographics_alt(value)
end
---@param id state_instance_id
---@return culture_id
function STATE_INSTANCE.get_dominant_culture(id)
	return ffi.C.alice_state_instance_get_dominant_culture(id)
end
---@param id state_instance_id
---@param value culture_id
function STATE_INSTANCE.set_dominant_culture(id, value)
	return ffi.C.alice_state_instance_set_dominant_culture(id, value)
end
---@param id state_instance_id
---@return religion_id
function STATE_INSTANCE.get_dominant_religion(id)
	return ffi.C.alice_state_instance_get_dominant_religion(id)
end
---@param id state_instance_id
---@param value religion_id
function STATE_INSTANCE.set_dominant_religion(id, value)
	return ffi.C.alice_state_instance_set_dominant_religion(id, value)
end
---@param id state_instance_id
---@return ideology_id
function STATE_INSTANCE.get_dominant_ideology(id)
	return ffi.C.alice_state_instance_get_dominant_ideology(id)
end
---@param id state_instance_id
---@param value ideology_id
function STATE_INSTANCE.set_dominant_ideology(id, value)
	return ffi.C.alice_state_instance_set_dominant_ideology(id, value)
end
---@param id state_instance_id
---@return issue_option_id
function STATE_INSTANCE.get_dominant_issue_option(id)
	return ffi.C.alice_state_instance_get_dominant_issue_option(id)
end
---@param id state_instance_id
---@param value issue_option_id
function STATE_INSTANCE.set_dominant_issue_option(id, value)
	return ffi.C.alice_state_instance_set_dominant_issue_option(id, value)
end
---@param id state_instance_id
---@return boolean
function STATE_INSTANCE.get_naval_base_is_taken(id)
	return ffi.C.alice_state_instance_get_naval_base_is_taken(id)
end
---@param id state_instance_id
---@param value boolean
function STATE_INSTANCE.set_naval_base_is_taken(id, value)
	return ffi.C.alice_state_instance_set_naval_base_is_taken(id, value)
end
---@param id state_instance_id
---@param index production_directive_id
---@return boolean
function STATE_INSTANCE.get_production_directive(id, index)
	return ffi.C.alice_state_instance_get_production_directive(id, index)
end
---@param id state_instance_id
---@param index production_directive_id
---@param value boolean
function STATE_INSTANCE.set_production_directive(id, index, value)
	return ffi.C.alice_state_instance_set_production_directive(id, index, value)
end
---@return number
function STATE_INSTANCE.get_production_directive_size()
	return ffi.C.alice_state_instance_get_production_directive_size()
end
---@param value number
function STATE_INSTANCE.resize_production_directive(value)
	return ffi.C.alice_state_instance_resize_production_directive(value)
end
---@param id state_instance_id
---@return state_ownership_id
function STATE_INSTANCE.get_state_ownership_as_state(id)
	return ffi.C.alice_state_instance_get_state_ownership_as_state(id)
end
---@param id state_instance_id
---@return state_ownership_id
function STATE_INSTANCE.get_state_ownership(id)
	return ffi.C.alice_state_instance_get_state_ownership(id)
end
---@param id state_instance_id
---@return flashpoint_focus_id
function STATE_INSTANCE.get_flashpoint_focus_as_state(id)
	return ffi.C.alice_state_instance_get_flashpoint_focus_as_state(id)
end
---@param id state_instance_id
---@return flashpoint_focus_id
function STATE_INSTANCE.get_flashpoint_focus(id)
	return ffi.C.alice_state_instance_get_flashpoint_focus(id)
end
---@param id state_instance_id
---@return local_market_id
function STATE_INSTANCE.get_local_market_as_zone(id)
	return ffi.C.alice_state_instance_get_local_market_as_zone(id)
end
---@param id state_instance_id
---@return local_market_id
function STATE_INSTANCE.get_local_market(id)
	return ffi.C.alice_state_instance_get_local_market(id)
end
