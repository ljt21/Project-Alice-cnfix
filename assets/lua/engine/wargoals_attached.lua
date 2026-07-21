-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_wargoals_attached_is_valid(int32_t api_arg_0_id);
uint32_t alice_wargoals_attached_size();
void alice_wargoals_attached_resize(uint32_t api_arg_0_value);
int32_t alice_wargoals_attached_get_war(int32_t api_arg_0_id);
void alice_wargoals_attached_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_wargoals_attached_try_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_wargoals_attached_get_wargoal(int32_t api_arg_0_id);
void alice_wargoals_attached_set_wargoal(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_wargoals_attached_try_set_wargoal(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
WARGOALS_ATTACHED = {}
---@param id wargoals_attached_id
---@return number
function WARGOALS_ATTACHED.is_valid(id)
	return ffi.C.alice_wargoals_attached_is_valid(id)
end
---@return number
function WARGOALS_ATTACHED.size()
	return ffi.C.alice_wargoals_attached_size()
end
---@param value number
function WARGOALS_ATTACHED.resize(value)
	return ffi.C.alice_wargoals_attached_resize(value)
end
---@param id wargoals_attached_id
---@return war_id
function WARGOALS_ATTACHED.get_war(id)
	return ffi.C.alice_wargoals_attached_get_war(id)
end
---@param id wargoals_attached_id
---@param linked_id war_id
function WARGOALS_ATTACHED.set_war(id, linked_id)
	return ffi.C.alice_wargoals_attached_set_war(id, linked_id)
end
---@param id wargoals_attached_id
---@param linked_id war_id
function WARGOALS_ATTACHED.try_set_war(id, linked_id)
	return ffi.C.alice_wargoals_attached_try_set_war(id, linked_id)
end
---@param id wargoals_attached_id
---@return wargoal_id
function WARGOALS_ATTACHED.get_wargoal(id)
	return ffi.C.alice_wargoals_attached_get_wargoal(id)
end
---@param id wargoals_attached_id
---@param linked_id wargoal_id
function WARGOALS_ATTACHED.set_wargoal(id, linked_id)
	return ffi.C.alice_wargoals_attached_set_wargoal(id, linked_id)
end
---@param id wargoals_attached_id
---@param linked_id wargoal_id
function WARGOALS_ATTACHED.try_set_wargoal(id, linked_id)
	return ffi.C.alice_wargoals_attached_try_set_wargoal(id, linked_id)
end
