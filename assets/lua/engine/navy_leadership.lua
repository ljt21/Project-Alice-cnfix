-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_navy_leadership_is_valid(int32_t api_arg_0_id);
uint32_t alice_navy_leadership_size();
void alice_navy_leadership_resize(uint32_t api_arg_0_value);
int32_t alice_navy_leadership_get_navy(int32_t api_arg_0_id);
void alice_navy_leadership_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_navy_leadership_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_navy_leadership_get_admiral(int32_t api_arg_0_id);
void alice_navy_leadership_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_navy_leadership_try_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
NAVY_LEADERSHIP = {}
---@param id navy_leadership_id
---@return number
function NAVY_LEADERSHIP.is_valid(id)
	return ffi.C.alice_navy_leadership_is_valid(id)
end
---@return number
function NAVY_LEADERSHIP.size()
	return ffi.C.alice_navy_leadership_size()
end
---@param value number
function NAVY_LEADERSHIP.resize(value)
	return ffi.C.alice_navy_leadership_resize(value)
end
---@param id navy_leadership_id
---@return navy_id
function NAVY_LEADERSHIP.get_navy(id)
	return ffi.C.alice_navy_leadership_get_navy(id)
end
---@param id navy_leadership_id
---@param linked_id navy_id
function NAVY_LEADERSHIP.set_navy(id, linked_id)
	return ffi.C.alice_navy_leadership_set_navy(id, linked_id)
end
---@param id navy_leadership_id
---@param linked_id navy_id
function NAVY_LEADERSHIP.try_set_navy(id, linked_id)
	return ffi.C.alice_navy_leadership_try_set_navy(id, linked_id)
end
---@param id navy_leadership_id
---@return leader_id
function NAVY_LEADERSHIP.get_admiral(id)
	return ffi.C.alice_navy_leadership_get_admiral(id)
end
---@param id navy_leadership_id
---@param linked_id leader_id
function NAVY_LEADERSHIP.set_admiral(id, linked_id)
	return ffi.C.alice_navy_leadership_set_admiral(id, linked_id)
end
---@param id navy_leadership_id
---@param linked_id leader_id
function NAVY_LEADERSHIP.try_set_admiral(id, linked_id)
	return ffi.C.alice_navy_leadership_try_set_admiral(id, linked_id)
end
