-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_leader_is_valid(int32_t api_arg_0_id);
uint32_t alice_leader_size();
void alice_leader_resize(uint32_t api_arg_0_value);
int32_t alice_leader_get_name(int32_t api_arg_0_id);
void alice_leader_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_leader_get_personality(int32_t api_arg_0_id);
void alice_leader_set_personality(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_leader_get_background(int32_t api_arg_0_id);
void alice_leader_set_background(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_leader_get_prestige(int32_t api_arg_0_id);
void alice_leader_set_prestige(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_leader_get_is_admiral(int32_t api_arg_0_id);
void alice_leader_set_is_admiral(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_leader_get_attacking_admiral_as_admiral(int32_t api_arg_0_id);
int32_t alice_leader_get_attacking_admiral(int32_t api_arg_0_id);
int32_t alice_leader_get_defending_admiral_as_admiral(int32_t api_arg_0_id);
int32_t alice_leader_get_defending_admiral(int32_t api_arg_0_id);
int32_t alice_leader_get_attacking_general_as_general(int32_t api_arg_0_id);
int32_t alice_leader_get_attacking_general(int32_t api_arg_0_id);
int32_t alice_leader_get_defending_general_as_general(int32_t api_arg_0_id);
int32_t alice_leader_get_defending_general(int32_t api_arg_0_id);
int32_t alice_leader_get_army_leadership_as_general(int32_t api_arg_0_id);
int32_t alice_leader_get_army_leadership(int32_t api_arg_0_id);
int32_t alice_leader_get_navy_leadership_as_admiral(int32_t api_arg_0_id);
int32_t alice_leader_get_navy_leadership(int32_t api_arg_0_id);
int32_t alice_leader_get_leader_loyalty_as_leader(int32_t api_arg_0_id);
int32_t alice_leader_get_leader_loyalty(int32_t api_arg_0_id);
]]
LEADER = {}
---@param id leader_id
---@return number
function LEADER.is_valid(id)
	return ffi.C.alice_leader_is_valid(id)
end
---@return number
function LEADER.size()
	return ffi.C.alice_leader_size()
end
---@param value number
function LEADER.resize(value)
	return ffi.C.alice_leader_resize(value)
end
---@param id leader_id
---@return unit_name_id
function LEADER.get_name(id)
	return ffi.C.alice_leader_get_name(id)
end
---@param id leader_id
---@param value unit_name_id
function LEADER.set_name(id, value)
	return ffi.C.alice_leader_set_name(id, value)
end
---@param id leader_id
---@return leader_trait_id
function LEADER.get_personality(id)
	return ffi.C.alice_leader_get_personality(id)
end
---@param id leader_id
---@param value leader_trait_id
function LEADER.set_personality(id, value)
	return ffi.C.alice_leader_set_personality(id, value)
end
---@param id leader_id
---@return leader_trait_id
function LEADER.get_background(id)
	return ffi.C.alice_leader_get_background(id)
end
---@param id leader_id
---@param value leader_trait_id
function LEADER.set_background(id, value)
	return ffi.C.alice_leader_set_background(id, value)
end
---@param id leader_id
---@return number
function LEADER.get_prestige(id)
	return ffi.C.alice_leader_get_prestige(id)
end
---@param id leader_id
---@param value number
function LEADER.set_prestige(id, value)
	return ffi.C.alice_leader_set_prestige(id, value)
end
---@param id leader_id
---@return boolean
function LEADER.get_is_admiral(id)
	return ffi.C.alice_leader_get_is_admiral(id)
end
---@param id leader_id
---@param value boolean
function LEADER.set_is_admiral(id, value)
	return ffi.C.alice_leader_set_is_admiral(id, value)
end
---@param id leader_id
---@return attacking_admiral_id
function LEADER.get_attacking_admiral_as_admiral(id)
	return ffi.C.alice_leader_get_attacking_admiral_as_admiral(id)
end
---@param id leader_id
---@return attacking_admiral_id
function LEADER.get_attacking_admiral(id)
	return ffi.C.alice_leader_get_attacking_admiral(id)
end
---@param id leader_id
---@return defending_admiral_id
function LEADER.get_defending_admiral_as_admiral(id)
	return ffi.C.alice_leader_get_defending_admiral_as_admiral(id)
end
---@param id leader_id
---@return defending_admiral_id
function LEADER.get_defending_admiral(id)
	return ffi.C.alice_leader_get_defending_admiral(id)
end
---@param id leader_id
---@return attacking_general_id
function LEADER.get_attacking_general_as_general(id)
	return ffi.C.alice_leader_get_attacking_general_as_general(id)
end
---@param id leader_id
---@return attacking_general_id
function LEADER.get_attacking_general(id)
	return ffi.C.alice_leader_get_attacking_general(id)
end
---@param id leader_id
---@return defending_general_id
function LEADER.get_defending_general_as_general(id)
	return ffi.C.alice_leader_get_defending_general_as_general(id)
end
---@param id leader_id
---@return defending_general_id
function LEADER.get_defending_general(id)
	return ffi.C.alice_leader_get_defending_general(id)
end
---@param id leader_id
---@return army_leadership_id
function LEADER.get_army_leadership_as_general(id)
	return ffi.C.alice_leader_get_army_leadership_as_general(id)
end
---@param id leader_id
---@return army_leadership_id
function LEADER.get_army_leadership(id)
	return ffi.C.alice_leader_get_army_leadership(id)
end
---@param id leader_id
---@return navy_leadership_id
function LEADER.get_navy_leadership_as_admiral(id)
	return ffi.C.alice_leader_get_navy_leadership_as_admiral(id)
end
---@param id leader_id
---@return navy_leadership_id
function LEADER.get_navy_leadership(id)
	return ffi.C.alice_leader_get_navy_leadership(id)
end
---@param id leader_id
---@return leader_loyalty_id
function LEADER.get_leader_loyalty_as_leader(id)
	return ffi.C.alice_leader_get_leader_loyalty_as_leader(id)
end
---@param id leader_id
---@return leader_loyalty_id
function LEADER.get_leader_loyalty(id)
	return ffi.C.alice_leader_get_leader_loyalty(id)
end
