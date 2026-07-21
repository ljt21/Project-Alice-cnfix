-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_pending_peace_offer_is_valid(int32_t api_arg_0_id);
uint32_t alice_pending_peace_offer_size();
void alice_pending_peace_offer_resize(uint32_t api_arg_0_value);
int32_t alice_pending_peace_offer_get_nation(int32_t api_arg_0_id);
void alice_pending_peace_offer_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pending_peace_offer_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_pending_peace_offer_get_peace_offer(int32_t api_arg_0_id);
void alice_pending_peace_offer_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_pending_peace_offer_try_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
PENDING_PEACE_OFFER = {}
---@param id pending_peace_offer_id
---@return number
function PENDING_PEACE_OFFER.is_valid(id)
	return ffi.C.alice_pending_peace_offer_is_valid(id)
end
---@return number
function PENDING_PEACE_OFFER.size()
	return ffi.C.alice_pending_peace_offer_size()
end
---@param value number
function PENDING_PEACE_OFFER.resize(value)
	return ffi.C.alice_pending_peace_offer_resize(value)
end
---@param id pending_peace_offer_id
---@return nation_id
function PENDING_PEACE_OFFER.get_nation(id)
	return ffi.C.alice_pending_peace_offer_get_nation(id)
end
---@param id pending_peace_offer_id
---@param linked_id nation_id
function PENDING_PEACE_OFFER.set_nation(id, linked_id)
	return ffi.C.alice_pending_peace_offer_set_nation(id, linked_id)
end
---@param id pending_peace_offer_id
---@param linked_id nation_id
function PENDING_PEACE_OFFER.try_set_nation(id, linked_id)
	return ffi.C.alice_pending_peace_offer_try_set_nation(id, linked_id)
end
---@param id pending_peace_offer_id
---@return peace_offer_id
function PENDING_PEACE_OFFER.get_peace_offer(id)
	return ffi.C.alice_pending_peace_offer_get_peace_offer(id)
end
---@param id pending_peace_offer_id
---@param linked_id peace_offer_id
function PENDING_PEACE_OFFER.set_peace_offer(id, linked_id)
	return ffi.C.alice_pending_peace_offer_set_peace_offer(id, linked_id)
end
---@param id pending_peace_offer_id
---@param linked_id peace_offer_id
function PENDING_PEACE_OFFER.try_set_peace_offer(id, linked_id)
	return ffi.C.alice_pending_peace_offer_try_set_peace_offer(id, linked_id)
end
