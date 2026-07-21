-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_attacking_admiral_is_valid(int32_t api_arg_0_id);
uint32_t alice_attacking_admiral_size();
void alice_attacking_admiral_resize(uint32_t api_arg_0_value);
int32_t alice_attacking_admiral_get_battle(int32_t api_arg_0_id);
void alice_attacking_admiral_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_attacking_admiral_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_attacking_admiral_get_admiral(int32_t api_arg_0_id);
void alice_attacking_admiral_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_attacking_admiral_try_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
ATTACKING_ADMIRAL = {}
---@param id attacking_admiral_id
---@return number
function ATTACKING_ADMIRAL.is_valid(id)
	return ffi.C.alice_attacking_admiral_is_valid(id)
end
---@return number
function ATTACKING_ADMIRAL.size()
	return ffi.C.alice_attacking_admiral_size()
end
---@param value number
function ATTACKING_ADMIRAL.resize(value)
	return ffi.C.alice_attacking_admiral_resize(value)
end
---@param id attacking_admiral_id
---@return naval_battle_id
function ATTACKING_ADMIRAL.get_battle(id)
	return ffi.C.alice_attacking_admiral_get_battle(id)
end
---@param id attacking_admiral_id
---@param linked_id naval_battle_id
function ATTACKING_ADMIRAL.set_battle(id, linked_id)
	return ffi.C.alice_attacking_admiral_set_battle(id, linked_id)
end
---@param id attacking_admiral_id
---@param linked_id naval_battle_id
function ATTACKING_ADMIRAL.try_set_battle(id, linked_id)
	return ffi.C.alice_attacking_admiral_try_set_battle(id, linked_id)
end
---@param id attacking_admiral_id
---@return leader_id
function ATTACKING_ADMIRAL.get_admiral(id)
	return ffi.C.alice_attacking_admiral_get_admiral(id)
end
---@param id attacking_admiral_id
---@param linked_id leader_id
function ATTACKING_ADMIRAL.set_admiral(id, linked_id)
	return ffi.C.alice_attacking_admiral_set_admiral(id, linked_id)
end
---@param id attacking_admiral_id
---@param linked_id leader_id
function ATTACKING_ADMIRAL.try_set_admiral(id, linked_id)
	return ffi.C.alice_attacking_admiral_try_set_admiral(id, linked_id)
end
