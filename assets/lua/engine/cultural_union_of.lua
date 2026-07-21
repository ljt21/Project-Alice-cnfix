-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_cultural_union_of_is_valid(int32_t api_arg_0_id);
uint32_t alice_cultural_union_of_size();
void alice_cultural_union_of_resize(uint32_t api_arg_0_value);
int32_t alice_cultural_union_of_get_identity(int32_t api_arg_0_id);
void alice_cultural_union_of_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_cultural_union_of_try_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_cultural_union_of_get_culture_group(int32_t api_arg_0_id);
void alice_cultural_union_of_set_culture_group(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_cultural_union_of_try_set_culture_group(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
CULTURAL_UNION_OF = {}
---@param id cultural_union_of_id
---@return number
function CULTURAL_UNION_OF.is_valid(id)
	return ffi.C.alice_cultural_union_of_is_valid(id)
end
---@return number
function CULTURAL_UNION_OF.size()
	return ffi.C.alice_cultural_union_of_size()
end
---@param value number
function CULTURAL_UNION_OF.resize(value)
	return ffi.C.alice_cultural_union_of_resize(value)
end
---@param id cultural_union_of_id
---@return national_identity_id
function CULTURAL_UNION_OF.get_identity(id)
	return ffi.C.alice_cultural_union_of_get_identity(id)
end
---@param id cultural_union_of_id
---@param linked_id national_identity_id
function CULTURAL_UNION_OF.set_identity(id, linked_id)
	return ffi.C.alice_cultural_union_of_set_identity(id, linked_id)
end
---@param id cultural_union_of_id
---@param linked_id national_identity_id
function CULTURAL_UNION_OF.try_set_identity(id, linked_id)
	return ffi.C.alice_cultural_union_of_try_set_identity(id, linked_id)
end
---@param id cultural_union_of_id
---@return culture_group_id
function CULTURAL_UNION_OF.get_culture_group(id)
	return ffi.C.alice_cultural_union_of_get_culture_group(id)
end
---@param id cultural_union_of_id
---@param linked_id culture_group_id
function CULTURAL_UNION_OF.set_culture_group(id, linked_id)
	return ffi.C.alice_cultural_union_of_set_culture_group(id, linked_id)
end
---@param id cultural_union_of_id
---@param linked_id culture_group_id
function CULTURAL_UNION_OF.try_set_culture_group(id, linked_id)
	return ffi.C.alice_cultural_union_of_try_set_culture_group(id, linked_id)
end
