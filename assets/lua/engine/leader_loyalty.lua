-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_leader_loyalty_is_valid(int32_t api_arg_0_id);
uint32_t alice_leader_loyalty_size();
void alice_leader_loyalty_resize(uint32_t api_arg_0_value);
int32_t alice_leader_loyalty_get_nation(int32_t api_arg_0_id);
void alice_leader_loyalty_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_leader_loyalty_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_leader_loyalty_get_leader(int32_t api_arg_0_id);
void alice_leader_loyalty_set_leader(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_leader_loyalty_try_set_leader(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
LEADER_LOYALTY = {}
---@param id leader_loyalty_id
---@return number
function LEADER_LOYALTY.is_valid(id)
	return ffi.C.alice_leader_loyalty_is_valid(id)
end
---@return number
function LEADER_LOYALTY.size()
	return ffi.C.alice_leader_loyalty_size()
end
---@param value number
function LEADER_LOYALTY.resize(value)
	return ffi.C.alice_leader_loyalty_resize(value)
end
---@param id leader_loyalty_id
---@return nation_id
function LEADER_LOYALTY.get_nation(id)
	return ffi.C.alice_leader_loyalty_get_nation(id)
end
---@param id leader_loyalty_id
---@param linked_id nation_id
function LEADER_LOYALTY.set_nation(id, linked_id)
	return ffi.C.alice_leader_loyalty_set_nation(id, linked_id)
end
---@param id leader_loyalty_id
---@param linked_id nation_id
function LEADER_LOYALTY.try_set_nation(id, linked_id)
	return ffi.C.alice_leader_loyalty_try_set_nation(id, linked_id)
end
---@param id leader_loyalty_id
---@return leader_id
function LEADER_LOYALTY.get_leader(id)
	return ffi.C.alice_leader_loyalty_get_leader(id)
end
---@param id leader_loyalty_id
---@param linked_id leader_id
function LEADER_LOYALTY.set_leader(id, linked_id)
	return ffi.C.alice_leader_loyalty_set_leader(id, linked_id)
end
---@param id leader_loyalty_id
---@param linked_id leader_id
function LEADER_LOYALTY.try_set_leader(id, linked_id)
	return ffi.C.alice_leader_loyalty_try_set_leader(id, linked_id)
end
