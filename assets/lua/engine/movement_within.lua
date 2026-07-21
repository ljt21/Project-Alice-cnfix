-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_movement_within_is_valid(int32_t api_arg_0_id);
uint32_t alice_movement_within_size();
void alice_movement_within_resize(uint32_t api_arg_0_value);
int32_t alice_movement_within_get_movement(int32_t api_arg_0_id);
void alice_movement_within_set_movement(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_movement_within_try_set_movement(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_movement_within_get_nation(int32_t api_arg_0_id);
void alice_movement_within_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_movement_within_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
MOVEMENT_WITHIN = {}
---@param id movement_within_id
---@return number
function MOVEMENT_WITHIN.is_valid(id)
	return ffi.C.alice_movement_within_is_valid(id)
end
---@return number
function MOVEMENT_WITHIN.size()
	return ffi.C.alice_movement_within_size()
end
---@param value number
function MOVEMENT_WITHIN.resize(value)
	return ffi.C.alice_movement_within_resize(value)
end
---@param id movement_within_id
---@return movement_id
function MOVEMENT_WITHIN.get_movement(id)
	return ffi.C.alice_movement_within_get_movement(id)
end
---@param id movement_within_id
---@param linked_id movement_id
function MOVEMENT_WITHIN.set_movement(id, linked_id)
	return ffi.C.alice_movement_within_set_movement(id, linked_id)
end
---@param id movement_within_id
---@param linked_id movement_id
function MOVEMENT_WITHIN.try_set_movement(id, linked_id)
	return ffi.C.alice_movement_within_try_set_movement(id, linked_id)
end
---@param id movement_within_id
---@return nation_id
function MOVEMENT_WITHIN.get_nation(id)
	return ffi.C.alice_movement_within_get_nation(id)
end
---@param id movement_within_id
---@param linked_id nation_id
function MOVEMENT_WITHIN.set_nation(id, linked_id)
	return ffi.C.alice_movement_within_set_nation(id, linked_id)
end
---@param id movement_within_id
---@param linked_id nation_id
function MOVEMENT_WITHIN.try_set_nation(id, linked_id)
	return ffi.C.alice_movement_within_try_set_nation(id, linked_id)
end
