-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_war_participant_is_valid(int32_t api_arg_0_id);
uint32_t alice_war_participant_size();
void alice_war_participant_resize(uint32_t api_arg_0_value);
bool alice_war_participant_get_is_attacker(int32_t api_arg_0_id);
void alice_war_participant_set_is_attacker(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_war_participant_get_war(int32_t api_arg_0_id);
void alice_war_participant_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_war_participant_try_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_war_participant_get_nation(int32_t api_arg_0_id);
void alice_war_participant_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_war_participant_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
WAR_PARTICIPANT = {}
---@param id war_participant_id
---@return number
function WAR_PARTICIPANT.is_valid(id)
	return ffi.C.alice_war_participant_is_valid(id)
end
---@return number
function WAR_PARTICIPANT.size()
	return ffi.C.alice_war_participant_size()
end
---@param value number
function WAR_PARTICIPANT.resize(value)
	return ffi.C.alice_war_participant_resize(value)
end
---@param id war_participant_id
---@return boolean
function WAR_PARTICIPANT.get_is_attacker(id)
	return ffi.C.alice_war_participant_get_is_attacker(id)
end
---@param id war_participant_id
---@param value boolean
function WAR_PARTICIPANT.set_is_attacker(id, value)
	return ffi.C.alice_war_participant_set_is_attacker(id, value)
end
---@param id war_participant_id
---@return war_id
function WAR_PARTICIPANT.get_war(id)
	return ffi.C.alice_war_participant_get_war(id)
end
---@param id war_participant_id
---@param linked_id war_id
function WAR_PARTICIPANT.set_war(id, linked_id)
	return ffi.C.alice_war_participant_set_war(id, linked_id)
end
---@param id war_participant_id
---@param linked_id war_id
function WAR_PARTICIPANT.try_set_war(id, linked_id)
	return ffi.C.alice_war_participant_try_set_war(id, linked_id)
end
---@param id war_participant_id
---@return nation_id
function WAR_PARTICIPANT.get_nation(id)
	return ffi.C.alice_war_participant_get_nation(id)
end
---@param id war_participant_id
---@param linked_id nation_id
function WAR_PARTICIPANT.set_nation(id, linked_id)
	return ffi.C.alice_war_participant_set_nation(id, linked_id)
end
---@param id war_participant_id
---@param linked_id nation_id
function WAR_PARTICIPANT.try_set_nation(id, linked_id)
	return ffi.C.alice_war_participant_try_set_nation(id, linked_id)
end
