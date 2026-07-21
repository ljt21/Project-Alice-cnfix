-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_factory_type_is_valid(int32_t api_arg_0_id);
uint32_t alice_factory_type_size();
void alice_factory_type_resize(uint32_t api_arg_0_value);
int32_t alice_factory_type_get_name(int32_t api_arg_0_id);
void alice_factory_type_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_factory_type_get_description(int32_t api_arg_0_id);
void alice_factory_type_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id);
int16_t alice_factory_type_get_construction_time(int32_t api_arg_0_id);
void alice_factory_type_set_construction_time(int32_t api_arg_0_id, int16_t api_arg_1_value);
bool alice_factory_type_get_is_available_from_start(int32_t api_arg_0_id);
void alice_factory_type_set_is_available_from_start(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_factory_type_get_is_coastal(int32_t api_arg_0_id);
void alice_factory_type_set_is_coastal(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_factory_type_get_base_workforce(int32_t api_arg_0_id);
void alice_factory_type_set_base_workforce(int32_t api_arg_0_id, int32_t api_arg_1_value);
int32_t alice_factory_type_get_output(int32_t api_arg_0_id);
void alice_factory_type_set_output(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_factory_type_get_output_amount(int32_t api_arg_0_id);
void alice_factory_type_set_output_amount(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_factory_type_get_can_be_built_in_colonies(int32_t api_arg_0_id);
void alice_factory_type_set_can_be_built_in_colonies(int32_t api_arg_0_id, bool api_arg_1_value);
uint8_t alice_factory_type_get_factory_tier(int32_t api_arg_0_id);
void alice_factory_type_set_factory_tier(int32_t api_arg_0_id, uint8_t api_arg_1_value);
]]
FACTORY_TYPE = {}
---@param id factory_type_id
---@return number
function FACTORY_TYPE.is_valid(id)
	return ffi.C.alice_factory_type_is_valid(id)
end
---@return number
function FACTORY_TYPE.size()
	return ffi.C.alice_factory_type_size()
end
---@param value number
function FACTORY_TYPE.resize(value)
	return ffi.C.alice_factory_type_resize(value)
end
---@param id factory_type_id
---@return text_key
function FACTORY_TYPE.get_name(id)
	return ffi.C.alice_factory_type_get_name(id)
end
---@param id factory_type_id
---@param value text_key
function FACTORY_TYPE.set_name(id, value)
	return ffi.C.alice_factory_type_set_name(id, value)
end
---@param id factory_type_id
---@return text_key
function FACTORY_TYPE.get_description(id)
	return ffi.C.alice_factory_type_get_description(id)
end
---@param id factory_type_id
---@param value text_key
function FACTORY_TYPE.set_description(id, value)
	return ffi.C.alice_factory_type_set_description(id, value)
end
---@param id factory_type_id
---@return number
function FACTORY_TYPE.get_construction_time(id)
	return ffi.C.alice_factory_type_get_construction_time(id)
end
---@param id factory_type_id
---@param value number
function FACTORY_TYPE.set_construction_time(id, value)
	return ffi.C.alice_factory_type_set_construction_time(id, value)
end
---@param id factory_type_id
---@return boolean
function FACTORY_TYPE.get_is_available_from_start(id)
	return ffi.C.alice_factory_type_get_is_available_from_start(id)
end
---@param id factory_type_id
---@param value boolean
function FACTORY_TYPE.set_is_available_from_start(id, value)
	return ffi.C.alice_factory_type_set_is_available_from_start(id, value)
end
---@param id factory_type_id
---@return boolean
function FACTORY_TYPE.get_is_coastal(id)
	return ffi.C.alice_factory_type_get_is_coastal(id)
end
---@param id factory_type_id
---@param value boolean
function FACTORY_TYPE.set_is_coastal(id, value)
	return ffi.C.alice_factory_type_set_is_coastal(id, value)
end
---@param id factory_type_id
---@return number
function FACTORY_TYPE.get_base_workforce(id)
	return ffi.C.alice_factory_type_get_base_workforce(id)
end
---@param id factory_type_id
---@param value number
function FACTORY_TYPE.set_base_workforce(id, value)
	return ffi.C.alice_factory_type_set_base_workforce(id, value)
end
---@param id factory_type_id
---@return commodity_id
function FACTORY_TYPE.get_output(id)
	return ffi.C.alice_factory_type_get_output(id)
end
---@param id factory_type_id
---@param value commodity_id
function FACTORY_TYPE.set_output(id, value)
	return ffi.C.alice_factory_type_set_output(id, value)
end
---@param id factory_type_id
---@return number
function FACTORY_TYPE.get_output_amount(id)
	return ffi.C.alice_factory_type_get_output_amount(id)
end
---@param id factory_type_id
---@param value number
function FACTORY_TYPE.set_output_amount(id, value)
	return ffi.C.alice_factory_type_set_output_amount(id, value)
end
---@param id factory_type_id
---@return boolean
function FACTORY_TYPE.get_can_be_built_in_colonies(id)
	return ffi.C.alice_factory_type_get_can_be_built_in_colonies(id)
end
---@param id factory_type_id
---@param value boolean
function FACTORY_TYPE.set_can_be_built_in_colonies(id, value)
	return ffi.C.alice_factory_type_set_can_be_built_in_colonies(id, value)
end
---@param id factory_type_id
---@return number
function FACTORY_TYPE.get_factory_tier(id)
	return ffi.C.alice_factory_type_get_factory_tier(id)
end
---@param id factory_type_id
---@param value number
function FACTORY_TYPE.set_factory_tier(id, value)
	return ffi.C.alice_factory_type_set_factory_tier(id, value)
end
