-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_defending_admiral_is_valid(int32_t api_arg_0_id);
uint32_t alice_defending_admiral_size();
void alice_defending_admiral_resize(uint32_t api_arg_0_value);
int32_t alice_defending_admiral_get_battle(int32_t api_arg_0_id);
void alice_defending_admiral_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_defending_admiral_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_defending_admiral_get_admiral(int32_t api_arg_0_id);
void alice_defending_admiral_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_defending_admiral_try_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
DEFENDING_ADMIRAL = {}
---@param id defending_admiral_id
---@return number
function DEFENDING_ADMIRAL.is_valid(id)
	return ffi.C.alice_defending_admiral_is_valid(id)
end
---@return number
function DEFENDING_ADMIRAL.size()
	return ffi.C.alice_defending_admiral_size()
end
---@param value number
function DEFENDING_ADMIRAL.resize(value)
	return ffi.C.alice_defending_admiral_resize(value)
end
---@param id defending_admiral_id
---@return naval_battle_id
function DEFENDING_ADMIRAL.get_battle(id)
	return ffi.C.alice_defending_admiral_get_battle(id)
end
---@param id defending_admiral_id
---@param linked_id naval_battle_id
function DEFENDING_ADMIRAL.set_battle(id, linked_id)
	return ffi.C.alice_defending_admiral_set_battle(id, linked_id)
end
---@param id defending_admiral_id
---@param linked_id naval_battle_id
function DEFENDING_ADMIRAL.try_set_battle(id, linked_id)
	return ffi.C.alice_defending_admiral_try_set_battle(id, linked_id)
end
---@param id defending_admiral_id
---@return leader_id
function DEFENDING_ADMIRAL.get_admiral(id)
	return ffi.C.alice_defending_admiral_get_admiral(id)
end
---@param id defending_admiral_id
---@param linked_id leader_id
function DEFENDING_ADMIRAL.set_admiral(id, linked_id)
	return ffi.C.alice_defending_admiral_set_admiral(id, linked_id)
end
---@param id defending_admiral_id
---@param linked_id leader_id
function DEFENDING_ADMIRAL.try_set_admiral(id, linked_id)
	return ffi.C.alice_defending_admiral_try_set_admiral(id, linked_id)
end
