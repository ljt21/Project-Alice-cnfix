-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_regiment_is_valid(int32_t api_arg_0_id);
uint32_t alice_regiment_size();
void alice_regiment_resize(uint32_t api_arg_0_value);
int32_t alice_regiment_get_name(int32_t api_arg_0_id);
void alice_regiment_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_regiment_get_type(int32_t api_arg_0_id);
void alice_regiment_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id);
float alice_regiment_get_strength(int32_t api_arg_0_id);
void alice_regiment_set_strength(int32_t api_arg_0_id, float api_arg_1_value);
float alice_regiment_get_pending_combat_damage(int32_t api_arg_0_id);
void alice_regiment_set_pending_combat_damage(int32_t api_arg_0_id, float api_arg_1_value);
float alice_regiment_get_pending_attrition_damage(int32_t api_arg_0_id);
void alice_regiment_set_pending_attrition_damage(int32_t api_arg_0_id, float api_arg_1_value);
float alice_regiment_get_org(int32_t api_arg_0_id);
void alice_regiment_set_org(int32_t api_arg_0_id, float api_arg_1_value);
float alice_regiment_get_experience(int32_t api_arg_0_id);
void alice_regiment_set_experience(int32_t api_arg_0_id, float api_arg_1_value);
int32_t alice_regiment_get_automation_as_regiment(int32_t api_arg_0_id);
int32_t alice_regiment_get_automation(int32_t api_arg_0_id);
int32_t alice_regiment_get_army_membership_as_regiment(int32_t api_arg_0_id);
int32_t alice_regiment_get_army_membership(int32_t api_arg_0_id);
int32_t alice_regiment_get_regiment_source_as_regiment(int32_t api_arg_0_id);
int32_t alice_regiment_get_regiment_source(int32_t api_arg_0_id);
]]
REGIMENT = {}
---@param id regiment_id
---@return number
function REGIMENT.is_valid(id)
	return ffi.C.alice_regiment_is_valid(id)
end
---@return number
function REGIMENT.size()
	return ffi.C.alice_regiment_size()
end
---@param value number
function REGIMENT.resize(value)
	return ffi.C.alice_regiment_resize(value)
end
---@param id regiment_id
---@return unit_name_id
function REGIMENT.get_name(id)
	return ffi.C.alice_regiment_get_name(id)
end
---@param id regiment_id
---@param value unit_name_id
function REGIMENT.set_name(id, value)
	return ffi.C.alice_regiment_set_name(id, value)
end
---@param id regiment_id
---@return unit_type_id
function REGIMENT.get_type(id)
	return ffi.C.alice_regiment_get_type(id)
end
---@param id regiment_id
---@param value unit_type_id
function REGIMENT.set_type(id, value)
	return ffi.C.alice_regiment_set_type(id, value)
end
---@param id regiment_id
---@return number
function REGIMENT.get_strength(id)
	return ffi.C.alice_regiment_get_strength(id)
end
---@param id regiment_id
---@param value number
function REGIMENT.set_strength(id, value)
	return ffi.C.alice_regiment_set_strength(id, value)
end
---@param id regiment_id
---@return number
function REGIMENT.get_pending_combat_damage(id)
	return ffi.C.alice_regiment_get_pending_combat_damage(id)
end
---@param id regiment_id
---@param value number
function REGIMENT.set_pending_combat_damage(id, value)
	return ffi.C.alice_regiment_set_pending_combat_damage(id, value)
end
---@param id regiment_id
---@return number
function REGIMENT.get_pending_attrition_damage(id)
	return ffi.C.alice_regiment_get_pending_attrition_damage(id)
end
---@param id regiment_id
---@param value number
function REGIMENT.set_pending_attrition_damage(id, value)
	return ffi.C.alice_regiment_set_pending_attrition_damage(id, value)
end
---@param id regiment_id
---@return number
function REGIMENT.get_org(id)
	return ffi.C.alice_regiment_get_org(id)
end
---@param id regiment_id
---@param value number
function REGIMENT.set_org(id, value)
	return ffi.C.alice_regiment_set_org(id, value)
end
---@param id regiment_id
---@return number
function REGIMENT.get_experience(id)
	return ffi.C.alice_regiment_get_experience(id)
end
---@param id regiment_id
---@param value number
function REGIMENT.set_experience(id, value)
	return ffi.C.alice_regiment_set_experience(id, value)
end
---@param id regiment_id
---@return automation_id
function REGIMENT.get_automation_as_regiment(id)
	return ffi.C.alice_regiment_get_automation_as_regiment(id)
end
---@param id regiment_id
---@return automation_id
function REGIMENT.get_automation(id)
	return ffi.C.alice_regiment_get_automation(id)
end
---@param id regiment_id
---@return army_membership_id
function REGIMENT.get_army_membership_as_regiment(id)
	return ffi.C.alice_regiment_get_army_membership_as_regiment(id)
end
---@param id regiment_id
---@return army_membership_id
function REGIMENT.get_army_membership(id)
	return ffi.C.alice_regiment_get_army_membership(id)
end
---@param id regiment_id
---@return regiment_source_id
function REGIMENT.get_regiment_source_as_regiment(id)
	return ffi.C.alice_regiment_get_regiment_source_as_regiment(id)
end
---@param id regiment_id
---@return regiment_source_id
function REGIMENT.get_regiment_source(id)
	return ffi.C.alice_regiment_get_regiment_source(id)
end
