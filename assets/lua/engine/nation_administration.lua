-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_nation_administration_is_valid(int32_t api_arg_0_id);
uint32_t alice_nation_administration_size();
void alice_nation_administration_resize(uint32_t api_arg_0_value);
int32_t alice_nation_administration_get_administration(int32_t api_arg_0_id);
void alice_nation_administration_set_administration(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_administration_try_set_administration(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_nation_administration_get_nation(int32_t api_arg_0_id);
void alice_nation_administration_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_nation_administration_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
NATION_ADMINISTRATION = {}
---@param id nation_administration_id
---@return number
function NATION_ADMINISTRATION.is_valid(id)
	return ffi.C.alice_nation_administration_is_valid(id)
end
---@return number
function NATION_ADMINISTRATION.size()
	return ffi.C.alice_nation_administration_size()
end
---@param value number
function NATION_ADMINISTRATION.resize(value)
	return ffi.C.alice_nation_administration_resize(value)
end
---@param id nation_administration_id
---@return administration_id
function NATION_ADMINISTRATION.get_administration(id)
	return ffi.C.alice_nation_administration_get_administration(id)
end
---@param id nation_administration_id
---@param linked_id administration_id
function NATION_ADMINISTRATION.set_administration(id, linked_id)
	return ffi.C.alice_nation_administration_set_administration(id, linked_id)
end
---@param id nation_administration_id
---@param linked_id administration_id
function NATION_ADMINISTRATION.try_set_administration(id, linked_id)
	return ffi.C.alice_nation_administration_try_set_administration(id, linked_id)
end
---@param id nation_administration_id
---@return nation_id
function NATION_ADMINISTRATION.get_nation(id)
	return ffi.C.alice_nation_administration_get_nation(id)
end
---@param id nation_administration_id
---@param linked_id nation_id
function NATION_ADMINISTRATION.set_nation(id, linked_id)
	return ffi.C.alice_nation_administration_set_nation(id, linked_id)
end
---@param id nation_administration_id
---@param linked_id nation_id
function NATION_ADMINISTRATION.try_set_nation(id, linked_id)
	return ffi.C.alice_nation_administration_try_set_nation(id, linked_id)
end
