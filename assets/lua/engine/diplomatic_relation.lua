-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_diplomatic_relation_is_valid(int32_t api_arg_0_id);
uint32_t alice_diplomatic_relation_size();
void alice_diplomatic_relation_resize(uint32_t api_arg_0_value);
float alice_diplomatic_relation_get_value(int32_t api_arg_0_id);
void alice_diplomatic_relation_set_value(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_diplomatic_relation_get_are_allied(int32_t api_arg_0_id);
void alice_diplomatic_relation_set_are_allied(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_diplomatic_relation_get_related_nations(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_diplomatic_relation_set_related_nations(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id);
void alice_diplomatic_relation_try_set_related_nations(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id);
]]
DIPLOMATIC_RELATION = {}
---@param id diplomatic_relation_id
---@return number
function DIPLOMATIC_RELATION.is_valid(id)
	return ffi.C.alice_diplomatic_relation_is_valid(id)
end
---@return number
function DIPLOMATIC_RELATION.size()
	return ffi.C.alice_diplomatic_relation_size()
end
---@param value number
function DIPLOMATIC_RELATION.resize(value)
	return ffi.C.alice_diplomatic_relation_resize(value)
end
---@param id diplomatic_relation_id
---@return number
function DIPLOMATIC_RELATION.get_value(id)
	return ffi.C.alice_diplomatic_relation_get_value(id)
end
---@param id diplomatic_relation_id
---@param value number
function DIPLOMATIC_RELATION.set_value(id, value)
	return ffi.C.alice_diplomatic_relation_set_value(id, value)
end
---@param id diplomatic_relation_id
---@return boolean
function DIPLOMATIC_RELATION.get_are_allied(id)
	return ffi.C.alice_diplomatic_relation_get_are_allied(id)
end
---@param id diplomatic_relation_id
---@param value boolean
function DIPLOMATIC_RELATION.set_are_allied(id, value)
	return ffi.C.alice_diplomatic_relation_set_are_allied(id, value)
end
---@param id diplomatic_relation_id
---@param value number
---@return nation_id
function DIPLOMATIC_RELATION.get_related_nations(id, value)
	return ffi.C.alice_diplomatic_relation_get_related_nations(id, value)
end
---@param id diplomatic_relation_id
---@param value number
---@param linked_id nation_id
function DIPLOMATIC_RELATION.set_related_nations(id, value, linked_id)
	return ffi.C.alice_diplomatic_relation_set_related_nations(id, value, linked_id)
end
---@param id diplomatic_relation_id
---@param value number
---@param linked_id nation_id
function DIPLOMATIC_RELATION.try_set_related_nations(id, value, linked_id)
	return ffi.C.alice_diplomatic_relation_try_set_related_nations(id, value, linked_id)
end
