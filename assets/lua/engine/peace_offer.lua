-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_peace_offer_is_valid(int32_t api_arg_0_id);
uint32_t alice_peace_offer_size();
void alice_peace_offer_resize(uint32_t api_arg_0_value);
int32_t alice_peace_offer_get_target(int32_t api_arg_0_id);
void alice_peace_offer_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_peace_offer_get_is_concession(int32_t api_arg_0_id);
void alice_peace_offer_set_is_concession(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_peace_offer_get_is_crisis_offer(int32_t api_arg_0_id);
void alice_peace_offer_set_is_crisis_offer(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_peace_offer_get_pending_peace_offer_as_peace_offer(int32_t api_arg_0_id);
int32_t alice_peace_offer_get_pending_peace_offer(int32_t api_arg_0_id);
int32_t alice_peace_offer_get_war_settlement_as_peace_offer(int32_t api_arg_0_id);
int32_t alice_peace_offer_get_war_settlement(int32_t api_arg_0_id);
int32_t alice_peace_offer_get_range_peace_offer_item_as_peace_offer(int32_t i);
int32_t alice_peace_offer_get_index_peace_offer_item_as_peace_offer(int32_t i, int32_t subindex);
]]
PEACE_OFFER = {}
---@param id peace_offer_id
---@return number
function PEACE_OFFER.is_valid(id)
	return ffi.C.alice_peace_offer_is_valid(id)
end
---@return number
function PEACE_OFFER.size()
	return ffi.C.alice_peace_offer_size()
end
---@param value number
function PEACE_OFFER.resize(value)
	return ffi.C.alice_peace_offer_resize(value)
end
---@param id peace_offer_id
---@return nation_id
function PEACE_OFFER.get_target(id)
	return ffi.C.alice_peace_offer_get_target(id)
end
---@param id peace_offer_id
---@param value nation_id
function PEACE_OFFER.set_target(id, value)
	return ffi.C.alice_peace_offer_set_target(id, value)
end
---@param id peace_offer_id
---@return boolean
function PEACE_OFFER.get_is_concession(id)
	return ffi.C.alice_peace_offer_get_is_concession(id)
end
---@param id peace_offer_id
---@param value boolean
function PEACE_OFFER.set_is_concession(id, value)
	return ffi.C.alice_peace_offer_set_is_concession(id, value)
end
---@param id peace_offer_id
---@return boolean
function PEACE_OFFER.get_is_crisis_offer(id)
	return ffi.C.alice_peace_offer_get_is_crisis_offer(id)
end
---@param id peace_offer_id
---@param value boolean
function PEACE_OFFER.set_is_crisis_offer(id, value)
	return ffi.C.alice_peace_offer_set_is_crisis_offer(id, value)
end
---@param id peace_offer_id
---@return pending_peace_offer_id
function PEACE_OFFER.get_pending_peace_offer_as_peace_offer(id)
	return ffi.C.alice_peace_offer_get_pending_peace_offer_as_peace_offer(id)
end
---@param id peace_offer_id
---@return pending_peace_offer_id
function PEACE_OFFER.get_pending_peace_offer(id)
	return ffi.C.alice_peace_offer_get_pending_peace_offer(id)
end
---@param id peace_offer_id
---@return war_settlement_id
function PEACE_OFFER.get_war_settlement_as_peace_offer(id)
	return ffi.C.alice_peace_offer_get_war_settlement_as_peace_offer(id)
end
---@param id peace_offer_id
---@return war_settlement_id
function PEACE_OFFER.get_war_settlement(id)
	return ffi.C.alice_peace_offer_get_war_settlement(id)
end
---@param id peace_offer_id
---@return number
function PEACE_OFFER.get_range_length_peace_offer_item(id)
	return ffi.C.alice_peace_offer_get_range_peace_offer_item_as_peace_offer(id)
end
---@param id peace_offer_id
---@param index number
---@return peace_offer_item_id
function PEACE_OFFER.get_item_from_range_peace_offer_item(id, index)
	return ffi.C.alice_peace_offer_get_index_peace_offer_item_as_peace_offer(id, index)
end
