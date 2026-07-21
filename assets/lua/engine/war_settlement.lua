-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_war_settlement_is_valid(int32_t api_arg_0_id);
uint32_t alice_war_settlement_size();
void alice_war_settlement_resize(uint32_t api_arg_0_value);
int32_t alice_war_settlement_get_war(int32_t api_arg_0_id);
void alice_war_settlement_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_war_settlement_try_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_war_settlement_get_peace_offer(int32_t api_arg_0_id);
void alice_war_settlement_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_war_settlement_try_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
WAR_SETTLEMENT = {}
---@param id war_settlement_id
---@return number
function WAR_SETTLEMENT.is_valid(id)
	return ffi.C.alice_war_settlement_is_valid(id)
end
---@return number
function WAR_SETTLEMENT.size()
	return ffi.C.alice_war_settlement_size()
end
---@param value number
function WAR_SETTLEMENT.resize(value)
	return ffi.C.alice_war_settlement_resize(value)
end
---@param id war_settlement_id
---@return war_id
function WAR_SETTLEMENT.get_war(id)
	return ffi.C.alice_war_settlement_get_war(id)
end
---@param id war_settlement_id
---@param linked_id war_id
function WAR_SETTLEMENT.set_war(id, linked_id)
	return ffi.C.alice_war_settlement_set_war(id, linked_id)
end
---@param id war_settlement_id
---@param linked_id war_id
function WAR_SETTLEMENT.try_set_war(id, linked_id)
	return ffi.C.alice_war_settlement_try_set_war(id, linked_id)
end
---@param id war_settlement_id
---@return peace_offer_id
function WAR_SETTLEMENT.get_peace_offer(id)
	return ffi.C.alice_war_settlement_get_peace_offer(id)
end
---@param id war_settlement_id
---@param linked_id peace_offer_id
function WAR_SETTLEMENT.set_peace_offer(id, linked_id)
	return ffi.C.alice_war_settlement_set_peace_offer(id, linked_id)
end
---@param id war_settlement_id
---@param linked_id peace_offer_id
function WAR_SETTLEMENT.try_set_peace_offer(id, linked_id)
	return ffi.C.alice_war_settlement_try_set_peace_offer(id, linked_id)
end
