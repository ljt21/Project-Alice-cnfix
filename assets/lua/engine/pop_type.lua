-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_pop_type_is_valid(int32_t api_arg_0_id);
uint32_t alice_pop_type_size();
void alice_pop_type_resize(uint32_t api_arg_0_value);
int32_t alice_pop_type_get_name(int32_t api_arg_0_id);
void alice_pop_type_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint8_t alice_pop_type_get_sprite(int32_t api_arg_0_id);
void alice_pop_type_set_sprite(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint32_t alice_pop_type_get_color(int32_t api_arg_0_id);
void alice_pop_type_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value);
uint8_t alice_pop_type_get_strata(int32_t api_arg_0_id);
void alice_pop_type_set_strata(int32_t api_arg_0_id, uint8_t api_arg_1_value);
bool alice_pop_type_get_state_capital_only(int32_t api_arg_0_id);
void alice_pop_type_set_state_capital_only(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_pop_type_get_voting_forbidden(int32_t api_arg_0_id);
void alice_pop_type_set_voting_forbidden(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_pop_type_get_is_paid_rgo_worker(int32_t api_arg_0_id);
void alice_pop_type_set_is_paid_rgo_worker(int32_t api_arg_0_id, bool api_arg_1_value);
uint8_t alice_pop_type_get_everyday_needs_income_type(int32_t api_arg_0_id);
void alice_pop_type_set_everyday_needs_income_type(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_pop_type_get_luxury_needs_income_type(int32_t api_arg_0_id);
void alice_pop_type_set_luxury_needs_income_type(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_pop_type_get_life_needs_income_type(int32_t api_arg_0_id);
void alice_pop_type_set_life_needs_income_type(int32_t api_arg_0_id, uint8_t api_arg_1_value);
float alice_pop_type_get_research_optimum(int32_t api_arg_0_id);
void alice_pop_type_set_research_optimum(int32_t api_arg_0_id, float api_arg_1_value);
float alice_pop_type_get_research_points(int32_t api_arg_0_id);
void alice_pop_type_set_research_points(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_pop_type_get_has_unemployment(int32_t api_arg_0_id);
void alice_pop_type_set_has_unemployment(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_pop_type_get_migration_target(int32_t api_arg_0_id);
void alice_pop_type_set_migration_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint64_t alice_pop_type_get_migration_target_fn(int32_t api_arg_0_id);
void alice_pop_type_set_migration_target_fn(int32_t api_arg_0_id, uint64_t api_arg_1_value);
int32_t alice_pop_type_get_country_migration_target(int32_t api_arg_0_id);
void alice_pop_type_set_country_migration_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint64_t alice_pop_type_get_country_migration_target_fn(int32_t api_arg_0_id);
void alice_pop_type_set_country_migration_target_fn(int32_t api_arg_0_id, uint64_t api_arg_1_value);
int32_t alice_pop_type_get_issues(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_type_set_issues(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_pop_type_get_issues_size();
void alice_pop_type_resize_issues(uint32_t api_arg_0_value);
uint64_t alice_pop_type_get_issues_fns(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_type_set_issues_fns(int32_t api_arg_0_id, int32_t api_arg_1_id, uint64_t api_arg_2_value);
uint32_t alice_pop_type_get_issues_fns_size();
void alice_pop_type_resize_issues_fns(uint32_t api_arg_0_value);
int32_t alice_pop_type_get_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_type_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_pop_type_get_ideology_size();
void alice_pop_type_resize_ideology(uint32_t api_arg_0_value);
uint64_t alice_pop_type_get_ideology_fns(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_type_set_ideology_fns(int32_t api_arg_0_id, int32_t api_arg_1_id, uint64_t api_arg_2_value);
uint32_t alice_pop_type_get_ideology_fns_size();
void alice_pop_type_resize_ideology_fns(uint32_t api_arg_0_value);
int32_t alice_pop_type_get_promotion(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_type_set_promotion(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_pop_type_get_promotion_size();
void alice_pop_type_resize_promotion(uint32_t api_arg_0_value);
uint64_t alice_pop_type_get_promotion_fns(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_type_set_promotion_fns(int32_t api_arg_0_id, int32_t api_arg_1_id, uint64_t api_arg_2_value);
uint32_t alice_pop_type_get_promotion_fns_size();
void alice_pop_type_resize_promotion_fns(uint32_t api_arg_0_value);
float alice_pop_type_get_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_type_set_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_pop_type_get_life_needs_size();
void alice_pop_type_resize_life_needs(uint32_t api_arg_0_value);
float alice_pop_type_get_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_type_set_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_pop_type_get_everyday_needs_size();
void alice_pop_type_resize_everyday_needs(uint32_t api_arg_0_value);
float alice_pop_type_get_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pop_type_set_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_pop_type_get_luxury_needs_size();
void alice_pop_type_resize_luxury_needs(uint32_t api_arg_0_value);
]]
POP_TYPE = {}
---@param id pop_type_id
---@return number
function POP_TYPE.is_valid(id)
	return ffi.C.alice_pop_type_is_valid(id)
end
---@return number
function POP_TYPE.size()
	return ffi.C.alice_pop_type_size()
end
---@param value number
function POP_TYPE.resize(value)
	return ffi.C.alice_pop_type_resize(value)
end
---@param id pop_type_id
---@return text_key
function POP_TYPE.get_name(id)
	return ffi.C.alice_pop_type_get_name(id)
end
---@param id pop_type_id
---@param value text_key
function POP_TYPE.set_name(id, value)
	return ffi.C.alice_pop_type_set_name(id, value)
end
---@param id pop_type_id
---@return number
function POP_TYPE.get_sprite(id)
	return ffi.C.alice_pop_type_get_sprite(id)
end
---@param id pop_type_id
---@param value number
function POP_TYPE.set_sprite(id, value)
	return ffi.C.alice_pop_type_set_sprite(id, value)
end
---@param id pop_type_id
---@return number
function POP_TYPE.get_color(id)
	return ffi.C.alice_pop_type_get_color(id)
end
---@param id pop_type_id
---@param value number
function POP_TYPE.set_color(id, value)
	return ffi.C.alice_pop_type_set_color(id, value)
end
---@param id pop_type_id
---@return number
function POP_TYPE.get_strata(id)
	return ffi.C.alice_pop_type_get_strata(id)
end
---@param id pop_type_id
---@param value number
function POP_TYPE.set_strata(id, value)
	return ffi.C.alice_pop_type_set_strata(id, value)
end
---@param id pop_type_id
---@return boolean
function POP_TYPE.get_state_capital_only(id)
	return ffi.C.alice_pop_type_get_state_capital_only(id)
end
---@param id pop_type_id
---@param value boolean
function POP_TYPE.set_state_capital_only(id, value)
	return ffi.C.alice_pop_type_set_state_capital_only(id, value)
end
---@param id pop_type_id
---@return boolean
function POP_TYPE.get_voting_forbidden(id)
	return ffi.C.alice_pop_type_get_voting_forbidden(id)
end
---@param id pop_type_id
---@param value boolean
function POP_TYPE.set_voting_forbidden(id, value)
	return ffi.C.alice_pop_type_set_voting_forbidden(id, value)
end
---@param id pop_type_id
---@return boolean
function POP_TYPE.get_is_paid_rgo_worker(id)
	return ffi.C.alice_pop_type_get_is_paid_rgo_worker(id)
end
---@param id pop_type_id
---@param value boolean
function POP_TYPE.set_is_paid_rgo_worker(id, value)
	return ffi.C.alice_pop_type_set_is_paid_rgo_worker(id, value)
end
---@param id pop_type_id
---@return number
function POP_TYPE.get_everyday_needs_income_type(id)
	return ffi.C.alice_pop_type_get_everyday_needs_income_type(id)
end
---@param id pop_type_id
---@param value number
function POP_TYPE.set_everyday_needs_income_type(id, value)
	return ffi.C.alice_pop_type_set_everyday_needs_income_type(id, value)
end
---@param id pop_type_id
---@return number
function POP_TYPE.get_luxury_needs_income_type(id)
	return ffi.C.alice_pop_type_get_luxury_needs_income_type(id)
end
---@param id pop_type_id
---@param value number
function POP_TYPE.set_luxury_needs_income_type(id, value)
	return ffi.C.alice_pop_type_set_luxury_needs_income_type(id, value)
end
---@param id pop_type_id
---@return number
function POP_TYPE.get_life_needs_income_type(id)
	return ffi.C.alice_pop_type_get_life_needs_income_type(id)
end
---@param id pop_type_id
---@param value number
function POP_TYPE.set_life_needs_income_type(id, value)
	return ffi.C.alice_pop_type_set_life_needs_income_type(id, value)
end
---@param id pop_type_id
---@return number
function POP_TYPE.get_research_optimum(id)
	return ffi.C.alice_pop_type_get_research_optimum(id)
end
---@param id pop_type_id
---@param value number
function POP_TYPE.set_research_optimum(id, value)
	return ffi.C.alice_pop_type_set_research_optimum(id, value)
end
---@param id pop_type_id
---@return number
function POP_TYPE.get_research_points(id)
	return ffi.C.alice_pop_type_get_research_points(id)
end
---@param id pop_type_id
---@param value number
function POP_TYPE.set_research_points(id, value)
	return ffi.C.alice_pop_type_set_research_points(id, value)
end
---@param id pop_type_id
---@return boolean
function POP_TYPE.get_has_unemployment(id)
	return ffi.C.alice_pop_type_get_has_unemployment(id)
end
---@param id pop_type_id
---@param value boolean
function POP_TYPE.set_has_unemployment(id, value)
	return ffi.C.alice_pop_type_set_has_unemployment(id, value)
end
---@param id pop_type_id
---@return value_modifier_key
function POP_TYPE.get_migration_target(id)
	return ffi.C.alice_pop_type_get_migration_target(id)
end
---@param id pop_type_id
---@param value value_modifier_key
function POP_TYPE.set_migration_target(id, value)
	return ffi.C.alice_pop_type_set_migration_target(id, value)
end
---@param id pop_type_id
---@return number
function POP_TYPE.get_migration_target_fn(id)
	return ffi.C.alice_pop_type_get_migration_target_fn(id)
end
---@param id pop_type_id
---@param value number
function POP_TYPE.set_migration_target_fn(id, value)
	return ffi.C.alice_pop_type_set_migration_target_fn(id, value)
end
---@param id pop_type_id
---@return value_modifier_key
function POP_TYPE.get_country_migration_target(id)
	return ffi.C.alice_pop_type_get_country_migration_target(id)
end
---@param id pop_type_id
---@param value value_modifier_key
function POP_TYPE.set_country_migration_target(id, value)
	return ffi.C.alice_pop_type_set_country_migration_target(id, value)
end
---@param id pop_type_id
---@return number
function POP_TYPE.get_country_migration_target_fn(id)
	return ffi.C.alice_pop_type_get_country_migration_target_fn(id)
end
---@param id pop_type_id
---@param value number
function POP_TYPE.set_country_migration_target_fn(id, value)
	return ffi.C.alice_pop_type_set_country_migration_target_fn(id, value)
end
---@param id pop_type_id
---@param index issue_option_id
---@return value_modifier_key
function POP_TYPE.get_issues(id, index)
	return ffi.C.alice_pop_type_get_issues(id, index)
end
---@param id pop_type_id
---@param index issue_option_id
---@param value value_modifier_key
function POP_TYPE.set_issues(id, index, value)
	return ffi.C.alice_pop_type_set_issues(id, index, value)
end
---@return number
function POP_TYPE.get_issues_size()
	return ffi.C.alice_pop_type_get_issues_size()
end
---@param value number
function POP_TYPE.resize_issues(value)
	return ffi.C.alice_pop_type_resize_issues(value)
end
---@param id pop_type_id
---@param index issue_option_id
---@return number
function POP_TYPE.get_issues_fns(id, index)
	return ffi.C.alice_pop_type_get_issues_fns(id, index)
end
---@param id pop_type_id
---@param index issue_option_id
---@param value number
function POP_TYPE.set_issues_fns(id, index, value)
	return ffi.C.alice_pop_type_set_issues_fns(id, index, value)
end
---@return number
function POP_TYPE.get_issues_fns_size()
	return ffi.C.alice_pop_type_get_issues_fns_size()
end
---@param value number
function POP_TYPE.resize_issues_fns(value)
	return ffi.C.alice_pop_type_resize_issues_fns(value)
end
---@param id pop_type_id
---@param index ideology_id
---@return value_modifier_key
function POP_TYPE.get_ideology(id, index)
	return ffi.C.alice_pop_type_get_ideology(id, index)
end
---@param id pop_type_id
---@param index ideology_id
---@param value value_modifier_key
function POP_TYPE.set_ideology(id, index, value)
	return ffi.C.alice_pop_type_set_ideology(id, index, value)
end
---@return number
function POP_TYPE.get_ideology_size()
	return ffi.C.alice_pop_type_get_ideology_size()
end
---@param value number
function POP_TYPE.resize_ideology(value)
	return ffi.C.alice_pop_type_resize_ideology(value)
end
---@param id pop_type_id
---@param index ideology_id
---@return number
function POP_TYPE.get_ideology_fns(id, index)
	return ffi.C.alice_pop_type_get_ideology_fns(id, index)
end
---@param id pop_type_id
---@param index ideology_id
---@param value number
function POP_TYPE.set_ideology_fns(id, index, value)
	return ffi.C.alice_pop_type_set_ideology_fns(id, index, value)
end
---@return number
function POP_TYPE.get_ideology_fns_size()
	return ffi.C.alice_pop_type_get_ideology_fns_size()
end
---@param value number
function POP_TYPE.resize_ideology_fns(value)
	return ffi.C.alice_pop_type_resize_ideology_fns(value)
end
---@param id pop_type_id
---@param index pop_type_id
---@return value_modifier_key
function POP_TYPE.get_promotion(id, index)
	return ffi.C.alice_pop_type_get_promotion(id, index)
end
---@param id pop_type_id
---@param index pop_type_id
---@param value value_modifier_key
function POP_TYPE.set_promotion(id, index, value)
	return ffi.C.alice_pop_type_set_promotion(id, index, value)
end
---@return number
function POP_TYPE.get_promotion_size()
	return ffi.C.alice_pop_type_get_promotion_size()
end
---@param value number
function POP_TYPE.resize_promotion(value)
	return ffi.C.alice_pop_type_resize_promotion(value)
end
---@param id pop_type_id
---@param index pop_type_id
---@return number
function POP_TYPE.get_promotion_fns(id, index)
	return ffi.C.alice_pop_type_get_promotion_fns(id, index)
end
---@param id pop_type_id
---@param index pop_type_id
---@param value number
function POP_TYPE.set_promotion_fns(id, index, value)
	return ffi.C.alice_pop_type_set_promotion_fns(id, index, value)
end
---@return number
function POP_TYPE.get_promotion_fns_size()
	return ffi.C.alice_pop_type_get_promotion_fns_size()
end
---@param value number
function POP_TYPE.resize_promotion_fns(value)
	return ffi.C.alice_pop_type_resize_promotion_fns(value)
end
---@param id pop_type_id
---@param index commodity_id
---@return number
function POP_TYPE.get_life_needs(id, index)
	return ffi.C.alice_pop_type_get_life_needs(id, index)
end
---@param id pop_type_id
---@param index commodity_id
---@param value number
function POP_TYPE.set_life_needs(id, index, value)
	return ffi.C.alice_pop_type_set_life_needs(id, index, value)
end
---@return number
function POP_TYPE.get_life_needs_size()
	return ffi.C.alice_pop_type_get_life_needs_size()
end
---@param value number
function POP_TYPE.resize_life_needs(value)
	return ffi.C.alice_pop_type_resize_life_needs(value)
end
---@param id pop_type_id
---@param index commodity_id
---@return number
function POP_TYPE.get_everyday_needs(id, index)
	return ffi.C.alice_pop_type_get_everyday_needs(id, index)
end
---@param id pop_type_id
---@param index commodity_id
---@param value number
function POP_TYPE.set_everyday_needs(id, index, value)
	return ffi.C.alice_pop_type_set_everyday_needs(id, index, value)
end
---@return number
function POP_TYPE.get_everyday_needs_size()
	return ffi.C.alice_pop_type_get_everyday_needs_size()
end
---@param value number
function POP_TYPE.resize_everyday_needs(value)
	return ffi.C.alice_pop_type_resize_everyday_needs(value)
end
---@param id pop_type_id
---@param index commodity_id
---@return number
function POP_TYPE.get_luxury_needs(id, index)
	return ffi.C.alice_pop_type_get_luxury_needs(id, index)
end
---@param id pop_type_id
---@param index commodity_id
---@param value number
function POP_TYPE.set_luxury_needs(id, index, value)
	return ffi.C.alice_pop_type_set_luxury_needs(id, index, value)
end
---@return number
function POP_TYPE.get_luxury_needs_size()
	return ffi.C.alice_pop_type_get_luxury_needs_size()
end
---@param value number
function POP_TYPE.resize_luxury_needs(value)
	return ffi.C.alice_pop_type_resize_luxury_needs(value)
end
