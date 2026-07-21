-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_peace_offer_item_is_valid(int32_t api_arg_0_id);
uint32_t alice_peace_offer_item_size();
void alice_peace_offer_item_resize(uint32_t api_arg_0_value);
int32_t alice_peace_offer_item_get_peace_offer(int32_t api_arg_0_id);
void alice_peace_offer_item_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_peace_offer_item_try_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_peace_offer_item_get_wargoal(int32_t api_arg_0_id);
void alice_peace_offer_item_set_wargoal(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_peace_offer_item_try_set_wargoal(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
PEACE_OFFER_ITEM = {}
---@param id peace_offer_item_id
---@return number
function PEACE_OFFER_ITEM.is_valid(id)
	return ffi.C.alice_peace_offer_item_is_valid(id)
end
---@return number
function PEACE_OFFER_ITEM.size()
	return ffi.C.alice_peace_offer_item_size()
end
---@param value number
function PEACE_OFFER_ITEM.resize(value)
	return ffi.C.alice_peace_offer_item_resize(value)
end
---@param id peace_offer_item_id
---@return peace_offer_id
function PEACE_OFFER_ITEM.get_peace_offer(id)
	return ffi.C.alice_peace_offer_item_get_peace_offer(id)
end
---@param id peace_offer_item_id
---@param linked_id peace_offer_id
function PEACE_OFFER_ITEM.set_peace_offer(id, linked_id)
	return ffi.C.alice_peace_offer_item_set_peace_offer(id, linked_id)
end
---@param id peace_offer_item_id
---@param linked_id peace_offer_id
function PEACE_OFFER_ITEM.try_set_peace_offer(id, linked_id)
	return ffi.C.alice_peace_offer_item_try_set_peace_offer(id, linked_id)
end
---@param id peace_offer_item_id
---@return wargoal_id
function PEACE_OFFER_ITEM.get_wargoal(id)
	return ffi.C.alice_peace_offer_item_get_wargoal(id)
end
---@param id peace_offer_item_id
---@param linked_id wargoal_id
function PEACE_OFFER_ITEM.set_wargoal(id, linked_id)
	return ffi.C.alice_peace_offer_item_set_wargoal(id, linked_id)
end
---@param id peace_offer_item_id
---@param linked_id wargoal_id
function PEACE_OFFER_ITEM.try_set_wargoal(id, linked_id)
	return ffi.C.alice_peace_offer_item_try_set_wargoal(id, linked_id)
end
