-- GENERATED FILE: DO NOT EDIT --
--   PROVIDES FFI DECLARATIONS --
local ffi = require("ffi")

ffi.cdef[[
bool alice_national_identity_is_valid(int32_t api_arg_0_id);
uint32_t alice_national_identity_size();
void alice_national_identity_resize(uint32_t api_arg_0_value);
uint32_t alice_national_identity_get_color(int32_t api_arg_0_id);
void alice_national_identity_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value);
int32_t alice_national_identity_get_name(int32_t api_arg_0_id);
void alice_national_identity_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_national_identity_get_adjective(int32_t api_arg_0_id);
void alice_national_identity_set_adjective(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint32_t alice_national_identity_get_identifying_int(int32_t api_arg_0_id);
void alice_national_identity_set_identifying_int(int32_t api_arg_0_id, uint32_t api_arg_1_value);
int32_t alice_national_identity_get_unit_names_first(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_national_identity_set_unit_names_first(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_national_identity_get_unit_names_first_size();
void alice_national_identity_resize_unit_names_first(uint32_t api_arg_0_value);
uint8_t alice_national_identity_get_unit_names_count(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_national_identity_set_unit_names_count(int32_t api_arg_0_id, int32_t api_arg_1_id, uint8_t api_arg_2_value);
uint32_t alice_national_identity_get_unit_names_count_size();
void alice_national_identity_resize_unit_names_count(uint32_t api_arg_0_value);
int32_t alice_national_identity_get_political_party_first(int32_t api_arg_0_id);
void alice_national_identity_set_political_party_first(int32_t api_arg_0_id, int32_t api_arg_1_id);
uint8_t alice_national_identity_get_political_party_count(int32_t api_arg_0_id);
void alice_national_identity_set_political_party_count(int32_t api_arg_0_id, uint8_t api_arg_1_value);
int32_t alice_national_identity_get_government_flag_type(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_national_identity_set_government_flag_type(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_national_identity_get_government_flag_type_size();
void alice_national_identity_resize_government_flag_type(uint32_t api_arg_0_value);
int32_t alice_national_identity_get_government_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_national_identity_set_government_name(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_national_identity_get_government_name_size();
void alice_national_identity_resize_government_name(uint32_t api_arg_0_value);
int32_t alice_national_identity_get_government_adjective(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_national_identity_set_government_adjective(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_national_identity_get_government_adjective_size();
void alice_national_identity_resize_government_adjective(uint32_t api_arg_0_value);
int32_t alice_national_identity_get_government_ruler_name(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_national_identity_set_government_ruler_name(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id);
uint32_t alice_national_identity_get_government_ruler_name_size();
void alice_national_identity_resize_government_ruler_name(uint32_t api_arg_0_value);
uint32_t alice_national_identity_get_government_color(int32_t api_arg_0_id, int32_t api_arg_1_id);
void alice_national_identity_set_government_color(int32_t api_arg_0_id, int32_t api_arg_1_id, uint32_t api_arg_2_value);
uint32_t alice_national_identity_get_government_color_size();
void alice_national_identity_resize_government_color(uint32_t api_arg_0_value);
int32_t alice_national_identity_get_primary_culture(int32_t api_arg_0_id);
void alice_national_identity_set_primary_culture(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_national_identity_get_religion(int32_t api_arg_0_id);
void alice_national_identity_set_religion(int32_t api_arg_0_id, int32_t api_arg_1_id);
int32_t alice_national_identity_get_capital(int32_t api_arg_0_id);
void alice_national_identity_set_capital(int32_t api_arg_0_id, int32_t api_arg_1_id);
bool alice_national_identity_get_is_not_releasable(int32_t api_arg_0_id);
void alice_national_identity_set_is_not_releasable(int32_t api_arg_0_id, bool api_arg_1_value);
int32_t alice_national_identity_get_cultural_union_of_as_identity(int32_t api_arg_0_id);
int32_t alice_national_identity_get_cultural_union_of(int32_t api_arg_0_id);
int32_t alice_national_identity_get_range_core_as_identity(int32_t i);
int32_t alice_national_identity_get_index_core_as_identity(int32_t i, int32_t subindex);
int32_t alice_national_identity_get_identity_holder_as_identity(int32_t api_arg_0_id);
int32_t alice_national_identity_get_identity_holder(int32_t api_arg_0_id);
]]
NATIONAL_IDENTITY = {}
---@param id national_identity_id
---@return number
function NATIONAL_IDENTITY.is_valid(id)
	return ffi.C.alice_national_identity_is_valid(id)
end
---@return number
function NATIONAL_IDENTITY.size()
	return ffi.C.alice_national_identity_size()
end
---@param value number
function NATIONAL_IDENTITY.resize(value)
	return ffi.C.alice_national_identity_resize(value)
end
---@param id national_identity_id
---@return number
function NATIONAL_IDENTITY.get_color(id)
	return ffi.C.alice_national_identity_get_color(id)
end
---@param id national_identity_id
---@param value number
function NATIONAL_IDENTITY.set_color(id, value)
	return ffi.C.alice_national_identity_set_color(id, value)
end
---@param id national_identity_id
---@return text_key
function NATIONAL_IDENTITY.get_name(id)
	return ffi.C.alice_national_identity_get_name(id)
end
---@param id national_identity_id
---@param value text_key
function NATIONAL_IDENTITY.set_name(id, value)
	return ffi.C.alice_national_identity_set_name(id, value)
end
---@param id national_identity_id
---@return text_key
function NATIONAL_IDENTITY.get_adjective(id)
	return ffi.C.alice_national_identity_get_adjective(id)
end
---@param id national_identity_id
---@param value text_key
function NATIONAL_IDENTITY.set_adjective(id, value)
	return ffi.C.alice_national_identity_set_adjective(id, value)
end
---@param id national_identity_id
---@return number
function NATIONAL_IDENTITY.get_identifying_int(id)
	return ffi.C.alice_national_identity_get_identifying_int(id)
end
---@param id national_identity_id
---@param value number
function NATIONAL_IDENTITY.set_identifying_int(id, value)
	return ffi.C.alice_national_identity_set_identifying_int(id, value)
end
---@param id national_identity_id
---@param index unit_type_id
---@return unit_name_id
function NATIONAL_IDENTITY.get_unit_names_first(id, index)
	return ffi.C.alice_national_identity_get_unit_names_first(id, index)
end
---@param id national_identity_id
---@param index unit_type_id
---@param value unit_name_id
function NATIONAL_IDENTITY.set_unit_names_first(id, index, value)
	return ffi.C.alice_national_identity_set_unit_names_first(id, index, value)
end
---@return number
function NATIONAL_IDENTITY.get_unit_names_first_size()
	return ffi.C.alice_national_identity_get_unit_names_first_size()
end
---@param value number
function NATIONAL_IDENTITY.resize_unit_names_first(value)
	return ffi.C.alice_national_identity_resize_unit_names_first(value)
end
---@param id national_identity_id
---@param index unit_type_id
---@return number
function NATIONAL_IDENTITY.get_unit_names_count(id, index)
	return ffi.C.alice_national_identity_get_unit_names_count(id, index)
end
---@param id national_identity_id
---@param index unit_type_id
---@param value number
function NATIONAL_IDENTITY.set_unit_names_count(id, index, value)
	return ffi.C.alice_national_identity_set_unit_names_count(id, index, value)
end
---@return number
function NATIONAL_IDENTITY.get_unit_names_count_size()
	return ffi.C.alice_national_identity_get_unit_names_count_size()
end
---@param value number
function NATIONAL_IDENTITY.resize_unit_names_count(value)
	return ffi.C.alice_national_identity_resize_unit_names_count(value)
end
---@param id national_identity_id
---@return political_party_id
function NATIONAL_IDENTITY.get_political_party_first(id)
	return ffi.C.alice_national_identity_get_political_party_first(id)
end
---@param id national_identity_id
---@param value political_party_id
function NATIONAL_IDENTITY.set_political_party_first(id, value)
	return ffi.C.alice_national_identity_set_political_party_first(id, value)
end
---@param id national_identity_id
---@return number
function NATIONAL_IDENTITY.get_political_party_count(id)
	return ffi.C.alice_national_identity_get_political_party_count(id)
end
---@param id national_identity_id
---@param value number
function NATIONAL_IDENTITY.set_political_party_count(id, value)
	return ffi.C.alice_national_identity_set_political_party_count(id, value)
end
---@param id national_identity_id
---@param index government_type_id
---@return government_flag_id
function NATIONAL_IDENTITY.get_government_flag_type(id, index)
	return ffi.C.alice_national_identity_get_government_flag_type(id, index)
end
---@param id national_identity_id
---@param index government_type_id
---@param value government_flag_id
function NATIONAL_IDENTITY.set_government_flag_type(id, index, value)
	return ffi.C.alice_national_identity_set_government_flag_type(id, index, value)
end
---@return number
function NATIONAL_IDENTITY.get_government_flag_type_size()
	return ffi.C.alice_national_identity_get_government_flag_type_size()
end
---@param value number
function NATIONAL_IDENTITY.resize_government_flag_type(value)
	return ffi.C.alice_national_identity_resize_government_flag_type(value)
end
---@param id national_identity_id
---@param index government_type_id
---@return text_key
function NATIONAL_IDENTITY.get_government_name(id, index)
	return ffi.C.alice_national_identity_get_government_name(id, index)
end
---@param id national_identity_id
---@param index government_type_id
---@param value text_key
function NATIONAL_IDENTITY.set_government_name(id, index, value)
	return ffi.C.alice_national_identity_set_government_name(id, index, value)
end
---@return number
function NATIONAL_IDENTITY.get_government_name_size()
	return ffi.C.alice_national_identity_get_government_name_size()
end
---@param value number
function NATIONAL_IDENTITY.resize_government_name(value)
	return ffi.C.alice_national_identity_resize_government_name(value)
end
---@param id national_identity_id
---@param index government_type_id
---@return text_key
function NATIONAL_IDENTITY.get_government_adjective(id, index)
	return ffi.C.alice_national_identity_get_government_adjective(id, index)
end
---@param id national_identity_id
---@param index government_type_id
---@param value text_key
function NATIONAL_IDENTITY.set_government_adjective(id, index, value)
	return ffi.C.alice_national_identity_set_government_adjective(id, index, value)
end
---@return number
function NATIONAL_IDENTITY.get_government_adjective_size()
	return ffi.C.alice_national_identity_get_government_adjective_size()
end
---@param value number
function NATIONAL_IDENTITY.resize_government_adjective(value)
	return ffi.C.alice_national_identity_resize_government_adjective(value)
end
---@param id national_identity_id
---@param index government_type_id
---@return text_key
function NATIONAL_IDENTITY.get_government_ruler_name(id, index)
	return ffi.C.alice_national_identity_get_government_ruler_name(id, index)
end
---@param id national_identity_id
---@param index government_type_id
---@param value text_key
function NATIONAL_IDENTITY.set_government_ruler_name(id, index, value)
	return ffi.C.alice_national_identity_set_government_ruler_name(id, index, value)
end
---@return number
function NATIONAL_IDENTITY.get_government_ruler_name_size()
	return ffi.C.alice_national_identity_get_government_ruler_name_size()
end
---@param value number
function NATIONAL_IDENTITY.resize_government_ruler_name(value)
	return ffi.C.alice_national_identity_resize_government_ruler_name(value)
end
---@param id national_identity_id
---@param index government_type_id
---@return number
function NATIONAL_IDENTITY.get_government_color(id, index)
	return ffi.C.alice_national_identity_get_government_color(id, index)
end
---@param id national_identity_id
---@param index government_type_id
---@param value number
function NATIONAL_IDENTITY.set_government_color(id, index, value)
	return ffi.C.alice_national_identity_set_government_color(id, index, value)
end
---@return number
function NATIONAL_IDENTITY.get_government_color_size()
	return ffi.C.alice_national_identity_get_government_color_size()
end
---@param value number
function NATIONAL_IDENTITY.resize_government_color(value)
	return ffi.C.alice_national_identity_resize_government_color(value)
end
---@param id national_identity_id
---@return culture_id
function NATIONAL_IDENTITY.get_primary_culture(id)
	return ffi.C.alice_national_identity_get_primary_culture(id)
end
---@param id national_identity_id
---@param value culture_id
function NATIONAL_IDENTITY.set_primary_culture(id, value)
	return ffi.C.alice_national_identity_set_primary_culture(id, value)
end
---@param id national_identity_id
---@return religion_id
function NATIONAL_IDENTITY.get_religion(id)
	return ffi.C.alice_national_identity_get_religion(id)
end
---@param id national_identity_id
---@param value religion_id
function NATIONAL_IDENTITY.set_religion(id, value)
	return ffi.C.alice_national_identity_set_religion(id, value)
end
---@param id national_identity_id
---@return province_id
function NATIONAL_IDENTITY.get_capital(id)
	return ffi.C.alice_national_identity_get_capital(id)
end
---@param id national_identity_id
---@param value province_id
function NATIONAL_IDENTITY.set_capital(id, value)
	return ffi.C.alice_national_identity_set_capital(id, value)
end
---@param id national_identity_id
---@return boolean
function NATIONAL_IDENTITY.get_is_not_releasable(id)
	return ffi.C.alice_national_identity_get_is_not_releasable(id)
end
---@param id national_identity_id
---@param value boolean
function NATIONAL_IDENTITY.set_is_not_releasable(id, value)
	return ffi.C.alice_national_identity_set_is_not_releasable(id, value)
end
---@param id national_identity_id
---@return cultural_union_of_id
function NATIONAL_IDENTITY.get_cultural_union_of_as_identity(id)
	return ffi.C.alice_national_identity_get_cultural_union_of_as_identity(id)
end
---@param id national_identity_id
---@return cultural_union_of_id
function NATIONAL_IDENTITY.get_cultural_union_of(id)
	return ffi.C.alice_national_identity_get_cultural_union_of(id)
end
---@param id national_identity_id
---@return number
function NATIONAL_IDENTITY.get_range_length_core(id)
	return ffi.C.alice_national_identity_get_range_core_as_identity(id)
end
---@param id national_identity_id
---@param index number
---@return core_id
function NATIONAL_IDENTITY.get_item_from_range_core(id, index)
	return ffi.C.alice_national_identity_get_index_core_as_identity(id, index)
end
---@param id national_identity_id
---@return identity_holder_id
function NATIONAL_IDENTITY.get_identity_holder_as_identity(id)
	return ffi.C.alice_national_identity_get_identity_holder_as_identity(id)
end
---@param id national_identity_id
---@return identity_holder_id
function NATIONAL_IDENTITY.get_identity_holder(id)
	return ffi.C.alice_national_identity_get_identity_holder(id)
end
