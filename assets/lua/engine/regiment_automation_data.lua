-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_regiment_automation_data_is_valid(int32_t api_arg_0_id);
uint32_t alice_regiment_automation_data_size();
void alice_regiment_automation_data_resize(uint32_t api_arg_0_value);
bool alice_regiment_automation_data_get_await_command_execution_flag(int32_t api_arg_0_id);
void alice_regiment_automation_data_set_await_command_execution_flag(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_regiment_automation_data_get_target(int32_t api_arg_0_id);
void alice_regiment_automation_data_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_regiment_automation_data_get_ferry_target(int32_t api_arg_0_id);
void alice_regiment_automation_data_set_ferry_target(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_regiment_automation_data_get_ferry_origin(int32_t api_arg_0_id);
void alice_regiment_automation_data_set_ferry_origin(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_regiment_automation_data_get_automated_army_group_membership_regiment_as_regiment(int32_t api_arg_0_id);
int32_t alice_regiment_automation_data_get_automated_army_group_membership_regiment(int32_t api_arg_0_id);
int32_t alice_regiment_automation_data_get_automation_as_automation_data(int32_t api_arg_0_id);
int32_t alice_regiment_automation_data_get_automation(int32_t api_arg_0_id);
]]
REGIMENT_AUTOMATION_DATA = {}
---@param id regiment_automation_data_id
---@return number
function REGIMENT_AUTOMATION_DATA.is_valid(id)
	return ffi.C.alice_regiment_automation_data_is_valid(id)
end
---@return number
function REGIMENT_AUTOMATION_DATA.size()
	return ffi.C.alice_regiment_automation_data_size()
end
---@param value number
function REGIMENT_AUTOMATION_DATA.resize(value)
	return ffi.C.alice_regiment_automation_data_resize(value)
end
---@param id regiment_automation_data_id
---@return boolean
function REGIMENT_AUTOMATION_DATA.get_await_command_execution_flag(id)
	return ffi.C.alice_regiment_automation_data_get_await_command_execution_flag(id)
end
---@param id regiment_automation_data_id
---@param value boolean
function REGIMENT_AUTOMATION_DATA.set_await_command_execution_flag(id, value)
	return ffi.C.alice_regiment_automation_data_set_await_command_execution_flag(id, value)
end
---@param id regiment_automation_data_id
---@return province_id
function REGIMENT_AUTOMATION_DATA.get_target(id)
	return ffi.C.alice_regiment_automation_data_get_target(id)
end
---@param id regiment_automation_data_id
---@param value province_id
function REGIMENT_AUTOMATION_DATA.set_target(id, value)
	return ffi.C.alice_regiment_automation_data_set_target(id, value)
end
---@param id regiment_automation_data_id
---@return province_id
function REGIMENT_AUTOMATION_DATA.get_ferry_target(id)
	return ffi.C.alice_regiment_automation_data_get_ferry_target(id)
end
---@param id regiment_automation_data_id
---@param value province_id
function REGIMENT_AUTOMATION_DATA.set_ferry_target(id, value)
	return ffi.C.alice_regiment_automation_data_set_ferry_target(id, value)
end
---@param id regiment_automation_data_id
---@return province_id
function REGIMENT_AUTOMATION_DATA.get_ferry_origin(id)
	return ffi.C.alice_regiment_automation_data_get_ferry_origin(id)
end
---@param id regiment_automation_data_id
---@param value province_id
function REGIMENT_AUTOMATION_DATA.set_ferry_origin(id, value)
	return ffi.C.alice_regiment_automation_data_set_ferry_origin(id, value)
end
---@param id regiment_automation_data_id
---@return automated_army_group_membership_regiment_id
function REGIMENT_AUTOMATION_DATA.get_automated_army_group_membership_regiment_as_regiment(id)
	return ffi.C.alice_regiment_automation_data_get_automated_army_group_membership_regiment_as_regiment(id)
end
---@param id regiment_automation_data_id
---@return automated_army_group_membership_regiment_id
function REGIMENT_AUTOMATION_DATA.get_automated_army_group_membership_regiment(id)
	return ffi.C.alice_regiment_automation_data_get_automated_army_group_membership_regiment(id)
end
---@param id regiment_automation_data_id
---@return automation_id
function REGIMENT_AUTOMATION_DATA.get_automation_as_automation_data(id)
	return ffi.C.alice_regiment_automation_data_get_automation_as_automation_data(id)
end
---@param id regiment_automation_data_id
---@return automation_id
function REGIMENT_AUTOMATION_DATA.get_automation(id)
	return ffi.C.alice_regiment_automation_data_get_automation(id)
end
