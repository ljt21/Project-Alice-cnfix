-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_political_party_is_valid(int32_t api_arg_0_id);
uint32_t alice_political_party_size();
void alice_political_party_resize(uint32_t api_arg_0_value);
int32_t alice_political_party_get_name(int32_t api_arg_0_id);
void alice_political_party_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_political_party_get_ideology(int32_t api_arg_0_id);
void alice_political_party_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_political_party_get_party_issues(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_political_party_set_party_issues(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_political_party_get_party_issues_size();
void alice_political_party_resize_party_issues(uint32_t api_arg_0_value);
]]
POLITICAL_PARTY = {}
---@param id political_party_id
---@return number
function POLITICAL_PARTY.is_valid(id)
	return ffi.C.alice_political_party_is_valid(id)
end
---@return number
function POLITICAL_PARTY.size()
	return ffi.C.alice_political_party_size()
end
---@param value number
function POLITICAL_PARTY.resize(value)
	return ffi.C.alice_political_party_resize(value)
end
---@param id political_party_id
---@return text_key
function POLITICAL_PARTY.get_name(id)
	return ffi.C.alice_political_party_get_name(id)
end
---@param id political_party_id
---@param value text_key
function POLITICAL_PARTY.set_name(id, value)
	return ffi.C.alice_political_party_set_name(id, value)
end
---@param id political_party_id
---@return ideology_id
function POLITICAL_PARTY.get_ideology(id)
	return ffi.C.alice_political_party_get_ideology(id)
end
---@param id political_party_id
---@param value ideology_id
function POLITICAL_PARTY.set_ideology(id, value)
	return ffi.C.alice_political_party_set_ideology(id, value)
end
---@param id political_party_id
---@param index issue_id
---@return issue_option_id
function POLITICAL_PARTY.get_party_issues(id, index)
	return ffi.C.alice_political_party_get_party_issues(id, index)
end
---@param id political_party_id
---@param index issue_id
---@param value issue_option_id
function POLITICAL_PARTY.set_party_issues(id, index, value)
	return ffi.C.alice_political_party_set_party_issues(id, index, value)
end
---@return number
function POLITICAL_PARTY.get_party_issues_size()
	return ffi.C.alice_political_party_get_party_issues_size()
end
---@param value number
function POLITICAL_PARTY.resize_party_issues(value)
	return ffi.C.alice_political_party_resize_party_issues(value)
end
