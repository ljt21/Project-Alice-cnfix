-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_identity_holder_is_valid(int32_t api_arg_0_id);
uint32_t alice_identity_holder_size();
void alice_identity_holder_resize(uint32_t api_arg_0_value);
int32_t alice_identity_holder_get_nation(int32_t api_arg_0_id);
void alice_identity_holder_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_identity_holder_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_identity_holder_get_identity(int32_t api_arg_0_id);
void alice_identity_holder_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_identity_holder_try_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
IDENTITY_HOLDER = {}
---@param id identity_holder_id
---@return number
function IDENTITY_HOLDER.is_valid(id)
	return ffi.C.alice_identity_holder_is_valid(id)
end
---@return number
function IDENTITY_HOLDER.size()
	return ffi.C.alice_identity_holder_size()
end
---@param value number
function IDENTITY_HOLDER.resize(value)
	return ffi.C.alice_identity_holder_resize(value)
end
---@param id identity_holder_id
---@return nation_id
function IDENTITY_HOLDER.get_nation(id)
	return ffi.C.alice_identity_holder_get_nation(id)
end
---@param id identity_holder_id
---@param linked_id nation_id
function IDENTITY_HOLDER.set_nation(id, linked_id)
	return ffi.C.alice_identity_holder_set_nation(id, linked_id)
end
---@param id identity_holder_id
---@param linked_id nation_id
function IDENTITY_HOLDER.try_set_nation(id, linked_id)
	return ffi.C.alice_identity_holder_try_set_nation(id, linked_id)
end
---@param id identity_holder_id
---@return national_identity_id
function IDENTITY_HOLDER.get_identity(id)
	return ffi.C.alice_identity_holder_get_identity(id)
end
---@param id identity_holder_id
---@param linked_id national_identity_id
function IDENTITY_HOLDER.set_identity(id, linked_id)
	return ffi.C.alice_identity_holder_set_identity(id, linked_id)
end
---@param id identity_holder_id
---@param linked_id national_identity_id
function IDENTITY_HOLDER.try_set_identity(id, linked_id)
	return ffi.C.alice_identity_holder_try_set_identity(id, linked_id)
end
