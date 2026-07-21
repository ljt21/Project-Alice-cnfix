-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_defending_general_is_valid(int32_t api_arg_0_id);
uint32_t alice_defending_general_size();
void alice_defending_general_resize(uint32_t api_arg_0_value);
int32_t alice_defending_general_get_battle(int32_t api_arg_0_id);
void alice_defending_general_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_defending_general_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_defending_general_get_general(int32_t api_arg_0_id);
void alice_defending_general_set_general(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_defending_general_try_set_general(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
DEFENDING_GENERAL = {}
---@param id defending_general_id
---@return number
function DEFENDING_GENERAL.is_valid(id)
	return ffi.C.alice_defending_general_is_valid(id)
end
---@return number
function DEFENDING_GENERAL.size()
	return ffi.C.alice_defending_general_size()
end
---@param value number
function DEFENDING_GENERAL.resize(value)
	return ffi.C.alice_defending_general_resize(value)
end
---@param id defending_general_id
---@return land_battle_id
function DEFENDING_GENERAL.get_battle(id)
	return ffi.C.alice_defending_general_get_battle(id)
end
---@param id defending_general_id
---@param linked_id land_battle_id
function DEFENDING_GENERAL.set_battle(id, linked_id)
	return ffi.C.alice_defending_general_set_battle(id, linked_id)
end
---@param id defending_general_id
---@param linked_id land_battle_id
function DEFENDING_GENERAL.try_set_battle(id, linked_id)
	return ffi.C.alice_defending_general_try_set_battle(id, linked_id)
end
---@param id defending_general_id
---@return leader_id
function DEFENDING_GENERAL.get_general(id)
	return ffi.C.alice_defending_general_get_general(id)
end
---@param id defending_general_id
---@param linked_id leader_id
function DEFENDING_GENERAL.set_general(id, linked_id)
	return ffi.C.alice_defending_general_set_general(id, linked_id)
end
---@param id defending_general_id
---@param linked_id leader_id
function DEFENDING_GENERAL.try_set_general(id, linked_id)
	return ffi.C.alice_defending_general_try_set_general(id, linked_id)
end
