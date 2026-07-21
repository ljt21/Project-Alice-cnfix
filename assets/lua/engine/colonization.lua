-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_colonization_is_valid(int32_t api_arg_0_id);
uint32_t alice_colonization_size();
void alice_colonization_resize(uint32_t api_arg_0_value);
uint16_t alice_colonization_get_points_invested(int32_t api_arg_0_id);
void alice_colonization_set_points_invested(int32_t api_arg_0_id, uint16_t api_arg_1_value);
uint8_t alice_colonization_get_level(int32_t api_arg_0_id);
void alice_colonization_set_level(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int32_t alice_colonization_get_state(int32_t api_arg_0_id);
void alice_colonization_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_colonization_try_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_colonization_get_colonizer(int32_t api_arg_0_id);
void alice_colonization_set_colonizer(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_colonization_try_set_colonizer(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
COLONIZATION = {}
---@param id colonization_id
---@return number
function COLONIZATION.is_valid(id)
	return ffi.C.alice_colonization_is_valid(id)
end
---@return number
function COLONIZATION.size()
	return ffi.C.alice_colonization_size()
end
---@param value number
function COLONIZATION.resize(value)
	return ffi.C.alice_colonization_resize(value)
end
---@param id colonization_id
---@return number
function COLONIZATION.get_points_invested(id)
	return ffi.C.alice_colonization_get_points_invested(id)
end
---@param id colonization_id
---@param value number
function COLONIZATION.set_points_invested(id, value)
	return ffi.C.alice_colonization_set_points_invested(id, value)
end
---@param id colonization_id
---@return number
function COLONIZATION.get_level(id)
	return ffi.C.alice_colonization_get_level(id)
end
---@param id colonization_id
---@param value number
function COLONIZATION.set_level(id, value)
	return ffi.C.alice_colonization_set_level(id, value)
end
---@param id colonization_id
---@return state_definition_id
function COLONIZATION.get_state(id)
	return ffi.C.alice_colonization_get_state(id)
end
---@param id colonization_id
---@param linked_id state_definition_id
function COLONIZATION.set_state(id, linked_id)
	return ffi.C.alice_colonization_set_state(id, linked_id)
end
---@param id colonization_id
---@param linked_id state_definition_id
function COLONIZATION.try_set_state(id, linked_id)
	return ffi.C.alice_colonization_try_set_state(id, linked_id)
end
---@param id colonization_id
---@return nation_id
function COLONIZATION.get_colonizer(id)
	return ffi.C.alice_colonization_get_colonizer(id)
end
---@param id colonization_id
---@param linked_id nation_id
function COLONIZATION.set_colonizer(id, linked_id)
	return ffi.C.alice_colonization_set_colonizer(id, linked_id)
end
---@param id colonization_id
---@param linked_id nation_id
function COLONIZATION.try_set_colonizer(id, linked_id)
	return ffi.C.alice_colonization_try_set_colonizer(id, linked_id)
end
