-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_automation_is_valid(int32_t api_arg_0_id);
uint32_t alice_automation_size();
void alice_automation_resize(uint32_t api_arg_0_value);
int32_t alice_automation_get_automation_data(int32_t api_arg_0_id);
void alice_automation_set_automation_data(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_automation_try_set_automation_data(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_automation_get_regiment(int32_t api_arg_0_id);
void alice_automation_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_automation_try_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id);
]]
AUTOMATION = {}
---@param id automation_id
---@return number
function AUTOMATION.is_valid(id)
	return ffi.C.alice_automation_is_valid(id)
end
---@return number
function AUTOMATION.size()
	return ffi.C.alice_automation_size()
end
---@param value number
function AUTOMATION.resize(value)
	return ffi.C.alice_automation_resize(value)
end
---@param id automation_id
---@return regiment_automation_data_id
function AUTOMATION.get_automation_data(id)
	return ffi.C.alice_automation_get_automation_data(id)
end
---@param id automation_id
---@param linked_id regiment_automation_data_id
function AUTOMATION.set_automation_data(id, linked_id)
	return ffi.C.alice_automation_set_automation_data(id, linked_id)
end
---@param id automation_id
---@param linked_id regiment_automation_data_id
function AUTOMATION.try_set_automation_data(id, linked_id)
	return ffi.C.alice_automation_try_set_automation_data(id, linked_id)
end
---@param id automation_id
---@return regiment_id
function AUTOMATION.get_regiment(id)
	return ffi.C.alice_automation_get_regiment(id)
end
---@param id automation_id
---@param linked_id regiment_id
function AUTOMATION.set_regiment(id, linked_id)
	return ffi.C.alice_automation_set_regiment(id, linked_id)
end
---@param id automation_id
---@param linked_id regiment_id
function AUTOMATION.try_set_regiment(id, linked_id)
	return ffi.C.alice_automation_try_set_regiment(id, linked_id)
end
