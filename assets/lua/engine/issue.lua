-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_issue_is_valid(int32_t api_arg_0_id);
uint32_t alice_issue_size();
void alice_issue_resize(uint32_t api_arg_0_value);
int32_t alice_issue_get_name(int32_t api_arg_0_id);
void alice_issue_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_issue_get_desc(int32_t api_arg_0_id);
void alice_issue_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_issue_get_is_next_step_only(int32_t api_arg_0_id);
void alice_issue_set_is_next_step_only(int32_t api_arg_0_id, bool api_arg_1_value);
bool alice_issue_get_is_administrative(int32_t api_arg_0_id);
void alice_issue_set_is_administrative(int32_t api_arg_0_id, bool api_arg_1_value);
uint8_t alice_issue_get_issue_type(int32_t api_arg_0_id);
void alice_issue_set_issue_type(int32_t api_arg_0_id, uint8_t api_arg_1_value);
]]
ISSUE = {}
---@param id issue_id
---@return number
function ISSUE.is_valid(id)
	return ffi.C.alice_issue_is_valid(id)
end
---@return number
function ISSUE.size()
	return ffi.C.alice_issue_size()
end
---@param value number
function ISSUE.resize(value)
	return ffi.C.alice_issue_resize(value)
end
---@param id issue_id
---@return text_key
function ISSUE.get_name(id)
	return ffi.C.alice_issue_get_name(id)
end
---@param id issue_id
---@param value text_key
function ISSUE.set_name(id, value)
	return ffi.C.alice_issue_set_name(id, value)
end
---@param id issue_id
---@return text_key
function ISSUE.get_desc(id)
	return ffi.C.alice_issue_get_desc(id)
end
---@param id issue_id
---@param value text_key
function ISSUE.set_desc(id, value)
	return ffi.C.alice_issue_set_desc(id, value)
end
---@param id issue_id
---@return boolean
function ISSUE.get_is_next_step_only(id)
	return ffi.C.alice_issue_get_is_next_step_only(id)
end
---@param id issue_id
---@param value boolean
function ISSUE.set_is_next_step_only(id, value)
	return ffi.C.alice_issue_set_is_next_step_only(id, value)
end
---@param id issue_id
---@return boolean
function ISSUE.get_is_administrative(id)
	return ffi.C.alice_issue_get_is_administrative(id)
end
---@param id issue_id
---@param value boolean
function ISSUE.set_is_administrative(id, value)
	return ffi.C.alice_issue_set_is_administrative(id, value)
end
---@param id issue_id
---@return number
function ISSUE.get_issue_type(id)
	return ffi.C.alice_issue_get_issue_type(id)
end
---@param id issue_id
---@param value number
function ISSUE.set_issue_type(id, value)
	return ffi.C.alice_issue_set_issue_type(id, value)
end
