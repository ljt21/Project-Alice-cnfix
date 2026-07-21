-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_army_pursuit_is_valid(int32_t api_arg_0_id);
uint32_t alice_army_pursuit_size();
void alice_army_pursuit_resize(uint32_t api_arg_0_value);
int32_t alice_army_pursuit_get_source(int32_t api_arg_0_id);
void alice_army_pursuit_set_source(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_pursuit_try_set_source(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_army_pursuit_get_target(int32_t api_arg_0_id);
void alice_army_pursuit_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_pursuit_try_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
ARMY_PURSUIT = {}
---@param id army_pursuit_id
---@return number
function ARMY_PURSUIT.is_valid(id)
	return ffi.C.alice_army_pursuit_is_valid(id)
end
---@return number
function ARMY_PURSUIT.size()
	return ffi.C.alice_army_pursuit_size()
end
---@param value number
function ARMY_PURSUIT.resize(value)
	return ffi.C.alice_army_pursuit_resize(value)
end
---@param id army_pursuit_id
---@return army_id
function ARMY_PURSUIT.get_source(id)
	return ffi.C.alice_army_pursuit_get_source(id)
end
---@param id army_pursuit_id
---@param linked_id army_id
function ARMY_PURSUIT.set_source(id, linked_id)
	return ffi.C.alice_army_pursuit_set_source(id, linked_id)
end
---@param id army_pursuit_id
---@param linked_id army_id
function ARMY_PURSUIT.try_set_source(id, linked_id)
	return ffi.C.alice_army_pursuit_try_set_source(id, linked_id)
end
---@param id army_pursuit_id
---@return army_id
function ARMY_PURSUIT.get_target(id)
	return ffi.C.alice_army_pursuit_get_target(id)
end
---@param id army_pursuit_id
---@param linked_id army_id
function ARMY_PURSUIT.set_target(id, linked_id)
	return ffi.C.alice_army_pursuit_set_target(id, linked_id)
end
---@param id army_pursuit_id
---@param linked_id army_id
function ARMY_PURSUIT.try_set_target(id, linked_id)
	return ffi.C.alice_army_pursuit_try_set_target(id, linked_id)
end
