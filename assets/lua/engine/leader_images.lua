-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_leader_images_is_valid(int32_t api_arg_0_id);
uint32_t alice_leader_images_size();
void alice_leader_images_resize(uint32_t api_arg_0_value);
]]
LEADER_IMAGES = {}
---@param id leader_images_id
---@return number
function LEADER_IMAGES.is_valid(id)
	return ffi.C.alice_leader_images_is_valid(id)
end
---@return number
function LEADER_IMAGES.size()
	return ffi.C.alice_leader_images_size()
end
---@param value number
function LEADER_IMAGES.resize(value)
	return ffi.C.alice_leader_images_resize(value)
end
