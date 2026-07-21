-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_army_transport_is_valid(int32_t api_arg_0_id);
uint32_t alice_army_transport_size();
void alice_army_transport_resize(uint32_t api_arg_0_value);
int32_t alice_army_transport_get_army(int32_t api_arg_0_id);
void alice_army_transport_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_transport_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_army_transport_get_navy(int32_t api_arg_0_id);
void alice_army_transport_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_army_transport_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
ARMY_TRANSPORT = {}
---@param id army_transport_id
---@return number
function ARMY_TRANSPORT.is_valid(id)
	return ffi.C.alice_army_transport_is_valid(id)
end
---@return number
function ARMY_TRANSPORT.size()
	return ffi.C.alice_army_transport_size()
end
---@param value number
function ARMY_TRANSPORT.resize(value)
	return ffi.C.alice_army_transport_resize(value)
end
---@param id army_transport_id
---@return army_id
function ARMY_TRANSPORT.get_army(id)
	return ffi.C.alice_army_transport_get_army(id)
end
---@param id army_transport_id
---@param linked_id army_id
function ARMY_TRANSPORT.set_army(id, linked_id)
	return ffi.C.alice_army_transport_set_army(id, linked_id)
end
---@param id army_transport_id
---@param linked_id army_id
function ARMY_TRANSPORT.try_set_army(id, linked_id)
	return ffi.C.alice_army_transport_try_set_army(id, linked_id)
end
---@param id army_transport_id
---@return navy_id
function ARMY_TRANSPORT.get_navy(id)
	return ffi.C.alice_army_transport_get_navy(id)
end
---@param id army_transport_id
---@param linked_id navy_id
function ARMY_TRANSPORT.set_navy(id, linked_id)
	return ffi.C.alice_army_transport_set_navy(id, linked_id)
end
---@param id army_transport_id
---@param linked_id navy_id
function ARMY_TRANSPORT.try_set_navy(id, linked_id)
	return ffi.C.alice_army_transport_try_set_navy(id, linked_id)
end
