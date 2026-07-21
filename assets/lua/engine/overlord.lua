-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_overlord_is_valid(int32_t api_arg_0_id);
uint32_t alice_overlord_size();
void alice_overlord_resize(uint32_t api_arg_0_value);
int32_t alice_overlord_get_subject(int32_t api_arg_0_id);
void alice_overlord_set_subject(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_overlord_try_set_subject(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_overlord_get_ruler(int32_t api_arg_0_id);
void alice_overlord_set_ruler(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_overlord_try_set_ruler(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
OVERLORD = {}
---@param id overlord_id
---@return number
function OVERLORD.is_valid(id)
	return ffi.C.alice_overlord_is_valid(id)
end
---@return number
function OVERLORD.size()
	return ffi.C.alice_overlord_size()
end
---@param value number
function OVERLORD.resize(value)
	return ffi.C.alice_overlord_resize(value)
end
---@param id overlord_id
---@return nation_id
function OVERLORD.get_subject(id)
	return ffi.C.alice_overlord_get_subject(id)
end
---@param id overlord_id
---@param linked_id nation_id
function OVERLORD.set_subject(id, linked_id)
	return ffi.C.alice_overlord_set_subject(id, linked_id)
end
---@param id overlord_id
---@param linked_id nation_id
function OVERLORD.try_set_subject(id, linked_id)
	return ffi.C.alice_overlord_try_set_subject(id, linked_id)
end
---@param id overlord_id
---@return nation_id
function OVERLORD.get_ruler(id)
	return ffi.C.alice_overlord_get_ruler(id)
end
---@param id overlord_id
---@param linked_id nation_id
function OVERLORD.set_ruler(id, linked_id)
	return ffi.C.alice_overlord_set_ruler(id, linked_id)
end
---@param id overlord_id
---@param linked_id nation_id
function OVERLORD.try_set_ruler(id, linked_id)
	return ffi.C.alice_overlord_try_set_ruler(id, linked_id)
end
