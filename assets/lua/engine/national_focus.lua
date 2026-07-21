-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_national_focus_is_valid(int32_t api_arg_0_id);
uint32_t alice_national_focus_size();
void alice_national_focus_resize(uint32_t api_arg_0_value);
int32_t alice_national_focus_get_name(int32_t api_arg_0_id);
void alice_national_focus_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint8_t alice_national_focus_get_icon(int32_t api_arg_0_id);
void alice_national_focus_set_icon(int32_t api_arg_0_id, uint8_t api_arg_1_value);
uint8_t alice_national_focus_get_type(int32_t api_arg_0_id);
void alice_national_focus_set_type(int32_t api_arg_0_id, uint8_t api_arg_1_value);
float alice_national_focus_get_loyalty_value(int32_t api_arg_0_id);
void alice_national_focus_set_loyalty_value(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_national_focus_get_ideology(int32_t api_arg_0_id);
void alice_national_focus_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_national_focus_get_limit(int32_t api_arg_0_id);
void alice_national_focus_set_limit(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_national_focus_get_promotion_type(int32_t api_arg_0_id);
void alice_national_focus_set_promotion_type(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_national_focus_get_promotion_amount(int32_t api_arg_0_id);
void alice_national_focus_set_promotion_amount(int32_t api_arg_0_id, float api_arg_1_value);
float alice_national_focus_get_railroads(int32_t api_arg_0_id);
void alice_national_focus_set_railroads(int32_t api_arg_0_id, float api_arg_1_value);
float alice_national_focus_get_production_focus(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_national_focus_set_production_focus(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_national_focus_get_production_focus_size();
void alice_national_focus_resize_production_focus(uint32_t api_arg_0_value);
int32_t alice_national_focus_get_modifier(int32_t api_arg_0_id);
void alice_national_focus_set_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
NATIONAL_FOCUS = {}
---@param id national_focus_id
---@return number
function NATIONAL_FOCUS.is_valid(id)
	return ffi.C.alice_national_focus_is_valid(id)
end
---@return number
function NATIONAL_FOCUS.size()
	return ffi.C.alice_national_focus_size()
end
---@param value number
function NATIONAL_FOCUS.resize(value)
	return ffi.C.alice_national_focus_resize(value)
end
---@param id national_focus_id
---@return text_key
function NATIONAL_FOCUS.get_name(id)
	return ffi.C.alice_national_focus_get_name(id)
end
---@param id national_focus_id
---@param value text_key
function NATIONAL_FOCUS.set_name(id, value)
	return ffi.C.alice_national_focus_set_name(id, value)
end
---@param id national_focus_id
---@return number
function NATIONAL_FOCUS.get_icon(id)
	return ffi.C.alice_national_focus_get_icon(id)
end
---@param id national_focus_id
---@param value number
function NATIONAL_FOCUS.set_icon(id, value)
	return ffi.C.alice_national_focus_set_icon(id, value)
end
---@param id national_focus_id
---@return number
function NATIONAL_FOCUS.get_type(id)
	return ffi.C.alice_national_focus_get_type(id)
end
---@param id national_focus_id
---@param value number
function NATIONAL_FOCUS.set_type(id, value)
	return ffi.C.alice_national_focus_set_type(id, value)
end
---@param id national_focus_id
---@return number
function NATIONAL_FOCUS.get_loyalty_value(id)
	return ffi.C.alice_national_focus_get_loyalty_value(id)
end
---@param id national_focus_id
---@param value number
function NATIONAL_FOCUS.set_loyalty_value(id, value)
	return ffi.C.alice_national_focus_set_loyalty_value(id, value)
end
---@param id national_focus_id
---@return ideology_id
function NATIONAL_FOCUS.get_ideology(id)
	return ffi.C.alice_national_focus_get_ideology(id)
end
---@param id national_focus_id
---@param value ideology_id
function NATIONAL_FOCUS.set_ideology(id, value)
	return ffi.C.alice_national_focus_set_ideology(id, value)
end
---@param id national_focus_id
---@return trigger_key
function NATIONAL_FOCUS.get_limit(id)
	return ffi.C.alice_national_focus_get_limit(id)
end
---@param id national_focus_id
---@param value trigger_key
function NATIONAL_FOCUS.set_limit(id, value)
	return ffi.C.alice_national_focus_set_limit(id, value)
end
---@param id national_focus_id
---@return pop_type_id
function NATIONAL_FOCUS.get_promotion_type(id)
	return ffi.C.alice_national_focus_get_promotion_type(id)
end
---@param id national_focus_id
---@param value pop_type_id
function NATIONAL_FOCUS.set_promotion_type(id, value)
	return ffi.C.alice_national_focus_set_promotion_type(id, value)
end
---@param id national_focus_id
---@return number
function NATIONAL_FOCUS.get_promotion_amount(id)
	return ffi.C.alice_national_focus_get_promotion_amount(id)
end
---@param id national_focus_id
---@param value number
function NATIONAL_FOCUS.set_promotion_amount(id, value)
	return ffi.C.alice_national_focus_set_promotion_amount(id, value)
end
---@param id national_focus_id
---@return number
function NATIONAL_FOCUS.get_railroads(id)
	return ffi.C.alice_national_focus_get_railroads(id)
end
---@param id national_focus_id
---@param value number
function NATIONAL_FOCUS.set_railroads(id, value)
	return ffi.C.alice_national_focus_set_railroads(id, value)
end
---@param id national_focus_id
---@param index commodity_id
---@return number
function NATIONAL_FOCUS.get_production_focus(id, index)
	return ffi.C.alice_national_focus_get_production_focus(id, index)
end
---@param id national_focus_id
---@param index commodity_id
---@param value number
function NATIONAL_FOCUS.set_production_focus(id, index, value)
	return ffi.C.alice_national_focus_set_production_focus(id, index, value)
end
---@return number
function NATIONAL_FOCUS.get_production_focus_size()
	return ffi.C.alice_national_focus_get_production_focus_size()
end
---@param value number
function NATIONAL_FOCUS.resize_production_focus(value)
	return ffi.C.alice_national_focus_resize_production_focus(value)
end
---@param id national_focus_id
---@return modifier_id
function NATIONAL_FOCUS.get_modifier(id)
	return ffi.C.alice_national_focus_get_modifier(id)
end
---@param id national_focus_id
---@param value modifier_id
function NATIONAL_FOCUS.set_modifier(id, value)
	return ffi.C.alice_national_focus_set_modifier(id, value)
end
