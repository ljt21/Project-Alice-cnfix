-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_state_ownership_is_valid(int32_t api_arg_0_id);
uint32_t alice_state_ownership_size();
void alice_state_ownership_resize(uint32_t api_arg_0_value);
int32_t alice_state_ownership_get_state(int32_t api_arg_0_id);
void alice_state_ownership_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_state_ownership_try_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_state_ownership_get_nation(int32_t api_arg_0_id);
void alice_state_ownership_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_state_ownership_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
STATE_OWNERSHIP = {}
---@param id state_ownership_id
---@return number
function STATE_OWNERSHIP.is_valid(id)
	return ffi.C.alice_state_ownership_is_valid(id)
end
---@return number
function STATE_OWNERSHIP.size()
	return ffi.C.alice_state_ownership_size()
end
---@param value number
function STATE_OWNERSHIP.resize(value)
	return ffi.C.alice_state_ownership_resize(value)
end
---@param id state_ownership_id
---@return state_instance_id
function STATE_OWNERSHIP.get_state(id)
	return ffi.C.alice_state_ownership_get_state(id)
end
---@param id state_ownership_id
---@param linked_id state_instance_id
function STATE_OWNERSHIP.set_state(id, linked_id)
	return ffi.C.alice_state_ownership_set_state(id, linked_id)
end
---@param id state_ownership_id
---@param linked_id state_instance_id
function STATE_OWNERSHIP.try_set_state(id, linked_id)
	return ffi.C.alice_state_ownership_try_set_state(id, linked_id)
end
---@param id state_ownership_id
---@return nation_id
function STATE_OWNERSHIP.get_nation(id)
	return ffi.C.alice_state_ownership_get_nation(id)
end
---@param id state_ownership_id
---@param linked_id nation_id
function STATE_OWNERSHIP.set_nation(id, linked_id)
	return ffi.C.alice_state_ownership_set_nation(id, linked_id)
end
---@param id state_ownership_id
---@param linked_id nation_id
function STATE_OWNERSHIP.try_set_nation(id, linked_id)
	return ffi.C.alice_state_ownership_try_set_nation(id, linked_id)
end
