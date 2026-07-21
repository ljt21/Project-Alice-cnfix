-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_regiment_source_is_valid(int32_t api_arg_0_id);
uint32_t alice_regiment_source_size();
void alice_regiment_source_resize(uint32_t api_arg_0_value);
int32_t alice_regiment_source_get_regiment(int32_t api_arg_0_id);
void alice_regiment_source_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_regiment_source_try_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_regiment_source_get_pop(int32_t api_arg_0_id);
void alice_regiment_source_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_regiment_source_try_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
REGIMENT_SOURCE = {}
---@param id regiment_source_id
---@return number
function REGIMENT_SOURCE.is_valid(id)
	return ffi.C.alice_regiment_source_is_valid(id)
end
---@return number
function REGIMENT_SOURCE.size()
	return ffi.C.alice_regiment_source_size()
end
---@param value number
function REGIMENT_SOURCE.resize(value)
	return ffi.C.alice_regiment_source_resize(value)
end
---@param id regiment_source_id
---@return regiment_id
function REGIMENT_SOURCE.get_regiment(id)
	return ffi.C.alice_regiment_source_get_regiment(id)
end
---@param id regiment_source_id
---@param linked_id regiment_id
function REGIMENT_SOURCE.set_regiment(id, linked_id)
	return ffi.C.alice_regiment_source_set_regiment(id, linked_id)
end
---@param id regiment_source_id
---@param linked_id regiment_id
function REGIMENT_SOURCE.try_set_regiment(id, linked_id)
	return ffi.C.alice_regiment_source_try_set_regiment(id, linked_id)
end
---@param id regiment_source_id
---@return pop_id
function REGIMENT_SOURCE.get_pop(id)
	return ffi.C.alice_regiment_source_get_pop(id)
end
---@param id regiment_source_id
---@param linked_id pop_id
function REGIMENT_SOURCE.set_pop(id, linked_id)
	return ffi.C.alice_regiment_source_set_pop(id, linked_id)
end
---@param id regiment_source_id
---@param linked_id pop_id
function REGIMENT_SOURCE.try_set_pop(id, linked_id)
	return ffi.C.alice_regiment_source_try_set_pop(id, linked_id)
end
