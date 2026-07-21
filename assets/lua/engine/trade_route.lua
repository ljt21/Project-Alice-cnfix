-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_trade_route_is_valid(int32_t api_arg_0_id);
uint32_t alice_trade_route_size();
void alice_trade_route_resize(uint32_t api_arg_0_value);
float alice_trade_route_get_distance(int32_t api_arg_0_id);
void alice_trade_route_set_distance(int32_t api_arg_0_id, float api_arg_1_value);
float alice_trade_route_get_sea_distance(int32_t api_arg_0_id);
void alice_trade_route_set_sea_distance(int32_t api_arg_0_id, float api_arg_1_value);
float alice_trade_route_get_land_distance(int32_t api_arg_0_id);
void alice_trade_route_set_land_distance(int32_t api_arg_0_id, float api_arg_1_value);
bool alice_trade_route_get_is_sea_route(int32_t api_arg_0_id);
void alice_trade_route_set_is_sea_route(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_trade_route_get_is_land_route(int32_t api_arg_0_id);
void alice_trade_route_set_is_land_route(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_trade_route_get_is_trade_forbidden(int32_t api_arg_0_id);
void alice_trade_route_set_is_trade_forbidden(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_trade_route_get_is_tariff_applied_0(int32_t api_arg_0_id);
void alice_trade_route_set_is_tariff_applied_0(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_trade_route_get_is_tariff_applied_1(int32_t api_arg_0_id);
void alice_trade_route_set_is_tariff_applied_1(int32_t api_arg_0_id, bool api_arg_1_value);
float alice_trade_route_get_volume(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_trade_route_set_volume(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_trade_route_get_volume_size();
void alice_trade_route_resize_volume(uint32_t api_arg_0_value);
float alice_trade_route_get_stabilization_volume(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_trade_route_set_stabilization_volume(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value);
uint32_t alice_trade_route_get_stabilization_volume_size();
void alice_trade_route_resize_stabilization_volume(uint32_t api_arg_0_value);
int32_t alice_trade_route_get_connected_markets(int32_t api_arg_0_id, int32_t api_arg_1_value);
void alice_trade_route_set_connected_markets(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id);
void alice_trade_route_try_set_connected_markets(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id);
]]
TRADE_ROUTE = {}
---@param id trade_route_id
---@return number
function TRADE_ROUTE.is_valid(id)
	return ffi.C.alice_trade_route_is_valid(id)
end
---@return number
function TRADE_ROUTE.size()
	return ffi.C.alice_trade_route_size()
end
---@param value number
function TRADE_ROUTE.resize(value)
	return ffi.C.alice_trade_route_resize(value)
end
---@param id trade_route_id
---@return number
function TRADE_ROUTE.get_distance(id)
	return ffi.C.alice_trade_route_get_distance(id)
end
---@param id trade_route_id
---@param value number
function TRADE_ROUTE.set_distance(id, value)
	return ffi.C.alice_trade_route_set_distance(id, value)
end
---@param id trade_route_id
---@return number
function TRADE_ROUTE.get_sea_distance(id)
	return ffi.C.alice_trade_route_get_sea_distance(id)
end
---@param id trade_route_id
---@param value number
function TRADE_ROUTE.set_sea_distance(id, value)
	return ffi.C.alice_trade_route_set_sea_distance(id, value)
end
---@param id trade_route_id
---@return number
function TRADE_ROUTE.get_land_distance(id)
	return ffi.C.alice_trade_route_get_land_distance(id)
end
---@param id trade_route_id
---@param value number
function TRADE_ROUTE.set_land_distance(id, value)
	return ffi.C.alice_trade_route_set_land_distance(id, value)
end
---@param id trade_route_id
---@return boolean
function TRADE_ROUTE.get_is_sea_route(id)
	return ffi.C.alice_trade_route_get_is_sea_route(id)
end
---@param id trade_route_id
---@param value boolean
function TRADE_ROUTE.set_is_sea_route(id, value)
	return ffi.C.alice_trade_route_set_is_sea_route(id, value)
end
---@param id trade_route_id
---@return boolean
function TRADE_ROUTE.get_is_land_route(id)
	return ffi.C.alice_trade_route_get_is_land_route(id)
end
---@param id trade_route_id
---@param value boolean
function TRADE_ROUTE.set_is_land_route(id, value)
	return ffi.C.alice_trade_route_set_is_land_route(id, value)
end
---@param id trade_route_id
---@return boolean
function TRADE_ROUTE.get_is_trade_forbidden(id)
	return ffi.C.alice_trade_route_get_is_trade_forbidden(id)
end
---@param id trade_route_id
---@param value boolean
function TRADE_ROUTE.set_is_trade_forbidden(id, value)
	return ffi.C.alice_trade_route_set_is_trade_forbidden(id, value)
end
---@param id trade_route_id
---@return boolean
function TRADE_ROUTE.get_is_tariff_applied_0(id)
	return ffi.C.alice_trade_route_get_is_tariff_applied_0(id)
end
---@param id trade_route_id
---@param value boolean
function TRADE_ROUTE.set_is_tariff_applied_0(id, value)
	return ffi.C.alice_trade_route_set_is_tariff_applied_0(id, value)
end
---@param id trade_route_id
---@return boolean
function TRADE_ROUTE.get_is_tariff_applied_1(id)
	return ffi.C.alice_trade_route_get_is_tariff_applied_1(id)
end
---@param id trade_route_id
---@param value boolean
function TRADE_ROUTE.set_is_tariff_applied_1(id, value)
	return ffi.C.alice_trade_route_set_is_tariff_applied_1(id, value)
end
---@param id trade_route_id
---@param index commodity_id
---@return number
function TRADE_ROUTE.get_volume(id, index)
	return ffi.C.alice_trade_route_get_volume(id, index)
end
---@param id trade_route_id
---@param index commodity_id
---@param value number
function TRADE_ROUTE.set_volume(id, index, value)
	return ffi.C.alice_trade_route_set_volume(id, index, value)
end
---@return number
function TRADE_ROUTE.get_volume_size()
	return ffi.C.alice_trade_route_get_volume_size()
end
---@param value number
function TRADE_ROUTE.resize_volume(value)
	return ffi.C.alice_trade_route_resize_volume(value)
end
---@param id trade_route_id
---@param index commodity_id
---@return number
function TRADE_ROUTE.get_stabilization_volume(id, index)
	return ffi.C.alice_trade_route_get_stabilization_volume(id, index)
end
---@param id trade_route_id
---@param index commodity_id
---@param value number
function TRADE_ROUTE.set_stabilization_volume(id, index, value)
	return ffi.C.alice_trade_route_set_stabilization_volume(id, index, value)
end
---@return number
function TRADE_ROUTE.get_stabilization_volume_size()
	return ffi.C.alice_trade_route_get_stabilization_volume_size()
end
---@param value number
function TRADE_ROUTE.resize_stabilization_volume(value)
	return ffi.C.alice_trade_route_resize_stabilization_volume(value)
end
---@param id trade_route_id
---@param value number
---@return market_id
function TRADE_ROUTE.get_connected_markets(id, value)
	return ffi.C.alice_trade_route_get_connected_markets(id, value)
end
---@param id trade_route_id
---@param value number
---@param linked_id market_id
function TRADE_ROUTE.set_connected_markets(id, value, linked_id)
	return ffi.C.alice_trade_route_set_connected_markets(id, value, linked_id)
end
---@param id trade_route_id
---@param value number
---@param linked_id market_id
function TRADE_ROUTE.try_set_connected_markets(id, value, linked_id)
	return ffi.C.alice_trade_route_try_set_connected_markets(id, value, linked_id)
end
