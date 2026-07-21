-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_local_market_is_valid(int32_t api_arg_0_id);
uint32_t alice_local_market_size();
void alice_local_market_resize(uint32_t api_arg_0_value);
int32_t alice_local_market_get_market(int32_t api_arg_0_id);
void alice_local_market_set_market(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_local_market_try_set_market(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_local_market_get_zone(int32_t api_arg_0_id);
void alice_local_market_set_zone(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_local_market_try_set_zone(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
LOCAL_MARKET = {}
---@param id local_market_id
---@return number
function LOCAL_MARKET.is_valid(id)
	return ffi.C.alice_local_market_is_valid(id)
end
---@return number
function LOCAL_MARKET.size()
	return ffi.C.alice_local_market_size()
end
---@param value number
function LOCAL_MARKET.resize(value)
	return ffi.C.alice_local_market_resize(value)
end
---@param id local_market_id
---@return market_id
function LOCAL_MARKET.get_market(id)
	return ffi.C.alice_local_market_get_market(id)
end
---@param id local_market_id
---@param linked_id market_id
function LOCAL_MARKET.set_market(id, linked_id)
	return ffi.C.alice_local_market_set_market(id, linked_id)
end
---@param id local_market_id
---@param linked_id market_id
function LOCAL_MARKET.try_set_market(id, linked_id)
	return ffi.C.alice_local_market_try_set_market(id, linked_id)
end
---@param id local_market_id
---@return state_instance_id
function LOCAL_MARKET.get_zone(id)
	return ffi.C.alice_local_market_get_zone(id)
end
---@param id local_market_id
---@param linked_id state_instance_id
function LOCAL_MARKET.set_zone(id, linked_id)
	return ffi.C.alice_local_market_set_zone(id, linked_id)
end
---@param id local_market_id
---@param linked_id state_instance_id
function LOCAL_MARKET.try_set_zone(id, linked_id)
	return ffi.C.alice_local_market_try_set_zone(id, linked_id)
end
