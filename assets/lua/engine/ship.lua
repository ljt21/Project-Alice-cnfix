-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_ship_is_valid(int32_t api_arg_0_id);
uint32_t alice_ship_size();
void alice_ship_resize(uint32_t api_arg_0_value);
int32_t alice_ship_get_name(int32_t api_arg_0_id);
void alice_ship_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_ship_get_type(int32_t api_arg_0_id);
void alice_ship_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_ship_get_strength(int32_t api_arg_0_id);
void alice_ship_set_strength(int32_t api_arg_0_id, float api_arg_1_value);
float alice_ship_get_org(int32_t api_arg_0_id);
void alice_ship_set_org(int32_t api_arg_0_id, float api_arg_1_value);
float alice_ship_get_experience(int32_t api_arg_0_id);
void alice_ship_set_experience(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_ship_get_navy_membership_as_ship(int32_t api_arg_0_id);
int32_t alice_ship_get_navy_membership(int32_t api_arg_0_id);
]]
SHIP = {}
---@param id ship_id
---@return number
function SHIP.is_valid(id)
	return ffi.C.alice_ship_is_valid(id)
end
---@return number
function SHIP.size()
	return ffi.C.alice_ship_size()
end
---@param value number
function SHIP.resize(value)
	return ffi.C.alice_ship_resize(value)
end
---@param id ship_id
---@return unit_name_id
function SHIP.get_name(id)
	return ffi.C.alice_ship_get_name(id)
end
---@param id ship_id
---@param value unit_name_id
function SHIP.set_name(id, value)
	return ffi.C.alice_ship_set_name(id, value)
end
---@param id ship_id
---@return unit_type_id
function SHIP.get_type(id)
	return ffi.C.alice_ship_get_type(id)
end
---@param id ship_id
---@param value unit_type_id
function SHIP.set_type(id, value)
	return ffi.C.alice_ship_set_type(id, value)
end
---@param id ship_id
---@return number
function SHIP.get_strength(id)
	return ffi.C.alice_ship_get_strength(id)
end
---@param id ship_id
---@param value number
function SHIP.set_strength(id, value)
	return ffi.C.alice_ship_set_strength(id, value)
end
---@param id ship_id
---@return number
function SHIP.get_org(id)
	return ffi.C.alice_ship_get_org(id)
end
---@param id ship_id
---@param value number
function SHIP.set_org(id, value)
	return ffi.C.alice_ship_set_org(id, value)
end
---@param id ship_id
---@return number
function SHIP.get_experience(id)
	return ffi.C.alice_ship_get_experience(id)
end
---@param id ship_id
---@param value number
function SHIP.set_experience(id, value)
	return ffi.C.alice_ship_set_experience(id, value)
end
---@param id ship_id
---@return navy_membership_id
function SHIP.get_navy_membership_as_ship(id)
	return ffi.C.alice_ship_get_navy_membership_as_ship(id)
end
---@param id ship_id
---@return navy_membership_id
function SHIP.get_navy_membership(id)
	return ffi.C.alice_ship_get_navy_membership(id)
end
