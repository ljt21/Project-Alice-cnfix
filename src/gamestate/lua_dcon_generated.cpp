//
// This file was automatically generated from: D:/WORK_DIR/ljt21/Project-Alice-cnfix/src/gamestate/dcon_generated.txt
// EDIT AT YOUR OWN RISK; all changes will be lost upon regeneration
// NOT SUITABLE FOR USE IN CRITICAL SOFTWARE WHERE LIVES OR LIVELIHOODS DEPEND ON THE CORRECT OPERATION
//

#define DCON_LUADLL_EXPORTS
#include "lua_dcon_generated.hpp"
#include <fstream>
#include <filesystem>
#include <iostream>

static void (*release_object_function)(int32_t) = nullptr;

void alice_set_release_object_function(void (*fn)(int32_t)) {
	release_object_function = fn;
}
bool alice_government_flag_is_valid(int32_t api_arg_0_id){
	dcon::government_flag_id container_arg_0_id = dcon::government_flag_id{dcon::government_flag_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.government_flag_is_valid(container_arg_0_id);
}
uint32_t alice_government_flag_size(){
	return alice_state_ptr->world.government_flag_size();
}
void alice_government_flag_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.government_flag_resize(container_arg_0_value);
}
int32_t alice_government_flag_get_filename(int32_t api_arg_0_id){
	dcon::government_flag_id container_arg_0_id = dcon::government_flag_id{dcon::government_flag_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.government_flag_get_filename(container_arg_0_id);
	return result.index();
}
void alice_government_flag_set_filename(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::government_flag_id container_arg_0_id = dcon::government_flag_id{dcon::government_flag_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.government_flag_set_filename(container_arg_0_id, container_arg_1_id);
}

void alice_pop_back_government_flag() { 
	if(alice_state_ptr->world.government_flag_size() > 0) {
		auto index = dcon::government_flag_id{dcon::government_flag_id::value_base_t(alice_state_ptr->world.government_flag_size() - 1)};
		alice_state_ptr->world.pop_back_government_flag();
	}
}
int32_t alice_create_government_flag() { 
	auto result = alice_state_ptr->world.create_government_flag();
	return result.index();
}
bool alice_national_identity_is_valid(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_identity_is_valid(container_arg_0_id);
}
uint32_t alice_national_identity_size(){
	return alice_state_ptr->world.national_identity_size();
}
void alice_national_identity_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.national_identity_resize(container_arg_0_value);
}
uint32_t alice_national_identity_get_color(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_identity_get_color(container_arg_0_id);
}
void alice_national_identity_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_identity_set_color(container_arg_0_id, container_arg_1_value);
}
int32_t alice_national_identity_get_name(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.national_identity_get_name(container_arg_0_id);
	return result.index();
}
void alice_national_identity_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_identity_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_national_identity_get_adjective(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.national_identity_get_adjective(container_arg_0_id);
	return result.index();
}
void alice_national_identity_set_adjective(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_identity_set_adjective(container_arg_0_id, container_arg_1_id);
}
uint32_t alice_national_identity_get_identifying_int(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_identity_get_identifying_int(container_arg_0_id);
}
void alice_national_identity_set_identifying_int(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_identity_set_identifying_int(container_arg_0_id, container_arg_1_value);
}
int32_t alice_national_identity_get_unit_names_first(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	dcon::unit_name_id result = alice_state_ptr->world.national_identity_get_unit_names_first(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_national_identity_set_unit_names_first(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	dcon::unit_name_id container_arg_2_id = dcon::unit_name_id{dcon::unit_name_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.national_identity_set_unit_names_first(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_national_identity_get_unit_names_first_size(){
	return alice_state_ptr->world.national_identity_get_unit_names_first_size();
}
void alice_national_identity_resize_unit_names_first(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.national_identity_resize_unit_names_first(container_arg_0_value);
}
uint8_t alice_national_identity_get_unit_names_count(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.national_identity_get_unit_names_count(container_arg_0_id, container_arg_1_id);
}
void alice_national_identity_set_unit_names_count(int32_t api_arg_0_id, int32_t api_arg_1_id, uint8_t api_arg_2_value){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	uint8_t container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.national_identity_set_unit_names_count(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_national_identity_get_unit_names_count_size(){
	return alice_state_ptr->world.national_identity_get_unit_names_count_size();
}
void alice_national_identity_resize_unit_names_count(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.national_identity_resize_unit_names_count(container_arg_0_value);
}
int32_t alice_national_identity_get_political_party_first(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::political_party_id result = alice_state_ptr->world.national_identity_get_political_party_first(container_arg_0_id);
	return result.index();
}
void alice_national_identity_set_political_party_first(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::political_party_id container_arg_1_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_identity_set_political_party_first(container_arg_0_id, container_arg_1_id);
}
uint8_t alice_national_identity_get_political_party_count(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_identity_get_political_party_count(container_arg_0_id);
}
void alice_national_identity_set_political_party_count(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_identity_set_political_party_count(container_arg_0_id, container_arg_1_value);
}
int32_t alice_national_identity_get_government_flag_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	dcon::government_flag_id result = alice_state_ptr->world.national_identity_get_government_flag_type(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_national_identity_set_government_flag_type(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	dcon::government_flag_id container_arg_2_id = dcon::government_flag_id{dcon::government_flag_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.national_identity_set_government_flag_type(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_national_identity_get_government_flag_type_size(){
	return alice_state_ptr->world.national_identity_get_government_flag_type_size();
}
void alice_national_identity_resize_government_flag_type(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.national_identity_resize_government_flag_type(container_arg_0_value);
}
int32_t alice_national_identity_get_government_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	dcon::text_key result = alice_state_ptr->world.national_identity_get_government_name(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_national_identity_set_government_name(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	dcon::text_key container_arg_2_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.national_identity_set_government_name(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_national_identity_get_government_name_size(){
	return alice_state_ptr->world.national_identity_get_government_name_size();
}
void alice_national_identity_resize_government_name(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.national_identity_resize_government_name(container_arg_0_value);
}
int32_t alice_national_identity_get_government_adjective(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	dcon::text_key result = alice_state_ptr->world.national_identity_get_government_adjective(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_national_identity_set_government_adjective(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	dcon::text_key container_arg_2_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.national_identity_set_government_adjective(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_national_identity_get_government_adjective_size(){
	return alice_state_ptr->world.national_identity_get_government_adjective_size();
}
void alice_national_identity_resize_government_adjective(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.national_identity_resize_government_adjective(container_arg_0_value);
}
int32_t alice_national_identity_get_government_ruler_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	dcon::text_key result = alice_state_ptr->world.national_identity_get_government_ruler_name(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_national_identity_set_government_ruler_name(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	dcon::text_key container_arg_2_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.national_identity_set_government_ruler_name(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_national_identity_get_government_ruler_name_size(){
	return alice_state_ptr->world.national_identity_get_government_ruler_name_size();
}
void alice_national_identity_resize_government_ruler_name(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.national_identity_resize_government_ruler_name(container_arg_0_value);
}
uint32_t alice_national_identity_get_government_color(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.national_identity_get_government_color(container_arg_0_id, container_arg_1_id);
}
void alice_national_identity_set_government_color(int32_t api_arg_0_id, int32_t api_arg_1_id, uint32_t api_arg_2_value){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	uint32_t container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.national_identity_set_government_color(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_national_identity_get_government_color_size(){
	return alice_state_ptr->world.national_identity_get_government_color_size();
}
void alice_national_identity_resize_government_color(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.national_identity_resize_government_color(container_arg_0_value);
}
int32_t alice_national_identity_get_primary_culture(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::culture_id result = alice_state_ptr->world.national_identity_get_primary_culture(container_arg_0_id);
	return result.index();
}
void alice_national_identity_set_primary_culture(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_identity_set_primary_culture(container_arg_0_id, container_arg_1_id);
}
int32_t alice_national_identity_get_religion(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::religion_id result = alice_state_ptr->world.national_identity_get_religion(container_arg_0_id);
	return result.index();
}
void alice_national_identity_set_religion(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::religion_id container_arg_1_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_identity_set_religion(container_arg_0_id, container_arg_1_id);
}
int32_t alice_national_identity_get_capital(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.national_identity_get_capital(container_arg_0_id);
	return result.index();
}
void alice_national_identity_set_capital(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_identity_set_capital(container_arg_0_id, container_arg_1_id);
}
bool alice_national_identity_get_is_not_releasable(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_identity_get_is_not_releasable(container_arg_0_id);
}
void alice_national_identity_set_is_not_releasable(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_identity_set_is_not_releasable(container_arg_0_id, container_arg_1_value);
}
int32_t alice_national_identity_get_cultural_union_of_as_identity(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::cultural_union_of_id result = alice_state_ptr->world.national_identity_get_cultural_union_of_as_identity(container_arg_0_id);
	return result.index();
}
int32_t alice_national_identity_get_cultural_union_of(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::cultural_union_of_id result = alice_state_ptr->world.national_identity_get_cultural_union_of(container_arg_0_id);
	return result.index();
}
int32_t alice_national_identity_get_range_core_as_identity(int32_t i) { 
	auto index = dcon::national_identity_id{dcon::national_identity_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.national_identity_get_core_as_identity(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_national_identity_get_index_core_as_identity(int32_t i, int32_t subindex) { 
	auto index = dcon::national_identity_id{dcon::national_identity_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.national_identity_get_core_as_identity(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_national_identity_get_range_core(int32_t i) { 
	auto index = dcon::national_identity_id{dcon::national_identity_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.national_identity_get_core_as_identity(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_national_identity_get_index_core(int32_t i, int32_t subindex) { 
	auto index = dcon::national_identity_id{dcon::national_identity_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.national_identity_get_core_as_identity(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_national_identity_get_identity_holder_as_identity(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::identity_holder_id result = alice_state_ptr->world.national_identity_get_identity_holder_as_identity(container_arg_0_id);
	return result.index();
}
int32_t alice_national_identity_get_identity_holder(int32_t api_arg_0_id){
	dcon::national_identity_id container_arg_0_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_0_id)};
	dcon::identity_holder_id result = alice_state_ptr->world.national_identity_get_identity_holder(container_arg_0_id);
	return result.index();
}

void alice_pop_back_national_identity() { 
	if(alice_state_ptr->world.national_identity_size() > 0) {
		auto index = dcon::national_identity_id{dcon::national_identity_id::value_base_t(alice_state_ptr->world.national_identity_size() - 1)};
		alice_state_ptr->world.pop_back_national_identity();
	}
}
int32_t alice_create_national_identity() { 
	auto result = alice_state_ptr->world.create_national_identity();
	return result.index();
}
bool alice_political_party_is_valid(int32_t api_arg_0_id){
	dcon::political_party_id container_arg_0_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.political_party_is_valid(container_arg_0_id);
}
uint32_t alice_political_party_size(){
	return alice_state_ptr->world.political_party_size();
}
void alice_political_party_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.political_party_resize(container_arg_0_value);
}
int32_t alice_political_party_get_name(int32_t api_arg_0_id){
	dcon::political_party_id container_arg_0_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.political_party_get_name(container_arg_0_id);
	return result.index();
}
void alice_political_party_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::political_party_id container_arg_0_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.political_party_set_name(container_arg_0_id, container_arg_1_id);
}
sys::date* alice_political_party_get_start_date(int32_t api_arg_0_id){
	dcon::political_party_id container_arg_0_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.political_party_get_start_date(container_arg_0_id);
}
sys::date* alice_political_party_get_end_date(int32_t api_arg_0_id){
	dcon::political_party_id container_arg_0_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.political_party_get_end_date(container_arg_0_id);
}
int32_t alice_political_party_get_ideology(int32_t api_arg_0_id){
	dcon::political_party_id container_arg_0_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id result = alice_state_ptr->world.political_party_get_ideology(container_arg_0_id);
	return result.index();
}
void alice_political_party_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::political_party_id container_arg_0_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.political_party_set_ideology(container_arg_0_id, container_arg_1_id);
}
int32_t alice_political_party_get_party_issues(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::political_party_id container_arg_0_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_0_id)};
	dcon::issue_id container_arg_1_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_1_id)};
	dcon::issue_option_id result = alice_state_ptr->world.political_party_get_party_issues(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_political_party_set_party_issues(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::political_party_id container_arg_0_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_0_id)};
	dcon::issue_id container_arg_1_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_1_id)};
	dcon::issue_option_id container_arg_2_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.political_party_set_party_issues(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_political_party_get_party_issues_size(){
	return alice_state_ptr->world.political_party_get_party_issues_size();
}
void alice_political_party_resize_party_issues(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.political_party_resize_party_issues(container_arg_0_value);
}
dcon::trigger_key* alice_political_party_get_trigger(int32_t api_arg_0_id){
	dcon::political_party_id container_arg_0_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.political_party_get_trigger(container_arg_0_id);
}

void alice_pop_back_political_party() { 
	if(alice_state_ptr->world.political_party_size() > 0) {
		auto index = dcon::political_party_id{dcon::political_party_id::value_base_t(alice_state_ptr->world.political_party_size() - 1)};
		alice_state_ptr->world.pop_back_political_party();
	}
}
int32_t alice_create_political_party() { 
	auto result = alice_state_ptr->world.create_political_party();
	return result.index();
}
bool alice_leader_images_is_valid(int32_t api_arg_0_id){
	dcon::leader_images_id container_arg_0_id = dcon::leader_images_id{dcon::leader_images_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_images_is_valid(container_arg_0_id);
}
uint32_t alice_leader_images_size(){
	return alice_state_ptr->world.leader_images_size();
}
void alice_leader_images_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.leader_images_resize(container_arg_0_value);
}

void alice_pop_back_leader_images() { 
	if(alice_state_ptr->world.leader_images_size() > 0) {
		auto index = dcon::leader_images_id{dcon::leader_images_id::value_base_t(alice_state_ptr->world.leader_images_size() - 1)};
		alice_state_ptr->world.pop_back_leader_images();
	}
}
int32_t alice_create_leader_images() { 
	auto result = alice_state_ptr->world.create_leader_images();
	return result.index();
}
bool alice_religion_is_valid(int32_t api_arg_0_id){
	dcon::religion_id container_arg_0_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.religion_is_valid(container_arg_0_id);
}
uint32_t alice_religion_size(){
	return alice_state_ptr->world.religion_size();
}
void alice_religion_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.religion_resize(container_arg_0_value);
}
int32_t alice_religion_get_name(int32_t api_arg_0_id){
	dcon::religion_id container_arg_0_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.religion_get_name(container_arg_0_id);
	return result.index();
}
void alice_religion_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::religion_id container_arg_0_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.religion_set_name(container_arg_0_id, container_arg_1_id);
}
uint32_t alice_religion_get_color(int32_t api_arg_0_id){
	dcon::religion_id container_arg_0_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.religion_get_color(container_arg_0_id);
}
void alice_religion_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::religion_id container_arg_0_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.religion_set_color(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_religion_get_icon(int32_t api_arg_0_id){
	dcon::religion_id container_arg_0_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.religion_get_icon(container_arg_0_id);
}
void alice_religion_set_icon(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::religion_id container_arg_0_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.religion_set_icon(container_arg_0_id, container_arg_1_value);
}
bool alice_religion_get_is_pagan(int32_t api_arg_0_id){
	dcon::religion_id container_arg_0_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.religion_get_is_pagan(container_arg_0_id);
}
void alice_religion_set_is_pagan(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::religion_id container_arg_0_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.religion_set_is_pagan(container_arg_0_id, container_arg_1_value);
}
int32_t alice_religion_get_nation_modifier(int32_t api_arg_0_id){
	dcon::religion_id container_arg_0_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id result = alice_state_ptr->world.religion_get_nation_modifier(container_arg_0_id);
	return result.index();
}
void alice_religion_set_nation_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::religion_id container_arg_0_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id container_arg_1_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.religion_set_nation_modifier(container_arg_0_id, container_arg_1_id);
}

void alice_pop_back_religion() { 
	if(alice_state_ptr->world.religion_size() > 0) {
		auto index = dcon::religion_id{dcon::religion_id::value_base_t(alice_state_ptr->world.religion_size() - 1)};
		alice_state_ptr->world.pop_back_religion();
	}
}
int32_t alice_create_religion() { 
	auto result = alice_state_ptr->world.create_religion();
	return result.index();
}
bool alice_culture_group_is_valid(int32_t api_arg_0_id){
	dcon::culture_group_id container_arg_0_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.culture_group_is_valid(container_arg_0_id);
}
uint32_t alice_culture_group_size(){
	return alice_state_ptr->world.culture_group_size();
}
void alice_culture_group_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.culture_group_resize(container_arg_0_value);
}
int32_t alice_culture_group_get_name(int32_t api_arg_0_id){
	dcon::culture_group_id container_arg_0_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.culture_group_get_name(container_arg_0_id);
	return result.index();
}
void alice_culture_group_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::culture_group_id container_arg_0_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.culture_group_set_name(container_arg_0_id, container_arg_1_id);
}
bool alice_culture_group_get_is_overseas(int32_t api_arg_0_id){
	dcon::culture_group_id container_arg_0_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.culture_group_get_is_overseas(container_arg_0_id);
}
void alice_culture_group_set_is_overseas(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::culture_group_id container_arg_0_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.culture_group_set_is_overseas(container_arg_0_id, container_arg_1_value);
}
int32_t alice_culture_group_get_leader(int32_t api_arg_0_id){
	dcon::culture_group_id container_arg_0_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_0_id)};
	dcon::leader_images_id result = alice_state_ptr->world.culture_group_get_leader(container_arg_0_id);
	return result.index();
}
void alice_culture_group_set_leader(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::culture_group_id container_arg_0_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_0_id)};
	dcon::leader_images_id container_arg_1_id = dcon::leader_images_id{dcon::leader_images_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.culture_group_set_leader(container_arg_0_id, container_arg_1_id);
}
int32_t alice_culture_group_get_range_culture_group_membership_as_group(int32_t i) { 
	auto index = dcon::culture_group_id{dcon::culture_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.culture_group_get_culture_group_membership_as_group(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_culture_group_get_index_culture_group_membership_as_group(int32_t i, int32_t subindex) { 
	auto index = dcon::culture_group_id{dcon::culture_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.culture_group_get_culture_group_membership_as_group(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_culture_group_get_range_culture_group_membership(int32_t i) { 
	auto index = dcon::culture_group_id{dcon::culture_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.culture_group_get_culture_group_membership_as_group(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_culture_group_get_index_culture_group_membership(int32_t i, int32_t subindex) { 
	auto index = dcon::culture_group_id{dcon::culture_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.culture_group_get_culture_group_membership_as_group(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_culture_group_get_cultural_union_of_as_culture_group(int32_t api_arg_0_id){
	dcon::culture_group_id container_arg_0_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_0_id)};
	dcon::cultural_union_of_id result = alice_state_ptr->world.culture_group_get_cultural_union_of_as_culture_group(container_arg_0_id);
	return result.index();
}
int32_t alice_culture_group_get_cultural_union_of(int32_t api_arg_0_id){
	dcon::culture_group_id container_arg_0_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_0_id)};
	dcon::cultural_union_of_id result = alice_state_ptr->world.culture_group_get_cultural_union_of(container_arg_0_id);
	return result.index();
}

void alice_pop_back_culture_group() { 
	if(alice_state_ptr->world.culture_group_size() > 0) {
		auto index = dcon::culture_group_id{dcon::culture_group_id::value_base_t(alice_state_ptr->world.culture_group_size() - 1)};
		alice_state_ptr->world.pop_back_culture_group();
	}
}
int32_t alice_create_culture_group() { 
	auto result = alice_state_ptr->world.create_culture_group();
	return result.index();
}
bool alice_culture_is_valid(int32_t api_arg_0_id){
	dcon::culture_id container_arg_0_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.culture_is_valid(container_arg_0_id);
}
uint32_t alice_culture_size(){
	return alice_state_ptr->world.culture_size();
}
void alice_culture_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.culture_resize(container_arg_0_value);
}
int32_t alice_culture_get_name(int32_t api_arg_0_id){
	dcon::culture_id container_arg_0_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.culture_get_name(container_arg_0_id);
	return result.index();
}
void alice_culture_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::culture_id container_arg_0_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.culture_set_name(container_arg_0_id, container_arg_1_id);
}
uint32_t alice_culture_get_color(int32_t api_arg_0_id){
	dcon::culture_id container_arg_0_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.culture_get_color(container_arg_0_id);
}
void alice_culture_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::culture_id container_arg_0_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.culture_set_color(container_arg_0_id, container_arg_1_value);
}
int8_t alice_culture_get_radicalism(int32_t api_arg_0_id){
	dcon::culture_id container_arg_0_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.culture_get_radicalism(container_arg_0_id);
}
void alice_culture_set_radicalism(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::culture_id container_arg_0_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.culture_set_radicalism(container_arg_0_id, container_arg_1_value);
}
int32_t alice_culture_get_culture_group_membership_as_member(int32_t api_arg_0_id){
	dcon::culture_id container_arg_0_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_0_id)};
	dcon::culture_group_membership_id result = alice_state_ptr->world.culture_get_culture_group_membership_as_member(container_arg_0_id);
	return result.index();
}
int32_t alice_culture_get_culture_group_membership(int32_t api_arg_0_id){
	dcon::culture_id container_arg_0_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_0_id)};
	dcon::culture_group_membership_id result = alice_state_ptr->world.culture_get_culture_group_membership(container_arg_0_id);
	return result.index();
}

void alice_pop_back_culture() { 
	if(alice_state_ptr->world.culture_size() > 0) {
		auto index = dcon::culture_id{dcon::culture_id::value_base_t(alice_state_ptr->world.culture_size() - 1)};
		alice_state_ptr->world.pop_back_culture();
	}
}
int32_t alice_create_culture() { 
	auto result = alice_state_ptr->world.create_culture();
	return result.index();
}
bool alice_culture_group_membership_is_valid(int32_t api_arg_0_id){
	dcon::culture_group_membership_id container_arg_0_id = dcon::culture_group_membership_id{dcon::culture_group_membership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.culture_group_membership_is_valid(container_arg_0_id);
}
uint32_t alice_culture_group_membership_size(){
	return alice_state_ptr->world.culture_group_membership_size();
}
void alice_culture_group_membership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.culture_group_membership_resize(container_arg_0_value);
}
int32_t alice_culture_group_membership_get_member(int32_t api_arg_0_id){
	dcon::culture_group_membership_id container_arg_0_id = dcon::culture_group_membership_id{dcon::culture_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::culture_id result = alice_state_ptr->world.culture_group_membership_get_member(container_arg_0_id);
	return result.index();
}
void alice_culture_group_membership_set_member(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::culture_group_membership_id container_arg_0_id = dcon::culture_group_membership_id{dcon::culture_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.culture_group_membership_set_member(container_arg_0_id, container_arg_1_id);
}
void alice_culture_group_membership_try_set_member(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::culture_group_membership_id container_arg_0_id = dcon::culture_group_membership_id{dcon::culture_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.culture_group_membership_try_set_member(container_arg_0_id, container_arg_1_id);
}
int32_t alice_culture_group_membership_get_group(int32_t api_arg_0_id){
	dcon::culture_group_membership_id container_arg_0_id = dcon::culture_group_membership_id{dcon::culture_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::culture_group_id result = alice_state_ptr->world.culture_group_membership_get_group(container_arg_0_id);
	return result.index();
}
void alice_culture_group_membership_set_group(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::culture_group_membership_id container_arg_0_id = dcon::culture_group_membership_id{dcon::culture_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::culture_group_id container_arg_1_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.culture_group_membership_set_group(container_arg_0_id, container_arg_1_id);
}
void alice_culture_group_membership_try_set_group(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::culture_group_membership_id container_arg_0_id = dcon::culture_group_membership_id{dcon::culture_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::culture_group_id container_arg_1_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.culture_group_membership_try_set_group(container_arg_0_id, container_arg_1_id);
}

void alice_delete_culture_group_membership(int32_t j) { 
	auto index = dcon::culture_group_membership_id{dcon::culture_group_membership_id::value_base_t(j)};
	alice_state_ptr->world.delete_culture_group_membership(index);
}
int32_t alice_try_create_culture_group_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_culture_group_membership(dcon::culture_id{dcon::culture_id::value_base_t(p1)}, dcon::culture_group_id{dcon::culture_group_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_culture_group_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_culture_group_membership(dcon::culture_id{dcon::culture_id::value_base_t(p1)}, dcon::culture_group_id{dcon::culture_group_id::value_base_t(p2)});
	return result.index();
}
bool alice_cultural_union_of_is_valid(int32_t api_arg_0_id){
	dcon::cultural_union_of_id container_arg_0_id = dcon::cultural_union_of_id{dcon::cultural_union_of_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cultural_union_of_is_valid(container_arg_0_id);
}
uint32_t alice_cultural_union_of_size(){
	return alice_state_ptr->world.cultural_union_of_size();
}
void alice_cultural_union_of_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.cultural_union_of_resize(container_arg_0_value);
}
int32_t alice_cultural_union_of_get_identity(int32_t api_arg_0_id){
	dcon::cultural_union_of_id container_arg_0_id = dcon::cultural_union_of_id{dcon::cultural_union_of_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id result = alice_state_ptr->world.cultural_union_of_get_identity(container_arg_0_id);
	return result.index();
}
void alice_cultural_union_of_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cultural_union_of_id container_arg_0_id = dcon::cultural_union_of_id{dcon::cultural_union_of_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cultural_union_of_set_identity(container_arg_0_id, container_arg_1_id);
}
void alice_cultural_union_of_try_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cultural_union_of_id container_arg_0_id = dcon::cultural_union_of_id{dcon::cultural_union_of_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cultural_union_of_try_set_identity(container_arg_0_id, container_arg_1_id);
}
int32_t alice_cultural_union_of_get_culture_group(int32_t api_arg_0_id){
	dcon::cultural_union_of_id container_arg_0_id = dcon::cultural_union_of_id{dcon::cultural_union_of_id::value_base_t(api_arg_0_id)};
	dcon::culture_group_id result = alice_state_ptr->world.cultural_union_of_get_culture_group(container_arg_0_id);
	return result.index();
}
void alice_cultural_union_of_set_culture_group(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cultural_union_of_id container_arg_0_id = dcon::cultural_union_of_id{dcon::cultural_union_of_id::value_base_t(api_arg_0_id)};
	dcon::culture_group_id container_arg_1_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cultural_union_of_set_culture_group(container_arg_0_id, container_arg_1_id);
}
void alice_cultural_union_of_try_set_culture_group(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cultural_union_of_id container_arg_0_id = dcon::cultural_union_of_id{dcon::cultural_union_of_id::value_base_t(api_arg_0_id)};
	dcon::culture_group_id container_arg_1_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cultural_union_of_try_set_culture_group(container_arg_0_id, container_arg_1_id);
}

void alice_delete_cultural_union_of(int32_t j) { 
	auto index = dcon::cultural_union_of_id{dcon::cultural_union_of_id::value_base_t(j)};
	alice_state_ptr->world.delete_cultural_union_of(index);
}
int32_t alice_try_create_cultural_union_of(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_cultural_union_of(dcon::national_identity_id{dcon::national_identity_id::value_base_t(p1)}, dcon::culture_group_id{dcon::culture_group_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_cultural_union_of(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_cultural_union_of(dcon::national_identity_id{dcon::national_identity_id::value_base_t(p1)}, dcon::culture_group_id{dcon::culture_group_id::value_base_t(p2)});
	return result.index();
}
bool alice_commodity_is_valid(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_is_valid(container_arg_0_id);
}
uint32_t alice_commodity_size(){
	return alice_state_ptr->world.commodity_size();
}
void alice_commodity_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.commodity_resize(container_arg_0_value);
}
int32_t alice_commodity_get_name(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.commodity_get_name(container_arg_0_id);
	return result.index();
}
void alice_commodity_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.commodity_set_name(container_arg_0_id, container_arg_1_id);
}
uint32_t alice_commodity_get_color(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_color(container_arg_0_id);
}
void alice_commodity_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_color(container_arg_0_id, container_arg_1_value);
}
float alice_commodity_get_cost(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_cost(container_arg_0_id);
}
void alice_commodity_set_cost(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_cost(container_arg_0_id, container_arg_1_value);
}
float alice_commodity_get_median_price(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_median_price(container_arg_0_id);
}
void alice_commodity_set_median_price(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_median_price(container_arg_0_id, container_arg_1_value);
}
bool alice_commodity_get_actually_exists_in_nature(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_actually_exists_in_nature(container_arg_0_id);
}
void alice_commodity_set_actually_exists_in_nature(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_actually_exists_in_nature(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_commodity_get_commodity_group(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_commodity_group(container_arg_0_id);
}
void alice_commodity_set_commodity_group(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_commodity_group(container_arg_0_id, container_arg_1_value);
}
bool alice_commodity_get_is_available_from_start(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_is_available_from_start(container_arg_0_id);
}
void alice_commodity_set_is_available_from_start(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_is_available_from_start(container_arg_0_id, container_arg_1_value);
}
bool alice_commodity_get_is_local(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_is_local(container_arg_0_id);
}
void alice_commodity_set_is_local(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_is_local(container_arg_0_id, container_arg_1_value);
}
bool alice_commodity_get_money_rgo(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_money_rgo(container_arg_0_id);
}
void alice_commodity_set_money_rgo(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_money_rgo(container_arg_0_id, container_arg_1_value);
}
bool alice_commodity_get_is_mine(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_is_mine(container_arg_0_id);
}
void alice_commodity_set_is_mine(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_is_mine(container_arg_0_id, container_arg_1_value);
}
bool alice_commodity_get_overseas_penalty(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_overseas_penalty(container_arg_0_id);
}
void alice_commodity_set_overseas_penalty(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_overseas_penalty(container_arg_0_id, container_arg_1_value);
}
float alice_commodity_get_rgo_amount(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_rgo_amount(container_arg_0_id);
}
void alice_commodity_set_rgo_amount(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_rgo_amount(container_arg_0_id, container_arg_1_value);
}
int32_t alice_commodity_get_rgo_workforce(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_rgo_workforce(container_arg_0_id);
}
void alice_commodity_set_rgo_workforce(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_rgo_workforce(container_arg_0_id, container_arg_1_value);
}
economy::commodity_set* alice_commodity_get_rgo_efficiency_inputs(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.commodity_get_rgo_efficiency_inputs(container_arg_0_id);
}
bool alice_commodity_get_rgo_efficiency_inputs_are_defined_in_content(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_rgo_efficiency_inputs_are_defined_in_content(container_arg_0_id);
}
void alice_commodity_set_rgo_efficiency_inputs_are_defined_in_content(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_rgo_efficiency_inputs_are_defined_in_content(container_arg_0_id, container_arg_1_value);
}
economy::commodity_set* alice_commodity_get_artisan_inputs(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.commodity_get_artisan_inputs(container_arg_0_id);
}
float alice_commodity_get_artisan_output_amount(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_artisan_output_amount(container_arg_0_id);
}
void alice_commodity_set_artisan_output_amount(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_artisan_output_amount(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_commodity_get_icon(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_icon(container_arg_0_id);
}
void alice_commodity_set_icon(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_icon(container_arg_0_id, container_arg_1_value);
}
float alice_commodity_get_producer_payout_fraction(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_producer_payout_fraction(container_arg_0_id);
}
void alice_commodity_set_producer_payout_fraction(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_producer_payout_fraction(container_arg_0_id, container_arg_1_value);
}
float alice_commodity_get_price_record(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.commodity_get_price_record(container_arg_0_id, container_arg_1_value);
}
void alice_commodity_set_price_record(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.commodity_set_price_record(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_commodity_get_price_record_size(){
	return alice_state_ptr->world.commodity_get_price_record_size();
}
void alice_commodity_resize_price_record(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.commodity_resize_price_record(container_arg_0_value);
}
bool alice_commodity_get_is_life_need(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_is_life_need(container_arg_0_id);
}
void alice_commodity_set_is_life_need(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_is_life_need(container_arg_0_id, container_arg_1_value);
}
bool alice_commodity_get_is_everyday_need(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_is_everyday_need(container_arg_0_id);
}
void alice_commodity_set_is_everyday_need(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_is_everyday_need(container_arg_0_id, container_arg_1_value);
}
bool alice_commodity_get_is_luxury_need(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_is_luxury_need(container_arg_0_id);
}
void alice_commodity_set_is_luxury_need(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_is_luxury_need(container_arg_0_id, container_arg_1_value);
}
bool alice_commodity_get_uses_potentials(int32_t api_arg_0_id){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.commodity_get_uses_potentials(container_arg_0_id);
}
void alice_commodity_set_uses_potentials(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::commodity_id container_arg_0_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.commodity_set_uses_potentials(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_commodity() { 
	if(alice_state_ptr->world.commodity_size() > 0) {
		auto index = dcon::commodity_id{dcon::commodity_id::value_base_t(alice_state_ptr->world.commodity_size() - 1)};
		alice_state_ptr->world.pop_back_commodity();
	}
}
int32_t alice_create_commodity() { 
	auto result = alice_state_ptr->world.create_commodity();
	return result.index();
}
bool alice_modifier_is_valid(int32_t api_arg_0_id){
	dcon::modifier_id container_arg_0_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.modifier_is_valid(container_arg_0_id);
}
uint32_t alice_modifier_size(){
	return alice_state_ptr->world.modifier_size();
}
void alice_modifier_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.modifier_resize(container_arg_0_value);
}
int32_t alice_modifier_get_name(int32_t api_arg_0_id){
	dcon::modifier_id container_arg_0_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.modifier_get_name(container_arg_0_id);
	return result.index();
}
void alice_modifier_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::modifier_id container_arg_0_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.modifier_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_modifier_get_desc(int32_t api_arg_0_id){
	dcon::modifier_id container_arg_0_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.modifier_get_desc(container_arg_0_id);
	return result.index();
}
void alice_modifier_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::modifier_id container_arg_0_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.modifier_set_desc(container_arg_0_id, container_arg_1_id);
}
sys::provincial_modifier_definition* alice_modifier_get_province_values(int32_t api_arg_0_id){
	dcon::modifier_id container_arg_0_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.modifier_get_province_values(container_arg_0_id);
}
sys::national_modifier_definition* alice_modifier_get_national_values(int32_t api_arg_0_id){
	dcon::modifier_id container_arg_0_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.modifier_get_national_values(container_arg_0_id);
}
uint8_t alice_modifier_get_icon(int32_t api_arg_0_id){
	dcon::modifier_id container_arg_0_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.modifier_get_icon(container_arg_0_id);
}
void alice_modifier_set_icon(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::modifier_id container_arg_0_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.modifier_set_icon(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_modifier() { 
	if(alice_state_ptr->world.modifier_size() > 0) {
		auto index = dcon::modifier_id{dcon::modifier_id::value_base_t(alice_state_ptr->world.modifier_size() - 1)};
		alice_state_ptr->world.pop_back_modifier();
	}
}
int32_t alice_create_modifier() { 
	auto result = alice_state_ptr->world.create_modifier();
	return result.index();
}
bool alice_factory_type_is_valid(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_type_is_valid(container_arg_0_id);
}
uint32_t alice_factory_type_size(){
	return alice_state_ptr->world.factory_type_size();
}
void alice_factory_type_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.factory_type_resize(container_arg_0_value);
}
int32_t alice_factory_type_get_name(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.factory_type_get_name(container_arg_0_id);
	return result.index();
}
void alice_factory_type_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_type_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_factory_type_get_description(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.factory_type_get_description(container_arg_0_id);
	return result.index();
}
void alice_factory_type_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_type_set_description(container_arg_0_id, container_arg_1_id);
}
economy::commodity_set* alice_factory_type_get_construction_costs(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.factory_type_get_construction_costs(container_arg_0_id);
}
int16_t alice_factory_type_get_construction_time(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_type_get_construction_time(container_arg_0_id);
}
void alice_factory_type_set_construction_time(int32_t api_arg_0_id, int16_t api_arg_1_value){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	int16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_type_set_construction_time(container_arg_0_id, container_arg_1_value);
}
bool alice_factory_type_get_is_available_from_start(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_type_get_is_available_from_start(container_arg_0_id);
}
void alice_factory_type_set_is_available_from_start(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_type_set_is_available_from_start(container_arg_0_id, container_arg_1_value);
}
bool alice_factory_type_get_is_coastal(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_type_get_is_coastal(container_arg_0_id);
}
void alice_factory_type_set_is_coastal(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_type_set_is_coastal(container_arg_0_id, container_arg_1_value);
}
economy::commodity_set* alice_factory_type_get_inputs(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.factory_type_get_inputs(container_arg_0_id);
}
economy::small_commodity_set* alice_factory_type_get_efficiency_inputs(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.factory_type_get_efficiency_inputs(container_arg_0_id);
}
int32_t alice_factory_type_get_base_workforce(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_type_get_base_workforce(container_arg_0_id);
}
void alice_factory_type_set_base_workforce(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_type_set_base_workforce(container_arg_0_id, container_arg_1_value);
}
int32_t alice_factory_type_get_output(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id result = alice_state_ptr->world.factory_type_get_output(container_arg_0_id);
	return result.index();
}
void alice_factory_type_set_output(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_type_set_output(container_arg_0_id, container_arg_1_id);
}
float alice_factory_type_get_output_amount(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_type_get_output_amount(container_arg_0_id);
}
void alice_factory_type_set_output_amount(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_type_set_output_amount(container_arg_0_id, container_arg_1_value);
}
std::array<economy::production_type_bonus,economy::max_production_type_bonuses>* alice_factory_type_get_factory_bonuses(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.factory_type_get_factory_bonuses(container_arg_0_id);
}
bool alice_factory_type_get_can_be_built_in_colonies(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_type_get_can_be_built_in_colonies(container_arg_0_id);
}
void alice_factory_type_set_can_be_built_in_colonies(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_type_set_can_be_built_in_colonies(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_factory_type_get_factory_tier(int32_t api_arg_0_id){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_type_get_factory_tier(container_arg_0_id);
}
void alice_factory_type_set_factory_tier(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::factory_type_id container_arg_0_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_type_set_factory_tier(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_factory_type() { 
	if(alice_state_ptr->world.factory_type_size() > 0) {
		auto index = dcon::factory_type_id{dcon::factory_type_id::value_base_t(alice_state_ptr->world.factory_type_size() - 1)};
		alice_state_ptr->world.pop_back_factory_type();
	}
}
int32_t alice_create_factory_type() { 
	auto result = alice_state_ptr->world.create_factory_type();
	return result.index();
}
bool alice_ideology_group_is_valid(int32_t api_arg_0_id){
	dcon::ideology_group_id container_arg_0_id = dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.ideology_group_is_valid(container_arg_0_id);
}
uint32_t alice_ideology_group_size(){
	return alice_state_ptr->world.ideology_group_size();
}
void alice_ideology_group_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.ideology_group_resize(container_arg_0_value);
}
int32_t alice_ideology_group_get_name(int32_t api_arg_0_id){
	dcon::ideology_group_id container_arg_0_id = dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.ideology_group_get_name(container_arg_0_id);
	return result.index();
}
void alice_ideology_group_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_group_id container_arg_0_id = dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_group_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_ideology_group_get_range_ideology_group_membership_as_ideology_group(int32_t i) { 
	auto index = dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.ideology_group_get_ideology_group_membership_as_ideology_group(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_ideology_group_get_index_ideology_group_membership_as_ideology_group(int32_t i, int32_t subindex) { 
	auto index = dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.ideology_group_get_ideology_group_membership_as_ideology_group(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_ideology_group_get_range_ideology_group_membership(int32_t i) { 
	auto index = dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.ideology_group_get_ideology_group_membership_as_ideology_group(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_ideology_group_get_index_ideology_group_membership(int32_t i, int32_t subindex) { 
	auto index = dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.ideology_group_get_ideology_group_membership_as_ideology_group(index);
	return rng.begin()[subindex].id.index();
}

void alice_pop_back_ideology_group() { 
	if(alice_state_ptr->world.ideology_group_size() > 0) {
		auto index = dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(alice_state_ptr->world.ideology_group_size() - 1)};
		alice_state_ptr->world.pop_back_ideology_group();
	}
}
int32_t alice_create_ideology_group() { 
	auto result = alice_state_ptr->world.create_ideology_group();
	return result.index();
}
bool alice_ideology_is_valid(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.ideology_is_valid(container_arg_0_id);
}
uint32_t alice_ideology_size(){
	return alice_state_ptr->world.ideology_size();
}
void alice_ideology_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.ideology_resize(container_arg_0_value);
}
int32_t alice_ideology_get_name(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.ideology_get_name(container_arg_0_id);
	return result.index();
}
void alice_ideology_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_set_name(container_arg_0_id, container_arg_1_id);
}
uint32_t alice_ideology_get_color(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.ideology_get_color(container_arg_0_id);
}
void alice_ideology_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.ideology_set_color(container_arg_0_id, container_arg_1_value);
}
bool alice_ideology_get_is_civilized_only(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.ideology_get_is_civilized_only(container_arg_0_id);
}
void alice_ideology_set_is_civilized_only(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.ideology_set_is_civilized_only(container_arg_0_id, container_arg_1_value);
}
sys::date* alice_ideology_get_activation_date(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.ideology_get_activation_date(container_arg_0_id);
}
int32_t alice_ideology_get_add_political_reform(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.ideology_get_add_political_reform(container_arg_0_id);
	return result.index();
}
void alice_ideology_set_add_political_reform(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_set_add_political_reform(container_arg_0_id, container_arg_1_id);
}
int32_t alice_ideology_get_remove_political_reform(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.ideology_get_remove_political_reform(container_arg_0_id);
	return result.index();
}
void alice_ideology_set_remove_political_reform(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_set_remove_political_reform(container_arg_0_id, container_arg_1_id);
}
int32_t alice_ideology_get_add_social_reform(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.ideology_get_add_social_reform(container_arg_0_id);
	return result.index();
}
void alice_ideology_set_add_social_reform(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_set_add_social_reform(container_arg_0_id, container_arg_1_id);
}
int32_t alice_ideology_get_remove_social_reform(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.ideology_get_remove_social_reform(container_arg_0_id);
	return result.index();
}
void alice_ideology_set_remove_social_reform(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_set_remove_social_reform(container_arg_0_id, container_arg_1_id);
}
int32_t alice_ideology_get_add_military_reform(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.ideology_get_add_military_reform(container_arg_0_id);
	return result.index();
}
void alice_ideology_set_add_military_reform(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_set_add_military_reform(container_arg_0_id, container_arg_1_id);
}
int32_t alice_ideology_get_add_economic_reform(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.ideology_get_add_economic_reform(container_arg_0_id);
	return result.index();
}
void alice_ideology_set_add_economic_reform(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_set_add_economic_reform(container_arg_0_id, container_arg_1_id);
}
bool alice_ideology_get_enabled(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.ideology_get_enabled(container_arg_0_id);
}
void alice_ideology_set_enabled(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.ideology_set_enabled(container_arg_0_id, container_arg_1_value);
}
int32_t alice_ideology_get_ideology_group_membership_as_ideology(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::ideology_group_membership_id result = alice_state_ptr->world.ideology_get_ideology_group_membership_as_ideology(container_arg_0_id);
	return result.index();
}
int32_t alice_ideology_get_ideology_group_membership(int32_t api_arg_0_id){
	dcon::ideology_id container_arg_0_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_0_id)};
	dcon::ideology_group_membership_id result = alice_state_ptr->world.ideology_get_ideology_group_membership(container_arg_0_id);
	return result.index();
}

void alice_pop_back_ideology() { 
	if(alice_state_ptr->world.ideology_size() > 0) {
		auto index = dcon::ideology_id{dcon::ideology_id::value_base_t(alice_state_ptr->world.ideology_size() - 1)};
		alice_state_ptr->world.pop_back_ideology();
	}
}
int32_t alice_create_ideology() { 
	auto result = alice_state_ptr->world.create_ideology();
	return result.index();
}
bool alice_ideology_group_membership_is_valid(int32_t api_arg_0_id){
	dcon::ideology_group_membership_id container_arg_0_id = dcon::ideology_group_membership_id{dcon::ideology_group_membership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.ideology_group_membership_is_valid(container_arg_0_id);
}
uint32_t alice_ideology_group_membership_size(){
	return alice_state_ptr->world.ideology_group_membership_size();
}
void alice_ideology_group_membership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.ideology_group_membership_resize(container_arg_0_value);
}
int32_t alice_ideology_group_membership_get_ideology(int32_t api_arg_0_id){
	dcon::ideology_group_membership_id container_arg_0_id = dcon::ideology_group_membership_id{dcon::ideology_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id result = alice_state_ptr->world.ideology_group_membership_get_ideology(container_arg_0_id);
	return result.index();
}
void alice_ideology_group_membership_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_group_membership_id container_arg_0_id = dcon::ideology_group_membership_id{dcon::ideology_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_group_membership_set_ideology(container_arg_0_id, container_arg_1_id);
}
void alice_ideology_group_membership_try_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_group_membership_id container_arg_0_id = dcon::ideology_group_membership_id{dcon::ideology_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_group_membership_try_set_ideology(container_arg_0_id, container_arg_1_id);
}
int32_t alice_ideology_group_membership_get_ideology_group(int32_t api_arg_0_id){
	dcon::ideology_group_membership_id container_arg_0_id = dcon::ideology_group_membership_id{dcon::ideology_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::ideology_group_id result = alice_state_ptr->world.ideology_group_membership_get_ideology_group(container_arg_0_id);
	return result.index();
}
void alice_ideology_group_membership_set_ideology_group(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_group_membership_id container_arg_0_id = dcon::ideology_group_membership_id{dcon::ideology_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::ideology_group_id container_arg_1_id = dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_group_membership_set_ideology_group(container_arg_0_id, container_arg_1_id);
}
void alice_ideology_group_membership_try_set_ideology_group(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ideology_group_membership_id container_arg_0_id = dcon::ideology_group_membership_id{dcon::ideology_group_membership_id::value_base_t(api_arg_0_id)};
	dcon::ideology_group_id container_arg_1_id = dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ideology_group_membership_try_set_ideology_group(container_arg_0_id, container_arg_1_id);
}

void alice_delete_ideology_group_membership(int32_t j) { 
	auto index = dcon::ideology_group_membership_id{dcon::ideology_group_membership_id::value_base_t(j)};
	alice_state_ptr->world.delete_ideology_group_membership(index);
}
int32_t alice_try_create_ideology_group_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_ideology_group_membership(dcon::ideology_id{dcon::ideology_id::value_base_t(p1)}, dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_ideology_group_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_ideology_group_membership(dcon::ideology_id{dcon::ideology_id::value_base_t(p1)}, dcon::ideology_group_id{dcon::ideology_group_id::value_base_t(p2)});
	return result.index();
}
bool alice_issue_is_valid(int32_t api_arg_0_id){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.issue_is_valid(container_arg_0_id);
}
uint32_t alice_issue_size(){
	return alice_state_ptr->world.issue_size();
}
void alice_issue_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.issue_resize(container_arg_0_value);
}
int32_t alice_issue_get_name(int32_t api_arg_0_id){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.issue_get_name(container_arg_0_id);
	return result.index();
}
void alice_issue_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.issue_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_issue_get_desc(int32_t api_arg_0_id){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.issue_get_desc(container_arg_0_id);
	return result.index();
}
void alice_issue_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.issue_set_desc(container_arg_0_id, container_arg_1_id);
}
std::array<dcon::issue_option_id,culture::max_issue_options>* alice_issue_get_options(int32_t api_arg_0_id){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.issue_get_options(container_arg_0_id);
}
bool alice_issue_get_is_next_step_only(int32_t api_arg_0_id){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.issue_get_is_next_step_only(container_arg_0_id);
}
void alice_issue_set_is_next_step_only(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.issue_set_is_next_step_only(container_arg_0_id, container_arg_1_value);
}
bool alice_issue_get_is_administrative(int32_t api_arg_0_id){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.issue_get_is_administrative(container_arg_0_id);
}
void alice_issue_set_is_administrative(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.issue_set_is_administrative(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_issue_get_issue_type(int32_t api_arg_0_id){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.issue_get_issue_type(container_arg_0_id);
}
void alice_issue_set_issue_type(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::issue_id container_arg_0_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.issue_set_issue_type(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_issue() { 
	if(alice_state_ptr->world.issue_size() > 0) {
		auto index = dcon::issue_id{dcon::issue_id::value_base_t(alice_state_ptr->world.issue_size() - 1)};
		alice_state_ptr->world.pop_back_issue();
	}
}
int32_t alice_create_issue() { 
	auto result = alice_state_ptr->world.create_issue();
	return result.index();
}
bool alice_issue_option_is_valid(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.issue_option_is_valid(container_arg_0_id);
}
uint32_t alice_issue_option_size(){
	return alice_state_ptr->world.issue_option_size();
}
void alice_issue_option_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.issue_option_resize(container_arg_0_value);
}
int32_t alice_issue_option_get_name(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.issue_option_get_name(container_arg_0_id);
	return result.index();
}
void alice_issue_option_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.issue_option_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_issue_option_get_desc(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.issue_option_get_desc(container_arg_0_id);
	return result.index();
}
void alice_issue_option_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.issue_option_set_desc(container_arg_0_id, container_arg_1_id);
}
int32_t alice_issue_option_get_movement_name(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.issue_option_get_movement_name(container_arg_0_id);
	return result.index();
}
void alice_issue_option_set_movement_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.issue_option_set_movement_name(container_arg_0_id, container_arg_1_id);
}
uint32_t alice_issue_option_get_rules(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.issue_option_get_rules(container_arg_0_id);
}
void alice_issue_option_set_rules(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.issue_option_set_rules(container_arg_0_id, container_arg_1_value);
}
int32_t alice_issue_option_get_modifier(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id result = alice_state_ptr->world.issue_option_get_modifier(container_arg_0_id);
	return result.index();
}
void alice_issue_option_set_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id container_arg_1_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.issue_option_set_modifier(container_arg_0_id, container_arg_1_id);
}
float alice_issue_option_get_war_exhaustion_effect(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.issue_option_get_war_exhaustion_effect(container_arg_0_id);
}
void alice_issue_option_set_war_exhaustion_effect(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.issue_option_set_war_exhaustion_effect(container_arg_0_id, container_arg_1_value);
}
float alice_issue_option_get_administrative_multiplier(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.issue_option_get_administrative_multiplier(container_arg_0_id);
}
void alice_issue_option_set_administrative_multiplier(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.issue_option_set_administrative_multiplier(container_arg_0_id, container_arg_1_value);
}
int32_t alice_issue_option_get_allow(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.issue_option_get_allow(container_arg_0_id);
	return result.index();
}
void alice_issue_option_set_allow(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.issue_option_set_allow(container_arg_0_id, container_arg_1_id);
}
int32_t alice_issue_option_get_on_execute_trigger(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.issue_option_get_on_execute_trigger(container_arg_0_id);
	return result.index();
}
void alice_issue_option_set_on_execute_trigger(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.issue_option_set_on_execute_trigger(container_arg_0_id, container_arg_1_id);
}
int32_t alice_issue_option_get_on_execute_effect(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::effect_key result = alice_state_ptr->world.issue_option_get_on_execute_effect(container_arg_0_id);
	return result.index();
}
void alice_issue_option_set_on_execute_effect(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::effect_key container_arg_1_id = dcon::effect_key{dcon::effect_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.issue_option_set_on_execute_effect(container_arg_0_id, container_arg_1_id);
}
int32_t alice_issue_option_get_parent_issue(int32_t api_arg_0_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::issue_id result = alice_state_ptr->world.issue_option_get_parent_issue(container_arg_0_id);
	return result.index();
}
void alice_issue_option_set_parent_issue(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::issue_id container_arg_1_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.issue_option_set_parent_issue(container_arg_0_id, container_arg_1_id);
}
int32_t alice_issue_option_get_support_modifiers(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id container_arg_1_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_1_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.issue_option_get_support_modifiers(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_issue_option_set_support_modifiers(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::issue_option_id container_arg_0_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id container_arg_1_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_1_id)};
	dcon::value_modifier_key container_arg_2_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.issue_option_set_support_modifiers(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_issue_option_get_support_modifiers_size(){
	return alice_state_ptr->world.issue_option_get_support_modifiers_size();
}
void alice_issue_option_resize_support_modifiers(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.issue_option_resize_support_modifiers(container_arg_0_value);
}

void alice_pop_back_issue_option() { 
	if(alice_state_ptr->world.issue_option_size() > 0) {
		auto index = dcon::issue_option_id{dcon::issue_option_id::value_base_t(alice_state_ptr->world.issue_option_size() - 1)};
		alice_state_ptr->world.pop_back_issue_option();
	}
}
int32_t alice_create_issue_option() { 
	auto result = alice_state_ptr->world.create_issue_option();
	return result.index();
}
bool alice_reform_is_valid(int32_t api_arg_0_id){
	dcon::reform_id container_arg_0_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.reform_is_valid(container_arg_0_id);
}
uint32_t alice_reform_size(){
	return alice_state_ptr->world.reform_size();
}
void alice_reform_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.reform_resize(container_arg_0_value);
}
int32_t alice_reform_get_name(int32_t api_arg_0_id){
	dcon::reform_id container_arg_0_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.reform_get_name(container_arg_0_id);
	return result.index();
}
void alice_reform_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::reform_id container_arg_0_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.reform_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_reform_get_desc(int32_t api_arg_0_id){
	dcon::reform_id container_arg_0_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.reform_get_desc(container_arg_0_id);
	return result.index();
}
void alice_reform_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::reform_id container_arg_0_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.reform_set_desc(container_arg_0_id, container_arg_1_id);
}
std::array<dcon::reform_option_id,culture::max_issue_options>* alice_reform_get_options(int32_t api_arg_0_id){
	dcon::reform_id container_arg_0_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.reform_get_options(container_arg_0_id);
}
bool alice_reform_get_is_next_step_only(int32_t api_arg_0_id){
	dcon::reform_id container_arg_0_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.reform_get_is_next_step_only(container_arg_0_id);
}
void alice_reform_set_is_next_step_only(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::reform_id container_arg_0_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.reform_set_is_next_step_only(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_reform_get_reform_type(int32_t api_arg_0_id){
	dcon::reform_id container_arg_0_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.reform_get_reform_type(container_arg_0_id);
}
void alice_reform_set_reform_type(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::reform_id container_arg_0_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.reform_set_reform_type(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_reform() { 
	if(alice_state_ptr->world.reform_size() > 0) {
		auto index = dcon::reform_id{dcon::reform_id::value_base_t(alice_state_ptr->world.reform_size() - 1)};
		alice_state_ptr->world.pop_back_reform();
	}
}
int32_t alice_create_reform() { 
	auto result = alice_state_ptr->world.create_reform();
	return result.index();
}
bool alice_reform_option_is_valid(int32_t api_arg_0_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.reform_option_is_valid(container_arg_0_id);
}
uint32_t alice_reform_option_size(){
	return alice_state_ptr->world.reform_option_size();
}
void alice_reform_option_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.reform_option_resize(container_arg_0_value);
}
int32_t alice_reform_option_get_name(int32_t api_arg_0_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.reform_option_get_name(container_arg_0_id);
	return result.index();
}
void alice_reform_option_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.reform_option_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_reform_option_get_desc(int32_t api_arg_0_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.reform_option_get_desc(container_arg_0_id);
	return result.index();
}
void alice_reform_option_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.reform_option_set_desc(container_arg_0_id, container_arg_1_id);
}
uint32_t alice_reform_option_get_rules(int32_t api_arg_0_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.reform_option_get_rules(container_arg_0_id);
}
void alice_reform_option_set_rules(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.reform_option_set_rules(container_arg_0_id, container_arg_1_value);
}
int32_t alice_reform_option_get_modifier(int32_t api_arg_0_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id result = alice_state_ptr->world.reform_option_get_modifier(container_arg_0_id);
	return result.index();
}
void alice_reform_option_set_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id container_arg_1_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.reform_option_set_modifier(container_arg_0_id, container_arg_1_id);
}
int32_t alice_reform_option_get_technology_cost(int32_t api_arg_0_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.reform_option_get_technology_cost(container_arg_0_id);
}
void alice_reform_option_set_technology_cost(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.reform_option_set_technology_cost(container_arg_0_id, container_arg_1_value);
}
float alice_reform_option_get_war_exhaustion_effect(int32_t api_arg_0_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.reform_option_get_war_exhaustion_effect(container_arg_0_id);
}
void alice_reform_option_set_war_exhaustion_effect(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.reform_option_set_war_exhaustion_effect(container_arg_0_id, container_arg_1_value);
}
int32_t alice_reform_option_get_allow(int32_t api_arg_0_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.reform_option_get_allow(container_arg_0_id);
	return result.index();
}
void alice_reform_option_set_allow(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.reform_option_set_allow(container_arg_0_id, container_arg_1_id);
}
int32_t alice_reform_option_get_on_execute_trigger(int32_t api_arg_0_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.reform_option_get_on_execute_trigger(container_arg_0_id);
	return result.index();
}
void alice_reform_option_set_on_execute_trigger(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.reform_option_set_on_execute_trigger(container_arg_0_id, container_arg_1_id);
}
int32_t alice_reform_option_get_on_execute_effect(int32_t api_arg_0_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::effect_key result = alice_state_ptr->world.reform_option_get_on_execute_effect(container_arg_0_id);
	return result.index();
}
void alice_reform_option_set_on_execute_effect(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::effect_key container_arg_1_id = dcon::effect_key{dcon::effect_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.reform_option_set_on_execute_effect(container_arg_0_id, container_arg_1_id);
}
int32_t alice_reform_option_get_parent_reform(int32_t api_arg_0_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::reform_id result = alice_state_ptr->world.reform_option_get_parent_reform(container_arg_0_id);
	return result.index();
}
void alice_reform_option_set_parent_reform(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::reform_option_id container_arg_0_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_0_id)};
	dcon::reform_id container_arg_1_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.reform_option_set_parent_reform(container_arg_0_id, container_arg_1_id);
}

void alice_pop_back_reform_option() { 
	if(alice_state_ptr->world.reform_option_size() > 0) {
		auto index = dcon::reform_option_id{dcon::reform_option_id::value_base_t(alice_state_ptr->world.reform_option_size() - 1)};
		alice_state_ptr->world.pop_back_reform_option();
	}
}
int32_t alice_create_reform_option() { 
	auto result = alice_state_ptr->world.create_reform_option();
	return result.index();
}
bool alice_cb_type_is_valid(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_is_valid(container_arg_0_id);
}
uint32_t alice_cb_type_size(){
	return alice_state_ptr->world.cb_type_size();
}
void alice_cb_type_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.cb_type_resize(container_arg_0_value);
}
int32_t alice_cb_type_get_name(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.cb_type_get_name(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_cb_type_get_short_desc(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.cb_type_get_short_desc(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_short_desc(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_short_desc(container_arg_0_id, container_arg_1_id);
}
int32_t alice_cb_type_get_shortest_desc(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.cb_type_get_shortest_desc(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_shortest_desc(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_shortest_desc(container_arg_0_id, container_arg_1_id);
}
int32_t alice_cb_type_get_long_desc(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.cb_type_get_long_desc(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_long_desc(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_long_desc(container_arg_0_id, container_arg_1_id);
}
int32_t alice_cb_type_get_war_name(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.cb_type_get_war_name(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_war_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_war_name(container_arg_0_id, container_arg_1_id);
}
uint32_t alice_cb_type_get_type_bits(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_type_bits(container_arg_0_id);
}
void alice_cb_type_set_type_bits(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_type_bits(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_cb_type_get_months(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_months(container_arg_0_id);
}
void alice_cb_type_set_months(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_months(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_cb_type_get_truce_months(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_truce_months(container_arg_0_id);
}
void alice_cb_type_set_truce_months(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_truce_months(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_cb_type_get_sprite_index(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_sprite_index(container_arg_0_id);
}
void alice_cb_type_set_sprite_index(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_sprite_index(container_arg_0_id, container_arg_1_value);
}
int32_t alice_cb_type_get_allowed_states(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.cb_type_get_allowed_states(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_allowed_states(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_allowed_states(container_arg_0_id, container_arg_1_id);
}
int32_t alice_cb_type_get_allowed_states_in_crisis(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.cb_type_get_allowed_states_in_crisis(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_allowed_states_in_crisis(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_allowed_states_in_crisis(container_arg_0_id, container_arg_1_id);
}
int32_t alice_cb_type_get_allowed_substate_regions(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.cb_type_get_allowed_substate_regions(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_allowed_substate_regions(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_allowed_substate_regions(container_arg_0_id, container_arg_1_id);
}
int32_t alice_cb_type_get_allowed_countries(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.cb_type_get_allowed_countries(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_allowed_countries(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_allowed_countries(container_arg_0_id, container_arg_1_id);
}
int32_t alice_cb_type_get_can_use(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.cb_type_get_can_use(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_can_use(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_can_use(container_arg_0_id, container_arg_1_id);
}
int32_t alice_cb_type_get_on_add(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::effect_key result = alice_state_ptr->world.cb_type_get_on_add(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_on_add(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::effect_key container_arg_1_id = dcon::effect_key{dcon::effect_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_on_add(container_arg_0_id, container_arg_1_id);
}
int32_t alice_cb_type_get_on_po_accepted(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::effect_key result = alice_state_ptr->world.cb_type_get_on_po_accepted(container_arg_0_id);
	return result.index();
}
void alice_cb_type_set_on_po_accepted(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	dcon::effect_key container_arg_1_id = dcon::effect_key{dcon::effect_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.cb_type_set_on_po_accepted(container_arg_0_id, container_arg_1_id);
}
float alice_cb_type_get_badboy_factor(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_badboy_factor(container_arg_0_id);
}
void alice_cb_type_set_badboy_factor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_badboy_factor(container_arg_0_id, container_arg_1_value);
}
float alice_cb_type_get_prestige_factor(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_prestige_factor(container_arg_0_id);
}
void alice_cb_type_set_prestige_factor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_prestige_factor(container_arg_0_id, container_arg_1_value);
}
float alice_cb_type_get_peace_cost_factor(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_peace_cost_factor(container_arg_0_id);
}
void alice_cb_type_set_peace_cost_factor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_peace_cost_factor(container_arg_0_id, container_arg_1_value);
}
float alice_cb_type_get_penalty_factor(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_penalty_factor(container_arg_0_id);
}
void alice_cb_type_set_penalty_factor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_penalty_factor(container_arg_0_id, container_arg_1_value);
}
float alice_cb_type_get_break_truce_prestige_factor(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_break_truce_prestige_factor(container_arg_0_id);
}
void alice_cb_type_set_break_truce_prestige_factor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_break_truce_prestige_factor(container_arg_0_id, container_arg_1_value);
}
float alice_cb_type_get_break_truce_infamy_factor(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_break_truce_infamy_factor(container_arg_0_id);
}
void alice_cb_type_set_break_truce_infamy_factor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_break_truce_infamy_factor(container_arg_0_id, container_arg_1_value);
}
float alice_cb_type_get_break_truce_militancy_factor(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_break_truce_militancy_factor(container_arg_0_id);
}
void alice_cb_type_set_break_truce_militancy_factor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_break_truce_militancy_factor(container_arg_0_id, container_arg_1_value);
}
float alice_cb_type_get_good_relation_prestige_factor(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_good_relation_prestige_factor(container_arg_0_id);
}
void alice_cb_type_set_good_relation_prestige_factor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_good_relation_prestige_factor(container_arg_0_id, container_arg_1_value);
}
float alice_cb_type_get_good_relation_infamy_factor(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_good_relation_infamy_factor(container_arg_0_id);
}
void alice_cb_type_set_good_relation_infamy_factor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_good_relation_infamy_factor(container_arg_0_id, container_arg_1_value);
}
float alice_cb_type_get_good_relation_militancy_factor(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_good_relation_militancy_factor(container_arg_0_id);
}
void alice_cb_type_set_good_relation_militancy_factor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_good_relation_militancy_factor(container_arg_0_id, container_arg_1_value);
}
float alice_cb_type_get_construction_speed(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_construction_speed(container_arg_0_id);
}
void alice_cb_type_set_construction_speed(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_construction_speed(container_arg_0_id, container_arg_1_value);
}
float alice_cb_type_get_tws_battle_factor(int32_t api_arg_0_id){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.cb_type_get_tws_battle_factor(container_arg_0_id);
}
void alice_cb_type_set_tws_battle_factor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::cb_type_id container_arg_0_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.cb_type_set_tws_battle_factor(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_cb_type() { 
	if(alice_state_ptr->world.cb_type_size() > 0) {
		auto index = dcon::cb_type_id{dcon::cb_type_id::value_base_t(alice_state_ptr->world.cb_type_size() - 1)};
		alice_state_ptr->world.pop_back_cb_type();
	}
}
int32_t alice_create_cb_type() { 
	auto result = alice_state_ptr->world.create_cb_type();
	return result.index();
}
bool alice_leader_trait_is_valid(int32_t api_arg_0_id){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_trait_is_valid(container_arg_0_id);
}
uint32_t alice_leader_trait_size(){
	return alice_state_ptr->world.leader_trait_size();
}
void alice_leader_trait_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.leader_trait_resize(container_arg_0_value);
}
int32_t alice_leader_trait_get_name(int32_t api_arg_0_id){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.leader_trait_get_name(container_arg_0_id);
	return result.index();
}
void alice_leader_trait_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.leader_trait_set_name(container_arg_0_id, container_arg_1_id);
}
float alice_leader_trait_get_organisation(int32_t api_arg_0_id){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_trait_get_organisation(container_arg_0_id);
}
void alice_leader_trait_set_organisation(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.leader_trait_set_organisation(container_arg_0_id, container_arg_1_value);
}
float alice_leader_trait_get_morale(int32_t api_arg_0_id){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_trait_get_morale(container_arg_0_id);
}
void alice_leader_trait_set_morale(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.leader_trait_set_morale(container_arg_0_id, container_arg_1_value);
}
float alice_leader_trait_get_attack(int32_t api_arg_0_id){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_trait_get_attack(container_arg_0_id);
}
void alice_leader_trait_set_attack(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.leader_trait_set_attack(container_arg_0_id, container_arg_1_value);
}
float alice_leader_trait_get_defense(int32_t api_arg_0_id){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_trait_get_defense(container_arg_0_id);
}
void alice_leader_trait_set_defense(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.leader_trait_set_defense(container_arg_0_id, container_arg_1_value);
}
float alice_leader_trait_get_reconnaissance(int32_t api_arg_0_id){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_trait_get_reconnaissance(container_arg_0_id);
}
void alice_leader_trait_set_reconnaissance(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.leader_trait_set_reconnaissance(container_arg_0_id, container_arg_1_value);
}
float alice_leader_trait_get_speed(int32_t api_arg_0_id){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_trait_get_speed(container_arg_0_id);
}
void alice_leader_trait_set_speed(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.leader_trait_set_speed(container_arg_0_id, container_arg_1_value);
}
float alice_leader_trait_get_experience(int32_t api_arg_0_id){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_trait_get_experience(container_arg_0_id);
}
void alice_leader_trait_set_experience(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.leader_trait_set_experience(container_arg_0_id, container_arg_1_value);
}
float alice_leader_trait_get_reliability(int32_t api_arg_0_id){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_trait_get_reliability(container_arg_0_id);
}
void alice_leader_trait_set_reliability(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::leader_trait_id container_arg_0_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.leader_trait_set_reliability(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_leader_trait() { 
	if(alice_state_ptr->world.leader_trait_size() > 0) {
		auto index = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(alice_state_ptr->world.leader_trait_size() - 1)};
		alice_state_ptr->world.pop_back_leader_trait();
	}
}
int32_t alice_create_leader_trait() { 
	auto result = alice_state_ptr->world.create_leader_trait();
	return result.index();
}
bool alice_pop_type_is_valid(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_is_valid(container_arg_0_id);
}
uint32_t alice_pop_type_size(){
	return alice_state_ptr->world.pop_type_size();
}
void alice_pop_type_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_type_resize(container_arg_0_value);
}
int32_t alice_pop_type_get_name(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.pop_type_get_name(container_arg_0_id);
	return result.index();
}
void alice_pop_type_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_type_set_name(container_arg_0_id, container_arg_1_id);
}
uint8_t alice_pop_type_get_sprite(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_sprite(container_arg_0_id);
}
void alice_pop_type_set_sprite(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_sprite(container_arg_0_id, container_arg_1_value);
}
uint32_t alice_pop_type_get_color(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_color(container_arg_0_id);
}
void alice_pop_type_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_color(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_pop_type_get_strata(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_strata(container_arg_0_id);
}
void alice_pop_type_set_strata(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_strata(container_arg_0_id, container_arg_1_value);
}
bool alice_pop_type_get_state_capital_only(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_state_capital_only(container_arg_0_id);
}
void alice_pop_type_set_state_capital_only(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_state_capital_only(container_arg_0_id, container_arg_1_value);
}
bool alice_pop_type_get_voting_forbidden(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_voting_forbidden(container_arg_0_id);
}
void alice_pop_type_set_voting_forbidden(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_voting_forbidden(container_arg_0_id, container_arg_1_value);
}
bool alice_pop_type_get_is_paid_rgo_worker(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_is_paid_rgo_worker(container_arg_0_id);
}
void alice_pop_type_set_is_paid_rgo_worker(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_is_paid_rgo_worker(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_pop_type_get_everyday_needs_income_type(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_everyday_needs_income_type(container_arg_0_id);
}
void alice_pop_type_set_everyday_needs_income_type(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_everyday_needs_income_type(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_pop_type_get_luxury_needs_income_type(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_luxury_needs_income_type(container_arg_0_id);
}
void alice_pop_type_set_luxury_needs_income_type(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_luxury_needs_income_type(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_pop_type_get_life_needs_income_type(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_life_needs_income_type(container_arg_0_id);
}
void alice_pop_type_set_life_needs_income_type(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_life_needs_income_type(container_arg_0_id, container_arg_1_value);
}
float alice_pop_type_get_research_optimum(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_research_optimum(container_arg_0_id);
}
void alice_pop_type_set_research_optimum(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_research_optimum(container_arg_0_id, container_arg_1_value);
}
float alice_pop_type_get_research_points(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_research_points(container_arg_0_id);
}
void alice_pop_type_set_research_points(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_research_points(container_arg_0_id, container_arg_1_value);
}
bool alice_pop_type_get_has_unemployment(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_has_unemployment(container_arg_0_id);
}
void alice_pop_type_set_has_unemployment(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_has_unemployment(container_arg_0_id, container_arg_1_value);
}
int32_t alice_pop_type_get_migration_target(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.pop_type_get_migration_target(container_arg_0_id);
	return result.index();
}
void alice_pop_type_set_migration_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_type_set_migration_target(container_arg_0_id, container_arg_1_id);
}
uint64_t alice_pop_type_get_migration_target_fn(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_migration_target_fn(container_arg_0_id);
}
void alice_pop_type_set_migration_target_fn(int32_t api_arg_0_id, uint64_t api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	uint64_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_migration_target_fn(container_arg_0_id, container_arg_1_value);
}
int32_t alice_pop_type_get_country_migration_target(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.pop_type_get_country_migration_target(container_arg_0_id);
	return result.index();
}
void alice_pop_type_set_country_migration_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_type_set_country_migration_target(container_arg_0_id, container_arg_1_id);
}
uint64_t alice_pop_type_get_country_migration_target_fn(int32_t api_arg_0_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_type_get_country_migration_target_fn(container_arg_0_id);
}
void alice_pop_type_set_country_migration_target_fn(int32_t api_arg_0_id, uint64_t api_arg_1_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	uint64_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_type_set_country_migration_target_fn(container_arg_0_id, container_arg_1_value);
}
int32_t alice_pop_type_get_issues(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id container_arg_1_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_1_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.pop_type_get_issues(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_pop_type_set_issues(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id container_arg_1_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_1_id)};
	dcon::value_modifier_key container_arg_2_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.pop_type_set_issues(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_pop_type_get_issues_size(){
	return alice_state_ptr->world.pop_type_get_issues_size();
}
void alice_pop_type_resize_issues(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_type_resize_issues(container_arg_0_value);
}
uint64_t alice_pop_type_get_issues_fns(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id container_arg_1_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.pop_type_get_issues_fns(container_arg_0_id, container_arg_1_id);
}
void alice_pop_type_set_issues_fns(int32_t api_arg_0_id, int32_t api_arg_1_id, uint64_t api_arg_2_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id container_arg_1_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_1_id)};
	uint64_t container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.pop_type_set_issues_fns(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_pop_type_get_issues_fns_size(){
	return alice_state_ptr->world.pop_type_get_issues_fns_size();
}
void alice_pop_type_resize_issues_fns(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_type_resize_issues_fns(container_arg_0_value);
}
int32_t alice_pop_type_get_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.pop_type_get_ideology(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_pop_type_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	dcon::value_modifier_key container_arg_2_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.pop_type_set_ideology(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_pop_type_get_ideology_size(){
	return alice_state_ptr->world.pop_type_get_ideology_size();
}
void alice_pop_type_resize_ideology(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_type_resize_ideology(container_arg_0_value);
}
uint64_t alice_pop_type_get_ideology_fns(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.pop_type_get_ideology_fns(container_arg_0_id, container_arg_1_id);
}
void alice_pop_type_set_ideology_fns(int32_t api_arg_0_id, int32_t api_arg_1_id, uint64_t api_arg_2_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	uint64_t container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.pop_type_set_ideology_fns(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_pop_type_get_ideology_fns_size(){
	return alice_state_ptr->world.pop_type_get_ideology_fns_size();
}
void alice_pop_type_resize_ideology_fns(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_type_resize_ideology_fns(container_arg_0_value);
}
int32_t alice_pop_type_get_promotion(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.pop_type_get_promotion(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_pop_type_set_promotion(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	dcon::value_modifier_key container_arg_2_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.pop_type_set_promotion(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_pop_type_get_promotion_size(){
	return alice_state_ptr->world.pop_type_get_promotion_size();
}
void alice_pop_type_resize_promotion(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_type_resize_promotion(container_arg_0_value);
}
uint64_t alice_pop_type_get_promotion_fns(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.pop_type_get_promotion_fns(container_arg_0_id, container_arg_1_id);
}
void alice_pop_type_set_promotion_fns(int32_t api_arg_0_id, int32_t api_arg_1_id, uint64_t api_arg_2_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	uint64_t container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.pop_type_set_promotion_fns(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_pop_type_get_promotion_fns_size(){
	return alice_state_ptr->world.pop_type_get_promotion_fns_size();
}
void alice_pop_type_resize_promotion_fns(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_type_resize_promotion_fns(container_arg_0_value);
}
float alice_pop_type_get_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.pop_type_get_life_needs(container_arg_0_id, container_arg_1_id);
}
void alice_pop_type_set_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.pop_type_set_life_needs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_pop_type_get_life_needs_size(){
	return alice_state_ptr->world.pop_type_get_life_needs_size();
}
void alice_pop_type_resize_life_needs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_type_resize_life_needs(container_arg_0_value);
}
float alice_pop_type_get_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.pop_type_get_everyday_needs(container_arg_0_id, container_arg_1_id);
}
void alice_pop_type_set_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.pop_type_set_everyday_needs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_pop_type_get_everyday_needs_size(){
	return alice_state_ptr->world.pop_type_get_everyday_needs_size();
}
void alice_pop_type_resize_everyday_needs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_type_resize_everyday_needs(container_arg_0_value);
}
float alice_pop_type_get_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.pop_type_get_luxury_needs(container_arg_0_id, container_arg_1_id);
}
void alice_pop_type_set_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::pop_type_id container_arg_0_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.pop_type_set_luxury_needs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_pop_type_get_luxury_needs_size(){
	return alice_state_ptr->world.pop_type_get_luxury_needs_size();
}
void alice_pop_type_resize_luxury_needs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_type_resize_luxury_needs(container_arg_0_value);
}

void alice_pop_back_pop_type() { 
	if(alice_state_ptr->world.pop_type_size() > 0) {
		auto index = dcon::pop_type_id{dcon::pop_type_id::value_base_t(alice_state_ptr->world.pop_type_size() - 1)};
		alice_state_ptr->world.pop_back_pop_type();
	}
}
int32_t alice_create_pop_type() { 
	auto result = alice_state_ptr->world.create_pop_type();
	return result.index();
}
bool alice_rebel_type_is_valid(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_type_is_valid(container_arg_0_id);
}
uint32_t alice_rebel_type_size(){
	return alice_state_ptr->world.rebel_type_size();
}
void alice_rebel_type_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.rebel_type_resize(container_arg_0_value);
}
int32_t alice_rebel_type_get_name(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.rebel_type_get_name(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_type_get_title(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.rebel_type_get_title(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_title(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_title(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_type_get_description(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.rebel_type_get_description(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_description(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_type_get_army_name(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.rebel_type_get_army_name(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_army_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_army_name(container_arg_0_id, container_arg_1_id);
}
uint8_t alice_rebel_type_get_icon(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_type_get_icon(container_arg_0_id);
}
void alice_rebel_type_set_icon(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_type_set_icon(container_arg_0_id, container_arg_1_value);
}
bool alice_rebel_type_get_break_alliance_on_win(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_type_get_break_alliance_on_win(container_arg_0_id);
}
void alice_rebel_type_set_break_alliance_on_win(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_type_set_break_alliance_on_win(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_rebel_type_get_area(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_type_get_area(container_arg_0_id);
}
void alice_rebel_type_set_area(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_type_set_area(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_rebel_type_get_defection(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_type_get_defection(container_arg_0_id);
}
void alice_rebel_type_set_defection(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_type_set_defection(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_rebel_type_get_independence(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_type_get_independence(container_arg_0_id);
}
void alice_rebel_type_set_independence(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_type_set_independence(container_arg_0_id, container_arg_1_value);
}
int32_t alice_rebel_type_get_ideology(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id result = alice_state_ptr->world.rebel_type_get_ideology(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_ideology(container_arg_0_id, container_arg_1_id);
}
float alice_rebel_type_get_occupation_multiplier(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_type_get_occupation_multiplier(container_arg_0_id);
}
void alice_rebel_type_set_occupation_multiplier(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_type_set_occupation_multiplier(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_rebel_type_get_defect_delay(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_type_get_defect_delay(container_arg_0_id);
}
void alice_rebel_type_set_defect_delay(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_type_set_defect_delay(container_arg_0_id, container_arg_1_value);
}
bool alice_rebel_type_get_culture_restriction(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_type_get_culture_restriction(container_arg_0_id);
}
void alice_rebel_type_set_culture_restriction(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_type_set_culture_restriction(container_arg_0_id, container_arg_1_value);
}
bool alice_rebel_type_get_ideology_restriction(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_type_get_ideology_restriction(container_arg_0_id);
}
void alice_rebel_type_set_ideology_restriction(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_type_set_ideology_restriction(container_arg_0_id, container_arg_1_value);
}
bool alice_rebel_type_get_culture_group_restriction(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_type_get_culture_group_restriction(container_arg_0_id);
}
void alice_rebel_type_set_culture_group_restriction(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_type_set_culture_group_restriction(container_arg_0_id, container_arg_1_value);
}
int32_t alice_rebel_type_get_will_rise(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.rebel_type_get_will_rise(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_will_rise(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_will_rise(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_type_get_spawn_chance(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.rebel_type_get_spawn_chance(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_spawn_chance(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_spawn_chance(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_type_get_movement_evaluation(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.rebel_type_get_movement_evaluation(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_movement_evaluation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_movement_evaluation(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_type_get_siege_won_trigger(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.rebel_type_get_siege_won_trigger(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_siege_won_trigger(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_siege_won_trigger(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_type_get_siege_won_effect(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::effect_key result = alice_state_ptr->world.rebel_type_get_siege_won_effect(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_siege_won_effect(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::effect_key container_arg_1_id = dcon::effect_key{dcon::effect_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_siege_won_effect(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_type_get_demands_enforced_trigger(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.rebel_type_get_demands_enforced_trigger(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_demands_enforced_trigger(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_demands_enforced_trigger(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_type_get_demands_enforced_effect(int32_t api_arg_0_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::effect_key result = alice_state_ptr->world.rebel_type_get_demands_enforced_effect(container_arg_0_id);
	return result.index();
}
void alice_rebel_type_set_demands_enforced_effect(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::effect_key container_arg_1_id = dcon::effect_key{dcon::effect_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_type_set_demands_enforced_effect(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_type_get_government_change(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	dcon::government_type_id result = alice_state_ptr->world.rebel_type_get_government_change(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_rebel_type_set_government_change(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::rebel_type_id container_arg_0_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	dcon::government_type_id container_arg_2_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.rebel_type_set_government_change(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_rebel_type_get_government_change_size(){
	return alice_state_ptr->world.rebel_type_get_government_change_size();
}
void alice_rebel_type_resize_government_change(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.rebel_type_resize_government_change(container_arg_0_value);
}

void alice_pop_back_rebel_type() { 
	if(alice_state_ptr->world.rebel_type_size() > 0) {
		auto index = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(alice_state_ptr->world.rebel_type_size() - 1)};
		alice_state_ptr->world.pop_back_rebel_type();
	}
}
int32_t alice_create_rebel_type() { 
	auto result = alice_state_ptr->world.create_rebel_type();
	return result.index();
}
bool alice_government_type_is_valid(int32_t api_arg_0_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.government_type_is_valid(container_arg_0_id);
}
uint32_t alice_government_type_size(){
	return alice_state_ptr->world.government_type_size();
}
void alice_government_type_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.government_type_resize(container_arg_0_value);
}
int32_t alice_government_type_get_name(int32_t api_arg_0_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.government_type_get_name(container_arg_0_id);
	return result.index();
}
void alice_government_type_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.government_type_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_government_type_get_desc(int32_t api_arg_0_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.government_type_get_desc(container_arg_0_id);
	return result.index();
}
void alice_government_type_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.government_type_set_desc(container_arg_0_id, container_arg_1_id);
}
int32_t alice_government_type_get_ruler_name(int32_t api_arg_0_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.government_type_get_ruler_name(container_arg_0_id);
	return result.index();
}
void alice_government_type_set_ruler_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.government_type_set_ruler_name(container_arg_0_id, container_arg_1_id);
}
uint64_t alice_government_type_get_ideologies_allowed(int32_t api_arg_0_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.government_type_get_ideologies_allowed(container_arg_0_id);
}
void alice_government_type_set_ideologies_allowed(int32_t api_arg_0_id, uint64_t api_arg_1_value){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	uint64_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.government_type_set_ideologies_allowed(container_arg_0_id, container_arg_1_value);
}
bool alice_government_type_get_has_elections(int32_t api_arg_0_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.government_type_get_has_elections(container_arg_0_id);
}
void alice_government_type_set_has_elections(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.government_type_set_has_elections(container_arg_0_id, container_arg_1_value);
}
bool alice_government_type_get_can_appoint_ruling_party(int32_t api_arg_0_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.government_type_get_can_appoint_ruling_party(container_arg_0_id);
}
void alice_government_type_set_can_appoint_ruling_party(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.government_type_set_can_appoint_ruling_party(container_arg_0_id, container_arg_1_value);
}
int8_t alice_government_type_get_duration(int32_t api_arg_0_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.government_type_get_duration(container_arg_0_id);
}
void alice_government_type_set_duration(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.government_type_set_duration(container_arg_0_id, container_arg_1_value);
}
int32_t alice_government_type_get_flag(int32_t api_arg_0_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	dcon::government_flag_id result = alice_state_ptr->world.government_type_get_flag(container_arg_0_id);
	return result.index();
}
void alice_government_type_set_flag(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::government_type_id container_arg_0_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_0_id)};
	dcon::government_flag_id container_arg_1_id = dcon::government_flag_id{dcon::government_flag_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.government_type_set_flag(container_arg_0_id, container_arg_1_id);
}

void alice_pop_back_government_type() { 
	if(alice_state_ptr->world.government_type_size() > 0) {
		auto index = dcon::government_type_id{dcon::government_type_id::value_base_t(alice_state_ptr->world.government_type_size() - 1)};
		alice_state_ptr->world.pop_back_government_type();
	}
}
int32_t alice_create_government_type() { 
	auto result = alice_state_ptr->world.create_government_type();
	return result.index();
}
bool alice_province_is_valid(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_is_valid(container_arg_0_id);
}
uint32_t alice_province_size(){
	return alice_state_ptr->world.province_size();
}
void alice_province_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize(container_arg_0_value);
}
uint32_t alice_province_get_provid(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_provid(container_arg_0_id);
}
void alice_province_set_provid(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_provid(container_arg_0_id, container_arg_1_value);
}
int32_t alice_province_get_name(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.province_get_name(container_arg_0_id);
	return result.index();
}
void alice_province_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_get_continent(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id result = alice_state_ptr->world.province_get_continent(container_arg_0_id);
	return result.index();
}
void alice_province_set_continent(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id container_arg_1_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_continent(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_get_climate(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id result = alice_state_ptr->world.province_get_climate(container_arg_0_id);
	return result.index();
}
void alice_province_set_climate(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id container_arg_1_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_climate(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_get_terrain(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id result = alice_state_ptr->world.province_get_terrain(container_arg_0_id);
	return result.index();
}
void alice_province_set_terrain(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id container_arg_1_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_terrain(container_arg_0_id, container_arg_1_id);
}
uint8_t alice_province_get_life_rating(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_life_rating(container_arg_0_id);
}
void alice_province_set_life_rating(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_life_rating(container_arg_0_id, container_arg_1_value);
}
int32_t alice_province_get_rgo(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id result = alice_state_ptr->world.province_get_rgo(container_arg_0_id);
	return result.index();
}
void alice_province_set_rgo(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_rgo(container_arg_0_id, container_arg_1_id);
}
uint8_t alice_province_get_building_level(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_building_level(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_building_level(int32_t api_arg_0_id, uint8_t api_arg_1_value, uint8_t api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	uint8_t container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_building_level(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_building_level_size(){
	return alice_state_ptr->world.province_get_building_level_size();
}
void alice_province_resize_building_level(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_building_level(container_arg_0_value);
}
bool alice_province_get_is_slave(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_is_slave(container_arg_0_id);
}
void alice_province_set_is_slave(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_is_slave(container_arg_0_id, container_arg_1_value);
}
bool alice_province_get_naval_rally_point(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_naval_rally_point(container_arg_0_id);
}
void alice_province_set_naval_rally_point(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_naval_rally_point(container_arg_0_id, container_arg_1_value);
}
bool alice_province_get_land_rally_point(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_land_rally_point(container_arg_0_id);
}
void alice_province_set_land_rally_point(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_land_rally_point(container_arg_0_id, container_arg_1_value);
}
bool alice_province_get_is_colonial(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_is_colonial(container_arg_0_id);
}
void alice_province_set_is_colonial(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_is_colonial(container_arg_0_id, container_arg_1_value);
}
bool alice_province_get_has_major_river(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_has_major_river(container_arg_0_id);
}
void alice_province_set_has_major_river(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_has_major_river(container_arg_0_id, container_arg_1_value);
}
bool alice_province_get_has_minor_river(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_has_minor_river(container_arg_0_id);
}
void alice_province_set_has_minor_river(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_has_minor_river(container_arg_0_id, container_arg_1_value);
}
int32_t alice_province_get_crime(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::crime_id result = alice_state_ptr->world.province_get_crime(container_arg_0_id);
	return result.index();
}
void alice_province_set_crime(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::crime_id container_arg_1_id = dcon::crime_id{dcon::crime_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_crime(container_arg_0_id, container_arg_1_id);
}
glm::vec2* alice_province_get_mid_point(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_get_mid_point(container_arg_0_id);
}
glm::vec3* alice_province_get_mid_point_b(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_get_mid_point_b(container_arg_0_id);
}
int32_t alice_province_get_port_to(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.province_get_port_to(container_arg_0_id);
	return result.index();
}
void alice_province_set_port_to(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_port_to(container_arg_0_id, container_arg_1_id);
}
float alice_province_get_party_loyalty(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_party_loyalty(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_party_loyalty(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_party_loyalty(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_party_loyalty_size(){
	return alice_state_ptr->world.province_get_party_loyalty_size();
}
void alice_province_resize_party_loyalty(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_party_loyalty(container_arg_0_value);
}
float alice_province_get_modifier_values(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::provincial_modifier_value container_arg_1_id = dcon::provincial_modifier_value{dcon::provincial_modifier_value::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_modifier_values(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_modifier_values(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::provincial_modifier_value container_arg_1_id = dcon::provincial_modifier_value{dcon::provincial_modifier_value::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_modifier_values(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_modifier_values_size(){
	return alice_state_ptr->world.province_get_modifier_values_size();
}
void alice_province_resize_modifier_values(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_modifier_values(container_arg_0_value);
}
float alice_province_get_nationalism(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_nationalism(container_arg_0_id);
}
void alice_province_set_nationalism(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_nationalism(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_province_get_connected_region_id(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_connected_region_id(container_arg_0_id);
}
void alice_province_set_connected_region_id(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_connected_region_id(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_province_get_connected_coast_id(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_connected_coast_id(container_arg_0_id);
}
void alice_province_set_connected_coast_id(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_connected_coast_id(container_arg_0_id, container_arg_1_value);
}
int32_t alice_province_get_state_membership(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::state_instance_id result = alice_state_ptr->world.province_get_state_membership(container_arg_0_id);
	return result.index();
}
void alice_province_set_state_membership(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::state_instance_id container_arg_1_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_state_membership(container_arg_0_id, container_arg_1_id);
}
bool alice_province_get_is_coast(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_is_coast(container_arg_0_id);
}
void alice_province_set_is_coast(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_is_coast(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_demographics(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_demographics(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_demographics_size(){
	return alice_state_ptr->world.province_get_demographics_size();
}
void alice_province_resize_demographics(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_demographics(container_arg_0_value);
}
float alice_province_get_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_demographics_alt(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_demographics_alt(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_demographics_alt_size(){
	return alice_state_ptr->world.province_get_demographics_alt_size();
}
void alice_province_resize_demographics_alt(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_demographics_alt(container_arg_0_value);
}
int32_t alice_province_get_dominant_culture(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::culture_id result = alice_state_ptr->world.province_get_dominant_culture(container_arg_0_id);
	return result.index();
}
void alice_province_set_dominant_culture(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_dominant_culture(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_get_dominant_accepted_culture(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::culture_id result = alice_state_ptr->world.province_get_dominant_accepted_culture(container_arg_0_id);
	return result.index();
}
void alice_province_set_dominant_accepted_culture(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_dominant_accepted_culture(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_get_dominant_religion(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::religion_id result = alice_state_ptr->world.province_get_dominant_religion(container_arg_0_id);
	return result.index();
}
void alice_province_set_dominant_religion(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::religion_id container_arg_1_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_dominant_religion(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_get_dominant_ideology(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id result = alice_state_ptr->world.province_get_dominant_ideology(container_arg_0_id);
	return result.index();
}
void alice_province_set_dominant_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_dominant_ideology(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_get_dominant_issue_option(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id result = alice_state_ptr->world.province_get_dominant_issue_option(container_arg_0_id);
	return result.index();
}
void alice_province_set_dominant_issue_option(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id container_arg_1_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_set_dominant_issue_option(container_arg_0_id, container_arg_1_id);
}
sys::date* alice_province_get_last_control_change(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_get_last_control_change(container_arg_0_id);
}
sys::date* alice_province_get_last_immigration(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_get_last_immigration(container_arg_0_id);
}
bool alice_province_get_is_owner_core(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_is_owner_core(container_arg_0_id);
}
void alice_province_set_is_owner_core(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_is_owner_core(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_rgo_base_size(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_rgo_base_size(container_arg_0_id);
}
void alice_province_set_rgo_base_size(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_rgo_base_size(container_arg_0_id, container_arg_1_value);
}
bool alice_province_get_rgo_was_set_during_scenario_creation(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_rgo_was_set_during_scenario_creation(container_arg_0_id);
}
void alice_province_set_rgo_was_set_during_scenario_creation(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_rgo_was_set_during_scenario_creation(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_rgo_size(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_rgo_size(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_rgo_size(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_rgo_size(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_rgo_size_size(){
	return alice_state_ptr->world.province_get_rgo_size_size();
}
void alice_province_resize_rgo_size(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_rgo_size(container_arg_0_value);
}
float alice_province_get_rgo_max_size(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_rgo_max_size(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_rgo_max_size(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_rgo_max_size(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_rgo_max_size_size(){
	return alice_state_ptr->world.province_get_rgo_max_size_size();
}
void alice_province_resize_rgo_max_size(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_rgo_max_size(container_arg_0_value);
}
float alice_province_get_rgo_potential(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_rgo_potential(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_rgo_potential(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_rgo_potential(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_rgo_potential_size(){
	return alice_state_ptr->world.province_get_rgo_potential_size();
}
void alice_province_resize_rgo_potential(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_rgo_potential(container_arg_0_value);
}
float alice_province_get_rgo_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_rgo_efficiency(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_rgo_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_rgo_efficiency(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_rgo_efficiency_size(){
	return alice_state_ptr->world.province_get_rgo_efficiency_size();
}
void alice_province_resize_rgo_efficiency(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_rgo_efficiency(container_arg_0_value);
}
float alice_province_get_rgo_max_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_rgo_max_efficiency(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_rgo_max_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_rgo_max_efficiency(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_rgo_max_efficiency_size(){
	return alice_state_ptr->world.province_get_rgo_max_efficiency_size();
}
void alice_province_resize_rgo_max_efficiency(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_rgo_max_efficiency(container_arg_0_value);
}
float alice_province_get_rgo_base_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_rgo_base_efficiency(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_rgo_base_efficiency(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_rgo_base_efficiency(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_rgo_base_efficiency_size(){
	return alice_state_ptr->world.province_get_rgo_base_efficiency_size();
}
void alice_province_resize_rgo_base_efficiency(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_rgo_base_efficiency(container_arg_0_value);
}
float alice_province_get_rgo_target_employment(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_rgo_target_employment(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_rgo_target_employment(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_rgo_target_employment(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_rgo_target_employment_size(){
	return alice_state_ptr->world.province_get_rgo_target_employment_size();
}
void alice_province_resize_rgo_target_employment(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_rgo_target_employment(container_arg_0_value);
}
float alice_province_get_rgo_output(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_rgo_output(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_rgo_output(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_rgo_output(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_rgo_output_size(){
	return alice_state_ptr->world.province_get_rgo_output_size();
}
void alice_province_resize_rgo_output(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_rgo_output(container_arg_0_value);
}
float alice_province_get_rgo_output_per_worker(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_rgo_output_per_worker(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_rgo_output_per_worker(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_rgo_output_per_worker(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_rgo_output_per_worker_size(){
	return alice_state_ptr->world.province_get_rgo_output_per_worker_size();
}
void alice_province_resize_rgo_output_per_worker(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_rgo_output_per_worker(container_arg_0_value);
}
bool alice_province_get_factory_limit_was_set_during_scenario_creation(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_factory_limit_was_set_during_scenario_creation(container_arg_0_id);
}
void alice_province_set_factory_limit_was_set_during_scenario_creation(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_factory_limit_was_set_during_scenario_creation(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_factory_max_size(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_factory_max_size(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_factory_max_size(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_factory_max_size(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_factory_max_size_size(){
	return alice_state_ptr->world.province_get_factory_max_size_size();
}
void alice_province_resize_factory_max_size(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_factory_max_size(container_arg_0_value);
}
float alice_province_get_rgo_profit(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_rgo_profit(container_arg_0_id);
}
void alice_province_set_rgo_profit(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_rgo_profit(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_artisan_score(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_artisan_score(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_artisan_score(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_artisan_score(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_artisan_score_size(){
	return alice_state_ptr->world.province_get_artisan_score_size();
}
void alice_province_resize_artisan_score(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_artisan_score(container_arg_0_value);
}
float alice_province_get_artisan_actual_production(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.province_get_artisan_actual_production(container_arg_0_id, container_arg_1_id);
}
void alice_province_set_artisan_actual_production(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_artisan_actual_production(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_province_get_artisan_actual_production_size(){
	return alice_state_ptr->world.province_get_artisan_actual_production_size();
}
void alice_province_resize_artisan_actual_production(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_artisan_actual_production(container_arg_0_value);
}
float alice_province_get_artisan_profit(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_artisan_profit(container_arg_0_id);
}
void alice_province_set_artisan_profit(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_artisan_profit(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_artisan_bank(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_artisan_bank(container_arg_0_id);
}
void alice_province_set_artisan_bank(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_artisan_bank(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_rgo_bank(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_rgo_bank(container_arg_0_id);
}
void alice_province_set_rgo_bank(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_rgo_bank(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_factory_bank(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_factory_bank(container_arg_0_id);
}
void alice_province_set_factory_bank(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_factory_bank(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_subsistence_score(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_subsistence_score(container_arg_0_id);
}
void alice_province_set_subsistence_score(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_subsistence_score(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_landowners_share(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_landowners_share(container_arg_0_id);
}
void alice_province_set_landowners_share(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_landowners_share(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_capitalists_share(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_capitalists_share(container_arg_0_id);
}
void alice_province_set_capitalists_share(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_capitalists_share(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_subsistence_employment(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_subsistence_employment(container_arg_0_id);
}
void alice_province_set_subsistence_employment(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_subsistence_employment(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_tax_base_poor(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_tax_base_poor(container_arg_0_id);
}
void alice_province_set_tax_base_poor(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_tax_base_poor(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_tax_base_middle(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_tax_base_middle(container_arg_0_id);
}
void alice_province_set_tax_base_middle(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_tax_base_middle(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_tax_base_rich(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_tax_base_rich(container_arg_0_id);
}
void alice_province_set_tax_base_rich(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_tax_base_rich(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_daily_net_migration(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_daily_net_migration(container_arg_0_id);
}
void alice_province_set_daily_net_migration(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_daily_net_migration(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_daily_net_immigration(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_daily_net_immigration(container_arg_0_id);
}
void alice_province_set_daily_net_immigration(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_daily_net_immigration(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_siege_progress(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_siege_progress(container_arg_0_id);
}
void alice_province_set_siege_progress(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_siege_progress(container_arg_0_id, container_arg_1_value);
}
bool alice_province_get_is_blockaded(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_is_blockaded(container_arg_0_id);
}
void alice_province_set_is_blockaded(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_is_blockaded(container_arg_0_id, container_arg_1_value);
}
dcon::nation_id* alice_province_get_former_controller(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_get_former_controller(container_arg_0_id);
}
dcon::rebel_faction_id* alice_province_get_former_rebel_controller(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_get_former_rebel_controller(container_arg_0_id);
}
float alice_province_get_advanced_province_building_national_size(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_advanced_province_building_national_size(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_advanced_province_building_national_size(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_advanced_province_building_national_size(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_advanced_province_building_national_size_size(){
	return alice_state_ptr->world.province_get_advanced_province_building_national_size_size();
}
void alice_province_resize_advanced_province_building_national_size(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_advanced_province_building_national_size(container_arg_0_value);
}
float alice_province_get_advanced_province_building_max_national_size(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_advanced_province_building_max_national_size(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_advanced_province_building_max_national_size(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_advanced_province_building_max_national_size(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_advanced_province_building_max_national_size_size(){
	return alice_state_ptr->world.province_get_advanced_province_building_max_national_size_size();
}
void alice_province_resize_advanced_province_building_max_national_size(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_advanced_province_building_max_national_size(container_arg_0_value);
}
float alice_province_get_advanced_province_building_private_size(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_advanced_province_building_private_size(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_advanced_province_building_private_size(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_advanced_province_building_private_size(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_advanced_province_building_private_size_size(){
	return alice_state_ptr->world.province_get_advanced_province_building_private_size_size();
}
void alice_province_resize_advanced_province_building_private_size(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_advanced_province_building_private_size(container_arg_0_value);
}
float alice_province_get_advanced_province_building_private_savings(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_advanced_province_building_private_savings(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_advanced_province_building_private_savings(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_advanced_province_building_private_savings(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_advanced_province_building_private_savings_size(){
	return alice_state_ptr->world.province_get_advanced_province_building_private_savings_size();
}
void alice_province_resize_advanced_province_building_private_savings(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_advanced_province_building_private_savings(container_arg_0_value);
}
float alice_province_get_advanced_province_building_max_private_size(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_advanced_province_building_max_private_size(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_advanced_province_building_max_private_size(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_advanced_province_building_max_private_size(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_advanced_province_building_max_private_size_size(){
	return alice_state_ptr->world.province_get_advanced_province_building_max_private_size_size();
}
void alice_province_resize_advanced_province_building_max_private_size(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_advanced_province_building_max_private_size(container_arg_0_value);
}
float alice_province_get_advanced_province_building_private_output(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_advanced_province_building_private_output(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_advanced_province_building_private_output(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_advanced_province_building_private_output(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_advanced_province_building_private_output_size(){
	return alice_state_ptr->world.province_get_advanced_province_building_private_output_size();
}
void alice_province_resize_advanced_province_building_private_output(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_advanced_province_building_private_output(container_arg_0_value);
}
float alice_province_get_service_price(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_service_price(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_service_price(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_service_price(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_service_price_size(){
	return alice_state_ptr->world.province_get_service_price_size();
}
void alice_province_resize_service_price(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_service_price(container_arg_0_value);
}
float alice_province_get_service_supply_private(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_service_supply_private(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_service_supply_private(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_service_supply_private(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_service_supply_private_size(){
	return alice_state_ptr->world.province_get_service_supply_private_size();
}
void alice_province_resize_service_supply_private(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_service_supply_private(container_arg_0_value);
}
float alice_province_get_service_supply_public(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_service_supply_public(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_service_supply_public(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_service_supply_public(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_service_supply_public_size(){
	return alice_state_ptr->world.province_get_service_supply_public_size();
}
void alice_province_resize_service_supply_public(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_service_supply_public(container_arg_0_value);
}
float alice_province_get_service_demand_allowed_public_supply(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_service_demand_allowed_public_supply(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_service_demand_allowed_public_supply(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_service_demand_allowed_public_supply(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_service_demand_allowed_public_supply_size(){
	return alice_state_ptr->world.province_get_service_demand_allowed_public_supply_size();
}
void alice_province_resize_service_demand_allowed_public_supply(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_service_demand_allowed_public_supply(container_arg_0_value);
}
float alice_province_get_service_demand_forbidden_public_supply(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_service_demand_forbidden_public_supply(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_service_demand_forbidden_public_supply(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_service_demand_forbidden_public_supply(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_service_demand_forbidden_public_supply_size(){
	return alice_state_ptr->world.province_get_service_demand_forbidden_public_supply_size();
}
void alice_province_resize_service_demand_forbidden_public_supply(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_service_demand_forbidden_public_supply(container_arg_0_value);
}
float alice_province_get_service_satisfaction(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_service_satisfaction(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_service_satisfaction(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_service_satisfaction(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_service_satisfaction_size(){
	return alice_state_ptr->world.province_get_service_satisfaction_size();
}
void alice_province_resize_service_satisfaction(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_service_satisfaction(container_arg_0_value);
}
float alice_province_get_service_satisfaction_for_free(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_service_satisfaction_for_free(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_service_satisfaction_for_free(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_service_satisfaction_for_free(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_service_satisfaction_for_free_size(){
	return alice_state_ptr->world.province_get_service_satisfaction_for_free_size();
}
void alice_province_resize_service_satisfaction_for_free(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_service_satisfaction_for_free(container_arg_0_value);
}
float alice_province_get_service_sold(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_service_sold(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_service_sold(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_service_sold(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_service_sold_size(){
	return alice_state_ptr->world.province_get_service_sold_size();
}
void alice_province_resize_service_sold(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_service_sold(container_arg_0_value);
}
float alice_province_get_labor_price(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_labor_price(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_labor_price(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_labor_price(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_labor_price_size(){
	return alice_state_ptr->world.province_get_labor_price_size();
}
void alice_province_resize_labor_price(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_labor_price(container_arg_0_value);
}
float alice_province_get_labor_supply(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_labor_supply(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_labor_supply(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_labor_supply(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_labor_supply_size(){
	return alice_state_ptr->world.province_get_labor_supply_size();
}
void alice_province_resize_labor_supply(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_labor_supply(container_arg_0_value);
}
float alice_province_get_labor_demand(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_labor_demand(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_labor_demand(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_labor_demand(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_labor_demand_size(){
	return alice_state_ptr->world.province_get_labor_demand_size();
}
void alice_province_resize_labor_demand(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_labor_demand(container_arg_0_value);
}
float alice_province_get_labor_demand_satisfaction(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_labor_demand_satisfaction(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_labor_demand_satisfaction(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_labor_demand_satisfaction(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_labor_demand_satisfaction_size(){
	return alice_state_ptr->world.province_get_labor_demand_satisfaction_size();
}
void alice_province_resize_labor_demand_satisfaction(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_labor_demand_satisfaction(container_arg_0_value);
}
float alice_province_get_labor_supply_sold(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_labor_supply_sold(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_labor_supply_sold(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_labor_supply_sold(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_labor_supply_sold_size(){
	return alice_state_ptr->world.province_get_labor_supply_sold_size();
}
void alice_province_resize_labor_supply_sold(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_labor_supply_sold(container_arg_0_value);
}
float alice_province_get_administration_employment_target(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_administration_employment_target(container_arg_0_id);
}
void alice_province_set_administration_employment_target(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_administration_employment_target(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_pop_labor_distribution(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.province_get_pop_labor_distribution(container_arg_0_id, container_arg_1_value);
}
void alice_province_set_pop_labor_distribution(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.province_set_pop_labor_distribution(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_province_get_pop_labor_distribution_size(){
	return alice_state_ptr->world.province_get_pop_labor_distribution_size();
}
void alice_province_resize_pop_labor_distribution(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_resize_pop_labor_distribution(container_arg_0_value);
}
float alice_province_get_control_scale(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_control_scale(container_arg_0_id);
}
void alice_province_set_control_scale(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_control_scale(container_arg_0_id, container_arg_1_value);
}
float alice_province_get_control_ratio(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_get_control_ratio(container_arg_0_id);
}
void alice_province_set_control_ratio(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_set_control_ratio(container_arg_0_id, container_arg_1_value);
}
int32_t alice_province_get_range_province_adjacency_as_connected_provinces(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_adjacency_as_connected_provinces(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_province_adjacency_as_connected_provinces(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_adjacency_as_connected_provinces(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_province_adjacency(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_adjacency_as_connected_provinces(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_province_adjacency(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_adjacency_as_connected_provinces(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_army_location_as_location(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_army_location_as_location(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_army_location_as_location(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_army_location_as_location(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_army_location(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_army_location_as_location(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_army_location(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_army_location_as_location(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_navy_location_as_location(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_navy_location_as_location(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_navy_location_as_location(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_navy_location_as_location(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_navy_location(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_navy_location_as_location(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_navy_location(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_navy_location_as_location(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_naval_battle_location_as_location(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_naval_battle_location_as_location(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_naval_battle_location_as_location(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_naval_battle_location_as_location(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_naval_battle_location(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_naval_battle_location_as_location(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_naval_battle_location(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_naval_battle_location_as_location(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_land_battle_location_as_location(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_land_battle_location_as_location(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_land_battle_location_as_location(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_land_battle_location_as_location(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_land_battle_location(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_land_battle_location_as_location(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_land_battle_location(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_land_battle_location_as_location(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_abstract_state_membership_as_province(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::abstract_state_membership_id result = alice_state_ptr->world.province_get_abstract_state_membership_as_province(container_arg_0_id);
	return result.index();
}
int32_t alice_province_get_abstract_state_membership(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::abstract_state_membership_id result = alice_state_ptr->world.province_get_abstract_state_membership(container_arg_0_id);
	return result.index();
}
int32_t alice_province_get_range_region_membership_as_province(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_region_membership_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_region_membership_as_province(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_region_membership_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_region_membership(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_region_membership_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_region_membership(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_region_membership_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_core_as_province(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_core_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_core_as_province(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_core_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_core(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_core_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_core(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_core_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_factory_location_as_province(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_factory_location_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_factory_location_as_province(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_factory_location_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_factory_location(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_factory_location_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_factory_location(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_factory_location_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_province_ownership_as_province(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::province_ownership_id result = alice_state_ptr->world.province_get_province_ownership_as_province(container_arg_0_id);
	return result.index();
}
int32_t alice_province_get_province_ownership(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::province_ownership_id result = alice_state_ptr->world.province_get_province_ownership(container_arg_0_id);
	return result.index();
}
int32_t alice_province_get_province_control_as_province(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::province_control_id result = alice_state_ptr->world.province_get_province_control_as_province(container_arg_0_id);
	return result.index();
}
int32_t alice_province_get_province_control(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::province_control_id result = alice_state_ptr->world.province_get_province_control(container_arg_0_id);
	return result.index();
}
int32_t alice_province_get_province_rebel_control_as_province(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::province_rebel_control_id result = alice_state_ptr->world.province_get_province_rebel_control_as_province(container_arg_0_id);
	return result.index();
}
int32_t alice_province_get_province_rebel_control(int32_t api_arg_0_id){
	dcon::province_id container_arg_0_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_0_id)};
	dcon::province_rebel_control_id result = alice_state_ptr->world.province_get_province_rebel_control(container_arg_0_id);
	return result.index();
}
int32_t alice_province_get_range_province_naval_construction_as_province(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_naval_construction_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_province_naval_construction_as_province(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_naval_construction_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_province_naval_construction(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_naval_construction_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_province_naval_construction(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_naval_construction_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_province_building_construction_as_province(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_building_construction_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_province_building_construction_as_province(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_building_construction_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_province_building_construction(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_building_construction_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_province_building_construction(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_province_building_construction_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_factory_construction_as_province(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_factory_construction_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_factory_construction_as_province(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_factory_construction_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_factory_construction(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_factory_construction_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_factory_construction(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_factory_construction_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_pop_location_as_province(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_pop_location_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_pop_location_as_province(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_pop_location_as_province(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_province_get_range_pop_location(int32_t i) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_pop_location_as_province(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_province_get_index_pop_location(int32_t i, int32_t subindex) { 
	auto index = dcon::province_id{dcon::province_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.province_get_pop_location_as_province(index);
	return rng.begin()[subindex].id.index();
}

void alice_pop_back_province() { 
	if(alice_state_ptr->world.province_size() > 0) {
		auto index = dcon::province_id{dcon::province_id::value_base_t(alice_state_ptr->world.province_size() - 1)};
		alice_state_ptr->world.pop_back_province();
	}
}
int32_t alice_create_province() { 
	auto result = alice_state_ptr->world.create_province();
	return result.index();
}
bool alice_province_adjacency_is_valid(int32_t api_arg_0_id){
	dcon::province_adjacency_id container_arg_0_id = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_adjacency_is_valid(container_arg_0_id);
}
uint32_t alice_province_adjacency_size(){
	return alice_state_ptr->world.province_adjacency_size();
}
void alice_province_adjacency_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_adjacency_resize(container_arg_0_value);
}
float alice_province_adjacency_get_distance(int32_t api_arg_0_id){
	dcon::province_adjacency_id container_arg_0_id = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_adjacency_get_distance(container_arg_0_id);
}
void alice_province_adjacency_set_distance(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_adjacency_id container_arg_0_id = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_adjacency_set_distance(container_arg_0_id, container_arg_1_value);
}
float alice_province_adjacency_get_distance_km(int32_t api_arg_0_id){
	dcon::province_adjacency_id container_arg_0_id = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_adjacency_get_distance_km(container_arg_0_id);
}
void alice_province_adjacency_set_distance_km(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::province_adjacency_id container_arg_0_id = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_adjacency_set_distance_km(container_arg_0_id, container_arg_1_value);
}
dcon::province_id* alice_province_adjacency_get_canal_or_blockade_province(int32_t api_arg_0_id){
	dcon::province_adjacency_id container_arg_0_id = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_adjacency_get_canal_or_blockade_province(container_arg_0_id);
}
uint8_t alice_province_adjacency_get_type(int32_t api_arg_0_id){
	dcon::province_adjacency_id container_arg_0_id = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_adjacency_get_type(container_arg_0_id);
}
void alice_province_adjacency_set_type(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::province_adjacency_id container_arg_0_id = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_adjacency_set_type(container_arg_0_id, container_arg_1_value);
}
int32_t alice_province_adjacency_get_connected_provinces(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::province_adjacency_id container_arg_0_id = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::province_id result = alice_state_ptr->world.province_adjacency_get_connected_provinces(container_arg_0_id, container_arg_1_value);
	return result.index();
}
void alice_province_adjacency_set_connected_provinces(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id){
	dcon::province_adjacency_id container_arg_0_id = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::province_id container_arg_2_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.province_adjacency_set_connected_provinces(container_arg_0_id, container_arg_1_value, container_arg_2_id);
}
void alice_province_adjacency_try_set_connected_provinces(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id){
	dcon::province_adjacency_id container_arg_0_id = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::province_id container_arg_2_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.province_adjacency_try_set_connected_provinces(container_arg_0_id, container_arg_1_value, container_arg_2_id);
}

void alice_pop_back_province_adjacency() { 
	if(alice_state_ptr->world.province_adjacency_size() > 0) {
		auto index = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(alice_state_ptr->world.province_adjacency_size() - 1)};
		alice_state_ptr->world.pop_back_province_adjacency();
	}
}
int32_t alice_try_create_province_adjacency(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_province_adjacency(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_province_adjacency(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_province_adjacency(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
void alice_delete_province_adjacency(int32_t j) { 
	auto index = dcon::province_adjacency_id{dcon::province_adjacency_id::value_base_t(j)};
	alice_state_ptr->world.delete_province_adjacency(index);
}
int32_t alice_get_province_adjacency_by_province_pair(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.get_province_adjacency_by_province_pair(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
bool alice_nation_adjacency_is_valid(int32_t api_arg_0_id){
	dcon::nation_adjacency_id container_arg_0_id = dcon::nation_adjacency_id{dcon::nation_adjacency_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_adjacency_is_valid(container_arg_0_id);
}
uint32_t alice_nation_adjacency_size(){
	return alice_state_ptr->world.nation_adjacency_size();
}
void alice_nation_adjacency_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_adjacency_resize(container_arg_0_value);
}
int32_t alice_nation_adjacency_get_connected_nations(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::nation_adjacency_id container_arg_0_id = dcon::nation_adjacency_id{dcon::nation_adjacency_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::nation_id result = alice_state_ptr->world.nation_adjacency_get_connected_nations(container_arg_0_id, container_arg_1_value);
	return result.index();
}
void alice_nation_adjacency_set_connected_nations(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id){
	dcon::nation_adjacency_id container_arg_0_id = dcon::nation_adjacency_id{dcon::nation_adjacency_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::nation_id container_arg_2_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.nation_adjacency_set_connected_nations(container_arg_0_id, container_arg_1_value, container_arg_2_id);
}
void alice_nation_adjacency_try_set_connected_nations(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id){
	dcon::nation_adjacency_id container_arg_0_id = dcon::nation_adjacency_id{dcon::nation_adjacency_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::nation_id container_arg_2_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.nation_adjacency_try_set_connected_nations(container_arg_0_id, container_arg_1_value, container_arg_2_id);
}

void alice_pop_back_nation_adjacency() { 
	if(alice_state_ptr->world.nation_adjacency_size() > 0) {
		auto index = dcon::nation_adjacency_id{dcon::nation_adjacency_id::value_base_t(alice_state_ptr->world.nation_adjacency_size() - 1)};
		alice_state_ptr->world.pop_back_nation_adjacency();
	}
}
int32_t alice_try_create_nation_adjacency(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_nation_adjacency(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_nation_adjacency(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_nation_adjacency(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
void alice_delete_nation_adjacency(int32_t j) { 
	auto index = dcon::nation_adjacency_id{dcon::nation_adjacency_id::value_base_t(j)};
	alice_state_ptr->world.delete_nation_adjacency(index);
}
int32_t alice_get_nation_adjacency_by_nation_adjacency_pair(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.get_nation_adjacency_by_nation_adjacency_pair(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_regiment_is_valid(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.regiment_is_valid(container_arg_0_id);
}
uint32_t alice_regiment_size(){
	return alice_state_ptr->world.regiment_size();
}
void alice_regiment_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.regiment_resize(container_arg_0_value);
}
int32_t alice_regiment_get_name(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	dcon::unit_name_id result = alice_state_ptr->world.regiment_get_name(container_arg_0_id);
	return result.index();
}
void alice_regiment_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	dcon::unit_name_id container_arg_1_id = dcon::unit_name_id{dcon::unit_name_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.regiment_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_regiment_get_type(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id result = alice_state_ptr->world.regiment_get_type(container_arg_0_id);
	return result.index();
}
void alice_regiment_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.regiment_set_type(container_arg_0_id, container_arg_1_id);
}
float alice_regiment_get_strength(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.regiment_get_strength(container_arg_0_id);
}
void alice_regiment_set_strength(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.regiment_set_strength(container_arg_0_id, container_arg_1_value);
}
float alice_regiment_get_pending_combat_damage(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.regiment_get_pending_combat_damage(container_arg_0_id);
}
void alice_regiment_set_pending_combat_damage(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.regiment_set_pending_combat_damage(container_arg_0_id, container_arg_1_value);
}
float alice_regiment_get_pending_attrition_damage(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.regiment_get_pending_attrition_damage(container_arg_0_id);
}
void alice_regiment_set_pending_attrition_damage(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.regiment_set_pending_attrition_damage(container_arg_0_id, container_arg_1_value);
}
float alice_regiment_get_org(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.regiment_get_org(container_arg_0_id);
}
void alice_regiment_set_org(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.regiment_set_org(container_arg_0_id, container_arg_1_value);
}
float alice_regiment_get_experience(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.regiment_get_experience(container_arg_0_id);
}
void alice_regiment_set_experience(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.regiment_set_experience(container_arg_0_id, container_arg_1_value);
}
int32_t alice_regiment_get_automation_as_regiment(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	dcon::automation_id result = alice_state_ptr->world.regiment_get_automation_as_regiment(container_arg_0_id);
	return result.index();
}
int32_t alice_regiment_get_automation(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	dcon::automation_id result = alice_state_ptr->world.regiment_get_automation(container_arg_0_id);
	return result.index();
}
int32_t alice_regiment_get_army_membership_as_regiment(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	dcon::army_membership_id result = alice_state_ptr->world.regiment_get_army_membership_as_regiment(container_arg_0_id);
	return result.index();
}
int32_t alice_regiment_get_army_membership(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	dcon::army_membership_id result = alice_state_ptr->world.regiment_get_army_membership(container_arg_0_id);
	return result.index();
}
int32_t alice_regiment_get_regiment_source_as_regiment(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	dcon::regiment_source_id result = alice_state_ptr->world.regiment_get_regiment_source_as_regiment(container_arg_0_id);
	return result.index();
}
int32_t alice_regiment_get_regiment_source(int32_t api_arg_0_id){
	dcon::regiment_id container_arg_0_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_0_id)};
	dcon::regiment_source_id result = alice_state_ptr->world.regiment_get_regiment_source(container_arg_0_id);
	return result.index();
}

void alice_delete_regiment(int32_t j) { 
	auto index = dcon::regiment_id{dcon::regiment_id::value_base_t(j)};
	alice_state_ptr->world.delete_regiment(index);
}
int32_t alice_create_regiment() { 
	auto result = alice_state_ptr->world.create_regiment();
	return result.index();
}
bool alice_automated_army_group_is_valid(int32_t api_arg_0_id){
	dcon::automated_army_group_id container_arg_0_id = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.automated_army_group_is_valid(container_arg_0_id);
}
uint32_t alice_automated_army_group_size(){
	return alice_state_ptr->world.automated_army_group_size();
}
void alice_automated_army_group_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.automated_army_group_resize(container_arg_0_value);
}
int32_t alice_automated_army_group_get_owner(int32_t api_arg_0_id){
	dcon::automated_army_group_id container_arg_0_id = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.automated_army_group_get_owner(container_arg_0_id);
	return result.index();
}
void alice_automated_army_group_set_owner(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automated_army_group_id container_arg_0_id = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automated_army_group_set_owner(container_arg_0_id, container_arg_1_id);
}
int32_t alice_automated_army_group_get_hq(int32_t api_arg_0_id){
	dcon::automated_army_group_id container_arg_0_id = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.automated_army_group_get_hq(container_arg_0_id);
	return result.index();
}
void alice_automated_army_group_set_hq(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automated_army_group_id container_arg_0_id = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automated_army_group_set_hq(container_arg_0_id, container_arg_1_id);
}
int32_t alice_automated_army_group_get_range_automated_army_group_membership_regiment_as_army(int32_t i) { 
	auto index = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.automated_army_group_get_automated_army_group_membership_regiment_as_army(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_automated_army_group_get_index_automated_army_group_membership_regiment_as_army(int32_t i, int32_t subindex) { 
	auto index = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.automated_army_group_get_automated_army_group_membership_regiment_as_army(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_automated_army_group_get_range_automated_army_group_membership_regiment(int32_t i) { 
	auto index = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.automated_army_group_get_automated_army_group_membership_regiment_as_army(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_automated_army_group_get_index_automated_army_group_membership_regiment(int32_t i, int32_t subindex) { 
	auto index = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.automated_army_group_get_automated_army_group_membership_regiment_as_army(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_automated_army_group_get_range_automated_army_group_membership_navy_as_army(int32_t i) { 
	auto index = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.automated_army_group_get_automated_army_group_membership_navy_as_army(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_automated_army_group_get_index_automated_army_group_membership_navy_as_army(int32_t i, int32_t subindex) { 
	auto index = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.automated_army_group_get_automated_army_group_membership_navy_as_army(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_automated_army_group_get_range_automated_army_group_membership_navy(int32_t i) { 
	auto index = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.automated_army_group_get_automated_army_group_membership_navy_as_army(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_automated_army_group_get_index_automated_army_group_membership_navy(int32_t i, int32_t subindex) { 
	auto index = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.automated_army_group_get_automated_army_group_membership_navy_as_army(index);
	return rng.begin()[subindex].id.index();
}

void alice_delete_automated_army_group(int32_t j) { 
	auto index = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(j)};
	alice_state_ptr->world.delete_automated_army_group(index);
}
int32_t alice_create_automated_army_group() { 
	auto result = alice_state_ptr->world.create_automated_army_group();
	return result.index();
}
bool alice_automated_army_group_membership_regiment_is_valid(int32_t api_arg_0_id){
	dcon::automated_army_group_membership_regiment_id container_arg_0_id = dcon::automated_army_group_membership_regiment_id{dcon::automated_army_group_membership_regiment_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.automated_army_group_membership_regiment_is_valid(container_arg_0_id);
}
uint32_t alice_automated_army_group_membership_regiment_size(){
	return alice_state_ptr->world.automated_army_group_membership_regiment_size();
}
void alice_automated_army_group_membership_regiment_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.automated_army_group_membership_regiment_resize(container_arg_0_value);
}
int32_t alice_automated_army_group_membership_regiment_get_regiment(int32_t api_arg_0_id){
	dcon::automated_army_group_membership_regiment_id container_arg_0_id = dcon::automated_army_group_membership_regiment_id{dcon::automated_army_group_membership_regiment_id::value_base_t(api_arg_0_id)};
	dcon::regiment_automation_data_id result = alice_state_ptr->world.automated_army_group_membership_regiment_get_regiment(container_arg_0_id);
	return result.index();
}
void alice_automated_army_group_membership_regiment_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automated_army_group_membership_regiment_id container_arg_0_id = dcon::automated_army_group_membership_regiment_id{dcon::automated_army_group_membership_regiment_id::value_base_t(api_arg_0_id)};
	dcon::regiment_automation_data_id container_arg_1_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automated_army_group_membership_regiment_set_regiment(container_arg_0_id, container_arg_1_id);
}
void alice_automated_army_group_membership_regiment_try_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automated_army_group_membership_regiment_id container_arg_0_id = dcon::automated_army_group_membership_regiment_id{dcon::automated_army_group_membership_regiment_id::value_base_t(api_arg_0_id)};
	dcon::regiment_automation_data_id container_arg_1_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automated_army_group_membership_regiment_try_set_regiment(container_arg_0_id, container_arg_1_id);
}
int32_t alice_automated_army_group_membership_regiment_get_army(int32_t api_arg_0_id){
	dcon::automated_army_group_membership_regiment_id container_arg_0_id = dcon::automated_army_group_membership_regiment_id{dcon::automated_army_group_membership_regiment_id::value_base_t(api_arg_0_id)};
	dcon::automated_army_group_id result = alice_state_ptr->world.automated_army_group_membership_regiment_get_army(container_arg_0_id);
	return result.index();
}
void alice_automated_army_group_membership_regiment_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automated_army_group_membership_regiment_id container_arg_0_id = dcon::automated_army_group_membership_regiment_id{dcon::automated_army_group_membership_regiment_id::value_base_t(api_arg_0_id)};
	dcon::automated_army_group_id container_arg_1_id = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automated_army_group_membership_regiment_set_army(container_arg_0_id, container_arg_1_id);
}
void alice_automated_army_group_membership_regiment_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automated_army_group_membership_regiment_id container_arg_0_id = dcon::automated_army_group_membership_regiment_id{dcon::automated_army_group_membership_regiment_id::value_base_t(api_arg_0_id)};
	dcon::automated_army_group_id container_arg_1_id = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automated_army_group_membership_regiment_try_set_army(container_arg_0_id, container_arg_1_id);
}

void alice_delete_automated_army_group_membership_regiment(int32_t j) { 
	auto index = dcon::automated_army_group_membership_regiment_id{dcon::automated_army_group_membership_regiment_id::value_base_t(j)};
	alice_state_ptr->world.delete_automated_army_group_membership_regiment(index);
}
int32_t alice_try_create_automated_army_group_membership_regiment(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_automated_army_group_membership_regiment(dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(p1)}, dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_automated_army_group_membership_regiment(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_automated_army_group_membership_regiment(dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(p1)}, dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(p2)});
	return result.index();
}
bool alice_automated_army_group_membership_navy_is_valid(int32_t api_arg_0_id){
	dcon::automated_army_group_membership_navy_id container_arg_0_id = dcon::automated_army_group_membership_navy_id{dcon::automated_army_group_membership_navy_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.automated_army_group_membership_navy_is_valid(container_arg_0_id);
}
uint32_t alice_automated_army_group_membership_navy_size(){
	return alice_state_ptr->world.automated_army_group_membership_navy_size();
}
void alice_automated_army_group_membership_navy_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.automated_army_group_membership_navy_resize(container_arg_0_value);
}
int32_t alice_automated_army_group_membership_navy_get_navy(int32_t api_arg_0_id){
	dcon::automated_army_group_membership_navy_id container_arg_0_id = dcon::automated_army_group_membership_navy_id{dcon::automated_army_group_membership_navy_id::value_base_t(api_arg_0_id)};
	dcon::navy_id result = alice_state_ptr->world.automated_army_group_membership_navy_get_navy(container_arg_0_id);
	return result.index();
}
void alice_automated_army_group_membership_navy_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automated_army_group_membership_navy_id container_arg_0_id = dcon::automated_army_group_membership_navy_id{dcon::automated_army_group_membership_navy_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automated_army_group_membership_navy_set_navy(container_arg_0_id, container_arg_1_id);
}
void alice_automated_army_group_membership_navy_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automated_army_group_membership_navy_id container_arg_0_id = dcon::automated_army_group_membership_navy_id{dcon::automated_army_group_membership_navy_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automated_army_group_membership_navy_try_set_navy(container_arg_0_id, container_arg_1_id);
}
int32_t alice_automated_army_group_membership_navy_get_army(int32_t api_arg_0_id){
	dcon::automated_army_group_membership_navy_id container_arg_0_id = dcon::automated_army_group_membership_navy_id{dcon::automated_army_group_membership_navy_id::value_base_t(api_arg_0_id)};
	dcon::automated_army_group_id result = alice_state_ptr->world.automated_army_group_membership_navy_get_army(container_arg_0_id);
	return result.index();
}
void alice_automated_army_group_membership_navy_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automated_army_group_membership_navy_id container_arg_0_id = dcon::automated_army_group_membership_navy_id{dcon::automated_army_group_membership_navy_id::value_base_t(api_arg_0_id)};
	dcon::automated_army_group_id container_arg_1_id = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automated_army_group_membership_navy_set_army(container_arg_0_id, container_arg_1_id);
}
void alice_automated_army_group_membership_navy_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automated_army_group_membership_navy_id container_arg_0_id = dcon::automated_army_group_membership_navy_id{dcon::automated_army_group_membership_navy_id::value_base_t(api_arg_0_id)};
	dcon::automated_army_group_id container_arg_1_id = dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automated_army_group_membership_navy_try_set_army(container_arg_0_id, container_arg_1_id);
}

void alice_delete_automated_army_group_membership_navy(int32_t j) { 
	auto index = dcon::automated_army_group_membership_navy_id{dcon::automated_army_group_membership_navy_id::value_base_t(j)};
	alice_state_ptr->world.delete_automated_army_group_membership_navy(index);
}
int32_t alice_try_create_automated_army_group_membership_navy(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_automated_army_group_membership_navy(dcon::navy_id{dcon::navy_id::value_base_t(p1)}, dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_automated_army_group_membership_navy(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_automated_army_group_membership_navy(dcon::navy_id{dcon::navy_id::value_base_t(p1)}, dcon::automated_army_group_id{dcon::automated_army_group_id::value_base_t(p2)});
	return result.index();
}
bool alice_regiment_automation_data_is_valid(int32_t api_arg_0_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.regiment_automation_data_is_valid(container_arg_0_id);
}
uint32_t alice_regiment_automation_data_size(){
	return alice_state_ptr->world.regiment_automation_data_size();
}
void alice_regiment_automation_data_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.regiment_automation_data_resize(container_arg_0_value);
}
sys::army_group_regiment_status* alice_regiment_automation_data_get_status(int32_t api_arg_0_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.regiment_automation_data_get_status(container_arg_0_id);
}
sys::army_group_regiment_task* alice_regiment_automation_data_get_task(int32_t api_arg_0_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.regiment_automation_data_get_task(container_arg_0_id);
}
bool alice_regiment_automation_data_get_await_command_execution_flag(int32_t api_arg_0_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.regiment_automation_data_get_await_command_execution_flag(container_arg_0_id);
}
void alice_regiment_automation_data_set_await_command_execution_flag(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.regiment_automation_data_set_await_command_execution_flag(container_arg_0_id, container_arg_1_value);
}
int32_t alice_regiment_automation_data_get_target(int32_t api_arg_0_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.regiment_automation_data_get_target(container_arg_0_id);
	return result.index();
}
void alice_regiment_automation_data_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.regiment_automation_data_set_target(container_arg_0_id, container_arg_1_id);
}
int32_t alice_regiment_automation_data_get_ferry_target(int32_t api_arg_0_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.regiment_automation_data_get_ferry_target(container_arg_0_id);
	return result.index();
}
void alice_regiment_automation_data_set_ferry_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.regiment_automation_data_set_ferry_target(container_arg_0_id, container_arg_1_id);
}
int32_t alice_regiment_automation_data_get_ferry_origin(int32_t api_arg_0_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.regiment_automation_data_get_ferry_origin(container_arg_0_id);
	return result.index();
}
void alice_regiment_automation_data_set_ferry_origin(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.regiment_automation_data_set_ferry_origin(container_arg_0_id, container_arg_1_id);
}
int32_t alice_regiment_automation_data_get_automated_army_group_membership_regiment_as_regiment(int32_t api_arg_0_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	dcon::automated_army_group_membership_regiment_id result = alice_state_ptr->world.regiment_automation_data_get_automated_army_group_membership_regiment_as_regiment(container_arg_0_id);
	return result.index();
}
int32_t alice_regiment_automation_data_get_automated_army_group_membership_regiment(int32_t api_arg_0_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	dcon::automated_army_group_membership_regiment_id result = alice_state_ptr->world.regiment_automation_data_get_automated_army_group_membership_regiment(container_arg_0_id);
	return result.index();
}
int32_t alice_regiment_automation_data_get_automation_as_automation_data(int32_t api_arg_0_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	dcon::automation_id result = alice_state_ptr->world.regiment_automation_data_get_automation_as_automation_data(container_arg_0_id);
	return result.index();
}
int32_t alice_regiment_automation_data_get_automation(int32_t api_arg_0_id){
	dcon::regiment_automation_data_id container_arg_0_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_0_id)};
	dcon::automation_id result = alice_state_ptr->world.regiment_automation_data_get_automation(container_arg_0_id);
	return result.index();
}

void alice_delete_regiment_automation_data(int32_t j) { 
	auto index = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(j)};
	alice_state_ptr->world.delete_regiment_automation_data(index);
}
int32_t alice_create_regiment_automation_data() { 
	auto result = alice_state_ptr->world.create_regiment_automation_data();
	return result.index();
}
bool alice_automation_is_valid(int32_t api_arg_0_id){
	dcon::automation_id container_arg_0_id = dcon::automation_id{dcon::automation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.automation_is_valid(container_arg_0_id);
}
uint32_t alice_automation_size(){
	return alice_state_ptr->world.automation_size();
}
void alice_automation_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.automation_resize(container_arg_0_value);
}
int32_t alice_automation_get_automation_data(int32_t api_arg_0_id){
	dcon::automation_id container_arg_0_id = dcon::automation_id{dcon::automation_id::value_base_t(api_arg_0_id)};
	dcon::regiment_automation_data_id result = alice_state_ptr->world.automation_get_automation_data(container_arg_0_id);
	return result.index();
}
void alice_automation_set_automation_data(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automation_id container_arg_0_id = dcon::automation_id{dcon::automation_id::value_base_t(api_arg_0_id)};
	dcon::regiment_automation_data_id container_arg_1_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automation_set_automation_data(container_arg_0_id, container_arg_1_id);
}
void alice_automation_try_set_automation_data(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automation_id container_arg_0_id = dcon::automation_id{dcon::automation_id::value_base_t(api_arg_0_id)};
	dcon::regiment_automation_data_id container_arg_1_id = dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automation_try_set_automation_data(container_arg_0_id, container_arg_1_id);
}
int32_t alice_automation_get_regiment(int32_t api_arg_0_id){
	dcon::automation_id container_arg_0_id = dcon::automation_id{dcon::automation_id::value_base_t(api_arg_0_id)};
	dcon::regiment_id result = alice_state_ptr->world.automation_get_regiment(container_arg_0_id);
	return result.index();
}
void alice_automation_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automation_id container_arg_0_id = dcon::automation_id{dcon::automation_id::value_base_t(api_arg_0_id)};
	dcon::regiment_id container_arg_1_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automation_set_regiment(container_arg_0_id, container_arg_1_id);
}
void alice_automation_try_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::automation_id container_arg_0_id = dcon::automation_id{dcon::automation_id::value_base_t(api_arg_0_id)};
	dcon::regiment_id container_arg_1_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.automation_try_set_regiment(container_arg_0_id, container_arg_1_id);
}

void alice_delete_automation(int32_t j) { 
	auto index = dcon::automation_id{dcon::automation_id::value_base_t(j)};
	alice_state_ptr->world.delete_automation(index);
}
int32_t alice_try_create_automation(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_automation(dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(p1)}, dcon::regiment_id{dcon::regiment_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_automation(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_automation(dcon::regiment_automation_data_id{dcon::regiment_automation_data_id::value_base_t(p1)}, dcon::regiment_id{dcon::regiment_id::value_base_t(p2)});
	return result.index();
}
bool alice_ship_is_valid(int32_t api_arg_0_id){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.ship_is_valid(container_arg_0_id);
}
uint32_t alice_ship_size(){
	return alice_state_ptr->world.ship_size();
}
void alice_ship_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.ship_resize(container_arg_0_value);
}
int32_t alice_ship_get_name(int32_t api_arg_0_id){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	dcon::unit_name_id result = alice_state_ptr->world.ship_get_name(container_arg_0_id);
	return result.index();
}
void alice_ship_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	dcon::unit_name_id container_arg_1_id = dcon::unit_name_id{dcon::unit_name_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ship_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_ship_get_type(int32_t api_arg_0_id){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id result = alice_state_ptr->world.ship_get_type(container_arg_0_id);
	return result.index();
}
void alice_ship_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.ship_set_type(container_arg_0_id, container_arg_1_id);
}
float alice_ship_get_strength(int32_t api_arg_0_id){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.ship_get_strength(container_arg_0_id);
}
void alice_ship_set_strength(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.ship_set_strength(container_arg_0_id, container_arg_1_value);
}
float alice_ship_get_org(int32_t api_arg_0_id){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.ship_get_org(container_arg_0_id);
}
void alice_ship_set_org(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.ship_set_org(container_arg_0_id, container_arg_1_value);
}
float alice_ship_get_experience(int32_t api_arg_0_id){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.ship_get_experience(container_arg_0_id);
}
void alice_ship_set_experience(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.ship_set_experience(container_arg_0_id, container_arg_1_value);
}
int32_t alice_ship_get_navy_membership_as_ship(int32_t api_arg_0_id){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	dcon::navy_membership_id result = alice_state_ptr->world.ship_get_navy_membership_as_ship(container_arg_0_id);
	return result.index();
}
int32_t alice_ship_get_navy_membership(int32_t api_arg_0_id){
	dcon::ship_id container_arg_0_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_0_id)};
	dcon::navy_membership_id result = alice_state_ptr->world.ship_get_navy_membership(container_arg_0_id);
	return result.index();
}

void alice_delete_ship(int32_t j) { 
	auto index = dcon::ship_id{dcon::ship_id::value_base_t(j)};
	alice_state_ptr->world.delete_ship(index);
}
int32_t alice_create_ship() { 
	auto result = alice_state_ptr->world.create_ship();
	return result.index();
}
bool alice_army_is_valid(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_is_valid(container_arg_0_id);
}
uint32_t alice_army_size(){
	return alice_state_ptr->world.army_size();
}
void alice_army_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.army_resize(container_arg_0_value);
}
int32_t alice_army_get_name(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::unit_name_id result = alice_state_ptr->world.army_get_name(container_arg_0_id);
	return result.index();
}
void alice_army_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::unit_name_id container_arg_1_id = dcon::unit_name_id{dcon::unit_name_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_set_name(container_arg_0_id, container_arg_1_id);
}
bool alice_army_get_black_flag(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_get_black_flag(container_arg_0_id);
}
void alice_army_set_black_flag(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.army_set_black_flag(container_arg_0_id, container_arg_1_value);
}
bool alice_army_get_is_retreating(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_get_is_retreating(container_arg_0_id);
}
void alice_army_set_is_retreating(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.army_set_is_retreating(container_arg_0_id, container_arg_1_value);
}
bool alice_army_get_is_rebel_hunter(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_get_is_rebel_hunter(container_arg_0_id);
}
void alice_army_set_is_rebel_hunter(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.army_set_is_rebel_hunter(container_arg_0_id, container_arg_1_value);
}
bool alice_army_get_moving_to_merge(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_get_moving_to_merge(container_arg_0_id);
}
void alice_army_set_moving_to_merge(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.army_set_moving_to_merge(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_army_get_special_order(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_get_special_order(container_arg_0_id);
}
void alice_army_set_special_order(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.army_set_special_order(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_army_get_dig_in(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_get_dig_in(container_arg_0_id);
}
void alice_army_set_dig_in(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.army_set_dig_in(container_arg_0_id, container_arg_1_value);
}
sys::date* alice_army_get_arrival_time(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.army_get_arrival_time(container_arg_0_id);
}
float alice_army_get_unused_travel_days(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_get_unused_travel_days(container_arg_0_id);
}
void alice_army_set_unused_travel_days(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.army_set_unused_travel_days(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_army_get_ai_activity(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_get_ai_activity(container_arg_0_id);
}
void alice_army_set_ai_activity(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.army_set_ai_activity(container_arg_0_id, container_arg_1_value);
}
int32_t alice_army_get_ai_province(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.army_get_ai_province(container_arg_0_id);
	return result.index();
}
void alice_army_set_ai_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_set_ai_province(container_arg_0_id, container_arg_1_id);
}
bool alice_army_get_is_ai_controlled(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_get_is_ai_controlled(container_arg_0_id);
}
void alice_army_set_is_ai_controlled(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.army_set_is_ai_controlled(container_arg_0_id, container_arg_1_value);
}
int32_t alice_army_get_army_pursuit_as_source(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_pursuit_id result = alice_state_ptr->world.army_get_army_pursuit_as_source(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_range_army_pursuit_as_target(int32_t i) { 
	auto index = dcon::army_id{dcon::army_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.army_get_army_pursuit_as_target(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_army_get_index_army_pursuit_as_target(int32_t i, int32_t subindex) { 
	auto index = dcon::army_id{dcon::army_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.army_get_army_pursuit_as_target(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_army_get_army_transport_as_army(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_transport_id result = alice_state_ptr->world.army_get_army_transport_as_army(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_army_transport(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_transport_id result = alice_state_ptr->world.army_get_army_transport(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_army_control_as_army(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_control_id result = alice_state_ptr->world.army_get_army_control_as_army(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_army_control(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_control_id result = alice_state_ptr->world.army_get_army_control(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_army_rebel_control_as_army(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_rebel_control_id result = alice_state_ptr->world.army_get_army_rebel_control_as_army(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_army_rebel_control(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_rebel_control_id result = alice_state_ptr->world.army_get_army_rebel_control(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_army_location_as_army(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_location_id result = alice_state_ptr->world.army_get_army_location_as_army(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_army_location(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_location_id result = alice_state_ptr->world.army_get_army_location(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_range_army_membership_as_army(int32_t i) { 
	auto index = dcon::army_id{dcon::army_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.army_get_army_membership_as_army(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_army_get_index_army_membership_as_army(int32_t i, int32_t subindex) { 
	auto index = dcon::army_id{dcon::army_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.army_get_army_membership_as_army(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_army_get_range_army_membership(int32_t i) { 
	auto index = dcon::army_id{dcon::army_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.army_get_army_membership_as_army(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_army_get_index_army_membership(int32_t i, int32_t subindex) { 
	auto index = dcon::army_id{dcon::army_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.army_get_army_membership_as_army(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_army_get_army_battle_participation_as_army(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_battle_participation_id result = alice_state_ptr->world.army_get_army_battle_participation_as_army(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_army_battle_participation(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_battle_participation_id result = alice_state_ptr->world.army_get_army_battle_participation(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_army_leadership_as_army(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_leadership_id result = alice_state_ptr->world.army_get_army_leadership_as_army(container_arg_0_id);
	return result.index();
}
int32_t alice_army_get_army_leadership(int32_t api_arg_0_id){
	dcon::army_id container_arg_0_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_0_id)};
	dcon::army_leadership_id result = alice_state_ptr->world.army_get_army_leadership(container_arg_0_id);
	return result.index();
}

void alice_delete_army(int32_t j) { 
	auto index = dcon::army_id{dcon::army_id::value_base_t(j)};
	alice_state_ptr->world.delete_army(index);
}
int32_t alice_create_army() { 
	auto result = alice_state_ptr->world.create_army();
	return result.index();
}
bool alice_army_pursuit_is_valid(int32_t api_arg_0_id){
	dcon::army_pursuit_id container_arg_0_id = dcon::army_pursuit_id{dcon::army_pursuit_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_pursuit_is_valid(container_arg_0_id);
}
uint32_t alice_army_pursuit_size(){
	return alice_state_ptr->world.army_pursuit_size();
}
void alice_army_pursuit_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.army_pursuit_resize(container_arg_0_value);
}
int32_t alice_army_pursuit_get_source(int32_t api_arg_0_id){
	dcon::army_pursuit_id container_arg_0_id = dcon::army_pursuit_id{dcon::army_pursuit_id::value_base_t(api_arg_0_id)};
	dcon::army_id result = alice_state_ptr->world.army_pursuit_get_source(container_arg_0_id);
	return result.index();
}
void alice_army_pursuit_set_source(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_pursuit_id container_arg_0_id = dcon::army_pursuit_id{dcon::army_pursuit_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_pursuit_set_source(container_arg_0_id, container_arg_1_id);
}
void alice_army_pursuit_try_set_source(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_pursuit_id container_arg_0_id = dcon::army_pursuit_id{dcon::army_pursuit_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_pursuit_try_set_source(container_arg_0_id, container_arg_1_id);
}
int32_t alice_army_pursuit_get_target(int32_t api_arg_0_id){
	dcon::army_pursuit_id container_arg_0_id = dcon::army_pursuit_id{dcon::army_pursuit_id::value_base_t(api_arg_0_id)};
	dcon::army_id result = alice_state_ptr->world.army_pursuit_get_target(container_arg_0_id);
	return result.index();
}
void alice_army_pursuit_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_pursuit_id container_arg_0_id = dcon::army_pursuit_id{dcon::army_pursuit_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_pursuit_set_target(container_arg_0_id, container_arg_1_id);
}
void alice_army_pursuit_try_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_pursuit_id container_arg_0_id = dcon::army_pursuit_id{dcon::army_pursuit_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_pursuit_try_set_target(container_arg_0_id, container_arg_1_id);
}

void alice_delete_army_pursuit(int32_t j) { 
	auto index = dcon::army_pursuit_id{dcon::army_pursuit_id::value_base_t(j)};
	alice_state_ptr->world.delete_army_pursuit(index);
}
int32_t alice_try_create_army_pursuit(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_army_pursuit(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::army_id{dcon::army_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_army_pursuit(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_army_pursuit(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::army_id{dcon::army_id::value_base_t(p2)});
	return result.index();
}
bool alice_navy_is_valid(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.navy_is_valid(container_arg_0_id);
}
uint32_t alice_navy_size(){
	return alice_state_ptr->world.navy_size();
}
void alice_navy_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.navy_resize(container_arg_0_value);
}
int32_t alice_navy_get_name(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::unit_name_id result = alice_state_ptr->world.navy_get_name(container_arg_0_id);
	return result.index();
}
void alice_navy_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::unit_name_id container_arg_1_id = dcon::unit_name_id{dcon::unit_name_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_set_name(container_arg_0_id, container_arg_1_id);
}
sys::date* alice_navy_get_arrival_time(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.navy_get_arrival_time(container_arg_0_id);
}
float alice_navy_get_unused_travel_days(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.navy_get_unused_travel_days(container_arg_0_id);
}
void alice_navy_set_unused_travel_days(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.navy_set_unused_travel_days(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_navy_get_months_outside_naval_range(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.navy_get_months_outside_naval_range(container_arg_0_id);
}
void alice_navy_set_months_outside_naval_range(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.navy_set_months_outside_naval_range(container_arg_0_id, container_arg_1_value);
}
bool alice_navy_get_is_retreating(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.navy_get_is_retreating(container_arg_0_id);
}
void alice_navy_set_is_retreating(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.navy_set_is_retreating(container_arg_0_id, container_arg_1_value);
}
bool alice_navy_get_moving_to_merge(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.navy_get_moving_to_merge(container_arg_0_id);
}
void alice_navy_set_moving_to_merge(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.navy_set_moving_to_merge(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_navy_get_ai_activity(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.navy_get_ai_activity(container_arg_0_id);
}
void alice_navy_set_ai_activity(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.navy_set_ai_activity(container_arg_0_id, container_arg_1_value);
}
int32_t alice_navy_get_automated_army_group_membership_navy_as_navy(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::automated_army_group_membership_navy_id result = alice_state_ptr->world.navy_get_automated_army_group_membership_navy_as_navy(container_arg_0_id);
	return result.index();
}
int32_t alice_navy_get_automated_army_group_membership_navy(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::automated_army_group_membership_navy_id result = alice_state_ptr->world.navy_get_automated_army_group_membership_navy(container_arg_0_id);
	return result.index();
}
int32_t alice_navy_get_range_army_transport_as_navy(int32_t i) { 
	auto index = dcon::navy_id{dcon::navy_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.navy_get_army_transport_as_navy(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_navy_get_index_army_transport_as_navy(int32_t i, int32_t subindex) { 
	auto index = dcon::navy_id{dcon::navy_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.navy_get_army_transport_as_navy(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_navy_get_range_army_transport(int32_t i) { 
	auto index = dcon::navy_id{dcon::navy_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.navy_get_army_transport_as_navy(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_navy_get_index_army_transport(int32_t i, int32_t subindex) { 
	auto index = dcon::navy_id{dcon::navy_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.navy_get_army_transport_as_navy(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_navy_get_navy_control_as_navy(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::navy_control_id result = alice_state_ptr->world.navy_get_navy_control_as_navy(container_arg_0_id);
	return result.index();
}
int32_t alice_navy_get_navy_control(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::navy_control_id result = alice_state_ptr->world.navy_get_navy_control(container_arg_0_id);
	return result.index();
}
int32_t alice_navy_get_navy_location_as_navy(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::navy_location_id result = alice_state_ptr->world.navy_get_navy_location_as_navy(container_arg_0_id);
	return result.index();
}
int32_t alice_navy_get_navy_location(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::navy_location_id result = alice_state_ptr->world.navy_get_navy_location(container_arg_0_id);
	return result.index();
}
int32_t alice_navy_get_range_navy_membership_as_navy(int32_t i) { 
	auto index = dcon::navy_id{dcon::navy_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.navy_get_navy_membership_as_navy(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_navy_get_index_navy_membership_as_navy(int32_t i, int32_t subindex) { 
	auto index = dcon::navy_id{dcon::navy_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.navy_get_navy_membership_as_navy(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_navy_get_range_navy_membership(int32_t i) { 
	auto index = dcon::navy_id{dcon::navy_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.navy_get_navy_membership_as_navy(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_navy_get_index_navy_membership(int32_t i, int32_t subindex) { 
	auto index = dcon::navy_id{dcon::navy_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.navy_get_navy_membership_as_navy(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_navy_get_navy_battle_participation_as_navy(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::navy_battle_participation_id result = alice_state_ptr->world.navy_get_navy_battle_participation_as_navy(container_arg_0_id);
	return result.index();
}
int32_t alice_navy_get_navy_battle_participation(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::navy_battle_participation_id result = alice_state_ptr->world.navy_get_navy_battle_participation(container_arg_0_id);
	return result.index();
}
int32_t alice_navy_get_navy_leadership_as_navy(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::navy_leadership_id result = alice_state_ptr->world.navy_get_navy_leadership_as_navy(container_arg_0_id);
	return result.index();
}
int32_t alice_navy_get_navy_leadership(int32_t api_arg_0_id){
	dcon::navy_id container_arg_0_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_0_id)};
	dcon::navy_leadership_id result = alice_state_ptr->world.navy_get_navy_leadership(container_arg_0_id);
	return result.index();
}

void alice_delete_navy(int32_t j) { 
	auto index = dcon::navy_id{dcon::navy_id::value_base_t(j)};
	alice_state_ptr->world.delete_navy(index);
}
int32_t alice_create_navy() { 
	auto result = alice_state_ptr->world.create_navy();
	return result.index();
}
bool alice_army_transport_is_valid(int32_t api_arg_0_id){
	dcon::army_transport_id container_arg_0_id = dcon::army_transport_id{dcon::army_transport_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_transport_is_valid(container_arg_0_id);
}
uint32_t alice_army_transport_size(){
	return alice_state_ptr->world.army_transport_size();
}
void alice_army_transport_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.army_transport_resize(container_arg_0_value);
}
int32_t alice_army_transport_get_army(int32_t api_arg_0_id){
	dcon::army_transport_id container_arg_0_id = dcon::army_transport_id{dcon::army_transport_id::value_base_t(api_arg_0_id)};
	dcon::army_id result = alice_state_ptr->world.army_transport_get_army(container_arg_0_id);
	return result.index();
}
void alice_army_transport_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_transport_id container_arg_0_id = dcon::army_transport_id{dcon::army_transport_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_transport_set_army(container_arg_0_id, container_arg_1_id);
}
void alice_army_transport_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_transport_id container_arg_0_id = dcon::army_transport_id{dcon::army_transport_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_transport_try_set_army(container_arg_0_id, container_arg_1_id);
}
int32_t alice_army_transport_get_navy(int32_t api_arg_0_id){
	dcon::army_transport_id container_arg_0_id = dcon::army_transport_id{dcon::army_transport_id::value_base_t(api_arg_0_id)};
	dcon::navy_id result = alice_state_ptr->world.army_transport_get_navy(container_arg_0_id);
	return result.index();
}
void alice_army_transport_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_transport_id container_arg_0_id = dcon::army_transport_id{dcon::army_transport_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_transport_set_navy(container_arg_0_id, container_arg_1_id);
}
void alice_army_transport_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_transport_id container_arg_0_id = dcon::army_transport_id{dcon::army_transport_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_transport_try_set_navy(container_arg_0_id, container_arg_1_id);
}

void alice_delete_army_transport(int32_t j) { 
	auto index = dcon::army_transport_id{dcon::army_transport_id::value_base_t(j)};
	alice_state_ptr->world.delete_army_transport(index);
}
int32_t alice_try_create_army_transport(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_army_transport(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::navy_id{dcon::navy_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_army_transport(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_army_transport(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::navy_id{dcon::navy_id::value_base_t(p2)});
	return result.index();
}
bool alice_army_control_is_valid(int32_t api_arg_0_id){
	dcon::army_control_id container_arg_0_id = dcon::army_control_id{dcon::army_control_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_control_is_valid(container_arg_0_id);
}
uint32_t alice_army_control_size(){
	return alice_state_ptr->world.army_control_size();
}
void alice_army_control_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.army_control_resize(container_arg_0_value);
}
int32_t alice_army_control_get_army(int32_t api_arg_0_id){
	dcon::army_control_id container_arg_0_id = dcon::army_control_id{dcon::army_control_id::value_base_t(api_arg_0_id)};
	dcon::army_id result = alice_state_ptr->world.army_control_get_army(container_arg_0_id);
	return result.index();
}
void alice_army_control_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_control_id container_arg_0_id = dcon::army_control_id{dcon::army_control_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_control_set_army(container_arg_0_id, container_arg_1_id);
}
void alice_army_control_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_control_id container_arg_0_id = dcon::army_control_id{dcon::army_control_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_control_try_set_army(container_arg_0_id, container_arg_1_id);
}
int32_t alice_army_control_get_controller(int32_t api_arg_0_id){
	dcon::army_control_id container_arg_0_id = dcon::army_control_id{dcon::army_control_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.army_control_get_controller(container_arg_0_id);
	return result.index();
}
void alice_army_control_set_controller(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_control_id container_arg_0_id = dcon::army_control_id{dcon::army_control_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_control_set_controller(container_arg_0_id, container_arg_1_id);
}
void alice_army_control_try_set_controller(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_control_id container_arg_0_id = dcon::army_control_id{dcon::army_control_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_control_try_set_controller(container_arg_0_id, container_arg_1_id);
}

void alice_delete_army_control(int32_t j) { 
	auto index = dcon::army_control_id{dcon::army_control_id::value_base_t(j)};
	alice_state_ptr->world.delete_army_control(index);
}
int32_t alice_try_create_army_control(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_army_control(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_army_control(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_army_control(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_army_rebel_control_is_valid(int32_t api_arg_0_id){
	dcon::army_rebel_control_id container_arg_0_id = dcon::army_rebel_control_id{dcon::army_rebel_control_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_rebel_control_is_valid(container_arg_0_id);
}
uint32_t alice_army_rebel_control_size(){
	return alice_state_ptr->world.army_rebel_control_size();
}
void alice_army_rebel_control_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.army_rebel_control_resize(container_arg_0_value);
}
int32_t alice_army_rebel_control_get_army(int32_t api_arg_0_id){
	dcon::army_rebel_control_id container_arg_0_id = dcon::army_rebel_control_id{dcon::army_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::army_id result = alice_state_ptr->world.army_rebel_control_get_army(container_arg_0_id);
	return result.index();
}
void alice_army_rebel_control_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_rebel_control_id container_arg_0_id = dcon::army_rebel_control_id{dcon::army_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_rebel_control_set_army(container_arg_0_id, container_arg_1_id);
}
void alice_army_rebel_control_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_rebel_control_id container_arg_0_id = dcon::army_rebel_control_id{dcon::army_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_rebel_control_try_set_army(container_arg_0_id, container_arg_1_id);
}
int32_t alice_army_rebel_control_get_controller(int32_t api_arg_0_id){
	dcon::army_rebel_control_id container_arg_0_id = dcon::army_rebel_control_id{dcon::army_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id result = alice_state_ptr->world.army_rebel_control_get_controller(container_arg_0_id);
	return result.index();
}
void alice_army_rebel_control_set_controller(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_rebel_control_id container_arg_0_id = dcon::army_rebel_control_id{dcon::army_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id container_arg_1_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_rebel_control_set_controller(container_arg_0_id, container_arg_1_id);
}
void alice_army_rebel_control_try_set_controller(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_rebel_control_id container_arg_0_id = dcon::army_rebel_control_id{dcon::army_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id container_arg_1_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_rebel_control_try_set_controller(container_arg_0_id, container_arg_1_id);
}

void alice_delete_army_rebel_control(int32_t j) { 
	auto index = dcon::army_rebel_control_id{dcon::army_rebel_control_id::value_base_t(j)};
	alice_state_ptr->world.delete_army_rebel_control(index);
}
int32_t alice_try_create_army_rebel_control(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_army_rebel_control(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_army_rebel_control(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_army_rebel_control(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(p2)});
	return result.index();
}
bool alice_army_location_is_valid(int32_t api_arg_0_id){
	dcon::army_location_id container_arg_0_id = dcon::army_location_id{dcon::army_location_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_location_is_valid(container_arg_0_id);
}
uint32_t alice_army_location_size(){
	return alice_state_ptr->world.army_location_size();
}
void alice_army_location_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.army_location_resize(container_arg_0_value);
}
int32_t alice_army_location_get_army(int32_t api_arg_0_id){
	dcon::army_location_id container_arg_0_id = dcon::army_location_id{dcon::army_location_id::value_base_t(api_arg_0_id)};
	dcon::army_id result = alice_state_ptr->world.army_location_get_army(container_arg_0_id);
	return result.index();
}
void alice_army_location_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_location_id container_arg_0_id = dcon::army_location_id{dcon::army_location_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_location_set_army(container_arg_0_id, container_arg_1_id);
}
void alice_army_location_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_location_id container_arg_0_id = dcon::army_location_id{dcon::army_location_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_location_try_set_army(container_arg_0_id, container_arg_1_id);
}
int32_t alice_army_location_get_location(int32_t api_arg_0_id){
	dcon::army_location_id container_arg_0_id = dcon::army_location_id{dcon::army_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.army_location_get_location(container_arg_0_id);
	return result.index();
}
void alice_army_location_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_location_id container_arg_0_id = dcon::army_location_id{dcon::army_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_location_set_location(container_arg_0_id, container_arg_1_id);
}
void alice_army_location_try_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_location_id container_arg_0_id = dcon::army_location_id{dcon::army_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_location_try_set_location(container_arg_0_id, container_arg_1_id);
}

void alice_delete_army_location(int32_t j) { 
	auto index = dcon::army_location_id{dcon::army_location_id::value_base_t(j)};
	alice_state_ptr->world.delete_army_location(index);
}
int32_t alice_try_create_army_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_army_location(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_army_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_army_location(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
bool alice_army_membership_is_valid(int32_t api_arg_0_id){
	dcon::army_membership_id container_arg_0_id = dcon::army_membership_id{dcon::army_membership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_membership_is_valid(container_arg_0_id);
}
uint32_t alice_army_membership_size(){
	return alice_state_ptr->world.army_membership_size();
}
void alice_army_membership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.army_membership_resize(container_arg_0_value);
}
int32_t alice_army_membership_get_regiment(int32_t api_arg_0_id){
	dcon::army_membership_id container_arg_0_id = dcon::army_membership_id{dcon::army_membership_id::value_base_t(api_arg_0_id)};
	dcon::regiment_id result = alice_state_ptr->world.army_membership_get_regiment(container_arg_0_id);
	return result.index();
}
void alice_army_membership_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_membership_id container_arg_0_id = dcon::army_membership_id{dcon::army_membership_id::value_base_t(api_arg_0_id)};
	dcon::regiment_id container_arg_1_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_membership_set_regiment(container_arg_0_id, container_arg_1_id);
}
void alice_army_membership_try_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_membership_id container_arg_0_id = dcon::army_membership_id{dcon::army_membership_id::value_base_t(api_arg_0_id)};
	dcon::regiment_id container_arg_1_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_membership_try_set_regiment(container_arg_0_id, container_arg_1_id);
}
int32_t alice_army_membership_get_army(int32_t api_arg_0_id){
	dcon::army_membership_id container_arg_0_id = dcon::army_membership_id{dcon::army_membership_id::value_base_t(api_arg_0_id)};
	dcon::army_id result = alice_state_ptr->world.army_membership_get_army(container_arg_0_id);
	return result.index();
}
void alice_army_membership_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_membership_id container_arg_0_id = dcon::army_membership_id{dcon::army_membership_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_membership_set_army(container_arg_0_id, container_arg_1_id);
}
void alice_army_membership_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_membership_id container_arg_0_id = dcon::army_membership_id{dcon::army_membership_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_membership_try_set_army(container_arg_0_id, container_arg_1_id);
}

void alice_delete_army_membership(int32_t j) { 
	auto index = dcon::army_membership_id{dcon::army_membership_id::value_base_t(j)};
	alice_state_ptr->world.delete_army_membership(index);
}
int32_t alice_try_create_army_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_army_membership(dcon::regiment_id{dcon::regiment_id::value_base_t(p1)}, dcon::army_id{dcon::army_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_army_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_army_membership(dcon::regiment_id{dcon::regiment_id::value_base_t(p1)}, dcon::army_id{dcon::army_id::value_base_t(p2)});
	return result.index();
}
bool alice_regiment_source_is_valid(int32_t api_arg_0_id){
	dcon::regiment_source_id container_arg_0_id = dcon::regiment_source_id{dcon::regiment_source_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.regiment_source_is_valid(container_arg_0_id);
}
uint32_t alice_regiment_source_size(){
	return alice_state_ptr->world.regiment_source_size();
}
void alice_regiment_source_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.regiment_source_resize(container_arg_0_value);
}
int32_t alice_regiment_source_get_regiment(int32_t api_arg_0_id){
	dcon::regiment_source_id container_arg_0_id = dcon::regiment_source_id{dcon::regiment_source_id::value_base_t(api_arg_0_id)};
	dcon::regiment_id result = alice_state_ptr->world.regiment_source_get_regiment(container_arg_0_id);
	return result.index();
}
void alice_regiment_source_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::regiment_source_id container_arg_0_id = dcon::regiment_source_id{dcon::regiment_source_id::value_base_t(api_arg_0_id)};
	dcon::regiment_id container_arg_1_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.regiment_source_set_regiment(container_arg_0_id, container_arg_1_id);
}
void alice_regiment_source_try_set_regiment(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::regiment_source_id container_arg_0_id = dcon::regiment_source_id{dcon::regiment_source_id::value_base_t(api_arg_0_id)};
	dcon::regiment_id container_arg_1_id = dcon::regiment_id{dcon::regiment_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.regiment_source_try_set_regiment(container_arg_0_id, container_arg_1_id);
}
int32_t alice_regiment_source_get_pop(int32_t api_arg_0_id){
	dcon::regiment_source_id container_arg_0_id = dcon::regiment_source_id{dcon::regiment_source_id::value_base_t(api_arg_0_id)};
	dcon::pop_id result = alice_state_ptr->world.regiment_source_get_pop(container_arg_0_id);
	return result.index();
}
void alice_regiment_source_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::regiment_source_id container_arg_0_id = dcon::regiment_source_id{dcon::regiment_source_id::value_base_t(api_arg_0_id)};
	dcon::pop_id container_arg_1_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.regiment_source_set_pop(container_arg_0_id, container_arg_1_id);
}
void alice_regiment_source_try_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::regiment_source_id container_arg_0_id = dcon::regiment_source_id{dcon::regiment_source_id::value_base_t(api_arg_0_id)};
	dcon::pop_id container_arg_1_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.regiment_source_try_set_pop(container_arg_0_id, container_arg_1_id);
}

void alice_delete_regiment_source(int32_t j) { 
	auto index = dcon::regiment_source_id{dcon::regiment_source_id::value_base_t(j)};
	alice_state_ptr->world.delete_regiment_source(index);
}
int32_t alice_try_create_regiment_source(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_regiment_source(dcon::regiment_id{dcon::regiment_id::value_base_t(p1)}, dcon::pop_id{dcon::pop_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_regiment_source(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_regiment_source(dcon::regiment_id{dcon::regiment_id::value_base_t(p1)}, dcon::pop_id{dcon::pop_id::value_base_t(p2)});
	return result.index();
}
bool alice_navy_control_is_valid(int32_t api_arg_0_id){
	dcon::navy_control_id container_arg_0_id = dcon::navy_control_id{dcon::navy_control_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.navy_control_is_valid(container_arg_0_id);
}
uint32_t alice_navy_control_size(){
	return alice_state_ptr->world.navy_control_size();
}
void alice_navy_control_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.navy_control_resize(container_arg_0_value);
}
int32_t alice_navy_control_get_navy(int32_t api_arg_0_id){
	dcon::navy_control_id container_arg_0_id = dcon::navy_control_id{dcon::navy_control_id::value_base_t(api_arg_0_id)};
	dcon::navy_id result = alice_state_ptr->world.navy_control_get_navy(container_arg_0_id);
	return result.index();
}
void alice_navy_control_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_control_id container_arg_0_id = dcon::navy_control_id{dcon::navy_control_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_control_set_navy(container_arg_0_id, container_arg_1_id);
}
void alice_navy_control_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_control_id container_arg_0_id = dcon::navy_control_id{dcon::navy_control_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_control_try_set_navy(container_arg_0_id, container_arg_1_id);
}
int32_t alice_navy_control_get_controller(int32_t api_arg_0_id){
	dcon::navy_control_id container_arg_0_id = dcon::navy_control_id{dcon::navy_control_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.navy_control_get_controller(container_arg_0_id);
	return result.index();
}
void alice_navy_control_set_controller(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_control_id container_arg_0_id = dcon::navy_control_id{dcon::navy_control_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_control_set_controller(container_arg_0_id, container_arg_1_id);
}
void alice_navy_control_try_set_controller(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_control_id container_arg_0_id = dcon::navy_control_id{dcon::navy_control_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_control_try_set_controller(container_arg_0_id, container_arg_1_id);
}

void alice_delete_navy_control(int32_t j) { 
	auto index = dcon::navy_control_id{dcon::navy_control_id::value_base_t(j)};
	alice_state_ptr->world.delete_navy_control(index);
}
int32_t alice_try_create_navy_control(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_navy_control(dcon::navy_id{dcon::navy_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_navy_control(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_navy_control(dcon::navy_id{dcon::navy_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_navy_location_is_valid(int32_t api_arg_0_id){
	dcon::navy_location_id container_arg_0_id = dcon::navy_location_id{dcon::navy_location_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.navy_location_is_valid(container_arg_0_id);
}
uint32_t alice_navy_location_size(){
	return alice_state_ptr->world.navy_location_size();
}
void alice_navy_location_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.navy_location_resize(container_arg_0_value);
}
int32_t alice_navy_location_get_navy(int32_t api_arg_0_id){
	dcon::navy_location_id container_arg_0_id = dcon::navy_location_id{dcon::navy_location_id::value_base_t(api_arg_0_id)};
	dcon::navy_id result = alice_state_ptr->world.navy_location_get_navy(container_arg_0_id);
	return result.index();
}
void alice_navy_location_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_location_id container_arg_0_id = dcon::navy_location_id{dcon::navy_location_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_location_set_navy(container_arg_0_id, container_arg_1_id);
}
void alice_navy_location_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_location_id container_arg_0_id = dcon::navy_location_id{dcon::navy_location_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_location_try_set_navy(container_arg_0_id, container_arg_1_id);
}
int32_t alice_navy_location_get_location(int32_t api_arg_0_id){
	dcon::navy_location_id container_arg_0_id = dcon::navy_location_id{dcon::navy_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.navy_location_get_location(container_arg_0_id);
	return result.index();
}
void alice_navy_location_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_location_id container_arg_0_id = dcon::navy_location_id{dcon::navy_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_location_set_location(container_arg_0_id, container_arg_1_id);
}
void alice_navy_location_try_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_location_id container_arg_0_id = dcon::navy_location_id{dcon::navy_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_location_try_set_location(container_arg_0_id, container_arg_1_id);
}

void alice_delete_navy_location(int32_t j) { 
	auto index = dcon::navy_location_id{dcon::navy_location_id::value_base_t(j)};
	alice_state_ptr->world.delete_navy_location(index);
}
int32_t alice_try_create_navy_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_navy_location(dcon::navy_id{dcon::navy_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_navy_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_navy_location(dcon::navy_id{dcon::navy_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
bool alice_navy_membership_is_valid(int32_t api_arg_0_id){
	dcon::navy_membership_id container_arg_0_id = dcon::navy_membership_id{dcon::navy_membership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.navy_membership_is_valid(container_arg_0_id);
}
uint32_t alice_navy_membership_size(){
	return alice_state_ptr->world.navy_membership_size();
}
void alice_navy_membership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.navy_membership_resize(container_arg_0_value);
}
int32_t alice_navy_membership_get_ship(int32_t api_arg_0_id){
	dcon::navy_membership_id container_arg_0_id = dcon::navy_membership_id{dcon::navy_membership_id::value_base_t(api_arg_0_id)};
	dcon::ship_id result = alice_state_ptr->world.navy_membership_get_ship(container_arg_0_id);
	return result.index();
}
void alice_navy_membership_set_ship(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_membership_id container_arg_0_id = dcon::navy_membership_id{dcon::navy_membership_id::value_base_t(api_arg_0_id)};
	dcon::ship_id container_arg_1_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_membership_set_ship(container_arg_0_id, container_arg_1_id);
}
void alice_navy_membership_try_set_ship(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_membership_id container_arg_0_id = dcon::navy_membership_id{dcon::navy_membership_id::value_base_t(api_arg_0_id)};
	dcon::ship_id container_arg_1_id = dcon::ship_id{dcon::ship_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_membership_try_set_ship(container_arg_0_id, container_arg_1_id);
}
int32_t alice_navy_membership_get_navy(int32_t api_arg_0_id){
	dcon::navy_membership_id container_arg_0_id = dcon::navy_membership_id{dcon::navy_membership_id::value_base_t(api_arg_0_id)};
	dcon::navy_id result = alice_state_ptr->world.navy_membership_get_navy(container_arg_0_id);
	return result.index();
}
void alice_navy_membership_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_membership_id container_arg_0_id = dcon::navy_membership_id{dcon::navy_membership_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_membership_set_navy(container_arg_0_id, container_arg_1_id);
}
void alice_navy_membership_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_membership_id container_arg_0_id = dcon::navy_membership_id{dcon::navy_membership_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_membership_try_set_navy(container_arg_0_id, container_arg_1_id);
}

void alice_delete_navy_membership(int32_t j) { 
	auto index = dcon::navy_membership_id{dcon::navy_membership_id::value_base_t(j)};
	alice_state_ptr->world.delete_navy_membership(index);
}
int32_t alice_try_create_navy_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_navy_membership(dcon::ship_id{dcon::ship_id::value_base_t(p1)}, dcon::navy_id{dcon::navy_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_navy_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_navy_membership(dcon::ship_id{dcon::ship_id::value_base_t(p1)}, dcon::navy_id{dcon::navy_id::value_base_t(p2)});
	return result.index();
}
bool alice_naval_battle_is_valid(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_is_valid(container_arg_0_id);
}
uint32_t alice_naval_battle_size(){
	return alice_state_ptr->world.naval_battle_size();
}
void alice_naval_battle_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.naval_battle_resize(container_arg_0_value);
}
sys::date* alice_naval_battle_get_start_date(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.naval_battle_get_start_date(container_arg_0_id);
}
bool alice_naval_battle_get_war_attacker_is_attacker(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_war_attacker_is_attacker(container_arg_0_id);
}
void alice_naval_battle_set_war_attacker_is_attacker(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_war_attacker_is_attacker(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_naval_battle_get_dice_rolls(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_dice_rolls(container_arg_0_id);
}
void alice_naval_battle_set_dice_rolls(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_dice_rolls(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_attacker_big_ships(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_attacker_big_ships(container_arg_0_id);
}
void alice_naval_battle_set_attacker_big_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_attacker_big_ships(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_attacker_small_ships(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_attacker_small_ships(container_arg_0_id);
}
void alice_naval_battle_set_attacker_small_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_attacker_small_ships(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_attacker_transport_ships(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_attacker_transport_ships(container_arg_0_id);
}
void alice_naval_battle_set_attacker_transport_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_attacker_transport_ships(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_attacker_big_ships_lost(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_attacker_big_ships_lost(container_arg_0_id);
}
void alice_naval_battle_set_attacker_big_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_attacker_big_ships_lost(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_attacker_small_ships_lost(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_attacker_small_ships_lost(container_arg_0_id);
}
void alice_naval_battle_set_attacker_small_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_attacker_small_ships_lost(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_attacker_transport_ships_lost(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_attacker_transport_ships_lost(container_arg_0_id);
}
void alice_naval_battle_set_attacker_transport_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_attacker_transport_ships_lost(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_defender_big_ships(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_defender_big_ships(container_arg_0_id);
}
void alice_naval_battle_set_defender_big_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_defender_big_ships(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_defender_small_ships(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_defender_small_ships(container_arg_0_id);
}
void alice_naval_battle_set_defender_small_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_defender_small_ships(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_defender_transport_ships(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_defender_transport_ships(container_arg_0_id);
}
void alice_naval_battle_set_defender_transport_ships(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_defender_transport_ships(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_defender_big_ships_lost(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_defender_big_ships_lost(container_arg_0_id);
}
void alice_naval_battle_set_defender_big_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_defender_big_ships_lost(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_defender_small_ships_lost(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_defender_small_ships_lost(container_arg_0_id);
}
void alice_naval_battle_set_defender_small_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_defender_small_ships_lost(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_naval_battle_get_defender_transport_ships_lost(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_defender_transport_ships_lost(container_arg_0_id);
}
void alice_naval_battle_set_defender_transport_ships_lost(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_defender_transport_ships_lost(container_arg_0_id, container_arg_1_value);
}
float alice_naval_battle_get_attacker_loss_value(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_attacker_loss_value(container_arg_0_id);
}
void alice_naval_battle_set_attacker_loss_value(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_attacker_loss_value(container_arg_0_id, container_arg_1_value);
}
float alice_naval_battle_get_defender_loss_value(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_defender_loss_value(container_arg_0_id);
}
void alice_naval_battle_set_defender_loss_value(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_defender_loss_value(container_arg_0_id, container_arg_1_value);
}
float alice_naval_battle_get_avg_distance_from_center_line(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_get_avg_distance_from_center_line(container_arg_0_id);
}
void alice_naval_battle_set_avg_distance_from_center_line(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.naval_battle_set_avg_distance_from_center_line(container_arg_0_id, container_arg_1_value);
}
int32_t alice_naval_battle_get_naval_battle_location_as_battle(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_location_id result = alice_state_ptr->world.naval_battle_get_naval_battle_location_as_battle(container_arg_0_id);
	return result.index();
}
int32_t alice_naval_battle_get_naval_battle_location(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_location_id result = alice_state_ptr->world.naval_battle_get_naval_battle_location(container_arg_0_id);
	return result.index();
}
int32_t alice_naval_battle_get_naval_battle_in_war_as_battle(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_in_war_id result = alice_state_ptr->world.naval_battle_get_naval_battle_in_war_as_battle(container_arg_0_id);
	return result.index();
}
int32_t alice_naval_battle_get_naval_battle_in_war(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_in_war_id result = alice_state_ptr->world.naval_battle_get_naval_battle_in_war(container_arg_0_id);
	return result.index();
}
int32_t alice_naval_battle_get_range_navy_battle_participation_as_battle(int32_t i) { 
	auto index = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.naval_battle_get_navy_battle_participation_as_battle(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_naval_battle_get_index_navy_battle_participation_as_battle(int32_t i, int32_t subindex) { 
	auto index = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.naval_battle_get_navy_battle_participation_as_battle(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_naval_battle_get_range_navy_battle_participation(int32_t i) { 
	auto index = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.naval_battle_get_navy_battle_participation_as_battle(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_naval_battle_get_index_navy_battle_participation(int32_t i, int32_t subindex) { 
	auto index = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.naval_battle_get_navy_battle_participation_as_battle(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_naval_battle_get_attacking_admiral_as_battle(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	dcon::attacking_admiral_id result = alice_state_ptr->world.naval_battle_get_attacking_admiral_as_battle(container_arg_0_id);
	return result.index();
}
int32_t alice_naval_battle_get_attacking_admiral(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	dcon::attacking_admiral_id result = alice_state_ptr->world.naval_battle_get_attacking_admiral(container_arg_0_id);
	return result.index();
}
int32_t alice_naval_battle_get_defending_admiral_as_battle(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	dcon::defending_admiral_id result = alice_state_ptr->world.naval_battle_get_defending_admiral_as_battle(container_arg_0_id);
	return result.index();
}
int32_t alice_naval_battle_get_defending_admiral(int32_t api_arg_0_id){
	dcon::naval_battle_id container_arg_0_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_0_id)};
	dcon::defending_admiral_id result = alice_state_ptr->world.naval_battle_get_defending_admiral(container_arg_0_id);
	return result.index();
}

void alice_delete_naval_battle(int32_t j) { 
	auto index = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(j)};
	alice_state_ptr->world.delete_naval_battle(index);
}
int32_t alice_create_naval_battle() { 
	auto result = alice_state_ptr->world.create_naval_battle();
	return result.index();
}
bool alice_naval_battle_location_is_valid(int32_t api_arg_0_id){
	dcon::naval_battle_location_id container_arg_0_id = dcon::naval_battle_location_id{dcon::naval_battle_location_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_location_is_valid(container_arg_0_id);
}
uint32_t alice_naval_battle_location_size(){
	return alice_state_ptr->world.naval_battle_location_size();
}
void alice_naval_battle_location_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.naval_battle_location_resize(container_arg_0_value);
}
int32_t alice_naval_battle_location_get_battle(int32_t api_arg_0_id){
	dcon::naval_battle_location_id container_arg_0_id = dcon::naval_battle_location_id{dcon::naval_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id result = alice_state_ptr->world.naval_battle_location_get_battle(container_arg_0_id);
	return result.index();
}
void alice_naval_battle_location_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::naval_battle_location_id container_arg_0_id = dcon::naval_battle_location_id{dcon::naval_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id container_arg_1_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.naval_battle_location_set_battle(container_arg_0_id, container_arg_1_id);
}
void alice_naval_battle_location_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::naval_battle_location_id container_arg_0_id = dcon::naval_battle_location_id{dcon::naval_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id container_arg_1_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.naval_battle_location_try_set_battle(container_arg_0_id, container_arg_1_id);
}
int32_t alice_naval_battle_location_get_location(int32_t api_arg_0_id){
	dcon::naval_battle_location_id container_arg_0_id = dcon::naval_battle_location_id{dcon::naval_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.naval_battle_location_get_location(container_arg_0_id);
	return result.index();
}
void alice_naval_battle_location_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::naval_battle_location_id container_arg_0_id = dcon::naval_battle_location_id{dcon::naval_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.naval_battle_location_set_location(container_arg_0_id, container_arg_1_id);
}
void alice_naval_battle_location_try_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::naval_battle_location_id container_arg_0_id = dcon::naval_battle_location_id{dcon::naval_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.naval_battle_location_try_set_location(container_arg_0_id, container_arg_1_id);
}

void alice_delete_naval_battle_location(int32_t j) { 
	auto index = dcon::naval_battle_location_id{dcon::naval_battle_location_id::value_base_t(j)};
	alice_state_ptr->world.delete_naval_battle_location(index);
}
int32_t alice_try_create_naval_battle_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_naval_battle_location(dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_naval_battle_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_naval_battle_location(dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
bool alice_naval_battle_in_war_is_valid(int32_t api_arg_0_id){
	dcon::naval_battle_in_war_id container_arg_0_id = dcon::naval_battle_in_war_id{dcon::naval_battle_in_war_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.naval_battle_in_war_is_valid(container_arg_0_id);
}
uint32_t alice_naval_battle_in_war_size(){
	return alice_state_ptr->world.naval_battle_in_war_size();
}
void alice_naval_battle_in_war_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.naval_battle_in_war_resize(container_arg_0_value);
}
int32_t alice_naval_battle_in_war_get_battle(int32_t api_arg_0_id){
	dcon::naval_battle_in_war_id container_arg_0_id = dcon::naval_battle_in_war_id{dcon::naval_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id result = alice_state_ptr->world.naval_battle_in_war_get_battle(container_arg_0_id);
	return result.index();
}
void alice_naval_battle_in_war_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::naval_battle_in_war_id container_arg_0_id = dcon::naval_battle_in_war_id{dcon::naval_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id container_arg_1_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.naval_battle_in_war_set_battle(container_arg_0_id, container_arg_1_id);
}
void alice_naval_battle_in_war_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::naval_battle_in_war_id container_arg_0_id = dcon::naval_battle_in_war_id{dcon::naval_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id container_arg_1_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.naval_battle_in_war_try_set_battle(container_arg_0_id, container_arg_1_id);
}
int32_t alice_naval_battle_in_war_get_war(int32_t api_arg_0_id){
	dcon::naval_battle_in_war_id container_arg_0_id = dcon::naval_battle_in_war_id{dcon::naval_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::war_id result = alice_state_ptr->world.naval_battle_in_war_get_war(container_arg_0_id);
	return result.index();
}
void alice_naval_battle_in_war_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::naval_battle_in_war_id container_arg_0_id = dcon::naval_battle_in_war_id{dcon::naval_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::war_id container_arg_1_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.naval_battle_in_war_set_war(container_arg_0_id, container_arg_1_id);
}
void alice_naval_battle_in_war_try_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::naval_battle_in_war_id container_arg_0_id = dcon::naval_battle_in_war_id{dcon::naval_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::war_id container_arg_1_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.naval_battle_in_war_try_set_war(container_arg_0_id, container_arg_1_id);
}

void alice_delete_naval_battle_in_war(int32_t j) { 
	auto index = dcon::naval_battle_in_war_id{dcon::naval_battle_in_war_id::value_base_t(j)};
	alice_state_ptr->world.delete_naval_battle_in_war(index);
}
int32_t alice_try_create_naval_battle_in_war(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_naval_battle_in_war(dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(p1)}, dcon::war_id{dcon::war_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_naval_battle_in_war(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_naval_battle_in_war(dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(p1)}, dcon::war_id{dcon::war_id::value_base_t(p2)});
	return result.index();
}
bool alice_navy_battle_participation_is_valid(int32_t api_arg_0_id){
	dcon::navy_battle_participation_id container_arg_0_id = dcon::navy_battle_participation_id{dcon::navy_battle_participation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.navy_battle_participation_is_valid(container_arg_0_id);
}
uint32_t alice_navy_battle_participation_size(){
	return alice_state_ptr->world.navy_battle_participation_size();
}
void alice_navy_battle_participation_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.navy_battle_participation_resize(container_arg_0_value);
}
int32_t alice_navy_battle_participation_get_navy(int32_t api_arg_0_id){
	dcon::navy_battle_participation_id container_arg_0_id = dcon::navy_battle_participation_id{dcon::navy_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::navy_id result = alice_state_ptr->world.navy_battle_participation_get_navy(container_arg_0_id);
	return result.index();
}
void alice_navy_battle_participation_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_battle_participation_id container_arg_0_id = dcon::navy_battle_participation_id{dcon::navy_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_battle_participation_set_navy(container_arg_0_id, container_arg_1_id);
}
void alice_navy_battle_participation_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_battle_participation_id container_arg_0_id = dcon::navy_battle_participation_id{dcon::navy_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_battle_participation_try_set_navy(container_arg_0_id, container_arg_1_id);
}
int32_t alice_navy_battle_participation_get_battle(int32_t api_arg_0_id){
	dcon::navy_battle_participation_id container_arg_0_id = dcon::navy_battle_participation_id{dcon::navy_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id result = alice_state_ptr->world.navy_battle_participation_get_battle(container_arg_0_id);
	return result.index();
}
void alice_navy_battle_participation_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_battle_participation_id container_arg_0_id = dcon::navy_battle_participation_id{dcon::navy_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id container_arg_1_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_battle_participation_set_battle(container_arg_0_id, container_arg_1_id);
}
void alice_navy_battle_participation_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_battle_participation_id container_arg_0_id = dcon::navy_battle_participation_id{dcon::navy_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id container_arg_1_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_battle_participation_try_set_battle(container_arg_0_id, container_arg_1_id);
}

void alice_delete_navy_battle_participation(int32_t j) { 
	auto index = dcon::navy_battle_participation_id{dcon::navy_battle_participation_id::value_base_t(j)};
	alice_state_ptr->world.delete_navy_battle_participation(index);
}
int32_t alice_try_create_navy_battle_participation(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_navy_battle_participation(dcon::navy_id{dcon::navy_id::value_base_t(p1)}, dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_navy_battle_participation(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_navy_battle_participation(dcon::navy_id{dcon::navy_id::value_base_t(p1)}, dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(p2)});
	return result.index();
}
bool alice_attacking_admiral_is_valid(int32_t api_arg_0_id){
	dcon::attacking_admiral_id container_arg_0_id = dcon::attacking_admiral_id{dcon::attacking_admiral_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.attacking_admiral_is_valid(container_arg_0_id);
}
uint32_t alice_attacking_admiral_size(){
	return alice_state_ptr->world.attacking_admiral_size();
}
void alice_attacking_admiral_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.attacking_admiral_resize(container_arg_0_value);
}
int32_t alice_attacking_admiral_get_battle(int32_t api_arg_0_id){
	dcon::attacking_admiral_id container_arg_0_id = dcon::attacking_admiral_id{dcon::attacking_admiral_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id result = alice_state_ptr->world.attacking_admiral_get_battle(container_arg_0_id);
	return result.index();
}
void alice_attacking_admiral_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::attacking_admiral_id container_arg_0_id = dcon::attacking_admiral_id{dcon::attacking_admiral_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id container_arg_1_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.attacking_admiral_set_battle(container_arg_0_id, container_arg_1_id);
}
void alice_attacking_admiral_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::attacking_admiral_id container_arg_0_id = dcon::attacking_admiral_id{dcon::attacking_admiral_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id container_arg_1_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.attacking_admiral_try_set_battle(container_arg_0_id, container_arg_1_id);
}
int32_t alice_attacking_admiral_get_admiral(int32_t api_arg_0_id){
	dcon::attacking_admiral_id container_arg_0_id = dcon::attacking_admiral_id{dcon::attacking_admiral_id::value_base_t(api_arg_0_id)};
	dcon::leader_id result = alice_state_ptr->world.attacking_admiral_get_admiral(container_arg_0_id);
	return result.index();
}
void alice_attacking_admiral_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::attacking_admiral_id container_arg_0_id = dcon::attacking_admiral_id{dcon::attacking_admiral_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.attacking_admiral_set_admiral(container_arg_0_id, container_arg_1_id);
}
void alice_attacking_admiral_try_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::attacking_admiral_id container_arg_0_id = dcon::attacking_admiral_id{dcon::attacking_admiral_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.attacking_admiral_try_set_admiral(container_arg_0_id, container_arg_1_id);
}

void alice_delete_attacking_admiral(int32_t j) { 
	auto index = dcon::attacking_admiral_id{dcon::attacking_admiral_id::value_base_t(j)};
	alice_state_ptr->world.delete_attacking_admiral(index);
}
int32_t alice_try_create_attacking_admiral(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_attacking_admiral(dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_attacking_admiral(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_attacking_admiral(dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
bool alice_defending_admiral_is_valid(int32_t api_arg_0_id){
	dcon::defending_admiral_id container_arg_0_id = dcon::defending_admiral_id{dcon::defending_admiral_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.defending_admiral_is_valid(container_arg_0_id);
}
uint32_t alice_defending_admiral_size(){
	return alice_state_ptr->world.defending_admiral_size();
}
void alice_defending_admiral_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.defending_admiral_resize(container_arg_0_value);
}
int32_t alice_defending_admiral_get_battle(int32_t api_arg_0_id){
	dcon::defending_admiral_id container_arg_0_id = dcon::defending_admiral_id{dcon::defending_admiral_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id result = alice_state_ptr->world.defending_admiral_get_battle(container_arg_0_id);
	return result.index();
}
void alice_defending_admiral_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::defending_admiral_id container_arg_0_id = dcon::defending_admiral_id{dcon::defending_admiral_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id container_arg_1_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.defending_admiral_set_battle(container_arg_0_id, container_arg_1_id);
}
void alice_defending_admiral_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::defending_admiral_id container_arg_0_id = dcon::defending_admiral_id{dcon::defending_admiral_id::value_base_t(api_arg_0_id)};
	dcon::naval_battle_id container_arg_1_id = dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.defending_admiral_try_set_battle(container_arg_0_id, container_arg_1_id);
}
int32_t alice_defending_admiral_get_admiral(int32_t api_arg_0_id){
	dcon::defending_admiral_id container_arg_0_id = dcon::defending_admiral_id{dcon::defending_admiral_id::value_base_t(api_arg_0_id)};
	dcon::leader_id result = alice_state_ptr->world.defending_admiral_get_admiral(container_arg_0_id);
	return result.index();
}
void alice_defending_admiral_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::defending_admiral_id container_arg_0_id = dcon::defending_admiral_id{dcon::defending_admiral_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.defending_admiral_set_admiral(container_arg_0_id, container_arg_1_id);
}
void alice_defending_admiral_try_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::defending_admiral_id container_arg_0_id = dcon::defending_admiral_id{dcon::defending_admiral_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.defending_admiral_try_set_admiral(container_arg_0_id, container_arg_1_id);
}

void alice_delete_defending_admiral(int32_t j) { 
	auto index = dcon::defending_admiral_id{dcon::defending_admiral_id::value_base_t(j)};
	alice_state_ptr->world.delete_defending_admiral(index);
}
int32_t alice_try_create_defending_admiral(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_defending_admiral(dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_defending_admiral(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_defending_admiral(dcon::naval_battle_id{dcon::naval_battle_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
bool alice_land_battle_is_valid(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_is_valid(container_arg_0_id);
}
uint32_t alice_land_battle_size(){
	return alice_state_ptr->world.land_battle_size();
}
void alice_land_battle_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.land_battle_resize(container_arg_0_value);
}
sys::date* alice_land_battle_get_start_date(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.land_battle_get_start_date(container_arg_0_id);
}
bool alice_land_battle_get_war_attacker_is_attacker(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_war_attacker_is_attacker(container_arg_0_id);
}
void alice_land_battle_set_war_attacker_is_attacker(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_war_attacker_is_attacker(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_land_battle_get_dice_rolls(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_dice_rolls(container_arg_0_id);
}
void alice_land_battle_set_dice_rolls(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_dice_rolls(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_land_battle_get_combat_width(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_combat_width(container_arg_0_id);
}
void alice_land_battle_set_combat_width(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_combat_width(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_attacker_infantry(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_attacker_infantry(container_arg_0_id);
}
void alice_land_battle_set_attacker_infantry(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_attacker_infantry(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_attacker_cav(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_attacker_cav(container_arg_0_id);
}
void alice_land_battle_set_attacker_cav(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_attacker_cav(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_attacker_support(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_attacker_support(container_arg_0_id);
}
void alice_land_battle_set_attacker_support(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_attacker_support(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_attacker_infantry_lost(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_attacker_infantry_lost(container_arg_0_id);
}
void alice_land_battle_set_attacker_infantry_lost(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_attacker_infantry_lost(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_attacker_cav_lost(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_attacker_cav_lost(container_arg_0_id);
}
void alice_land_battle_set_attacker_cav_lost(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_attacker_cav_lost(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_attacker_support_lost(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_attacker_support_lost(container_arg_0_id);
}
void alice_land_battle_set_attacker_support_lost(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_attacker_support_lost(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_defender_infantry(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_defender_infantry(container_arg_0_id);
}
void alice_land_battle_set_defender_infantry(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_defender_infantry(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_defender_cav(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_defender_cav(container_arg_0_id);
}
void alice_land_battle_set_defender_cav(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_defender_cav(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_defender_support(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_defender_support(container_arg_0_id);
}
void alice_land_battle_set_defender_support(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_defender_support(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_defender_infantry_lost(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_defender_infantry_lost(container_arg_0_id);
}
void alice_land_battle_set_defender_infantry_lost(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_defender_infantry_lost(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_defender_cav_lost(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_defender_cav_lost(container_arg_0_id);
}
void alice_land_battle_set_defender_cav_lost(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_defender_cav_lost(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_defender_support_lost(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_defender_support_lost(container_arg_0_id);
}
void alice_land_battle_set_defender_support_lost(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_defender_support_lost(container_arg_0_id, container_arg_1_value);
}
std::array<military::battle_regiment,military::max_combat_width>* alice_land_battle_get_attacker_back_line(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.land_battle_get_attacker_back_line(container_arg_0_id);
}
std::array<military::battle_regiment,military::max_combat_width>* alice_land_battle_get_attacker_front_line(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.land_battle_get_attacker_front_line(container_arg_0_id);
}
std::array<military::battle_regiment,military::max_combat_width>* alice_land_battle_get_defender_back_line(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.land_battle_get_defender_back_line(container_arg_0_id);
}
std::array<military::battle_regiment,military::max_combat_width>* alice_land_battle_get_defender_front_line(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.land_battle_get_defender_front_line(container_arg_0_id);
}
float alice_land_battle_get_defender_casualties(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_defender_casualties(container_arg_0_id);
}
void alice_land_battle_set_defender_casualties(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_defender_casualties(container_arg_0_id, container_arg_1_value);
}
float alice_land_battle_get_attacker_casualties(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_get_attacker_casualties(container_arg_0_id);
}
void alice_land_battle_set_attacker_casualties(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.land_battle_set_attacker_casualties(container_arg_0_id, container_arg_1_value);
}
int32_t alice_land_battle_get_land_battle_location_as_battle(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_location_id result = alice_state_ptr->world.land_battle_get_land_battle_location_as_battle(container_arg_0_id);
	return result.index();
}
int32_t alice_land_battle_get_land_battle_location(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_location_id result = alice_state_ptr->world.land_battle_get_land_battle_location(container_arg_0_id);
	return result.index();
}
int32_t alice_land_battle_get_land_battle_in_war_as_battle(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_in_war_id result = alice_state_ptr->world.land_battle_get_land_battle_in_war_as_battle(container_arg_0_id);
	return result.index();
}
int32_t alice_land_battle_get_land_battle_in_war(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_in_war_id result = alice_state_ptr->world.land_battle_get_land_battle_in_war(container_arg_0_id);
	return result.index();
}
int32_t alice_land_battle_get_range_army_battle_participation_as_battle(int32_t i) { 
	auto index = dcon::land_battle_id{dcon::land_battle_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.land_battle_get_army_battle_participation_as_battle(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_land_battle_get_index_army_battle_participation_as_battle(int32_t i, int32_t subindex) { 
	auto index = dcon::land_battle_id{dcon::land_battle_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.land_battle_get_army_battle_participation_as_battle(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_land_battle_get_range_army_battle_participation(int32_t i) { 
	auto index = dcon::land_battle_id{dcon::land_battle_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.land_battle_get_army_battle_participation_as_battle(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_land_battle_get_index_army_battle_participation(int32_t i, int32_t subindex) { 
	auto index = dcon::land_battle_id{dcon::land_battle_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.land_battle_get_army_battle_participation_as_battle(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_land_battle_get_attacking_general_as_battle(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	dcon::attacking_general_id result = alice_state_ptr->world.land_battle_get_attacking_general_as_battle(container_arg_0_id);
	return result.index();
}
int32_t alice_land_battle_get_attacking_general(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	dcon::attacking_general_id result = alice_state_ptr->world.land_battle_get_attacking_general(container_arg_0_id);
	return result.index();
}
int32_t alice_land_battle_get_defending_general_as_battle(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	dcon::defending_general_id result = alice_state_ptr->world.land_battle_get_defending_general_as_battle(container_arg_0_id);
	return result.index();
}
int32_t alice_land_battle_get_defending_general(int32_t api_arg_0_id){
	dcon::land_battle_id container_arg_0_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_0_id)};
	dcon::defending_general_id result = alice_state_ptr->world.land_battle_get_defending_general(container_arg_0_id);
	return result.index();
}

void alice_delete_land_battle(int32_t j) { 
	auto index = dcon::land_battle_id{dcon::land_battle_id::value_base_t(j)};
	alice_state_ptr->world.delete_land_battle(index);
}
int32_t alice_create_land_battle() { 
	auto result = alice_state_ptr->world.create_land_battle();
	return result.index();
}
bool alice_land_battle_location_is_valid(int32_t api_arg_0_id){
	dcon::land_battle_location_id container_arg_0_id = dcon::land_battle_location_id{dcon::land_battle_location_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_location_is_valid(container_arg_0_id);
}
uint32_t alice_land_battle_location_size(){
	return alice_state_ptr->world.land_battle_location_size();
}
void alice_land_battle_location_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.land_battle_location_resize(container_arg_0_value);
}
int32_t alice_land_battle_location_get_battle(int32_t api_arg_0_id){
	dcon::land_battle_location_id container_arg_0_id = dcon::land_battle_location_id{dcon::land_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id result = alice_state_ptr->world.land_battle_location_get_battle(container_arg_0_id);
	return result.index();
}
void alice_land_battle_location_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::land_battle_location_id container_arg_0_id = dcon::land_battle_location_id{dcon::land_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id container_arg_1_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.land_battle_location_set_battle(container_arg_0_id, container_arg_1_id);
}
void alice_land_battle_location_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::land_battle_location_id container_arg_0_id = dcon::land_battle_location_id{dcon::land_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id container_arg_1_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.land_battle_location_try_set_battle(container_arg_0_id, container_arg_1_id);
}
int32_t alice_land_battle_location_get_location(int32_t api_arg_0_id){
	dcon::land_battle_location_id container_arg_0_id = dcon::land_battle_location_id{dcon::land_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.land_battle_location_get_location(container_arg_0_id);
	return result.index();
}
void alice_land_battle_location_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::land_battle_location_id container_arg_0_id = dcon::land_battle_location_id{dcon::land_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.land_battle_location_set_location(container_arg_0_id, container_arg_1_id);
}
void alice_land_battle_location_try_set_location(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::land_battle_location_id container_arg_0_id = dcon::land_battle_location_id{dcon::land_battle_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.land_battle_location_try_set_location(container_arg_0_id, container_arg_1_id);
}

void alice_delete_land_battle_location(int32_t j) { 
	auto index = dcon::land_battle_location_id{dcon::land_battle_location_id::value_base_t(j)};
	alice_state_ptr->world.delete_land_battle_location(index);
}
int32_t alice_try_create_land_battle_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_land_battle_location(dcon::land_battle_id{dcon::land_battle_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_land_battle_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_land_battle_location(dcon::land_battle_id{dcon::land_battle_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
bool alice_land_battle_in_war_is_valid(int32_t api_arg_0_id){
	dcon::land_battle_in_war_id container_arg_0_id = dcon::land_battle_in_war_id{dcon::land_battle_in_war_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.land_battle_in_war_is_valid(container_arg_0_id);
}
uint32_t alice_land_battle_in_war_size(){
	return alice_state_ptr->world.land_battle_in_war_size();
}
void alice_land_battle_in_war_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.land_battle_in_war_resize(container_arg_0_value);
}
int32_t alice_land_battle_in_war_get_battle(int32_t api_arg_0_id){
	dcon::land_battle_in_war_id container_arg_0_id = dcon::land_battle_in_war_id{dcon::land_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id result = alice_state_ptr->world.land_battle_in_war_get_battle(container_arg_0_id);
	return result.index();
}
void alice_land_battle_in_war_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::land_battle_in_war_id container_arg_0_id = dcon::land_battle_in_war_id{dcon::land_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id container_arg_1_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.land_battle_in_war_set_battle(container_arg_0_id, container_arg_1_id);
}
void alice_land_battle_in_war_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::land_battle_in_war_id container_arg_0_id = dcon::land_battle_in_war_id{dcon::land_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id container_arg_1_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.land_battle_in_war_try_set_battle(container_arg_0_id, container_arg_1_id);
}
int32_t alice_land_battle_in_war_get_war(int32_t api_arg_0_id){
	dcon::land_battle_in_war_id container_arg_0_id = dcon::land_battle_in_war_id{dcon::land_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::war_id result = alice_state_ptr->world.land_battle_in_war_get_war(container_arg_0_id);
	return result.index();
}
void alice_land_battle_in_war_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::land_battle_in_war_id container_arg_0_id = dcon::land_battle_in_war_id{dcon::land_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::war_id container_arg_1_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.land_battle_in_war_set_war(container_arg_0_id, container_arg_1_id);
}
void alice_land_battle_in_war_try_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::land_battle_in_war_id container_arg_0_id = dcon::land_battle_in_war_id{dcon::land_battle_in_war_id::value_base_t(api_arg_0_id)};
	dcon::war_id container_arg_1_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.land_battle_in_war_try_set_war(container_arg_0_id, container_arg_1_id);
}

void alice_delete_land_battle_in_war(int32_t j) { 
	auto index = dcon::land_battle_in_war_id{dcon::land_battle_in_war_id::value_base_t(j)};
	alice_state_ptr->world.delete_land_battle_in_war(index);
}
int32_t alice_try_create_land_battle_in_war(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_land_battle_in_war(dcon::land_battle_id{dcon::land_battle_id::value_base_t(p1)}, dcon::war_id{dcon::war_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_land_battle_in_war(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_land_battle_in_war(dcon::land_battle_id{dcon::land_battle_id::value_base_t(p1)}, dcon::war_id{dcon::war_id::value_base_t(p2)});
	return result.index();
}
bool alice_army_battle_participation_is_valid(int32_t api_arg_0_id){
	dcon::army_battle_participation_id container_arg_0_id = dcon::army_battle_participation_id{dcon::army_battle_participation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_battle_participation_is_valid(container_arg_0_id);
}
uint32_t alice_army_battle_participation_size(){
	return alice_state_ptr->world.army_battle_participation_size();
}
void alice_army_battle_participation_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.army_battle_participation_resize(container_arg_0_value);
}
int32_t alice_army_battle_participation_get_army(int32_t api_arg_0_id){
	dcon::army_battle_participation_id container_arg_0_id = dcon::army_battle_participation_id{dcon::army_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::army_id result = alice_state_ptr->world.army_battle_participation_get_army(container_arg_0_id);
	return result.index();
}
void alice_army_battle_participation_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_battle_participation_id container_arg_0_id = dcon::army_battle_participation_id{dcon::army_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_battle_participation_set_army(container_arg_0_id, container_arg_1_id);
}
void alice_army_battle_participation_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_battle_participation_id container_arg_0_id = dcon::army_battle_participation_id{dcon::army_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_battle_participation_try_set_army(container_arg_0_id, container_arg_1_id);
}
int32_t alice_army_battle_participation_get_battle(int32_t api_arg_0_id){
	dcon::army_battle_participation_id container_arg_0_id = dcon::army_battle_participation_id{dcon::army_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id result = alice_state_ptr->world.army_battle_participation_get_battle(container_arg_0_id);
	return result.index();
}
void alice_army_battle_participation_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_battle_participation_id container_arg_0_id = dcon::army_battle_participation_id{dcon::army_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id container_arg_1_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_battle_participation_set_battle(container_arg_0_id, container_arg_1_id);
}
void alice_army_battle_participation_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_battle_participation_id container_arg_0_id = dcon::army_battle_participation_id{dcon::army_battle_participation_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id container_arg_1_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_battle_participation_try_set_battle(container_arg_0_id, container_arg_1_id);
}

void alice_delete_army_battle_participation(int32_t j) { 
	auto index = dcon::army_battle_participation_id{dcon::army_battle_participation_id::value_base_t(j)};
	alice_state_ptr->world.delete_army_battle_participation(index);
}
int32_t alice_try_create_army_battle_participation(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_army_battle_participation(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::land_battle_id{dcon::land_battle_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_army_battle_participation(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_army_battle_participation(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::land_battle_id{dcon::land_battle_id::value_base_t(p2)});
	return result.index();
}
bool alice_attacking_general_is_valid(int32_t api_arg_0_id){
	dcon::attacking_general_id container_arg_0_id = dcon::attacking_general_id{dcon::attacking_general_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.attacking_general_is_valid(container_arg_0_id);
}
uint32_t alice_attacking_general_size(){
	return alice_state_ptr->world.attacking_general_size();
}
void alice_attacking_general_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.attacking_general_resize(container_arg_0_value);
}
int32_t alice_attacking_general_get_battle(int32_t api_arg_0_id){
	dcon::attacking_general_id container_arg_0_id = dcon::attacking_general_id{dcon::attacking_general_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id result = alice_state_ptr->world.attacking_general_get_battle(container_arg_0_id);
	return result.index();
}
void alice_attacking_general_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::attacking_general_id container_arg_0_id = dcon::attacking_general_id{dcon::attacking_general_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id container_arg_1_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.attacking_general_set_battle(container_arg_0_id, container_arg_1_id);
}
void alice_attacking_general_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::attacking_general_id container_arg_0_id = dcon::attacking_general_id{dcon::attacking_general_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id container_arg_1_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.attacking_general_try_set_battle(container_arg_0_id, container_arg_1_id);
}
int32_t alice_attacking_general_get_general(int32_t api_arg_0_id){
	dcon::attacking_general_id container_arg_0_id = dcon::attacking_general_id{dcon::attacking_general_id::value_base_t(api_arg_0_id)};
	dcon::leader_id result = alice_state_ptr->world.attacking_general_get_general(container_arg_0_id);
	return result.index();
}
void alice_attacking_general_set_general(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::attacking_general_id container_arg_0_id = dcon::attacking_general_id{dcon::attacking_general_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.attacking_general_set_general(container_arg_0_id, container_arg_1_id);
}
void alice_attacking_general_try_set_general(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::attacking_general_id container_arg_0_id = dcon::attacking_general_id{dcon::attacking_general_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.attacking_general_try_set_general(container_arg_0_id, container_arg_1_id);
}

void alice_delete_attacking_general(int32_t j) { 
	auto index = dcon::attacking_general_id{dcon::attacking_general_id::value_base_t(j)};
	alice_state_ptr->world.delete_attacking_general(index);
}
int32_t alice_try_create_attacking_general(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_attacking_general(dcon::land_battle_id{dcon::land_battle_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_attacking_general(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_attacking_general(dcon::land_battle_id{dcon::land_battle_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
bool alice_defending_general_is_valid(int32_t api_arg_0_id){
	dcon::defending_general_id container_arg_0_id = dcon::defending_general_id{dcon::defending_general_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.defending_general_is_valid(container_arg_0_id);
}
uint32_t alice_defending_general_size(){
	return alice_state_ptr->world.defending_general_size();
}
void alice_defending_general_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.defending_general_resize(container_arg_0_value);
}
int32_t alice_defending_general_get_battle(int32_t api_arg_0_id){
	dcon::defending_general_id container_arg_0_id = dcon::defending_general_id{dcon::defending_general_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id result = alice_state_ptr->world.defending_general_get_battle(container_arg_0_id);
	return result.index();
}
void alice_defending_general_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::defending_general_id container_arg_0_id = dcon::defending_general_id{dcon::defending_general_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id container_arg_1_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.defending_general_set_battle(container_arg_0_id, container_arg_1_id);
}
void alice_defending_general_try_set_battle(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::defending_general_id container_arg_0_id = dcon::defending_general_id{dcon::defending_general_id::value_base_t(api_arg_0_id)};
	dcon::land_battle_id container_arg_1_id = dcon::land_battle_id{dcon::land_battle_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.defending_general_try_set_battle(container_arg_0_id, container_arg_1_id);
}
int32_t alice_defending_general_get_general(int32_t api_arg_0_id){
	dcon::defending_general_id container_arg_0_id = dcon::defending_general_id{dcon::defending_general_id::value_base_t(api_arg_0_id)};
	dcon::leader_id result = alice_state_ptr->world.defending_general_get_general(container_arg_0_id);
	return result.index();
}
void alice_defending_general_set_general(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::defending_general_id container_arg_0_id = dcon::defending_general_id{dcon::defending_general_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.defending_general_set_general(container_arg_0_id, container_arg_1_id);
}
void alice_defending_general_try_set_general(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::defending_general_id container_arg_0_id = dcon::defending_general_id{dcon::defending_general_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.defending_general_try_set_general(container_arg_0_id, container_arg_1_id);
}

void alice_delete_defending_general(int32_t j) { 
	auto index = dcon::defending_general_id{dcon::defending_general_id::value_base_t(j)};
	alice_state_ptr->world.delete_defending_general(index);
}
int32_t alice_try_create_defending_general(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_defending_general(dcon::land_battle_id{dcon::land_battle_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_defending_general(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_defending_general(dcon::land_battle_id{dcon::land_battle_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
bool alice_leader_is_valid(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_is_valid(container_arg_0_id);
}
uint32_t alice_leader_size(){
	return alice_state_ptr->world.leader_size();
}
void alice_leader_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.leader_resize(container_arg_0_value);
}
int32_t alice_leader_get_name(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::unit_name_id result = alice_state_ptr->world.leader_get_name(container_arg_0_id);
	return result.index();
}
void alice_leader_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::unit_name_id container_arg_1_id = dcon::unit_name_id{dcon::unit_name_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.leader_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_leader_get_personality(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::leader_trait_id result = alice_state_ptr->world.leader_get_personality(container_arg_0_id);
	return result.index();
}
void alice_leader_set_personality(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::leader_trait_id container_arg_1_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.leader_set_personality(container_arg_0_id, container_arg_1_id);
}
int32_t alice_leader_get_background(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::leader_trait_id result = alice_state_ptr->world.leader_get_background(container_arg_0_id);
	return result.index();
}
void alice_leader_set_background(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::leader_trait_id container_arg_1_id = dcon::leader_trait_id{dcon::leader_trait_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.leader_set_background(container_arg_0_id, container_arg_1_id);
}
sys::date* alice_leader_get_since(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.leader_get_since(container_arg_0_id);
}
float alice_leader_get_prestige(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_get_prestige(container_arg_0_id);
}
void alice_leader_set_prestige(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.leader_set_prestige(container_arg_0_id, container_arg_1_value);
}
bool alice_leader_get_is_admiral(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_get_is_admiral(container_arg_0_id);
}
void alice_leader_set_is_admiral(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.leader_set_is_admiral(container_arg_0_id, container_arg_1_value);
}
int32_t alice_leader_get_attacking_admiral_as_admiral(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::attacking_admiral_id result = alice_state_ptr->world.leader_get_attacking_admiral_as_admiral(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_attacking_admiral(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::attacking_admiral_id result = alice_state_ptr->world.leader_get_attacking_admiral(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_defending_admiral_as_admiral(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::defending_admiral_id result = alice_state_ptr->world.leader_get_defending_admiral_as_admiral(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_defending_admiral(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::defending_admiral_id result = alice_state_ptr->world.leader_get_defending_admiral(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_attacking_general_as_general(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::attacking_general_id result = alice_state_ptr->world.leader_get_attacking_general_as_general(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_attacking_general(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::attacking_general_id result = alice_state_ptr->world.leader_get_attacking_general(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_defending_general_as_general(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::defending_general_id result = alice_state_ptr->world.leader_get_defending_general_as_general(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_defending_general(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::defending_general_id result = alice_state_ptr->world.leader_get_defending_general(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_army_leadership_as_general(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::army_leadership_id result = alice_state_ptr->world.leader_get_army_leadership_as_general(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_army_leadership(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::army_leadership_id result = alice_state_ptr->world.leader_get_army_leadership(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_navy_leadership_as_admiral(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::navy_leadership_id result = alice_state_ptr->world.leader_get_navy_leadership_as_admiral(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_navy_leadership(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::navy_leadership_id result = alice_state_ptr->world.leader_get_navy_leadership(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_leader_loyalty_as_leader(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::leader_loyalty_id result = alice_state_ptr->world.leader_get_leader_loyalty_as_leader(container_arg_0_id);
	return result.index();
}
int32_t alice_leader_get_leader_loyalty(int32_t api_arg_0_id){
	dcon::leader_id container_arg_0_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_0_id)};
	dcon::leader_loyalty_id result = alice_state_ptr->world.leader_get_leader_loyalty(container_arg_0_id);
	return result.index();
}

void alice_delete_leader(int32_t j) { 
	auto index = dcon::leader_id{dcon::leader_id::value_base_t(j)};
	alice_state_ptr->world.delete_leader(index);
}
int32_t alice_create_leader() { 
	auto result = alice_state_ptr->world.create_leader();
	return result.index();
}
bool alice_army_leadership_is_valid(int32_t api_arg_0_id){
	dcon::army_leadership_id container_arg_0_id = dcon::army_leadership_id{dcon::army_leadership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.army_leadership_is_valid(container_arg_0_id);
}
uint32_t alice_army_leadership_size(){
	return alice_state_ptr->world.army_leadership_size();
}
void alice_army_leadership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.army_leadership_resize(container_arg_0_value);
}
int32_t alice_army_leadership_get_army(int32_t api_arg_0_id){
	dcon::army_leadership_id container_arg_0_id = dcon::army_leadership_id{dcon::army_leadership_id::value_base_t(api_arg_0_id)};
	dcon::army_id result = alice_state_ptr->world.army_leadership_get_army(container_arg_0_id);
	return result.index();
}
void alice_army_leadership_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_leadership_id container_arg_0_id = dcon::army_leadership_id{dcon::army_leadership_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_leadership_set_army(container_arg_0_id, container_arg_1_id);
}
void alice_army_leadership_try_set_army(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_leadership_id container_arg_0_id = dcon::army_leadership_id{dcon::army_leadership_id::value_base_t(api_arg_0_id)};
	dcon::army_id container_arg_1_id = dcon::army_id{dcon::army_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_leadership_try_set_army(container_arg_0_id, container_arg_1_id);
}
int32_t alice_army_leadership_get_general(int32_t api_arg_0_id){
	dcon::army_leadership_id container_arg_0_id = dcon::army_leadership_id{dcon::army_leadership_id::value_base_t(api_arg_0_id)};
	dcon::leader_id result = alice_state_ptr->world.army_leadership_get_general(container_arg_0_id);
	return result.index();
}
void alice_army_leadership_set_general(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_leadership_id container_arg_0_id = dcon::army_leadership_id{dcon::army_leadership_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_leadership_set_general(container_arg_0_id, container_arg_1_id);
}
void alice_army_leadership_try_set_general(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::army_leadership_id container_arg_0_id = dcon::army_leadership_id{dcon::army_leadership_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.army_leadership_try_set_general(container_arg_0_id, container_arg_1_id);
}

void alice_delete_army_leadership(int32_t j) { 
	auto index = dcon::army_leadership_id{dcon::army_leadership_id::value_base_t(j)};
	alice_state_ptr->world.delete_army_leadership(index);
}
int32_t alice_try_create_army_leadership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_army_leadership(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_army_leadership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_army_leadership(dcon::army_id{dcon::army_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
bool alice_navy_leadership_is_valid(int32_t api_arg_0_id){
	dcon::navy_leadership_id container_arg_0_id = dcon::navy_leadership_id{dcon::navy_leadership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.navy_leadership_is_valid(container_arg_0_id);
}
uint32_t alice_navy_leadership_size(){
	return alice_state_ptr->world.navy_leadership_size();
}
void alice_navy_leadership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.navy_leadership_resize(container_arg_0_value);
}
int32_t alice_navy_leadership_get_navy(int32_t api_arg_0_id){
	dcon::navy_leadership_id container_arg_0_id = dcon::navy_leadership_id{dcon::navy_leadership_id::value_base_t(api_arg_0_id)};
	dcon::navy_id result = alice_state_ptr->world.navy_leadership_get_navy(container_arg_0_id);
	return result.index();
}
void alice_navy_leadership_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_leadership_id container_arg_0_id = dcon::navy_leadership_id{dcon::navy_leadership_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_leadership_set_navy(container_arg_0_id, container_arg_1_id);
}
void alice_navy_leadership_try_set_navy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_leadership_id container_arg_0_id = dcon::navy_leadership_id{dcon::navy_leadership_id::value_base_t(api_arg_0_id)};
	dcon::navy_id container_arg_1_id = dcon::navy_id{dcon::navy_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_leadership_try_set_navy(container_arg_0_id, container_arg_1_id);
}
int32_t alice_navy_leadership_get_admiral(int32_t api_arg_0_id){
	dcon::navy_leadership_id container_arg_0_id = dcon::navy_leadership_id{dcon::navy_leadership_id::value_base_t(api_arg_0_id)};
	dcon::leader_id result = alice_state_ptr->world.navy_leadership_get_admiral(container_arg_0_id);
	return result.index();
}
void alice_navy_leadership_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_leadership_id container_arg_0_id = dcon::navy_leadership_id{dcon::navy_leadership_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_leadership_set_admiral(container_arg_0_id, container_arg_1_id);
}
void alice_navy_leadership_try_set_admiral(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::navy_leadership_id container_arg_0_id = dcon::navy_leadership_id{dcon::navy_leadership_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.navy_leadership_try_set_admiral(container_arg_0_id, container_arg_1_id);
}

void alice_delete_navy_leadership(int32_t j) { 
	auto index = dcon::navy_leadership_id{dcon::navy_leadership_id::value_base_t(j)};
	alice_state_ptr->world.delete_navy_leadership(index);
}
int32_t alice_try_create_navy_leadership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_navy_leadership(dcon::navy_id{dcon::navy_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_navy_leadership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_navy_leadership(dcon::navy_id{dcon::navy_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
bool alice_leader_loyalty_is_valid(int32_t api_arg_0_id){
	dcon::leader_loyalty_id container_arg_0_id = dcon::leader_loyalty_id{dcon::leader_loyalty_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.leader_loyalty_is_valid(container_arg_0_id);
}
uint32_t alice_leader_loyalty_size(){
	return alice_state_ptr->world.leader_loyalty_size();
}
void alice_leader_loyalty_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.leader_loyalty_resize(container_arg_0_value);
}
int32_t alice_leader_loyalty_get_nation(int32_t api_arg_0_id){
	dcon::leader_loyalty_id container_arg_0_id = dcon::leader_loyalty_id{dcon::leader_loyalty_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.leader_loyalty_get_nation(container_arg_0_id);
	return result.index();
}
void alice_leader_loyalty_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::leader_loyalty_id container_arg_0_id = dcon::leader_loyalty_id{dcon::leader_loyalty_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.leader_loyalty_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_leader_loyalty_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::leader_loyalty_id container_arg_0_id = dcon::leader_loyalty_id{dcon::leader_loyalty_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.leader_loyalty_try_set_nation(container_arg_0_id, container_arg_1_id);
}
int32_t alice_leader_loyalty_get_leader(int32_t api_arg_0_id){
	dcon::leader_loyalty_id container_arg_0_id = dcon::leader_loyalty_id{dcon::leader_loyalty_id::value_base_t(api_arg_0_id)};
	dcon::leader_id result = alice_state_ptr->world.leader_loyalty_get_leader(container_arg_0_id);
	return result.index();
}
void alice_leader_loyalty_set_leader(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::leader_loyalty_id container_arg_0_id = dcon::leader_loyalty_id{dcon::leader_loyalty_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.leader_loyalty_set_leader(container_arg_0_id, container_arg_1_id);
}
void alice_leader_loyalty_try_set_leader(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::leader_loyalty_id container_arg_0_id = dcon::leader_loyalty_id{dcon::leader_loyalty_id::value_base_t(api_arg_0_id)};
	dcon::leader_id container_arg_1_id = dcon::leader_id{dcon::leader_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.leader_loyalty_try_set_leader(container_arg_0_id, container_arg_1_id);
}

void alice_delete_leader_loyalty(int32_t j) { 
	auto index = dcon::leader_loyalty_id{dcon::leader_loyalty_id::value_base_t(j)};
	alice_state_ptr->world.delete_leader_loyalty(index);
}
int32_t alice_try_create_leader_loyalty(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_leader_loyalty(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_leader_loyalty(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_leader_loyalty(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::leader_id{dcon::leader_id::value_base_t(p2)});
	return result.index();
}
bool alice_war_is_valid(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.war_is_valid(container_arg_0_id);
}
uint32_t alice_war_size(){
	return alice_state_ptr->world.war_size();
}
void alice_war_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.war_resize(container_arg_0_value);
}
int32_t alice_war_get_primary_attacker(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.war_get_primary_attacker(container_arg_0_id);
	return result.index();
}
void alice_war_set_primary_attacker(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_set_primary_attacker(container_arg_0_id, container_arg_1_id);
}
int32_t alice_war_get_primary_defender(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.war_get_primary_defender(container_arg_0_id);
	return result.index();
}
void alice_war_set_primary_defender(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_set_primary_defender(container_arg_0_id, container_arg_1_id);
}
sys::date* alice_war_get_start_date(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.war_get_start_date(container_arg_0_id);
}
int32_t alice_war_get_name(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.war_get_name(container_arg_0_id);
	return result.index();
}
void alice_war_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_war_get_over_state(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id result = alice_state_ptr->world.war_get_over_state(container_arg_0_id);
	return result.index();
}
void alice_war_set_over_state(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id container_arg_1_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_set_over_state(container_arg_0_id, container_arg_1_id);
}
int32_t alice_war_get_original_target(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.war_get_original_target(container_arg_0_id);
	return result.index();
}
void alice_war_set_original_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_set_original_target(container_arg_0_id, container_arg_1_id);
}
int32_t alice_war_get_original_attacker(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.war_get_original_attacker(container_arg_0_id);
	return result.index();
}
void alice_war_set_original_attacker(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_set_original_attacker(container_arg_0_id, container_arg_1_id);
}
int32_t alice_war_get_over_tag(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id result = alice_state_ptr->world.war_get_over_tag(container_arg_0_id);
	return result.index();
}
void alice_war_set_over_tag(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_set_over_tag(container_arg_0_id, container_arg_1_id);
}
bool alice_war_get_is_great(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.war_get_is_great(container_arg_0_id);
}
void alice_war_set_is_great(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.war_set_is_great(container_arg_0_id, container_arg_1_value);
}
bool alice_war_get_is_crisis_war(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.war_get_is_crisis_war(container_arg_0_id);
}
void alice_war_set_is_crisis_war(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.war_set_is_crisis_war(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_war_get_number_of_battles(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.war_get_number_of_battles(container_arg_0_id);
}
void alice_war_set_number_of_battles(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.war_set_number_of_battles(container_arg_0_id, container_arg_1_value);
}
float alice_war_get_attacker_battle_score(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.war_get_attacker_battle_score(container_arg_0_id);
}
void alice_war_set_attacker_battle_score(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.war_set_attacker_battle_score(container_arg_0_id, container_arg_1_value);
}
float alice_war_get_defender_battle_score(int32_t api_arg_0_id){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.war_get_defender_battle_score(container_arg_0_id);
}
void alice_war_set_defender_battle_score(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::war_id container_arg_0_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.war_set_defender_battle_score(container_arg_0_id, container_arg_1_value);
}
int32_t alice_war_get_range_naval_battle_in_war_as_war(int32_t i) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_naval_battle_in_war_as_war(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_war_get_index_naval_battle_in_war_as_war(int32_t i, int32_t subindex) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_naval_battle_in_war_as_war(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_war_get_range_naval_battle_in_war(int32_t i) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_naval_battle_in_war_as_war(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_war_get_index_naval_battle_in_war(int32_t i, int32_t subindex) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_naval_battle_in_war_as_war(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_war_get_range_land_battle_in_war_as_war(int32_t i) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_land_battle_in_war_as_war(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_war_get_index_land_battle_in_war_as_war(int32_t i, int32_t subindex) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_land_battle_in_war_as_war(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_war_get_range_land_battle_in_war(int32_t i) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_land_battle_in_war_as_war(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_war_get_index_land_battle_in_war(int32_t i, int32_t subindex) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_land_battle_in_war_as_war(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_war_get_range_war_settlement_as_war(int32_t i) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_war_settlement_as_war(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_war_get_index_war_settlement_as_war(int32_t i, int32_t subindex) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_war_settlement_as_war(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_war_get_range_war_settlement(int32_t i) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_war_settlement_as_war(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_war_get_index_war_settlement(int32_t i, int32_t subindex) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_war_settlement_as_war(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_war_get_range_war_participant_as_war(int32_t i) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_war_participant_as_war(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_war_get_index_war_participant_as_war(int32_t i, int32_t subindex) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_war_participant_as_war(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_war_get_range_war_participant(int32_t i) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_war_participant_as_war(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_war_get_index_war_participant(int32_t i, int32_t subindex) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_war_participant_as_war(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_war_get_range_wargoals_attached_as_war(int32_t i) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_wargoals_attached_as_war(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_war_get_index_wargoals_attached_as_war(int32_t i, int32_t subindex) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_wargoals_attached_as_war(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_war_get_range_wargoals_attached(int32_t i) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_wargoals_attached_as_war(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_war_get_index_wargoals_attached(int32_t i, int32_t subindex) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.war_get_wargoals_attached_as_war(index);
	return rng.begin()[subindex].id.index();
}

void alice_delete_war(int32_t j) { 
	auto index = dcon::war_id{dcon::war_id::value_base_t(j)};
	alice_state_ptr->world.delete_war(index);
}
int32_t alice_create_war() { 
	auto result = alice_state_ptr->world.create_war();
	return result.index();
}
bool alice_peace_offer_is_valid(int32_t api_arg_0_id){
	dcon::peace_offer_id container_arg_0_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.peace_offer_is_valid(container_arg_0_id);
}
uint32_t alice_peace_offer_size(){
	return alice_state_ptr->world.peace_offer_size();
}
void alice_peace_offer_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.peace_offer_resize(container_arg_0_value);
}
int32_t alice_peace_offer_get_target(int32_t api_arg_0_id){
	dcon::peace_offer_id container_arg_0_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.peace_offer_get_target(container_arg_0_id);
	return result.index();
}
void alice_peace_offer_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::peace_offer_id container_arg_0_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.peace_offer_set_target(container_arg_0_id, container_arg_1_id);
}
bool alice_peace_offer_get_is_concession(int32_t api_arg_0_id){
	dcon::peace_offer_id container_arg_0_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.peace_offer_get_is_concession(container_arg_0_id);
}
void alice_peace_offer_set_is_concession(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::peace_offer_id container_arg_0_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.peace_offer_set_is_concession(container_arg_0_id, container_arg_1_value);
}
bool alice_peace_offer_get_is_crisis_offer(int32_t api_arg_0_id){
	dcon::peace_offer_id container_arg_0_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.peace_offer_get_is_crisis_offer(container_arg_0_id);
}
void alice_peace_offer_set_is_crisis_offer(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::peace_offer_id container_arg_0_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.peace_offer_set_is_crisis_offer(container_arg_0_id, container_arg_1_value);
}
int32_t alice_peace_offer_get_pending_peace_offer_as_peace_offer(int32_t api_arg_0_id){
	dcon::peace_offer_id container_arg_0_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::pending_peace_offer_id result = alice_state_ptr->world.peace_offer_get_pending_peace_offer_as_peace_offer(container_arg_0_id);
	return result.index();
}
int32_t alice_peace_offer_get_pending_peace_offer(int32_t api_arg_0_id){
	dcon::peace_offer_id container_arg_0_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::pending_peace_offer_id result = alice_state_ptr->world.peace_offer_get_pending_peace_offer(container_arg_0_id);
	return result.index();
}
int32_t alice_peace_offer_get_war_settlement_as_peace_offer(int32_t api_arg_0_id){
	dcon::peace_offer_id container_arg_0_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::war_settlement_id result = alice_state_ptr->world.peace_offer_get_war_settlement_as_peace_offer(container_arg_0_id);
	return result.index();
}
int32_t alice_peace_offer_get_war_settlement(int32_t api_arg_0_id){
	dcon::peace_offer_id container_arg_0_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::war_settlement_id result = alice_state_ptr->world.peace_offer_get_war_settlement(container_arg_0_id);
	return result.index();
}
int32_t alice_peace_offer_get_range_peace_offer_item_as_peace_offer(int32_t i) { 
	auto index = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.peace_offer_get_peace_offer_item_as_peace_offer(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_peace_offer_get_index_peace_offer_item_as_peace_offer(int32_t i, int32_t subindex) { 
	auto index = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.peace_offer_get_peace_offer_item_as_peace_offer(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_peace_offer_get_range_peace_offer_item(int32_t i) { 
	auto index = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.peace_offer_get_peace_offer_item_as_peace_offer(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_peace_offer_get_index_peace_offer_item(int32_t i, int32_t subindex) { 
	auto index = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.peace_offer_get_peace_offer_item_as_peace_offer(index);
	return rng.begin()[subindex].id.index();
}

void alice_delete_peace_offer(int32_t j) { 
	auto index = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(j)};
	alice_state_ptr->world.delete_peace_offer(index);
}
int32_t alice_create_peace_offer() { 
	auto result = alice_state_ptr->world.create_peace_offer();
	return result.index();
}
bool alice_pending_peace_offer_is_valid(int32_t api_arg_0_id){
	dcon::pending_peace_offer_id container_arg_0_id = dcon::pending_peace_offer_id{dcon::pending_peace_offer_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pending_peace_offer_is_valid(container_arg_0_id);
}
uint32_t alice_pending_peace_offer_size(){
	return alice_state_ptr->world.pending_peace_offer_size();
}
void alice_pending_peace_offer_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pending_peace_offer_resize(container_arg_0_value);
}
int32_t alice_pending_peace_offer_get_nation(int32_t api_arg_0_id){
	dcon::pending_peace_offer_id container_arg_0_id = dcon::pending_peace_offer_id{dcon::pending_peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.pending_peace_offer_get_nation(container_arg_0_id);
	return result.index();
}
void alice_pending_peace_offer_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pending_peace_offer_id container_arg_0_id = dcon::pending_peace_offer_id{dcon::pending_peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pending_peace_offer_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_pending_peace_offer_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pending_peace_offer_id container_arg_0_id = dcon::pending_peace_offer_id{dcon::pending_peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pending_peace_offer_try_set_nation(container_arg_0_id, container_arg_1_id);
}
int32_t alice_pending_peace_offer_get_peace_offer(int32_t api_arg_0_id){
	dcon::pending_peace_offer_id container_arg_0_id = dcon::pending_peace_offer_id{dcon::pending_peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::peace_offer_id result = alice_state_ptr->world.pending_peace_offer_get_peace_offer(container_arg_0_id);
	return result.index();
}
void alice_pending_peace_offer_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pending_peace_offer_id container_arg_0_id = dcon::pending_peace_offer_id{dcon::pending_peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::peace_offer_id container_arg_1_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pending_peace_offer_set_peace_offer(container_arg_0_id, container_arg_1_id);
}
void alice_pending_peace_offer_try_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pending_peace_offer_id container_arg_0_id = dcon::pending_peace_offer_id{dcon::pending_peace_offer_id::value_base_t(api_arg_0_id)};
	dcon::peace_offer_id container_arg_1_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pending_peace_offer_try_set_peace_offer(container_arg_0_id, container_arg_1_id);
}

void alice_delete_pending_peace_offer(int32_t j) { 
	auto index = dcon::pending_peace_offer_id{dcon::pending_peace_offer_id::value_base_t(j)};
	alice_state_ptr->world.delete_pending_peace_offer(index);
}
int32_t alice_try_create_pending_peace_offer(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_pending_peace_offer(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_pending_peace_offer(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_pending_peace_offer(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(p2)});
	return result.index();
}
bool alice_war_settlement_is_valid(int32_t api_arg_0_id){
	dcon::war_settlement_id container_arg_0_id = dcon::war_settlement_id{dcon::war_settlement_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.war_settlement_is_valid(container_arg_0_id);
}
uint32_t alice_war_settlement_size(){
	return alice_state_ptr->world.war_settlement_size();
}
void alice_war_settlement_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.war_settlement_resize(container_arg_0_value);
}
int32_t alice_war_settlement_get_war(int32_t api_arg_0_id){
	dcon::war_settlement_id container_arg_0_id = dcon::war_settlement_id{dcon::war_settlement_id::value_base_t(api_arg_0_id)};
	dcon::war_id result = alice_state_ptr->world.war_settlement_get_war(container_arg_0_id);
	return result.index();
}
void alice_war_settlement_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_settlement_id container_arg_0_id = dcon::war_settlement_id{dcon::war_settlement_id::value_base_t(api_arg_0_id)};
	dcon::war_id container_arg_1_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_settlement_set_war(container_arg_0_id, container_arg_1_id);
}
void alice_war_settlement_try_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_settlement_id container_arg_0_id = dcon::war_settlement_id{dcon::war_settlement_id::value_base_t(api_arg_0_id)};
	dcon::war_id container_arg_1_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_settlement_try_set_war(container_arg_0_id, container_arg_1_id);
}
int32_t alice_war_settlement_get_peace_offer(int32_t api_arg_0_id){
	dcon::war_settlement_id container_arg_0_id = dcon::war_settlement_id{dcon::war_settlement_id::value_base_t(api_arg_0_id)};
	dcon::peace_offer_id result = alice_state_ptr->world.war_settlement_get_peace_offer(container_arg_0_id);
	return result.index();
}
void alice_war_settlement_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_settlement_id container_arg_0_id = dcon::war_settlement_id{dcon::war_settlement_id::value_base_t(api_arg_0_id)};
	dcon::peace_offer_id container_arg_1_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_settlement_set_peace_offer(container_arg_0_id, container_arg_1_id);
}
void alice_war_settlement_try_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_settlement_id container_arg_0_id = dcon::war_settlement_id{dcon::war_settlement_id::value_base_t(api_arg_0_id)};
	dcon::peace_offer_id container_arg_1_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_settlement_try_set_peace_offer(container_arg_0_id, container_arg_1_id);
}

void alice_delete_war_settlement(int32_t j) { 
	auto index = dcon::war_settlement_id{dcon::war_settlement_id::value_base_t(j)};
	alice_state_ptr->world.delete_war_settlement(index);
}
int32_t alice_try_create_war_settlement(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_war_settlement(dcon::war_id{dcon::war_id::value_base_t(p1)}, dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_war_settlement(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_war_settlement(dcon::war_id{dcon::war_id::value_base_t(p1)}, dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(p2)});
	return result.index();
}
bool alice_wargoal_is_valid(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.wargoal_is_valid(container_arg_0_id);
}
uint32_t alice_wargoal_size(){
	return alice_state_ptr->world.wargoal_size();
}
void alice_wargoal_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.wargoal_resize(container_arg_0_value);
}
int32_t alice_wargoal_get_added_by(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.wargoal_get_added_by(container_arg_0_id);
	return result.index();
}
void alice_wargoal_set_added_by(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.wargoal_set_added_by(container_arg_0_id, container_arg_1_id);
}
int32_t alice_wargoal_get_target_nation(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.wargoal_get_target_nation(container_arg_0_id);
	return result.index();
}
void alice_wargoal_set_target_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.wargoal_set_target_nation(container_arg_0_id, container_arg_1_id);
}
int32_t alice_wargoal_get_type(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::cb_type_id result = alice_state_ptr->world.wargoal_get_type(container_arg_0_id);
	return result.index();
}
void alice_wargoal_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::cb_type_id container_arg_1_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.wargoal_set_type(container_arg_0_id, container_arg_1_id);
}
int32_t alice_wargoal_get_associated_tag(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id result = alice_state_ptr->world.wargoal_get_associated_tag(container_arg_0_id);
	return result.index();
}
void alice_wargoal_set_associated_tag(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.wargoal_set_associated_tag(container_arg_0_id, container_arg_1_id);
}
int32_t alice_wargoal_get_secondary_nation(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.wargoal_get_secondary_nation(container_arg_0_id);
	return result.index();
}
void alice_wargoal_set_secondary_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.wargoal_set_secondary_nation(container_arg_0_id, container_arg_1_id);
}
int32_t alice_wargoal_get_associated_state(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id result = alice_state_ptr->world.wargoal_get_associated_state(container_arg_0_id);
	return result.index();
}
void alice_wargoal_set_associated_state(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id container_arg_1_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.wargoal_set_associated_state(container_arg_0_id, container_arg_1_id);
}
float alice_wargoal_get_ticking_war_score(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.wargoal_get_ticking_war_score(container_arg_0_id);
}
void alice_wargoal_set_ticking_war_score(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.wargoal_set_ticking_war_score(container_arg_0_id, container_arg_1_value);
}
int32_t alice_wargoal_get_wargoals_attached_as_wargoal(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::wargoals_attached_id result = alice_state_ptr->world.wargoal_get_wargoals_attached_as_wargoal(container_arg_0_id);
	return result.index();
}
int32_t alice_wargoal_get_wargoals_attached(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::wargoals_attached_id result = alice_state_ptr->world.wargoal_get_wargoals_attached(container_arg_0_id);
	return result.index();
}
int32_t alice_wargoal_get_peace_offer_item_as_wargoal(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::peace_offer_item_id result = alice_state_ptr->world.wargoal_get_peace_offer_item_as_wargoal(container_arg_0_id);
	return result.index();
}
int32_t alice_wargoal_get_peace_offer_item(int32_t api_arg_0_id){
	dcon::wargoal_id container_arg_0_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_0_id)};
	dcon::peace_offer_item_id result = alice_state_ptr->world.wargoal_get_peace_offer_item(container_arg_0_id);
	return result.index();
}

void alice_delete_wargoal(int32_t j) { 
	auto index = dcon::wargoal_id{dcon::wargoal_id::value_base_t(j)};
	alice_state_ptr->world.delete_wargoal(index);
}
int32_t alice_create_wargoal() { 
	auto result = alice_state_ptr->world.create_wargoal();
	return result.index();
}
bool alice_war_participant_is_valid(int32_t api_arg_0_id){
	dcon::war_participant_id container_arg_0_id = dcon::war_participant_id{dcon::war_participant_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.war_participant_is_valid(container_arg_0_id);
}
uint32_t alice_war_participant_size(){
	return alice_state_ptr->world.war_participant_size();
}
void alice_war_participant_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.war_participant_resize(container_arg_0_value);
}
bool alice_war_participant_get_is_attacker(int32_t api_arg_0_id){
	dcon::war_participant_id container_arg_0_id = dcon::war_participant_id{dcon::war_participant_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.war_participant_get_is_attacker(container_arg_0_id);
}
void alice_war_participant_set_is_attacker(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::war_participant_id container_arg_0_id = dcon::war_participant_id{dcon::war_participant_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.war_participant_set_is_attacker(container_arg_0_id, container_arg_1_value);
}
int32_t alice_war_participant_get_war(int32_t api_arg_0_id){
	dcon::war_participant_id container_arg_0_id = dcon::war_participant_id{dcon::war_participant_id::value_base_t(api_arg_0_id)};
	dcon::war_id result = alice_state_ptr->world.war_participant_get_war(container_arg_0_id);
	return result.index();
}
void alice_war_participant_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_participant_id container_arg_0_id = dcon::war_participant_id{dcon::war_participant_id::value_base_t(api_arg_0_id)};
	dcon::war_id container_arg_1_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_participant_set_war(container_arg_0_id, container_arg_1_id);
}
void alice_war_participant_try_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_participant_id container_arg_0_id = dcon::war_participant_id{dcon::war_participant_id::value_base_t(api_arg_0_id)};
	dcon::war_id container_arg_1_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_participant_try_set_war(container_arg_0_id, container_arg_1_id);
}
int32_t alice_war_participant_get_nation(int32_t api_arg_0_id){
	dcon::war_participant_id container_arg_0_id = dcon::war_participant_id{dcon::war_participant_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.war_participant_get_nation(container_arg_0_id);
	return result.index();
}
void alice_war_participant_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_participant_id container_arg_0_id = dcon::war_participant_id{dcon::war_participant_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_participant_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_war_participant_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::war_participant_id container_arg_0_id = dcon::war_participant_id{dcon::war_participant_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.war_participant_try_set_nation(container_arg_0_id, container_arg_1_id);
}

void alice_delete_war_participant(int32_t j) { 
	auto index = dcon::war_participant_id{dcon::war_participant_id::value_base_t(j)};
	alice_state_ptr->world.delete_war_participant(index);
}
int32_t alice_try_create_war_participant(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_war_participant(dcon::war_id{dcon::war_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_war_participant(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_war_participant(dcon::war_id{dcon::war_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_wargoals_attached_is_valid(int32_t api_arg_0_id){
	dcon::wargoals_attached_id container_arg_0_id = dcon::wargoals_attached_id{dcon::wargoals_attached_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.wargoals_attached_is_valid(container_arg_0_id);
}
uint32_t alice_wargoals_attached_size(){
	return alice_state_ptr->world.wargoals_attached_size();
}
void alice_wargoals_attached_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.wargoals_attached_resize(container_arg_0_value);
}
int32_t alice_wargoals_attached_get_war(int32_t api_arg_0_id){
	dcon::wargoals_attached_id container_arg_0_id = dcon::wargoals_attached_id{dcon::wargoals_attached_id::value_base_t(api_arg_0_id)};
	dcon::war_id result = alice_state_ptr->world.wargoals_attached_get_war(container_arg_0_id);
	return result.index();
}
void alice_wargoals_attached_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::wargoals_attached_id container_arg_0_id = dcon::wargoals_attached_id{dcon::wargoals_attached_id::value_base_t(api_arg_0_id)};
	dcon::war_id container_arg_1_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.wargoals_attached_set_war(container_arg_0_id, container_arg_1_id);
}
void alice_wargoals_attached_try_set_war(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::wargoals_attached_id container_arg_0_id = dcon::wargoals_attached_id{dcon::wargoals_attached_id::value_base_t(api_arg_0_id)};
	dcon::war_id container_arg_1_id = dcon::war_id{dcon::war_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.wargoals_attached_try_set_war(container_arg_0_id, container_arg_1_id);
}
int32_t alice_wargoals_attached_get_wargoal(int32_t api_arg_0_id){
	dcon::wargoals_attached_id container_arg_0_id = dcon::wargoals_attached_id{dcon::wargoals_attached_id::value_base_t(api_arg_0_id)};
	dcon::wargoal_id result = alice_state_ptr->world.wargoals_attached_get_wargoal(container_arg_0_id);
	return result.index();
}
void alice_wargoals_attached_set_wargoal(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::wargoals_attached_id container_arg_0_id = dcon::wargoals_attached_id{dcon::wargoals_attached_id::value_base_t(api_arg_0_id)};
	dcon::wargoal_id container_arg_1_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.wargoals_attached_set_wargoal(container_arg_0_id, container_arg_1_id);
}
void alice_wargoals_attached_try_set_wargoal(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::wargoals_attached_id container_arg_0_id = dcon::wargoals_attached_id{dcon::wargoals_attached_id::value_base_t(api_arg_0_id)};
	dcon::wargoal_id container_arg_1_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.wargoals_attached_try_set_wargoal(container_arg_0_id, container_arg_1_id);
}

void alice_delete_wargoals_attached(int32_t j) { 
	auto index = dcon::wargoals_attached_id{dcon::wargoals_attached_id::value_base_t(j)};
	alice_state_ptr->world.delete_wargoals_attached(index);
}
int32_t alice_try_create_wargoals_attached(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_wargoals_attached(dcon::war_id{dcon::war_id::value_base_t(p1)}, dcon::wargoal_id{dcon::wargoal_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_wargoals_attached(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_wargoals_attached(dcon::war_id{dcon::war_id::value_base_t(p1)}, dcon::wargoal_id{dcon::wargoal_id::value_base_t(p2)});
	return result.index();
}
bool alice_peace_offer_item_is_valid(int32_t api_arg_0_id){
	dcon::peace_offer_item_id container_arg_0_id = dcon::peace_offer_item_id{dcon::peace_offer_item_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.peace_offer_item_is_valid(container_arg_0_id);
}
uint32_t alice_peace_offer_item_size(){
	return alice_state_ptr->world.peace_offer_item_size();
}
void alice_peace_offer_item_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.peace_offer_item_resize(container_arg_0_value);
}
int32_t alice_peace_offer_item_get_peace_offer(int32_t api_arg_0_id){
	dcon::peace_offer_item_id container_arg_0_id = dcon::peace_offer_item_id{dcon::peace_offer_item_id::value_base_t(api_arg_0_id)};
	dcon::peace_offer_id result = alice_state_ptr->world.peace_offer_item_get_peace_offer(container_arg_0_id);
	return result.index();
}
void alice_peace_offer_item_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::peace_offer_item_id container_arg_0_id = dcon::peace_offer_item_id{dcon::peace_offer_item_id::value_base_t(api_arg_0_id)};
	dcon::peace_offer_id container_arg_1_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.peace_offer_item_set_peace_offer(container_arg_0_id, container_arg_1_id);
}
void alice_peace_offer_item_try_set_peace_offer(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::peace_offer_item_id container_arg_0_id = dcon::peace_offer_item_id{dcon::peace_offer_item_id::value_base_t(api_arg_0_id)};
	dcon::peace_offer_id container_arg_1_id = dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.peace_offer_item_try_set_peace_offer(container_arg_0_id, container_arg_1_id);
}
int32_t alice_peace_offer_item_get_wargoal(int32_t api_arg_0_id){
	dcon::peace_offer_item_id container_arg_0_id = dcon::peace_offer_item_id{dcon::peace_offer_item_id::value_base_t(api_arg_0_id)};
	dcon::wargoal_id result = alice_state_ptr->world.peace_offer_item_get_wargoal(container_arg_0_id);
	return result.index();
}
void alice_peace_offer_item_set_wargoal(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::peace_offer_item_id container_arg_0_id = dcon::peace_offer_item_id{dcon::peace_offer_item_id::value_base_t(api_arg_0_id)};
	dcon::wargoal_id container_arg_1_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.peace_offer_item_set_wargoal(container_arg_0_id, container_arg_1_id);
}
void alice_peace_offer_item_try_set_wargoal(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::peace_offer_item_id container_arg_0_id = dcon::peace_offer_item_id{dcon::peace_offer_item_id::value_base_t(api_arg_0_id)};
	dcon::wargoal_id container_arg_1_id = dcon::wargoal_id{dcon::wargoal_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.peace_offer_item_try_set_wargoal(container_arg_0_id, container_arg_1_id);
}

void alice_delete_peace_offer_item(int32_t j) { 
	auto index = dcon::peace_offer_item_id{dcon::peace_offer_item_id::value_base_t(j)};
	alice_state_ptr->world.delete_peace_offer_item(index);
}
int32_t alice_try_create_peace_offer_item(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_peace_offer_item(dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(p1)}, dcon::wargoal_id{dcon::wargoal_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_peace_offer_item(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_peace_offer_item(dcon::peace_offer_id{dcon::peace_offer_id::value_base_t(p1)}, dcon::wargoal_id{dcon::wargoal_id::value_base_t(p2)});
	return result.index();
}
bool alice_state_definition_is_valid(int32_t api_arg_0_id){
	dcon::state_definition_id container_arg_0_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.state_definition_is_valid(container_arg_0_id);
}
uint32_t alice_state_definition_size(){
	return alice_state_ptr->world.state_definition_size();
}
void alice_state_definition_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.state_definition_resize(container_arg_0_value);
}
int32_t alice_state_definition_get_name(int32_t api_arg_0_id){
	dcon::state_definition_id container_arg_0_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.state_definition_get_name(container_arg_0_id);
	return result.index();
}
void alice_state_definition_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_definition_id container_arg_0_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_definition_set_name(container_arg_0_id, container_arg_1_id);
}
float alice_state_definition_get_colonization_temperature(int32_t api_arg_0_id){
	dcon::state_definition_id container_arg_0_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.state_definition_get_colonization_temperature(container_arg_0_id);
}
void alice_state_definition_set_colonization_temperature(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::state_definition_id container_arg_0_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.state_definition_set_colonization_temperature(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_state_definition_get_colonization_stage(int32_t api_arg_0_id){
	dcon::state_definition_id container_arg_0_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.state_definition_get_colonization_stage(container_arg_0_id);
}
void alice_state_definition_set_colonization_stage(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::state_definition_id container_arg_0_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.state_definition_set_colonization_stage(container_arg_0_id, container_arg_1_value);
}
int32_t alice_state_definition_get_range_colonization_as_state(int32_t i) { 
	auto index = dcon::state_definition_id{dcon::state_definition_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.state_definition_get_colonization_as_state(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_state_definition_get_index_colonization_as_state(int32_t i, int32_t subindex) { 
	auto index = dcon::state_definition_id{dcon::state_definition_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.state_definition_get_colonization_as_state(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_state_definition_get_range_colonization(int32_t i) { 
	auto index = dcon::state_definition_id{dcon::state_definition_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.state_definition_get_colonization_as_state(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_state_definition_get_index_colonization(int32_t i, int32_t subindex) { 
	auto index = dcon::state_definition_id{dcon::state_definition_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.state_definition_get_colonization_as_state(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_state_definition_get_range_abstract_state_membership_as_state(int32_t i) { 
	auto index = dcon::state_definition_id{dcon::state_definition_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.state_definition_get_abstract_state_membership_as_state(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_state_definition_get_index_abstract_state_membership_as_state(int32_t i, int32_t subindex) { 
	auto index = dcon::state_definition_id{dcon::state_definition_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.state_definition_get_abstract_state_membership_as_state(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_state_definition_get_range_abstract_state_membership(int32_t i) { 
	auto index = dcon::state_definition_id{dcon::state_definition_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.state_definition_get_abstract_state_membership_as_state(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_state_definition_get_index_abstract_state_membership(int32_t i, int32_t subindex) { 
	auto index = dcon::state_definition_id{dcon::state_definition_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.state_definition_get_abstract_state_membership_as_state(index);
	return rng.begin()[subindex].id.index();
}

void alice_pop_back_state_definition() { 
	if(alice_state_ptr->world.state_definition_size() > 0) {
		auto index = dcon::state_definition_id{dcon::state_definition_id::value_base_t(alice_state_ptr->world.state_definition_size() - 1)};
		alice_state_ptr->world.pop_back_state_definition();
	}
}
int32_t alice_create_state_definition() { 
	auto result = alice_state_ptr->world.create_state_definition();
	return result.index();
}
bool alice_administration_is_valid(int32_t api_arg_0_id){
	dcon::administration_id container_arg_0_id = dcon::administration_id{dcon::administration_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.administration_is_valid(container_arg_0_id);
}
uint32_t alice_administration_size(){
	return alice_state_ptr->world.administration_size();
}
void alice_administration_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.administration_resize(container_arg_0_value);
}
int32_t alice_administration_get_capital(int32_t api_arg_0_id){
	dcon::administration_id container_arg_0_id = dcon::administration_id{dcon::administration_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.administration_get_capital(container_arg_0_id);
	return result.index();
}
void alice_administration_set_capital(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::administration_id container_arg_0_id = dcon::administration_id{dcon::administration_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.administration_set_capital(container_arg_0_id, container_arg_1_id);
}
float alice_administration_get_desired_size(int32_t api_arg_0_id){
	dcon::administration_id container_arg_0_id = dcon::administration_id{dcon::administration_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.administration_get_desired_size(container_arg_0_id);
}
void alice_administration_set_desired_size(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::administration_id container_arg_0_id = dcon::administration_id{dcon::administration_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.administration_set_desired_size(container_arg_0_id, container_arg_1_value);
}
float alice_administration_get_weight(int32_t api_arg_0_id){
	dcon::administration_id container_arg_0_id = dcon::administration_id{dcon::administration_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.administration_get_weight(container_arg_0_id);
}
void alice_administration_set_weight(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::administration_id container_arg_0_id = dcon::administration_id{dcon::administration_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.administration_set_weight(container_arg_0_id, container_arg_1_value);
}
int32_t alice_administration_get_nation_administration_as_administration(int32_t api_arg_0_id){
	dcon::administration_id container_arg_0_id = dcon::administration_id{dcon::administration_id::value_base_t(api_arg_0_id)};
	dcon::nation_administration_id result = alice_state_ptr->world.administration_get_nation_administration_as_administration(container_arg_0_id);
	return result.index();
}
int32_t alice_administration_get_nation_administration(int32_t api_arg_0_id){
	dcon::administration_id container_arg_0_id = dcon::administration_id{dcon::administration_id::value_base_t(api_arg_0_id)};
	dcon::nation_administration_id result = alice_state_ptr->world.administration_get_nation_administration(container_arg_0_id);
	return result.index();
}

void alice_delete_administration(int32_t j) { 
	auto index = dcon::administration_id{dcon::administration_id::value_base_t(j)};
	alice_state_ptr->world.delete_administration(index);
}
int32_t alice_create_administration() { 
	auto result = alice_state_ptr->world.create_administration();
	return result.index();
}
bool alice_nation_administration_is_valid(int32_t api_arg_0_id){
	dcon::nation_administration_id container_arg_0_id = dcon::nation_administration_id{dcon::nation_administration_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_administration_is_valid(container_arg_0_id);
}
uint32_t alice_nation_administration_size(){
	return alice_state_ptr->world.nation_administration_size();
}
void alice_nation_administration_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_administration_resize(container_arg_0_value);
}
int32_t alice_nation_administration_get_administration(int32_t api_arg_0_id){
	dcon::nation_administration_id container_arg_0_id = dcon::nation_administration_id{dcon::nation_administration_id::value_base_t(api_arg_0_id)};
	dcon::administration_id result = alice_state_ptr->world.nation_administration_get_administration(container_arg_0_id);
	return result.index();
}
void alice_nation_administration_set_administration(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_administration_id container_arg_0_id = dcon::nation_administration_id{dcon::nation_administration_id::value_base_t(api_arg_0_id)};
	dcon::administration_id container_arg_1_id = dcon::administration_id{dcon::administration_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_administration_set_administration(container_arg_0_id, container_arg_1_id);
}
void alice_nation_administration_try_set_administration(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_administration_id container_arg_0_id = dcon::nation_administration_id{dcon::nation_administration_id::value_base_t(api_arg_0_id)};
	dcon::administration_id container_arg_1_id = dcon::administration_id{dcon::administration_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_administration_try_set_administration(container_arg_0_id, container_arg_1_id);
}
int32_t alice_nation_administration_get_nation(int32_t api_arg_0_id){
	dcon::nation_administration_id container_arg_0_id = dcon::nation_administration_id{dcon::nation_administration_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.nation_administration_get_nation(container_arg_0_id);
	return result.index();
}
void alice_nation_administration_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_administration_id container_arg_0_id = dcon::nation_administration_id{dcon::nation_administration_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_administration_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_nation_administration_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_administration_id container_arg_0_id = dcon::nation_administration_id{dcon::nation_administration_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_administration_try_set_nation(container_arg_0_id, container_arg_1_id);
}

void alice_delete_nation_administration(int32_t j) { 
	auto index = dcon::nation_administration_id{dcon::nation_administration_id::value_base_t(j)};
	alice_state_ptr->world.delete_nation_administration(index);
}
int32_t alice_try_create_nation_administration(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_nation_administration(dcon::administration_id{dcon::administration_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_nation_administration(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_nation_administration(dcon::administration_id{dcon::administration_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_state_instance_is_valid(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.state_instance_is_valid(container_arg_0_id);
}
uint32_t alice_state_instance_size(){
	return alice_state_ptr->world.state_instance_size();
}
void alice_state_instance_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.state_instance_resize(container_arg_0_value);
}
int32_t alice_state_instance_get_definition(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id result = alice_state_ptr->world.state_instance_get_definition(container_arg_0_id);
	return result.index();
}
void alice_state_instance_set_definition(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id container_arg_1_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_instance_set_definition(container_arg_0_id, container_arg_1_id);
}
int32_t alice_state_instance_get_flashpoint_tag(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id result = alice_state_ptr->world.state_instance_get_flashpoint_tag(container_arg_0_id);
	return result.index();
}
void alice_state_instance_set_flashpoint_tag(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_instance_set_flashpoint_tag(container_arg_0_id, container_arg_1_id);
}
float alice_state_instance_get_flashpoint_tension(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.state_instance_get_flashpoint_tension(container_arg_0_id);
}
void alice_state_instance_set_flashpoint_tension(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.state_instance_set_flashpoint_tension(container_arg_0_id, container_arg_1_value);
}
int32_t alice_state_instance_get_capital(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.state_instance_get_capital(container_arg_0_id);
	return result.index();
}
void alice_state_instance_set_capital(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_instance_set_capital(container_arg_0_id, container_arg_1_id);
}
int32_t alice_state_instance_get_owner_focus(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::national_focus_id result = alice_state_ptr->world.state_instance_get_owner_focus(container_arg_0_id);
	return result.index();
}
void alice_state_instance_set_owner_focus(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::national_focus_id container_arg_1_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_instance_set_owner_focus(container_arg_0_id, container_arg_1_id);
}
float alice_state_instance_get_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.state_instance_get_demographics(container_arg_0_id, container_arg_1_id);
}
void alice_state_instance_set_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.state_instance_set_demographics(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_state_instance_get_demographics_size(){
	return alice_state_ptr->world.state_instance_get_demographics_size();
}
void alice_state_instance_resize_demographics(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.state_instance_resize_demographics(container_arg_0_value);
}
float alice_state_instance_get_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.state_instance_get_demographics_alt(container_arg_0_id, container_arg_1_id);
}
void alice_state_instance_set_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.state_instance_set_demographics_alt(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_state_instance_get_demographics_alt_size(){
	return alice_state_ptr->world.state_instance_get_demographics_alt_size();
}
void alice_state_instance_resize_demographics_alt(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.state_instance_resize_demographics_alt(container_arg_0_value);
}
int32_t alice_state_instance_get_dominant_culture(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::culture_id result = alice_state_ptr->world.state_instance_get_dominant_culture(container_arg_0_id);
	return result.index();
}
void alice_state_instance_set_dominant_culture(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_instance_set_dominant_culture(container_arg_0_id, container_arg_1_id);
}
int32_t alice_state_instance_get_dominant_religion(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::religion_id result = alice_state_ptr->world.state_instance_get_dominant_religion(container_arg_0_id);
	return result.index();
}
void alice_state_instance_set_dominant_religion(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::religion_id container_arg_1_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_instance_set_dominant_religion(container_arg_0_id, container_arg_1_id);
}
int32_t alice_state_instance_get_dominant_ideology(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id result = alice_state_ptr->world.state_instance_get_dominant_ideology(container_arg_0_id);
	return result.index();
}
void alice_state_instance_set_dominant_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_instance_set_dominant_ideology(container_arg_0_id, container_arg_1_id);
}
int32_t alice_state_instance_get_dominant_issue_option(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id result = alice_state_ptr->world.state_instance_get_dominant_issue_option(container_arg_0_id);
	return result.index();
}
void alice_state_instance_set_dominant_issue_option(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id container_arg_1_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_instance_set_dominant_issue_option(container_arg_0_id, container_arg_1_id);
}
bool alice_state_instance_get_naval_base_is_taken(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.state_instance_get_naval_base_is_taken(container_arg_0_id);
}
void alice_state_instance_set_naval_base_is_taken(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.state_instance_set_naval_base_is_taken(container_arg_0_id, container_arg_1_value);
}
bool alice_state_instance_get_production_directive(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::production_directive_id container_arg_1_id = dcon::production_directive_id{dcon::production_directive_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.state_instance_get_production_directive(container_arg_0_id, container_arg_1_id);
}
void alice_state_instance_set_production_directive(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::production_directive_id container_arg_1_id = dcon::production_directive_id{dcon::production_directive_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.state_instance_set_production_directive(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_state_instance_get_production_directive_size(){
	return alice_state_ptr->world.state_instance_get_production_directive_size();
}
void alice_state_instance_resize_production_directive(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.state_instance_resize_production_directive(container_arg_0_value);
}
int32_t alice_state_instance_get_state_ownership_as_state(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::state_ownership_id result = alice_state_ptr->world.state_instance_get_state_ownership_as_state(container_arg_0_id);
	return result.index();
}
int32_t alice_state_instance_get_state_ownership(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::state_ownership_id result = alice_state_ptr->world.state_instance_get_state_ownership(container_arg_0_id);
	return result.index();
}
int32_t alice_state_instance_get_flashpoint_focus_as_state(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::flashpoint_focus_id result = alice_state_ptr->world.state_instance_get_flashpoint_focus_as_state(container_arg_0_id);
	return result.index();
}
int32_t alice_state_instance_get_flashpoint_focus(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::flashpoint_focus_id result = alice_state_ptr->world.state_instance_get_flashpoint_focus(container_arg_0_id);
	return result.index();
}
int32_t alice_state_instance_get_local_market_as_zone(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::local_market_id result = alice_state_ptr->world.state_instance_get_local_market_as_zone(container_arg_0_id);
	return result.index();
}
int32_t alice_state_instance_get_local_market(int32_t api_arg_0_id){
	dcon::state_instance_id container_arg_0_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_0_id)};
	dcon::local_market_id result = alice_state_ptr->world.state_instance_get_local_market(container_arg_0_id);
	return result.index();
}

void alice_delete_state_instance(int32_t j) { 
	auto index = dcon::state_instance_id{dcon::state_instance_id::value_base_t(j)};
	alice_state_ptr->world.delete_state_instance(index);
}
int32_t alice_create_state_instance() { 
	auto result = alice_state_ptr->world.create_state_instance();
	return result.index();
}
bool alice_colonization_is_valid(int32_t api_arg_0_id){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.colonization_is_valid(container_arg_0_id);
}
uint32_t alice_colonization_size(){
	return alice_state_ptr->world.colonization_size();
}
void alice_colonization_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.colonization_resize(container_arg_0_value);
}
sys::date* alice_colonization_get_last_investment(int32_t api_arg_0_id){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.colonization_get_last_investment(container_arg_0_id);
}
uint16_t alice_colonization_get_points_invested(int32_t api_arg_0_id){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.colonization_get_points_invested(container_arg_0_id);
}
void alice_colonization_set_points_invested(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.colonization_set_points_invested(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_colonization_get_level(int32_t api_arg_0_id){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.colonization_get_level(container_arg_0_id);
}
void alice_colonization_set_level(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.colonization_set_level(container_arg_0_id, container_arg_1_value);
}
int32_t alice_colonization_get_state(int32_t api_arg_0_id){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id result = alice_state_ptr->world.colonization_get_state(container_arg_0_id);
	return result.index();
}
void alice_colonization_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id container_arg_1_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.colonization_set_state(container_arg_0_id, container_arg_1_id);
}
void alice_colonization_try_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id container_arg_1_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.colonization_try_set_state(container_arg_0_id, container_arg_1_id);
}
int32_t alice_colonization_get_colonizer(int32_t api_arg_0_id){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.colonization_get_colonizer(container_arg_0_id);
	return result.index();
}
void alice_colonization_set_colonizer(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.colonization_set_colonizer(container_arg_0_id, container_arg_1_id);
}
void alice_colonization_try_set_colonizer(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::colonization_id container_arg_0_id = dcon::colonization_id{dcon::colonization_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.colonization_try_set_colonizer(container_arg_0_id, container_arg_1_id);
}

void alice_delete_colonization(int32_t j) { 
	auto index = dcon::colonization_id{dcon::colonization_id::value_base_t(j)};
	alice_state_ptr->world.delete_colonization(index);
}
int32_t alice_try_create_colonization(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_colonization(dcon::state_definition_id{dcon::state_definition_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_colonization(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_colonization(dcon::state_definition_id{dcon::state_definition_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_state_ownership_is_valid(int32_t api_arg_0_id){
	dcon::state_ownership_id container_arg_0_id = dcon::state_ownership_id{dcon::state_ownership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.state_ownership_is_valid(container_arg_0_id);
}
uint32_t alice_state_ownership_size(){
	return alice_state_ptr->world.state_ownership_size();
}
void alice_state_ownership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.state_ownership_resize(container_arg_0_value);
}
int32_t alice_state_ownership_get_state(int32_t api_arg_0_id){
	dcon::state_ownership_id container_arg_0_id = dcon::state_ownership_id{dcon::state_ownership_id::value_base_t(api_arg_0_id)};
	dcon::state_instance_id result = alice_state_ptr->world.state_ownership_get_state(container_arg_0_id);
	return result.index();
}
void alice_state_ownership_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_ownership_id container_arg_0_id = dcon::state_ownership_id{dcon::state_ownership_id::value_base_t(api_arg_0_id)};
	dcon::state_instance_id container_arg_1_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_ownership_set_state(container_arg_0_id, container_arg_1_id);
}
void alice_state_ownership_try_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_ownership_id container_arg_0_id = dcon::state_ownership_id{dcon::state_ownership_id::value_base_t(api_arg_0_id)};
	dcon::state_instance_id container_arg_1_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_ownership_try_set_state(container_arg_0_id, container_arg_1_id);
}
int32_t alice_state_ownership_get_nation(int32_t api_arg_0_id){
	dcon::state_ownership_id container_arg_0_id = dcon::state_ownership_id{dcon::state_ownership_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.state_ownership_get_nation(container_arg_0_id);
	return result.index();
}
void alice_state_ownership_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_ownership_id container_arg_0_id = dcon::state_ownership_id{dcon::state_ownership_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_ownership_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_state_ownership_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::state_ownership_id container_arg_0_id = dcon::state_ownership_id{dcon::state_ownership_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.state_ownership_try_set_nation(container_arg_0_id, container_arg_1_id);
}

void alice_delete_state_ownership(int32_t j) { 
	auto index = dcon::state_ownership_id{dcon::state_ownership_id::value_base_t(j)};
	alice_state_ptr->world.delete_state_ownership(index);
}
int32_t alice_try_create_state_ownership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_state_ownership(dcon::state_instance_id{dcon::state_instance_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_state_ownership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_state_ownership(dcon::state_instance_id{dcon::state_instance_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_flashpoint_focus_is_valid(int32_t api_arg_0_id){
	dcon::flashpoint_focus_id container_arg_0_id = dcon::flashpoint_focus_id{dcon::flashpoint_focus_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.flashpoint_focus_is_valid(container_arg_0_id);
}
uint32_t alice_flashpoint_focus_size(){
	return alice_state_ptr->world.flashpoint_focus_size();
}
void alice_flashpoint_focus_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.flashpoint_focus_resize(container_arg_0_value);
}
int32_t alice_flashpoint_focus_get_state(int32_t api_arg_0_id){
	dcon::flashpoint_focus_id container_arg_0_id = dcon::flashpoint_focus_id{dcon::flashpoint_focus_id::value_base_t(api_arg_0_id)};
	dcon::state_instance_id result = alice_state_ptr->world.flashpoint_focus_get_state(container_arg_0_id);
	return result.index();
}
void alice_flashpoint_focus_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::flashpoint_focus_id container_arg_0_id = dcon::flashpoint_focus_id{dcon::flashpoint_focus_id::value_base_t(api_arg_0_id)};
	dcon::state_instance_id container_arg_1_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.flashpoint_focus_set_state(container_arg_0_id, container_arg_1_id);
}
void alice_flashpoint_focus_try_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::flashpoint_focus_id container_arg_0_id = dcon::flashpoint_focus_id{dcon::flashpoint_focus_id::value_base_t(api_arg_0_id)};
	dcon::state_instance_id container_arg_1_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.flashpoint_focus_try_set_state(container_arg_0_id, container_arg_1_id);
}
int32_t alice_flashpoint_focus_get_nation(int32_t api_arg_0_id){
	dcon::flashpoint_focus_id container_arg_0_id = dcon::flashpoint_focus_id{dcon::flashpoint_focus_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.flashpoint_focus_get_nation(container_arg_0_id);
	return result.index();
}
void alice_flashpoint_focus_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::flashpoint_focus_id container_arg_0_id = dcon::flashpoint_focus_id{dcon::flashpoint_focus_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.flashpoint_focus_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_flashpoint_focus_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::flashpoint_focus_id container_arg_0_id = dcon::flashpoint_focus_id{dcon::flashpoint_focus_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.flashpoint_focus_try_set_nation(container_arg_0_id, container_arg_1_id);
}

void alice_delete_flashpoint_focus(int32_t j) { 
	auto index = dcon::flashpoint_focus_id{dcon::flashpoint_focus_id::value_base_t(j)};
	alice_state_ptr->world.delete_flashpoint_focus(index);
}
int32_t alice_try_create_flashpoint_focus(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_flashpoint_focus(dcon::state_instance_id{dcon::state_instance_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_flashpoint_focus(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_flashpoint_focus(dcon::state_instance_id{dcon::state_instance_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_abstract_state_membership_is_valid(int32_t api_arg_0_id){
	dcon::abstract_state_membership_id container_arg_0_id = dcon::abstract_state_membership_id{dcon::abstract_state_membership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.abstract_state_membership_is_valid(container_arg_0_id);
}
uint32_t alice_abstract_state_membership_size(){
	return alice_state_ptr->world.abstract_state_membership_size();
}
void alice_abstract_state_membership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.abstract_state_membership_resize(container_arg_0_value);
}
int16_t alice_abstract_state_membership_get_priority(int32_t api_arg_0_id){
	dcon::abstract_state_membership_id container_arg_0_id = dcon::abstract_state_membership_id{dcon::abstract_state_membership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.abstract_state_membership_get_priority(container_arg_0_id);
}
void alice_abstract_state_membership_set_priority(int32_t api_arg_0_id, int16_t api_arg_1_value){
	dcon::abstract_state_membership_id container_arg_0_id = dcon::abstract_state_membership_id{dcon::abstract_state_membership_id::value_base_t(api_arg_0_id)};
	int16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.abstract_state_membership_set_priority(container_arg_0_id, container_arg_1_value);
}
int32_t alice_abstract_state_membership_get_province(int32_t api_arg_0_id){
	dcon::abstract_state_membership_id container_arg_0_id = dcon::abstract_state_membership_id{dcon::abstract_state_membership_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.abstract_state_membership_get_province(container_arg_0_id);
	return result.index();
}
void alice_abstract_state_membership_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::abstract_state_membership_id container_arg_0_id = dcon::abstract_state_membership_id{dcon::abstract_state_membership_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.abstract_state_membership_set_province(container_arg_0_id, container_arg_1_id);
}
void alice_abstract_state_membership_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::abstract_state_membership_id container_arg_0_id = dcon::abstract_state_membership_id{dcon::abstract_state_membership_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.abstract_state_membership_try_set_province(container_arg_0_id, container_arg_1_id);
}
int32_t alice_abstract_state_membership_get_state(int32_t api_arg_0_id){
	dcon::abstract_state_membership_id container_arg_0_id = dcon::abstract_state_membership_id{dcon::abstract_state_membership_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id result = alice_state_ptr->world.abstract_state_membership_get_state(container_arg_0_id);
	return result.index();
}
void alice_abstract_state_membership_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::abstract_state_membership_id container_arg_0_id = dcon::abstract_state_membership_id{dcon::abstract_state_membership_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id container_arg_1_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.abstract_state_membership_set_state(container_arg_0_id, container_arg_1_id);
}
void alice_abstract_state_membership_try_set_state(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::abstract_state_membership_id container_arg_0_id = dcon::abstract_state_membership_id{dcon::abstract_state_membership_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id container_arg_1_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.abstract_state_membership_try_set_state(container_arg_0_id, container_arg_1_id);
}

void alice_delete_abstract_state_membership(int32_t j) { 
	auto index = dcon::abstract_state_membership_id{dcon::abstract_state_membership_id::value_base_t(j)};
	alice_state_ptr->world.delete_abstract_state_membership(index);
}
int32_t alice_try_create_abstract_state_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_abstract_state_membership(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::state_definition_id{dcon::state_definition_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_abstract_state_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_abstract_state_membership(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::state_definition_id{dcon::state_definition_id::value_base_t(p2)});
	return result.index();
}
bool alice_region_is_valid(int32_t api_arg_0_id){
	dcon::region_id container_arg_0_id = dcon::region_id{dcon::region_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.region_is_valid(container_arg_0_id);
}
uint32_t alice_region_size(){
	return alice_state_ptr->world.region_size();
}
void alice_region_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.region_resize(container_arg_0_value);
}
int32_t alice_region_get_name(int32_t api_arg_0_id){
	dcon::region_id container_arg_0_id = dcon::region_id{dcon::region_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.region_get_name(container_arg_0_id);
	return result.index();
}
void alice_region_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::region_id container_arg_0_id = dcon::region_id{dcon::region_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.region_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_region_get_range_region_membership_as_region(int32_t i) { 
	auto index = dcon::region_id{dcon::region_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.region_get_region_membership_as_region(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_region_get_index_region_membership_as_region(int32_t i, int32_t subindex) { 
	auto index = dcon::region_id{dcon::region_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.region_get_region_membership_as_region(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_region_get_range_region_membership(int32_t i) { 
	auto index = dcon::region_id{dcon::region_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.region_get_region_membership_as_region(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_region_get_index_region_membership(int32_t i, int32_t subindex) { 
	auto index = dcon::region_id{dcon::region_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.region_get_region_membership_as_region(index);
	return rng.begin()[subindex].id.index();
}

void alice_pop_back_region() { 
	if(alice_state_ptr->world.region_size() > 0) {
		auto index = dcon::region_id{dcon::region_id::value_base_t(alice_state_ptr->world.region_size() - 1)};
		alice_state_ptr->world.pop_back_region();
	}
}
int32_t alice_create_region() { 
	auto result = alice_state_ptr->world.create_region();
	return result.index();
}
bool alice_region_membership_is_valid(int32_t api_arg_0_id){
	dcon::region_membership_id container_arg_0_id = dcon::region_membership_id{dcon::region_membership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.region_membership_is_valid(container_arg_0_id);
}
uint32_t alice_region_membership_size(){
	return alice_state_ptr->world.region_membership_size();
}
void alice_region_membership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.region_membership_resize(container_arg_0_value);
}
int32_t alice_region_membership_get_province(int32_t api_arg_0_id){
	dcon::region_membership_id container_arg_0_id = dcon::region_membership_id{dcon::region_membership_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.region_membership_get_province(container_arg_0_id);
	return result.index();
}
void alice_region_membership_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::region_membership_id container_arg_0_id = dcon::region_membership_id{dcon::region_membership_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.region_membership_set_province(container_arg_0_id, container_arg_1_id);
}
void alice_region_membership_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::region_membership_id container_arg_0_id = dcon::region_membership_id{dcon::region_membership_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.region_membership_try_set_province(container_arg_0_id, container_arg_1_id);
}
int32_t alice_region_membership_get_region(int32_t api_arg_0_id){
	dcon::region_membership_id container_arg_0_id = dcon::region_membership_id{dcon::region_membership_id::value_base_t(api_arg_0_id)};
	dcon::region_id result = alice_state_ptr->world.region_membership_get_region(container_arg_0_id);
	return result.index();
}
void alice_region_membership_set_region(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::region_membership_id container_arg_0_id = dcon::region_membership_id{dcon::region_membership_id::value_base_t(api_arg_0_id)};
	dcon::region_id container_arg_1_id = dcon::region_id{dcon::region_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.region_membership_set_region(container_arg_0_id, container_arg_1_id);
}
void alice_region_membership_try_set_region(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::region_membership_id container_arg_0_id = dcon::region_membership_id{dcon::region_membership_id::value_base_t(api_arg_0_id)};
	dcon::region_id container_arg_1_id = dcon::region_id{dcon::region_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.region_membership_try_set_region(container_arg_0_id, container_arg_1_id);
}

void alice_pop_back_region_membership() { 
	if(alice_state_ptr->world.region_membership_size() > 0) {
		auto index = dcon::region_membership_id{dcon::region_membership_id::value_base_t(alice_state_ptr->world.region_membership_size() - 1)};
		alice_state_ptr->world.pop_back_region_membership();
	}
}
int32_t alice_try_create_region_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_region_membership(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::region_id{dcon::region_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_region_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_region_membership(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::region_id{dcon::region_id::value_base_t(p2)});
	return result.index();
}
void alice_delete_region_membership(int32_t j) { 
	auto index = dcon::region_membership_id{dcon::region_membership_id::value_base_t(j)};
	alice_state_ptr->world.delete_region_membership(index);
}
bool alice_core_is_valid(int32_t api_arg_0_id){
	dcon::core_id container_arg_0_id = dcon::core_id{dcon::core_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.core_is_valid(container_arg_0_id);
}
uint32_t alice_core_size(){
	return alice_state_ptr->world.core_size();
}
void alice_core_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.core_resize(container_arg_0_value);
}
int32_t alice_core_get_province(int32_t api_arg_0_id){
	dcon::core_id container_arg_0_id = dcon::core_id{dcon::core_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.core_get_province(container_arg_0_id);
	return result.index();
}
void alice_core_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::core_id container_arg_0_id = dcon::core_id{dcon::core_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.core_set_province(container_arg_0_id, container_arg_1_id);
}
void alice_core_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::core_id container_arg_0_id = dcon::core_id{dcon::core_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.core_try_set_province(container_arg_0_id, container_arg_1_id);
}
int32_t alice_core_get_identity(int32_t api_arg_0_id){
	dcon::core_id container_arg_0_id = dcon::core_id{dcon::core_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id result = alice_state_ptr->world.core_get_identity(container_arg_0_id);
	return result.index();
}
void alice_core_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::core_id container_arg_0_id = dcon::core_id{dcon::core_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.core_set_identity(container_arg_0_id, container_arg_1_id);
}
void alice_core_try_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::core_id container_arg_0_id = dcon::core_id{dcon::core_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.core_try_set_identity(container_arg_0_id, container_arg_1_id);
}

void alice_pop_back_core() { 
	if(alice_state_ptr->world.core_size() > 0) {
		auto index = dcon::core_id{dcon::core_id::value_base_t(alice_state_ptr->world.core_size() - 1)};
		alice_state_ptr->world.pop_back_core();
	}
}
int32_t alice_try_create_core(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_core(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::national_identity_id{dcon::national_identity_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_core(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_core(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::national_identity_id{dcon::national_identity_id::value_base_t(p2)});
	return result.index();
}
void alice_delete_core(int32_t j) { 
	auto index = dcon::core_id{dcon::core_id::value_base_t(j)};
	alice_state_ptr->world.delete_core(index);
}
int32_t alice_get_core_by_prov_tag_key(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.get_core_by_prov_tag_key(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::national_identity_id{dcon::national_identity_id::value_base_t(p2)});
	return result.index();
}
bool alice_identity_holder_is_valid(int32_t api_arg_0_id){
	dcon::identity_holder_id container_arg_0_id = dcon::identity_holder_id{dcon::identity_holder_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.identity_holder_is_valid(container_arg_0_id);
}
uint32_t alice_identity_holder_size(){
	return alice_state_ptr->world.identity_holder_size();
}
void alice_identity_holder_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.identity_holder_resize(container_arg_0_value);
}
int32_t alice_identity_holder_get_nation(int32_t api_arg_0_id){
	dcon::identity_holder_id container_arg_0_id = dcon::identity_holder_id{dcon::identity_holder_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.identity_holder_get_nation(container_arg_0_id);
	return result.index();
}
void alice_identity_holder_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::identity_holder_id container_arg_0_id = dcon::identity_holder_id{dcon::identity_holder_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.identity_holder_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_identity_holder_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::identity_holder_id container_arg_0_id = dcon::identity_holder_id{dcon::identity_holder_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.identity_holder_try_set_nation(container_arg_0_id, container_arg_1_id);
}
int32_t alice_identity_holder_get_identity(int32_t api_arg_0_id){
	dcon::identity_holder_id container_arg_0_id = dcon::identity_holder_id{dcon::identity_holder_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id result = alice_state_ptr->world.identity_holder_get_identity(container_arg_0_id);
	return result.index();
}
void alice_identity_holder_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::identity_holder_id container_arg_0_id = dcon::identity_holder_id{dcon::identity_holder_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.identity_holder_set_identity(container_arg_0_id, container_arg_1_id);
}
void alice_identity_holder_try_set_identity(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::identity_holder_id container_arg_0_id = dcon::identity_holder_id{dcon::identity_holder_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.identity_holder_try_set_identity(container_arg_0_id, container_arg_1_id);
}

void alice_delete_identity_holder(int32_t j) { 
	auto index = dcon::identity_holder_id{dcon::identity_holder_id::value_base_t(j)};
	alice_state_ptr->world.delete_identity_holder(index);
}
int32_t alice_try_create_identity_holder(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_identity_holder(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::national_identity_id{dcon::national_identity_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_identity_holder(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_identity_holder(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::national_identity_id{dcon::national_identity_id::value_base_t(p2)});
	return result.index();
}
bool alice_technology_is_valid(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.technology_is_valid(container_arg_0_id);
}
uint32_t alice_technology_size(){
	return alice_state_ptr->world.technology_size();
}
void alice_technology_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.technology_resize(container_arg_0_value);
}
int32_t alice_technology_get_name(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.technology_get_name(container_arg_0_id);
	return result.index();
}
void alice_technology_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.technology_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_technology_get_desc(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.technology_get_desc(container_arg_0_id);
	return result.index();
}
void alice_technology_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.technology_set_desc(container_arg_0_id, container_arg_1_id);
}
int32_t alice_technology_get_modifier(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id result = alice_state_ptr->world.technology_get_modifier(container_arg_0_id);
	return result.index();
}
void alice_technology_set_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id container_arg_1_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.technology_set_modifier(container_arg_0_id, container_arg_1_id);
}
float alice_technology_get_plurality(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.technology_get_plurality(container_arg_0_id);
}
void alice_technology_set_plurality(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.technology_set_plurality(container_arg_0_id, container_arg_1_value);
}
dcon::gfx_object_id* alice_technology_get_image(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.technology_get_image(container_arg_0_id);
}
uint8_t alice_technology_get_folder_index(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.technology_get_folder_index(container_arg_0_id);
}
void alice_technology_set_folder_index(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.technology_set_folder_index(container_arg_0_id, container_arg_1_value);
}
int16_t alice_technology_get_year(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.technology_get_year(container_arg_0_id);
}
void alice_technology_set_year(int32_t api_arg_0_id, int16_t api_arg_1_value){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	int16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.technology_set_year(container_arg_0_id, container_arg_1_value);
}
int32_t alice_technology_get_ai_chance(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.technology_get_ai_chance(container_arg_0_id);
	return result.index();
}
void alice_technology_set_ai_chance(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.technology_set_ai_chance(container_arg_0_id, container_arg_1_id);
}
float alice_technology_get_ai_weight(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.technology_get_ai_weight(container_arg_0_id);
}
void alice_technology_set_ai_weight(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.technology_set_ai_weight(container_arg_0_id, container_arg_1_value);
}
int32_t alice_technology_get_cost(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.technology_get_cost(container_arg_0_id);
}
void alice_technology_set_cost(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.technology_set_cost(container_arg_0_id, container_arg_1_value);
}
int32_t alice_technology_get_leadership_cost(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.technology_get_leadership_cost(container_arg_0_id);
}
void alice_technology_set_leadership_cost(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.technology_set_leadership_cost(container_arg_0_id, container_arg_1_value);
}
int16_t alice_technology_get_colonial_points(int32_t api_arg_0_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.technology_get_colonial_points(container_arg_0_id);
}
void alice_technology_set_colonial_points(int32_t api_arg_0_id, int16_t api_arg_1_value){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	int16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.technology_set_colonial_points(container_arg_0_id, container_arg_1_value);
}
uint32_t alice_technology_get_increase_building_size(){
	return alice_state_ptr->world.technology_get_increase_building_size();
}
void alice_technology_resize_increase_building(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.technology_resize_increase_building(container_arg_0_value);
}
bool alice_technology_get_activate_unit(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.technology_get_activate_unit(container_arg_0_id, container_arg_1_id);
}
void alice_technology_set_activate_unit(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.technology_set_activate_unit(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_technology_get_activate_unit_size(){
	return alice_state_ptr->world.technology_get_activate_unit_size();
}
void alice_technology_resize_activate_unit(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.technology_resize_activate_unit(container_arg_0_value);
}
bool alice_technology_get_activate_building(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.technology_get_activate_building(container_arg_0_id, container_arg_1_id);
}
void alice_technology_set_activate_building(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::technology_id container_arg_0_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.technology_set_activate_building(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_technology_get_activate_building_size(){
	return alice_state_ptr->world.technology_get_activate_building_size();
}
void alice_technology_resize_activate_building(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.technology_resize_activate_building(container_arg_0_value);
}

void alice_pop_back_technology() { 
	if(alice_state_ptr->world.technology_size() > 0) {
		auto index = dcon::technology_id{dcon::technology_id::value_base_t(alice_state_ptr->world.technology_size() - 1)};
		alice_state_ptr->world.pop_back_technology();
	}
}
int32_t alice_create_technology() { 
	auto result = alice_state_ptr->world.create_technology();
	return result.index();
}
bool alice_invention_is_valid(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.invention_is_valid(container_arg_0_id);
}
uint32_t alice_invention_size(){
	return alice_state_ptr->world.invention_size();
}
void alice_invention_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.invention_resize(container_arg_0_value);
}
int32_t alice_invention_get_name(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.invention_get_name(container_arg_0_id);
	return result.index();
}
void alice_invention_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.invention_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_invention_get_desc(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.invention_get_desc(container_arg_0_id);
	return result.index();
}
void alice_invention_set_desc(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.invention_set_desc(container_arg_0_id, container_arg_1_id);
}
uint8_t alice_invention_get_technology_type(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.invention_get_technology_type(container_arg_0_id);
}
void alice_invention_set_technology_type(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.invention_set_technology_type(container_arg_0_id, container_arg_1_value);
}
int16_t alice_invention_get_colonial_points(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.invention_get_colonial_points(container_arg_0_id);
}
void alice_invention_set_colonial_points(int32_t api_arg_0_id, int16_t api_arg_1_value){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	int16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.invention_set_colonial_points(container_arg_0_id, container_arg_1_value);
}
uint32_t alice_invention_get_increase_building_size(){
	return alice_state_ptr->world.invention_get_increase_building_size();
}
void alice_invention_resize_increase_building(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.invention_resize_increase_building(container_arg_0_value);
}
int32_t alice_invention_get_modifier(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id result = alice_state_ptr->world.invention_get_modifier(container_arg_0_id);
	return result.index();
}
void alice_invention_set_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id container_arg_1_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.invention_set_modifier(container_arg_0_id, container_arg_1_id);
}
int32_t alice_invention_get_chance(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.invention_get_chance(container_arg_0_id);
	return result.index();
}
void alice_invention_set_chance(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.invention_set_chance(container_arg_0_id, container_arg_1_id);
}
int32_t alice_invention_get_limit(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.invention_get_limit(container_arg_0_id);
	return result.index();
}
void alice_invention_set_limit(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.invention_set_limit(container_arg_0_id, container_arg_1_id);
}
bool alice_invention_get_enable_gas_attack(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.invention_get_enable_gas_attack(container_arg_0_id);
}
void alice_invention_set_enable_gas_attack(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.invention_set_enable_gas_attack(container_arg_0_id, container_arg_1_value);
}
bool alice_invention_get_enable_gas_defense(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.invention_get_enable_gas_defense(container_arg_0_id);
}
void alice_invention_set_enable_gas_defense(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.invention_set_enable_gas_defense(container_arg_0_id, container_arg_1_value);
}
float alice_invention_get_shared_prestige(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.invention_get_shared_prestige(container_arg_0_id);
}
void alice_invention_set_shared_prestige(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.invention_set_shared_prestige(container_arg_0_id, container_arg_1_value);
}
float alice_invention_get_plurality(int32_t api_arg_0_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.invention_get_plurality(container_arg_0_id);
}
void alice_invention_set_plurality(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.invention_set_plurality(container_arg_0_id, container_arg_1_value);
}
bool alice_invention_get_activate_unit(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.invention_get_activate_unit(container_arg_0_id, container_arg_1_id);
}
void alice_invention_set_activate_unit(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.invention_set_activate_unit(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_invention_get_activate_unit_size(){
	return alice_state_ptr->world.invention_get_activate_unit_size();
}
void alice_invention_resize_activate_unit(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.invention_resize_activate_unit(container_arg_0_value);
}
bool alice_invention_get_activate_crime(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::crime_id container_arg_1_id = dcon::crime_id{dcon::crime_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.invention_get_activate_crime(container_arg_0_id, container_arg_1_id);
}
void alice_invention_set_activate_crime(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::crime_id container_arg_1_id = dcon::crime_id{dcon::crime_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.invention_set_activate_crime(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_invention_get_activate_crime_size(){
	return alice_state_ptr->world.invention_get_activate_crime_size();
}
void alice_invention_resize_activate_crime(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.invention_resize_activate_crime(container_arg_0_value);
}
bool alice_invention_get_activate_building(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.invention_get_activate_building(container_arg_0_id, container_arg_1_id);
}
void alice_invention_set_activate_building(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::invention_id container_arg_0_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.invention_set_activate_building(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_invention_get_activate_building_size(){
	return alice_state_ptr->world.invention_get_activate_building_size();
}
void alice_invention_resize_activate_building(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.invention_resize_activate_building(container_arg_0_value);
}

void alice_pop_back_invention() { 
	if(alice_state_ptr->world.invention_size() > 0) {
		auto index = dcon::invention_id{dcon::invention_id::value_base_t(alice_state_ptr->world.invention_size() - 1)};
		alice_state_ptr->world.pop_back_invention();
	}
}
int32_t alice_create_invention() { 
	auto result = alice_state_ptr->world.create_invention();
	return result.index();
}
bool alice_nation_is_valid(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_is_valid(container_arg_0_id);
}
uint32_t alice_nation_size(){
	return alice_state_ptr->world.nation_size();
}
void alice_nation_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize(container_arg_0_value);
}
uint32_t alice_nation_get_color(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_color(container_arg_0_id);
}
void alice_nation_set_color(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_color(container_arg_0_id, container_arg_1_value);
}
int32_t alice_nation_get_masquerade_identity(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id result = alice_state_ptr->world.nation_get_masquerade_identity(container_arg_0_id);
	return result.index();
}
void alice_nation_set_masquerade_identity(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_masquerade_identity(container_arg_0_id, container_arg_1_id);
}
int32_t alice_nation_get_primary_culture(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::culture_id result = alice_state_ptr->world.nation_get_primary_culture(container_arg_0_id);
	return result.index();
}
void alice_nation_set_primary_culture(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_primary_culture(container_arg_0_id, container_arg_1_id);
}
bool alice_nation_get_accepted_cultures(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_accepted_cultures(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_accepted_cultures(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_accepted_cultures(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_accepted_cultures_size(){
	return alice_state_ptr->world.nation_get_accepted_cultures_size();
}
void alice_nation_resize_accepted_cultures(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_accepted_cultures(container_arg_0_value);
}
int32_t alice_nation_get_religion(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::religion_id result = alice_state_ptr->world.nation_get_religion(container_arg_0_id);
	return result.index();
}
void alice_nation_set_religion(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::religion_id container_arg_1_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_religion(container_arg_0_id, container_arg_1_id);
}
int32_t alice_nation_get_capital(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.nation_get_capital(container_arg_0_id);
	return result.index();
}
void alice_nation_set_capital(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_capital(container_arg_0_id, container_arg_1_id);
}
bool alice_nation_get_is_civilized(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_is_civilized(container_arg_0_id);
}
void alice_nation_set_is_civilized(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_is_civilized(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_marked_for_gc(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_marked_for_gc(container_arg_0_id);
}
void alice_nation_set_marked_for_gc(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_marked_for_gc(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_is_great_power(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_is_great_power(container_arg_0_id);
}
void alice_nation_set_is_great_power(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_is_great_power(container_arg_0_id, container_arg_1_value);
}
int32_t alice_nation_get_national_value(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id result = alice_state_ptr->world.nation_get_national_value(container_arg_0_id);
	return result.index();
}
void alice_nation_set_national_value(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id container_arg_1_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_national_value(container_arg_0_id, container_arg_1_id);
}
int32_t alice_nation_get_tech_school(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id result = alice_state_ptr->world.nation_get_tech_school(container_arg_0_id);
	return result.index();
}
void alice_nation_set_tech_school(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id container_arg_1_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_tech_school(container_arg_0_id, container_arg_1_id);
}
int32_t alice_nation_get_government_type(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id result = alice_state_ptr->world.nation_get_government_type(container_arg_0_id);
	return result.index();
}
void alice_nation_set_government_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::government_type_id container_arg_1_id = dcon::government_type_id{dcon::government_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_government_type(container_arg_0_id, container_arg_1_id);
}
float alice_nation_get_plurality(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_plurality(container_arg_0_id);
}
void alice_nation_set_plurality(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_plurality(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_prestige(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_prestige(container_arg_0_id);
}
void alice_nation_set_prestige(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_prestige(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_infamy(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_infamy(container_arg_0_id);
}
void alice_nation_set_infamy(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_infamy(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_revanchism(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_revanchism(container_arg_0_id);
}
void alice_nation_set_revanchism(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_revanchism(container_arg_0_id, container_arg_1_value);
}
int16_t alice_nation_get_permanent_colonial_points(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_permanent_colonial_points(container_arg_0_id);
}
void alice_nation_set_permanent_colonial_points(int32_t api_arg_0_id, int16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_permanent_colonial_points(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_active_technologies(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::technology_id container_arg_1_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_active_technologies(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_active_technologies(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::technology_id container_arg_1_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_active_technologies(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_active_technologies_size(){
	return alice_state_ptr->world.nation_get_active_technologies_size();
}
void alice_nation_resize_active_technologies(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_active_technologies(container_arg_0_value);
}
bool alice_nation_get_active_inventions(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::invention_id container_arg_1_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_active_inventions(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_active_inventions(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::invention_id container_arg_1_id = dcon::invention_id{dcon::invention_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_active_inventions(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_active_inventions_size(){
	return alice_state_ptr->world.nation_get_active_inventions_size();
}
void alice_nation_resize_active_inventions(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_active_inventions(container_arg_0_value);
}
int32_t alice_nation_get_ruling_party(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::political_party_id result = alice_state_ptr->world.nation_get_ruling_party(container_arg_0_id);
	return result.index();
}
void alice_nation_set_ruling_party(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::political_party_id container_arg_1_id = dcon::political_party_id{dcon::political_party_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_ruling_party(container_arg_0_id, container_arg_1_id);
}
sys::date* alice_nation_get_ruling_party_last_appointed(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.nation_get_ruling_party_last_appointed(container_arg_0_id);
}
int32_t alice_nation_get_issues(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::issue_id container_arg_1_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_1_id)};
	dcon::issue_option_id result = alice_state_ptr->world.nation_get_issues(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_nation_set_issues(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::issue_id container_arg_1_id = dcon::issue_id{dcon::issue_id::value_base_t(api_arg_1_id)};
	dcon::issue_option_id container_arg_2_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.nation_set_issues(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_nation_get_issues_size(){
	return alice_state_ptr->world.nation_get_issues_size();
}
void alice_nation_resize_issues(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_issues(container_arg_0_value);
}
int32_t alice_nation_get_reforms(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::reform_id container_arg_1_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_1_id)};
	dcon::reform_option_id result = alice_state_ptr->world.nation_get_reforms(container_arg_0_id, container_arg_1_id);
	return result.index();
}
void alice_nation_set_reforms(int32_t api_arg_0_id, int32_t api_arg_1_id, int32_t api_arg_2_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::reform_id container_arg_1_id = dcon::reform_id{dcon::reform_id::value_base_t(api_arg_1_id)};
	dcon::reform_option_id container_arg_2_id = dcon::reform_option_id{dcon::reform_option_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.nation_set_reforms(container_arg_0_id, container_arg_1_id, container_arg_2_id);
}
uint32_t alice_nation_get_reforms_size(){
	return alice_state_ptr->world.nation_get_reforms_size();
}
void alice_nation_resize_reforms(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_reforms(container_arg_0_value);
}
sys::date* alice_nation_get_last_issue_or_reform_change(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.nation_get_last_issue_or_reform_change(container_arg_0_id);
}
uint32_t alice_nation_get_combined_issue_rules(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_combined_issue_rules(container_arg_0_id);
}
void alice_nation_set_combined_issue_rules(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_combined_issue_rules(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_upper_house(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_upper_house(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_upper_house(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_upper_house(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_upper_house_size(){
	return alice_state_ptr->world.nation_get_upper_house_size();
}
void alice_nation_resize_upper_house(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_upper_house(container_arg_0_value);
}
bool alice_nation_get_is_substate(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_is_substate(container_arg_0_id);
}
void alice_nation_set_is_substate(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_is_substate(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_flag_variables(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::national_flag_id container_arg_1_id = dcon::national_flag_id{dcon::national_flag_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_flag_variables(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_flag_variables(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::national_flag_id container_arg_1_id = dcon::national_flag_id{dcon::national_flag_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_flag_variables(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_flag_variables_size(){
	return alice_state_ptr->world.nation_get_flag_variables_size();
}
void alice_nation_resize_flag_variables(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_flag_variables(container_arg_0_value);
}
float alice_nation_get_variables(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::national_variable_id container_arg_1_id = dcon::national_variable_id{dcon::national_variable_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_variables(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_variables(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::national_variable_id container_arg_1_id = dcon::national_variable_id{dcon::national_variable_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_variables(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_variables_size(){
	return alice_state_ptr->world.nation_get_variables_size();
}
void alice_nation_resize_variables(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_variables(container_arg_0_value);
}
float alice_nation_get_modifier_values(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::national_modifier_value container_arg_1_id = dcon::national_modifier_value{dcon::national_modifier_value::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_modifier_values(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_modifier_values(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::national_modifier_value container_arg_1_id = dcon::national_modifier_value{dcon::national_modifier_value::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_modifier_values(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_modifier_values_size(){
	return alice_state_ptr->world.nation_get_modifier_values_size();
}
void alice_nation_resize_modifier_values(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_modifier_values(container_arg_0_value);
}
float alice_nation_get_rgo_goods_output(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_rgo_goods_output(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_rgo_goods_output(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_rgo_goods_output(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_rgo_goods_output_size(){
	return alice_state_ptr->world.nation_get_rgo_goods_output_size();
}
void alice_nation_resize_rgo_goods_output(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_rgo_goods_output(container_arg_0_value);
}
float alice_nation_get_factory_goods_output(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_factory_goods_output(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_factory_goods_output(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_factory_goods_output(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_factory_goods_output_size(){
	return alice_state_ptr->world.nation_get_factory_goods_output_size();
}
void alice_nation_resize_factory_goods_output(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_factory_goods_output(container_arg_0_value);
}
float alice_nation_get_rgo_size(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_rgo_size(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_rgo_size(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_rgo_size(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_rgo_size_size(){
	return alice_state_ptr->world.nation_get_rgo_size_size();
}
void alice_nation_resize_rgo_size(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_rgo_size(container_arg_0_value);
}
float alice_nation_get_factory_goods_throughput(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_factory_goods_throughput(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_factory_goods_throughput(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_factory_goods_throughput(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_factory_goods_throughput_size(){
	return alice_state_ptr->world.nation_get_factory_goods_throughput_size();
}
void alice_nation_resize_factory_goods_throughput(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_factory_goods_throughput(container_arg_0_value);
}
float alice_nation_get_rebel_org_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::rebel_type_id container_arg_1_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_rebel_org_modifier(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_rebel_org_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::rebel_type_id container_arg_1_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_rebel_org_modifier(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_rebel_org_modifier_size(){
	return alice_state_ptr->world.nation_get_rebel_org_modifier_size();
}
void alice_nation_resize_rebel_org_modifier(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_rebel_org_modifier(container_arg_0_value);
}
sys::unit_variable_stats* alice_nation_get_unit_stats(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	return &alice_state_ptr->world.nation_get_unit_stats(container_arg_0_id, container_arg_1_id);
}
uint32_t alice_nation_get_unit_stats_size(){
	return alice_state_ptr->world.nation_get_unit_stats_size();
}
void alice_nation_resize_unit_stats(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_unit_stats(container_arg_0_value);
}
bool alice_nation_get_active_unit(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_active_unit(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_active_unit(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_active_unit(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_active_unit_size(){
	return alice_state_ptr->world.nation_get_active_unit_size();
}
void alice_nation_resize_active_unit(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_active_unit(container_arg_0_value);
}
bool alice_nation_get_active_crime(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::crime_id container_arg_1_id = dcon::crime_id{dcon::crime_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_active_crime(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_active_crime(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::crime_id container_arg_1_id = dcon::crime_id{dcon::crime_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_active_crime(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_active_crime_size(){
	return alice_state_ptr->world.nation_get_active_crime_size();
}
void alice_nation_resize_active_crime(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_active_crime(container_arg_0_value);
}
bool alice_nation_get_active_building(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_active_building(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_active_building(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_active_building(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_active_building_size(){
	return alice_state_ptr->world.nation_get_active_building_size();
}
void alice_nation_resize_active_building(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_active_building(container_arg_0_value);
}
bool alice_nation_get_unlocked_commodities(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_unlocked_commodities(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_unlocked_commodities(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_unlocked_commodities(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_unlocked_commodities_size(){
	return alice_state_ptr->world.nation_get_unlocked_commodities_size();
}
void alice_nation_resize_unlocked_commodities(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_unlocked_commodities(container_arg_0_value);
}
float alice_nation_get_factory_type_experience(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_factory_type_experience(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_factory_type_experience(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_factory_type_experience(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_factory_type_experience_size(){
	return alice_state_ptr->world.nation_get_factory_type_experience_size();
}
void alice_nation_resize_factory_type_experience(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_factory_type_experience(container_arg_0_value);
}
float alice_nation_get_factory_type_experience_priority_national(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_factory_type_experience_priority_national(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_factory_type_experience_priority_national(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_factory_type_experience_priority_national(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_factory_type_experience_priority_national_size(){
	return alice_state_ptr->world.nation_get_factory_type_experience_priority_national_size();
}
void alice_nation_resize_factory_type_experience_priority_national(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_factory_type_experience_priority_national(container_arg_0_value);
}
float alice_nation_get_factory_type_experience_priority_private(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_factory_type_experience_priority_private(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_factory_type_experience_priority_private(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_factory_type_experience_priority_private(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_factory_type_experience_priority_private_size(){
	return alice_state_ptr->world.nation_get_factory_type_experience_priority_private_size();
}
void alice_nation_resize_factory_type_experience_priority_private(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_factory_type_experience_priority_private(container_arg_0_value);
}
bool alice_nation_get_has_gas_attack(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_has_gas_attack(container_arg_0_id);
}
void alice_nation_set_has_gas_attack(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_has_gas_attack(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_has_gas_defense(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_has_gas_defense(container_arg_0_id);
}
void alice_nation_set_has_gas_defense(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_has_gas_defense(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_nation_get_max_building_level(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.nation_get_max_building_level(container_arg_0_id, container_arg_1_value);
}
void alice_nation_set_max_building_level(int32_t api_arg_0_id, uint8_t api_arg_1_value, uint8_t api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	uint8_t container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_max_building_level(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_nation_get_max_building_level_size(){
	return alice_state_ptr->world.nation_get_max_building_level_size();
}
void alice_nation_resize_max_building_level(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_max_building_level(container_arg_0_value);
}
int32_t alice_nation_get_in_sphere_of(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.nation_get_in_sphere_of(container_arg_0_id);
	return result.index();
}
void alice_nation_set_in_sphere_of(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_in_sphere_of(container_arg_0_id, container_arg_1_id);
}
uint16_t alice_nation_get_rank(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_rank(container_arg_0_id);
}
void alice_nation_set_rank(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_rank(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_industrial_rank(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_industrial_rank(container_arg_0_id);
}
void alice_nation_set_industrial_rank(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_industrial_rank(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_military_rank(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_military_rank(container_arg_0_id);
}
void alice_nation_set_military_rank(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_military_rank(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_prestige_rank(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_prestige_rank(container_arg_0_id);
}
void alice_nation_set_prestige_rank(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_prestige_rank(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_demographics(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_demographics(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_demographics(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_demographics_size(){
	return alice_state_ptr->world.nation_get_demographics_size();
}
void alice_nation_resize_demographics(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_demographics(container_arg_0_value);
}
float alice_nation_get_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_demographics_alt(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_demographics_alt(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::demographics_key container_arg_1_id = dcon::demographics_key{dcon::demographics_key::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_demographics_alt(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_demographics_alt_size(){
	return alice_state_ptr->world.nation_get_demographics_alt_size();
}
void alice_nation_resize_demographics_alt(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_demographics_alt(container_arg_0_value);
}
float alice_nation_get_war_exhaustion(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_war_exhaustion(container_arg_0_id);
}
void alice_nation_set_war_exhaustion(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_war_exhaustion(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_is_at_war(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_is_at_war(container_arg_0_id);
}
void alice_nation_set_is_at_war(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_is_at_war(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_is_mobilized(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_is_mobilized(container_arg_0_id);
}
void alice_nation_set_is_mobilized(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_is_mobilized(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_mobilization_remaining(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_mobilization_remaining(container_arg_0_id);
}
void alice_nation_set_mobilization_remaining(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_mobilization_remaining(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_is_bankrupt(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_is_bankrupt(container_arg_0_id);
}
void alice_nation_set_is_bankrupt(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_is_bankrupt(container_arg_0_id, container_arg_1_value);
}
sys::date* alice_nation_get_last_war_loss(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.nation_get_last_war_loss(container_arg_0_id);
}
sys::date* alice_nation_get_election_ends(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.nation_get_election_ends(container_arg_0_id);
}
sys::date* alice_nation_get_disarmed_until(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.nation_get_disarmed_until(container_arg_0_id);
}
sys::date* alice_nation_get_reparations_until(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.nation_get_reparations_until(container_arg_0_id);
}
int8_t alice_nation_get_education_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_education_spending(container_arg_0_id);
}
void alice_nation_set_education_spending(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_education_spending(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_military_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_military_spending(container_arg_0_id);
}
void alice_nation_set_military_spending(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_military_spending(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_administrative_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_administrative_spending(container_arg_0_id);
}
void alice_nation_set_administrative_spending(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_administrative_spending(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_administration_employment_target_in_capital(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_administration_employment_target_in_capital(container_arg_0_id);
}
void alice_nation_set_administration_employment_target_in_capital(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_administration_employment_target_in_capital(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_social_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_social_spending(container_arg_0_id);
}
void alice_nation_set_social_spending(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_social_spending(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_domestic_investment_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_domestic_investment_spending(container_arg_0_id);
}
void alice_nation_set_domestic_investment_spending(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_domestic_investment_spending(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_overseas_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_overseas_spending(container_arg_0_id);
}
void alice_nation_set_overseas_spending(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_overseas_spending(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_land_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_land_spending(container_arg_0_id);
}
void alice_nation_set_land_spending(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_land_spending(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_naval_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_naval_spending(container_arg_0_id);
}
void alice_nation_set_naval_spending(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_naval_spending(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_construction_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_construction_spending(container_arg_0_id);
}
void alice_nation_set_construction_spending(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_construction_spending(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_land_reinforcement_buffer(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_land_reinforcement_buffer(container_arg_0_id);
}
void alice_nation_set_land_reinforcement_buffer(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_land_reinforcement_buffer(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_naval_reinforcement_buffer(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_naval_reinforcement_buffer(container_arg_0_id);
}
void alice_nation_set_naval_reinforcement_buffer(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_naval_reinforcement_buffer(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_effective_land_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_effective_land_spending(container_arg_0_id);
}
void alice_nation_set_effective_land_spending(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_effective_land_spending(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_effective_naval_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_effective_naval_spending(container_arg_0_id);
}
void alice_nation_set_effective_naval_spending(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_effective_naval_spending(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_effective_construction_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_effective_construction_spending(container_arg_0_id);
}
void alice_nation_set_effective_construction_spending(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_effective_construction_spending(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_maximum_military_costs(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_maximum_military_costs(container_arg_0_id);
}
void alice_nation_set_maximum_military_costs(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_maximum_military_costs(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_subsidy_token_price(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_subsidy_token_price(container_arg_0_id);
}
void alice_nation_set_subsidy_token_price(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_subsidy_token_price(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_subsidy_token_total(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_subsidy_token_total(container_arg_0_id);
}
void alice_nation_set_subsidy_token_total(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_subsidy_token_total(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_subsidies_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_subsidies_spending(container_arg_0_id);
}
void alice_nation_set_subsidies_spending(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_subsidies_spending(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_spending_level(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_spending_level(container_arg_0_id);
}
void alice_nation_set_spending_level(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_spending_level(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_last_base_budget(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_last_base_budget(container_arg_0_id);
}
void alice_nation_set_last_base_budget(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_last_base_budget(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_private_investment(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_private_investment(container_arg_0_id);
}
void alice_nation_set_private_investment(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_private_investment(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_private_investment_effective_fraction(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_private_investment_effective_fraction(container_arg_0_id);
}
void alice_nation_set_private_investment_effective_fraction(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_private_investment_effective_fraction(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_total_rich_income(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_total_rich_income(container_arg_0_id);
}
void alice_nation_set_total_rich_income(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_total_rich_income(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_total_middle_income(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_total_middle_income(container_arg_0_id);
}
void alice_nation_set_total_middle_income(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_total_middle_income(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_total_poor_income(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_total_poor_income(container_arg_0_id);
}
void alice_nation_set_total_poor_income(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_total_poor_income(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_poor_tax(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_poor_tax(container_arg_0_id);
}
void alice_nation_set_poor_tax(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_poor_tax(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_middle_tax(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_middle_tax(container_arg_0_id);
}
void alice_nation_set_middle_tax(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_middle_tax(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_rich_tax(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_rich_tax(container_arg_0_id);
}
void alice_nation_set_rich_tax(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_rich_tax(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_tariffs_import(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_tariffs_import(container_arg_0_id);
}
void alice_nation_set_tariffs_import(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_tariffs_import(container_arg_0_id, container_arg_1_value);
}
int8_t alice_nation_get_tariffs_export(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_tariffs_export(container_arg_0_id);
}
void alice_nation_set_tariffs_export(int32_t api_arg_0_id, int8_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_tariffs_export(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_last_treasury(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_last_treasury(container_arg_0_id);
}
void alice_nation_set_last_treasury(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_last_treasury(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_industrial_score(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_industrial_score(container_arg_0_id);
}
void alice_nation_set_industrial_score(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_industrial_score(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_military_score(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_military_score(container_arg_0_id);
}
void alice_nation_set_military_score(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_military_score(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_central_blockaded(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_central_blockaded(container_arg_0_id);
}
void alice_nation_set_central_blockaded(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_central_blockaded(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_central_rebel_controlled(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_central_rebel_controlled(container_arg_0_id);
}
void alice_nation_set_central_rebel_controlled(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_central_rebel_controlled(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_owned_province_count(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_owned_province_count(container_arg_0_id);
}
void alice_nation_set_owned_province_count(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_owned_province_count(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_owned_state_count(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_owned_state_count(container_arg_0_id);
}
void alice_nation_set_owned_state_count(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_owned_state_count(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_central_province_count(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_central_province_count(container_arg_0_id);
}
void alice_nation_set_central_province_count(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_central_province_count(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_rebel_controlled_count(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_rebel_controlled_count(container_arg_0_id);
}
void alice_nation_set_rebel_controlled_count(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_rebel_controlled_count(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_occupied_count(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_occupied_count(container_arg_0_id);
}
void alice_nation_set_occupied_count(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_occupied_count(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_central_ports(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_central_ports(container_arg_0_id);
}
void alice_nation_set_central_ports(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_central_ports(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_total_ports(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_total_ports(container_arg_0_id);
}
void alice_nation_set_total_ports(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_total_ports(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_central_crime_count(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_central_crime_count(container_arg_0_id);
}
void alice_nation_set_central_crime_count(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_central_crime_count(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_allies_count(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_allies_count(container_arg_0_id);
}
void alice_nation_set_allies_count(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_allies_count(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_vassals_count(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_vassals_count(container_arg_0_id);
}
void alice_nation_set_vassals_count(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_vassals_count(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_substates_count(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_substates_count(container_arg_0_id);
}
void alice_nation_set_substates_count(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_substates_count(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_gdp(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_gdp(container_arg_0_id);
}
void alice_nation_set_gdp(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_gdp(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_gdp_record(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.nation_get_gdp_record(container_arg_0_id, container_arg_1_value);
}
void alice_nation_set_gdp_record(int32_t api_arg_0_id, int32_t api_arg_1_value, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_gdp_record(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_nation_get_gdp_record_size(){
	return alice_state_ptr->world.nation_get_gdp_record_size();
}
void alice_nation_resize_gdp_record(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_gdp_record(container_arg_0_value);
}
float alice_nation_get_stockpiles(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_stockpiles(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_stockpiles(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_stockpiles(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_stockpiles_size(){
	return alice_state_ptr->world.nation_get_stockpiles_size();
}
void alice_nation_resize_stockpiles(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_stockpiles(container_arg_0_value);
}
float alice_nation_get_national_bank(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_national_bank(container_arg_0_id);
}
void alice_nation_set_national_bank(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_national_bank(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_local_loan(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_local_loan(container_arg_0_id);
}
void alice_nation_set_local_loan(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_local_loan(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_stockpile_targets(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_stockpile_targets(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_stockpile_targets(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_stockpile_targets(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_stockpile_targets_size(){
	return alice_state_ptr->world.nation_get_stockpile_targets_size();
}
void alice_nation_resize_stockpile_targets(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_stockpile_targets(container_arg_0_value);
}
bool alice_nation_get_drawing_on_stockpiles(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_drawing_on_stockpiles(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_drawing_on_stockpiles(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_drawing_on_stockpiles(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_drawing_on_stockpiles_size(){
	return alice_state_ptr->world.nation_get_drawing_on_stockpiles_size();
}
void alice_nation_resize_drawing_on_stockpiles(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_drawing_on_stockpiles(container_arg_0_value);
}
float alice_nation_get_overseas_penalty(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_overseas_penalty(container_arg_0_id);
}
void alice_nation_set_overseas_penalty(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_overseas_penalty(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_is_player_controlled(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_is_player_controlled(container_arg_0_id);
}
void alice_nation_set_is_player_controlled(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_is_player_controlled(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_is_debt_spending(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_is_debt_spending(container_arg_0_id);
}
void alice_nation_set_is_debt_spending(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_is_debt_spending(container_arg_0_id, container_arg_1_value);
}
sys::date* alice_nation_get_bankrupt_until(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.nation_get_bankrupt_until(container_arg_0_id);
}
bool alice_nation_get_is_colonial_nation(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_is_colonial_nation(container_arg_0_id);
}
void alice_nation_set_is_colonial_nation(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_is_colonial_nation(container_arg_0_id, container_arg_1_value);
}
int32_t alice_nation_get_dominant_culture(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::culture_id result = alice_state_ptr->world.nation_get_dominant_culture(container_arg_0_id);
	return result.index();
}
void alice_nation_set_dominant_culture(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_dominant_culture(container_arg_0_id, container_arg_1_id);
}
int32_t alice_nation_get_dominant_religion(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::religion_id result = alice_state_ptr->world.nation_get_dominant_religion(container_arg_0_id);
	return result.index();
}
void alice_nation_set_dominant_religion(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::religion_id container_arg_1_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_dominant_religion(container_arg_0_id, container_arg_1_id);
}
int32_t alice_nation_get_dominant_ideology(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id result = alice_state_ptr->world.nation_get_dominant_ideology(container_arg_0_id);
	return result.index();
}
void alice_nation_set_dominant_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_dominant_ideology(container_arg_0_id, container_arg_1_id);
}
int32_t alice_nation_get_dominant_issue_option(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id result = alice_state_ptr->world.nation_get_dominant_issue_option(container_arg_0_id);
	return result.index();
}
void alice_nation_set_dominant_issue_option(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id container_arg_1_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_dominant_issue_option(container_arg_0_id, container_arg_1_id);
}
int32_t alice_nation_get_constructing_cb_target(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.nation_get_constructing_cb_target(container_arg_0_id);
	return result.index();
}
void alice_nation_set_constructing_cb_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_constructing_cb_target(container_arg_0_id, container_arg_1_id);
}
int32_t alice_nation_get_constructing_cb_target_state(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id result = alice_state_ptr->world.nation_get_constructing_cb_target_state(container_arg_0_id);
	return result.index();
}
void alice_nation_set_constructing_cb_target_state(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::state_definition_id container_arg_1_id = dcon::state_definition_id{dcon::state_definition_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_constructing_cb_target_state(container_arg_0_id, container_arg_1_id);
}
float alice_nation_get_constructing_cb_progress(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_constructing_cb_progress(container_arg_0_id);
}
void alice_nation_set_constructing_cb_progress(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_constructing_cb_progress(container_arg_0_id, container_arg_1_value);
}
int32_t alice_nation_get_constructing_cb_type(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::cb_type_id result = alice_state_ptr->world.nation_get_constructing_cb_type(container_arg_0_id);
	return result.index();
}
void alice_nation_set_constructing_cb_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::cb_type_id container_arg_1_id = dcon::cb_type_id{dcon::cb_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_constructing_cb_type(container_arg_0_id, container_arg_1_id);
}
bool alice_nation_get_constructing_cb_is_discovered(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_constructing_cb_is_discovered(container_arg_0_id);
}
void alice_nation_set_constructing_cb_is_discovered(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_constructing_cb_is_discovered(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_non_colonial_population(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_non_colonial_population(container_arg_0_id);
}
void alice_nation_set_non_colonial_population(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_non_colonial_population(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_non_colonial_bureaucrats(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_non_colonial_bureaucrats(container_arg_0_id);
}
void alice_nation_set_non_colonial_bureaucrats(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_non_colonial_bureaucrats(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_administrative_efficiency(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_administrative_efficiency(container_arg_0_id);
}
void alice_nation_set_administrative_efficiency(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_administrative_efficiency(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_research_points(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_research_points(container_arg_0_id);
}
void alice_nation_set_research_points(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_research_points(container_arg_0_id, container_arg_1_value);
}
int32_t alice_nation_get_current_research(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::technology_id result = alice_state_ptr->world.nation_get_current_research(container_arg_0_id);
	return result.index();
}
void alice_nation_set_current_research(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::technology_id container_arg_1_id = dcon::technology_id{dcon::technology_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_current_research(container_arg_0_id, container_arg_1_id);
}
uint16_t alice_nation_get_active_regiments(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_active_regiments(container_arg_0_id);
}
void alice_nation_set_active_regiments(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_active_regiments(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_recruitable_regiments(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_recruitable_regiments(container_arg_0_id);
}
void alice_nation_set_recruitable_regiments(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_recruitable_regiments(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_overlord_commanding_units(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_overlord_commanding_units(container_arg_0_id);
}
void alice_nation_set_overlord_commanding_units(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_overlord_commanding_units(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_averge_land_unit_score(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_averge_land_unit_score(container_arg_0_id);
}
void alice_nation_set_averge_land_unit_score(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_averge_land_unit_score(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_capital_ship_score(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_capital_ship_score(container_arg_0_id);
}
void alice_nation_set_capital_ship_score(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_capital_ship_score(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_suppression_points(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_suppression_points(container_arg_0_id);
}
void alice_nation_set_suppression_points(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_suppression_points(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_diplomatic_points(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_diplomatic_points(container_arg_0_id);
}
void alice_nation_set_diplomatic_points(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_diplomatic_points(container_arg_0_id, container_arg_1_value);
}
float alice_nation_get_leadership_points(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_leadership_points(container_arg_0_id);
}
void alice_nation_set_leadership_points(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_leadership_points(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_naval_supply_points(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_naval_supply_points(container_arg_0_id);
}
void alice_nation_set_naval_supply_points(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_naval_supply_points(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_nation_get_used_naval_supply_points(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_used_naval_supply_points(container_arg_0_id);
}
void alice_nation_set_used_naval_supply_points(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_used_naval_supply_points(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_has_flash_point_state(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_has_flash_point_state(container_arg_0_id);
}
void alice_nation_set_has_flash_point_state(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_has_flash_point_state(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_is_target_of_some_cb(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_is_target_of_some_cb(container_arg_0_id);
}
void alice_nation_set_is_target_of_some_cb(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_is_target_of_some_cb(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_is_interesting(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_is_interesting(container_arg_0_id);
}
void alice_nation_set_is_interesting(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_is_interesting(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_ai_is_threatened(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_ai_is_threatened(container_arg_0_id);
}
void alice_nation_set_ai_is_threatened(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_ai_is_threatened(container_arg_0_id, container_arg_1_value);
}
int32_t alice_nation_get_ai_rival(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.nation_get_ai_rival(container_arg_0_id);
	return result.index();
}
void alice_nation_set_ai_rival(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_ai_rival(container_arg_0_id, container_arg_1_id);
}
int32_t alice_nation_get_ai_home_port(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.nation_get_ai_home_port(container_arg_0_id);
	return result.index();
}
void alice_nation_set_ai_home_port(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.nation_set_ai_home_port(container_arg_0_id, container_arg_1_id);
}
bool alice_nation_get_mobilized_is_ai_controlled(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_mobilized_is_ai_controlled(container_arg_0_id);
}
void alice_nation_set_mobilized_is_ai_controlled(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_mobilized_is_ai_controlled(container_arg_0_id, container_arg_1_value);
}
int alice_nation_get_ai_strategy(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_ai_strategy(container_arg_0_id);
}
void alice_nation_set_ai_strategy(int32_t api_arg_0_id, int api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	int container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_ai_strategy(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_utility_tag(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.nation_get_utility_tag(container_arg_0_id);
}
void alice_nation_set_utility_tag(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.nation_set_utility_tag(container_arg_0_id, container_arg_1_value);
}
bool alice_nation_get_production_directive(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::production_directive_id container_arg_1_id = dcon::production_directive_id{dcon::production_directive_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.nation_get_production_directive(container_arg_0_id, container_arg_1_id);
}
void alice_nation_set_production_directive(int32_t api_arg_0_id, int32_t api_arg_1_id, bool api_arg_2_value){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::production_directive_id container_arg_1_id = dcon::production_directive_id{dcon::production_directive_id::value_base_t(api_arg_1_id)};
	bool container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.nation_set_production_directive(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_nation_get_production_directive_size(){
	return alice_state_ptr->world.nation_get_production_directive_size();
}
void alice_nation_resize_production_directive(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.nation_resize_production_directive(container_arg_0_value);
}
int32_t alice_nation_get_range_nation_adjacency_as_connected_nations(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_nation_adjacency_as_connected_nations(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_nation_adjacency_as_connected_nations(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_nation_adjacency_as_connected_nations(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_nation_adjacency(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_nation_adjacency_as_connected_nations(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_nation_adjacency(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_nation_adjacency_as_connected_nations(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_army_control_as_controller(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_army_control_as_controller(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_army_control_as_controller(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_army_control_as_controller(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_army_control(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_army_control_as_controller(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_army_control(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_army_control_as_controller(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_navy_control_as_controller(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_navy_control_as_controller(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_navy_control_as_controller(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_navy_control_as_controller(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_navy_control(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_navy_control_as_controller(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_navy_control(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_navy_control_as_controller(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_leader_loyalty_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_leader_loyalty_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_leader_loyalty_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_leader_loyalty_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_leader_loyalty(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_leader_loyalty_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_leader_loyalty(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_leader_loyalty_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_pending_peace_offer_as_nation(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::pending_peace_offer_id result = alice_state_ptr->world.nation_get_pending_peace_offer_as_nation(container_arg_0_id);
	return result.index();
}
int32_t alice_nation_get_pending_peace_offer(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::pending_peace_offer_id result = alice_state_ptr->world.nation_get_pending_peace_offer(container_arg_0_id);
	return result.index();
}
int32_t alice_nation_get_range_war_participant_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_war_participant_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_war_participant_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_war_participant_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_war_participant(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_war_participant_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_war_participant(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_war_participant_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_nation_administration_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_nation_administration_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_nation_administration_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_nation_administration_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_nation_administration(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_nation_administration_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_nation_administration(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_nation_administration_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_colonization_as_colonizer(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_colonization_as_colonizer(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_colonization_as_colonizer(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_colonization_as_colonizer(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_colonization(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_colonization_as_colonizer(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_colonization(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_colonization_as_colonizer(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_state_ownership_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_state_ownership_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_state_ownership_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_state_ownership_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_state_ownership(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_state_ownership_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_state_ownership(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_state_ownership_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_flashpoint_focus_as_nation(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::flashpoint_focus_id result = alice_state_ptr->world.nation_get_flashpoint_focus_as_nation(container_arg_0_id);
	return result.index();
}
int32_t alice_nation_get_flashpoint_focus(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::flashpoint_focus_id result = alice_state_ptr->world.nation_get_flashpoint_focus(container_arg_0_id);
	return result.index();
}
int32_t alice_nation_get_identity_holder_as_nation(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::identity_holder_id result = alice_state_ptr->world.nation_get_identity_holder_as_nation(container_arg_0_id);
	return result.index();
}
int32_t alice_nation_get_identity_holder(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::identity_holder_id result = alice_state_ptr->world.nation_get_identity_holder(container_arg_0_id);
	return result.index();
}
int32_t alice_nation_get_range_diplomatic_relation_as_related_nations(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_diplomatic_relation_as_related_nations(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_diplomatic_relation_as_related_nations(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_diplomatic_relation_as_related_nations(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_diplomatic_relation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_diplomatic_relation_as_related_nations(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_diplomatic_relation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_diplomatic_relation_as_related_nations(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_unilateral_relationship_as_target(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_unilateral_relationship_as_target(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_unilateral_relationship_as_target(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_unilateral_relationship_as_target(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_unilateral_relationship_as_source(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_unilateral_relationship_as_source(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_unilateral_relationship_as_source(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_unilateral_relationship_as_source(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_gp_relationship_as_influence_target(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_gp_relationship_as_influence_target(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_gp_relationship_as_influence_target(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_gp_relationship_as_influence_target(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_gp_relationship_as_great_power(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_gp_relationship_as_great_power(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_gp_relationship_as_great_power(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_gp_relationship_as_great_power(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_province_ownership_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_ownership_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_province_ownership_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_ownership_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_province_ownership(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_ownership_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_province_ownership(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_ownership_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_province_control_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_control_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_province_control_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_control_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_province_control(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_control_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_province_control(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_control_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_province_land_construction_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_land_construction_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_province_land_construction_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_land_construction_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_province_land_construction(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_land_construction_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_province_land_construction(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_land_construction_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_province_naval_construction_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_naval_construction_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_province_naval_construction_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_naval_construction_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_province_naval_construction(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_naval_construction_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_province_naval_construction(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_naval_construction_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_province_building_construction_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_building_construction_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_province_building_construction_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_building_construction_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_province_building_construction(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_building_construction_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_province_building_construction(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_province_building_construction_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_factory_construction_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_factory_construction_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_factory_construction_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_factory_construction_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_factory_construction(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_factory_construction_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_factory_construction(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_factory_construction_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_overlord_as_subject(int32_t api_arg_0_id){
	dcon::nation_id container_arg_0_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_0_id)};
	dcon::overlord_id result = alice_state_ptr->world.nation_get_overlord_as_subject(container_arg_0_id);
	return result.index();
}
int32_t alice_nation_get_range_overlord_as_ruler(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_overlord_as_ruler(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_overlord_as_ruler(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_overlord_as_ruler(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_rebellion_within_as_ruler(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_rebellion_within_as_ruler(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_rebellion_within_as_ruler(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_rebellion_within_as_ruler(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_rebellion_within(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_rebellion_within_as_ruler(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_rebellion_within(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_rebellion_within_as_ruler(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_movement_within_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_movement_within_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_movement_within_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_movement_within_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_movement_within(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_movement_within_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_movement_within(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_movement_within_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_player_nation_as_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_player_nation_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_player_nation_as_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_player_nation_as_nation(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_nation_get_range_player_nation(int32_t i) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_player_nation_as_nation(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_nation_get_index_player_nation(int32_t i, int32_t subindex) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.nation_get_player_nation_as_nation(index);
	return rng.begin()[subindex].id.index();
}

void alice_delete_nation(int32_t j) { 
	auto index = dcon::nation_id{dcon::nation_id::value_base_t(j)};
	alice_state_ptr->world.delete_nation(index);
}
int32_t alice_create_nation() { 
	auto result = alice_state_ptr->world.create_nation();
	return result.index();
}
bool alice_market_is_valid(int32_t api_arg_0_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.market_is_valid(container_arg_0_id);
}
uint32_t alice_market_size(){
	return alice_state_ptr->world.market_size();
}
void alice_market_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize(container_arg_0_value);
}
float alice_market_get_gdp(int32_t api_arg_0_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.market_get_gdp(container_arg_0_id);
}
void alice_market_set_gdp(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.market_set_gdp(container_arg_0_id, container_arg_1_value);
}
float alice_market_get_income_scale(int32_t api_arg_0_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.market_get_income_scale(container_arg_0_id);
}
void alice_market_set_income_scale(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.market_set_income_scale(container_arg_0_id, container_arg_1_value);
}
float alice_market_get_supply(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_supply(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_supply(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_supply(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_supply_size(){
	return alice_state_ptr->world.market_get_supply_size();
}
void alice_market_resize_supply(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_supply(container_arg_0_value);
}
float alice_market_get_demand(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_demand(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_demand(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_demand_size(){
	return alice_state_ptr->world.market_get_demand_size();
}
void alice_market_resize_demand(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_demand(container_arg_0_value);
}
float alice_market_get_intermediate_demand(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_intermediate_demand(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_intermediate_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_intermediate_demand(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_intermediate_demand_size(){
	return alice_state_ptr->world.market_get_intermediate_demand_size();
}
void alice_market_resize_intermediate_demand(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_intermediate_demand(container_arg_0_value);
}
float alice_market_get_consumption(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_consumption(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_consumption(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_consumption(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_consumption_size(){
	return alice_state_ptr->world.market_get_consumption_size();
}
void alice_market_resize_consumption(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_consumption(container_arg_0_value);
}
float alice_market_get_stockpile(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_stockpile(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_stockpile(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_stockpile(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_stockpile_size(){
	return alice_state_ptr->world.market_get_stockpile_size();
}
void alice_market_resize_stockpile(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_stockpile(container_arg_0_value);
}
float alice_market_get_wealth(int32_t api_arg_0_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.market_get_wealth(container_arg_0_id);
}
void alice_market_set_wealth(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.market_set_wealth(container_arg_0_id, container_arg_1_value);
}
float alice_market_get_price(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_price(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_price(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_price(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_price_size(){
	return alice_state_ptr->world.market_get_price_size();
}
void alice_market_resize_price(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_price(container_arg_0_value);
}
float alice_market_get_army_demand(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_army_demand(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_army_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_army_demand(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_army_demand_size(){
	return alice_state_ptr->world.market_get_army_demand_size();
}
void alice_market_resize_army_demand(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_army_demand(container_arg_0_value);
}
float alice_market_get_navy_demand(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_navy_demand(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_navy_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_navy_demand(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_navy_demand_size(){
	return alice_state_ptr->world.market_get_navy_demand_size();
}
void alice_market_resize_navy_demand(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_navy_demand(container_arg_0_value);
}
float alice_market_get_construction_demand(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_construction_demand(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_construction_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_construction_demand(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_construction_demand_size(){
	return alice_state_ptr->world.market_get_construction_demand_size();
}
void alice_market_resize_construction_demand(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_construction_demand(container_arg_0_value);
}
float alice_market_get_private_construction_demand(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_private_construction_demand(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_private_construction_demand(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_private_construction_demand(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_private_construction_demand_size(){
	return alice_state_ptr->world.market_get_private_construction_demand_size();
}
void alice_market_resize_private_construction_demand(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_private_construction_demand(container_arg_0_value);
}
float alice_market_get_aggregated_demand_history(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_aggregated_demand_history(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_aggregated_demand_history(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_aggregated_demand_history(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_aggregated_demand_history_size(){
	return alice_state_ptr->world.market_get_aggregated_demand_history_size();
}
void alice_market_resize_aggregated_demand_history(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_aggregated_demand_history(container_arg_0_value);
}
float alice_market_get_aggregated_supply_history(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_aggregated_supply_history(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_aggregated_supply_history(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_aggregated_supply_history(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_aggregated_supply_history_size(){
	return alice_state_ptr->world.market_get_aggregated_supply_history_size();
}
void alice_market_resize_aggregated_supply_history(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_aggregated_supply_history(container_arg_0_value);
}
float alice_market_get_expected_probability_to_buy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_expected_probability_to_buy(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_expected_probability_to_buy(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_expected_probability_to_buy(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_expected_probability_to_buy_size(){
	return alice_state_ptr->world.market_get_expected_probability_to_buy_size();
}
void alice_market_resize_expected_probability_to_buy(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_expected_probability_to_buy(container_arg_0_value);
}
float alice_market_get_actual_probability_to_buy(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_actual_probability_to_buy(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_actual_probability_to_buy(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_actual_probability_to_buy(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_actual_probability_to_buy_size(){
	return alice_state_ptr->world.market_get_actual_probability_to_buy_size();
}
void alice_market_resize_actual_probability_to_buy(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_actual_probability_to_buy(container_arg_0_value);
}
float alice_market_get_expected_probability_to_sell(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_expected_probability_to_sell(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_expected_probability_to_sell(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_expected_probability_to_sell(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_expected_probability_to_sell_size(){
	return alice_state_ptr->world.market_get_expected_probability_to_sell_size();
}
void alice_market_resize_expected_probability_to_sell(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_expected_probability_to_sell(container_arg_0_value);
}
float alice_market_get_actual_probability_to_sell(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_actual_probability_to_sell(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_actual_probability_to_sell(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_actual_probability_to_sell(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_actual_probability_to_sell_size(){
	return alice_state_ptr->world.market_get_actual_probability_to_sell_size();
}
void alice_market_resize_actual_probability_to_sell(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_actual_probability_to_sell(container_arg_0_value);
}
float alice_market_get_life_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_life_needs_costs(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_life_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_life_needs_costs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_life_needs_costs_size(){
	return alice_state_ptr->world.market_get_life_needs_costs_size();
}
void alice_market_resize_life_needs_costs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_life_needs_costs(container_arg_0_value);
}
float alice_market_get_everyday_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_everyday_needs_costs(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_everyday_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_everyday_needs_costs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_everyday_needs_costs_size(){
	return alice_state_ptr->world.market_get_everyday_needs_costs_size();
}
void alice_market_resize_everyday_needs_costs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_everyday_needs_costs(container_arg_0_value);
}
float alice_market_get_luxury_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_luxury_needs_costs(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_luxury_needs_costs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_luxury_needs_costs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_luxury_needs_costs_size(){
	return alice_state_ptr->world.market_get_luxury_needs_costs_size();
}
void alice_market_resize_luxury_needs_costs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_luxury_needs_costs(container_arg_0_value);
}
float alice_market_get_life_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_life_needs_scale(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_life_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_life_needs_scale(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_life_needs_scale_size(){
	return alice_state_ptr->world.market_get_life_needs_scale_size();
}
void alice_market_resize_life_needs_scale(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_life_needs_scale(container_arg_0_value);
}
float alice_market_get_everyday_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_everyday_needs_scale(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_everyday_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_everyday_needs_scale(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_everyday_needs_scale_size(){
	return alice_state_ptr->world.market_get_everyday_needs_scale_size();
}
void alice_market_resize_everyday_needs_scale(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_everyday_needs_scale(container_arg_0_value);
}
float alice_market_get_luxury_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_luxury_needs_scale(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_luxury_needs_scale(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_luxury_needs_scale(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_luxury_needs_scale_size(){
	return alice_state_ptr->world.market_get_luxury_needs_scale_size();
}
void alice_market_resize_luxury_needs_scale(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_luxury_needs_scale(container_arg_0_value);
}
float alice_market_get_satisfied_ratio_of_max_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_satisfied_ratio_of_max_life_needs(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_satisfied_ratio_of_max_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_satisfied_ratio_of_max_life_needs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_satisfied_ratio_of_max_life_needs_size(){
	return alice_state_ptr->world.market_get_satisfied_ratio_of_max_life_needs_size();
}
void alice_market_resize_satisfied_ratio_of_max_life_needs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_satisfied_ratio_of_max_life_needs(container_arg_0_value);
}
float alice_market_get_satisfied_ratio_of_max_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_satisfied_ratio_of_max_everyday_needs(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_satisfied_ratio_of_max_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_satisfied_ratio_of_max_everyday_needs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_satisfied_ratio_of_max_everyday_needs_size(){
	return alice_state_ptr->world.market_get_satisfied_ratio_of_max_everyday_needs_size();
}
void alice_market_resize_satisfied_ratio_of_max_everyday_needs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_satisfied_ratio_of_max_everyday_needs(container_arg_0_value);
}
float alice_market_get_satisfied_ratio_of_max_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_satisfied_ratio_of_max_luxury_needs(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_satisfied_ratio_of_max_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_satisfied_ratio_of_max_luxury_needs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_satisfied_ratio_of_max_luxury_needs_size(){
	return alice_state_ptr->world.market_get_satisfied_ratio_of_max_luxury_needs_size();
}
void alice_market_resize_satisfied_ratio_of_max_luxury_needs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_satisfied_ratio_of_max_luxury_needs(container_arg_0_value);
}
float alice_market_get_satisfied_ratio_of_demanded_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_satisfied_ratio_of_demanded_life_needs(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_satisfied_ratio_of_demanded_life_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_satisfied_ratio_of_demanded_life_needs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_satisfied_ratio_of_demanded_life_needs_size(){
	return alice_state_ptr->world.market_get_satisfied_ratio_of_demanded_life_needs_size();
}
void alice_market_resize_satisfied_ratio_of_demanded_life_needs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_satisfied_ratio_of_demanded_life_needs(container_arg_0_value);
}
float alice_market_get_satisfied_ratio_of_demanded_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_satisfied_ratio_of_demanded_everyday_needs(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_satisfied_ratio_of_demanded_everyday_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_satisfied_ratio_of_demanded_everyday_needs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_satisfied_ratio_of_demanded_everyday_needs_size(){
	return alice_state_ptr->world.market_get_satisfied_ratio_of_demanded_everyday_needs_size();
}
void alice_market_resize_satisfied_ratio_of_demanded_everyday_needs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_satisfied_ratio_of_demanded_everyday_needs(container_arg_0_value);
}
float alice_market_get_satisfied_ratio_of_demanded_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_satisfied_ratio_of_demanded_luxury_needs(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_satisfied_ratio_of_demanded_luxury_needs(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_satisfied_ratio_of_demanded_luxury_needs(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_satisfied_ratio_of_demanded_luxury_needs_size(){
	return alice_state_ptr->world.market_get_satisfied_ratio_of_demanded_luxury_needs_size();
}
void alice_market_resize_satisfied_ratio_of_demanded_luxury_needs(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_satisfied_ratio_of_demanded_luxury_needs(container_arg_0_value);
}
float alice_market_get_life_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_life_needs_weights(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_life_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_life_needs_weights(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_life_needs_weights_size(){
	return alice_state_ptr->world.market_get_life_needs_weights_size();
}
void alice_market_resize_life_needs_weights(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_life_needs_weights(container_arg_0_value);
}
float alice_market_get_everyday_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_everyday_needs_weights(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_everyday_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_everyday_needs_weights(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_everyday_needs_weights_size(){
	return alice_state_ptr->world.market_get_everyday_needs_weights_size();
}
void alice_market_resize_everyday_needs_weights(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_everyday_needs_weights(container_arg_0_value);
}
float alice_market_get_luxury_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_luxury_needs_weights(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_luxury_needs_weights(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_luxury_needs_weights(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_luxury_needs_weights_size(){
	return alice_state_ptr->world.market_get_luxury_needs_weights_size();
}
void alice_market_resize_luxury_needs_weights(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_luxury_needs_weights(container_arg_0_value);
}
float alice_market_get_import(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_import(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_import(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_import(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_import_size(){
	return alice_state_ptr->world.market_get_import_size();
}
void alice_market_resize_import(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_import(container_arg_0_value);
}
float alice_market_get_export(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.market_get_export(container_arg_0_id, container_arg_1_id);
}
void alice_market_set_export(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.market_set_export(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_market_get_export_size(){
	return alice_state_ptr->world.market_get_export_size();
}
void alice_market_resize_export(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.market_resize_export(container_arg_0_value);
}
float alice_market_get_tariff_collected(int32_t api_arg_0_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.market_get_tariff_collected(container_arg_0_id);
}
void alice_market_set_tariff_collected(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.market_set_tariff_collected(container_arg_0_id, container_arg_1_value);
}
float alice_market_get_max_throughput(int32_t api_arg_0_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.market_get_max_throughput(container_arg_0_id);
}
void alice_market_set_max_throughput(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.market_set_max_throughput(container_arg_0_id, container_arg_1_value);
}
int32_t alice_market_get_local_market_as_market(int32_t api_arg_0_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::local_market_id result = alice_state_ptr->world.market_get_local_market_as_market(container_arg_0_id);
	return result.index();
}
int32_t alice_market_get_local_market(int32_t api_arg_0_id){
	dcon::market_id container_arg_0_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_0_id)};
	dcon::local_market_id result = alice_state_ptr->world.market_get_local_market(container_arg_0_id);
	return result.index();
}
int32_t alice_market_get_range_trade_route_as_connected_markets(int32_t i) { 
	auto index = dcon::market_id{dcon::market_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.market_get_trade_route_as_connected_markets(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_market_get_index_trade_route_as_connected_markets(int32_t i, int32_t subindex) { 
	auto index = dcon::market_id{dcon::market_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.market_get_trade_route_as_connected_markets(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_market_get_range_trade_route(int32_t i) { 
	auto index = dcon::market_id{dcon::market_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.market_get_trade_route_as_connected_markets(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_market_get_index_trade_route(int32_t i, int32_t subindex) { 
	auto index = dcon::market_id{dcon::market_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.market_get_trade_route_as_connected_markets(index);
	return rng.begin()[subindex].id.index();
}

void alice_delete_market(int32_t j) { 
	auto index = dcon::market_id{dcon::market_id::value_base_t(j)};
	alice_state_ptr->world.delete_market(index);
}
int32_t alice_create_market() { 
	auto result = alice_state_ptr->world.create_market();
	return result.index();
}
bool alice_local_market_is_valid(int32_t api_arg_0_id){
	dcon::local_market_id container_arg_0_id = dcon::local_market_id{dcon::local_market_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.local_market_is_valid(container_arg_0_id);
}
uint32_t alice_local_market_size(){
	return alice_state_ptr->world.local_market_size();
}
void alice_local_market_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.local_market_resize(container_arg_0_value);
}
int32_t alice_local_market_get_market(int32_t api_arg_0_id){
	dcon::local_market_id container_arg_0_id = dcon::local_market_id{dcon::local_market_id::value_base_t(api_arg_0_id)};
	dcon::market_id result = alice_state_ptr->world.local_market_get_market(container_arg_0_id);
	return result.index();
}
void alice_local_market_set_market(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::local_market_id container_arg_0_id = dcon::local_market_id{dcon::local_market_id::value_base_t(api_arg_0_id)};
	dcon::market_id container_arg_1_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.local_market_set_market(container_arg_0_id, container_arg_1_id);
}
void alice_local_market_try_set_market(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::local_market_id container_arg_0_id = dcon::local_market_id{dcon::local_market_id::value_base_t(api_arg_0_id)};
	dcon::market_id container_arg_1_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.local_market_try_set_market(container_arg_0_id, container_arg_1_id);
}
int32_t alice_local_market_get_zone(int32_t api_arg_0_id){
	dcon::local_market_id container_arg_0_id = dcon::local_market_id{dcon::local_market_id::value_base_t(api_arg_0_id)};
	dcon::state_instance_id result = alice_state_ptr->world.local_market_get_zone(container_arg_0_id);
	return result.index();
}
void alice_local_market_set_zone(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::local_market_id container_arg_0_id = dcon::local_market_id{dcon::local_market_id::value_base_t(api_arg_0_id)};
	dcon::state_instance_id container_arg_1_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.local_market_set_zone(container_arg_0_id, container_arg_1_id);
}
void alice_local_market_try_set_zone(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::local_market_id container_arg_0_id = dcon::local_market_id{dcon::local_market_id::value_base_t(api_arg_0_id)};
	dcon::state_instance_id container_arg_1_id = dcon::state_instance_id{dcon::state_instance_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.local_market_try_set_zone(container_arg_0_id, container_arg_1_id);
}

void alice_delete_local_market(int32_t j) { 
	auto index = dcon::local_market_id{dcon::local_market_id::value_base_t(j)};
	alice_state_ptr->world.delete_local_market(index);
}
int32_t alice_try_create_local_market(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_local_market(dcon::market_id{dcon::market_id::value_base_t(p1)}, dcon::state_instance_id{dcon::state_instance_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_local_market(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_local_market(dcon::market_id{dcon::market_id::value_base_t(p1)}, dcon::state_instance_id{dcon::state_instance_id::value_base_t(p2)});
	return result.index();
}
bool alice_trade_route_is_valid(int32_t api_arg_0_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.trade_route_is_valid(container_arg_0_id);
}
uint32_t alice_trade_route_size(){
	return alice_state_ptr->world.trade_route_size();
}
void alice_trade_route_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.trade_route_resize(container_arg_0_value);
}
float alice_trade_route_get_distance(int32_t api_arg_0_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.trade_route_get_distance(container_arg_0_id);
}
void alice_trade_route_set_distance(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.trade_route_set_distance(container_arg_0_id, container_arg_1_value);
}
float alice_trade_route_get_sea_distance(int32_t api_arg_0_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.trade_route_get_sea_distance(container_arg_0_id);
}
void alice_trade_route_set_sea_distance(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.trade_route_set_sea_distance(container_arg_0_id, container_arg_1_value);
}
float alice_trade_route_get_land_distance(int32_t api_arg_0_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.trade_route_get_land_distance(container_arg_0_id);
}
void alice_trade_route_set_land_distance(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.trade_route_set_land_distance(container_arg_0_id, container_arg_1_value);
}
bool alice_trade_route_get_is_sea_route(int32_t api_arg_0_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.trade_route_get_is_sea_route(container_arg_0_id);
}
void alice_trade_route_set_is_sea_route(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.trade_route_set_is_sea_route(container_arg_0_id, container_arg_1_value);
}
bool alice_trade_route_get_is_land_route(int32_t api_arg_0_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.trade_route_get_is_land_route(container_arg_0_id);
}
void alice_trade_route_set_is_land_route(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.trade_route_set_is_land_route(container_arg_0_id, container_arg_1_value);
}
bool alice_trade_route_get_is_trade_forbidden(int32_t api_arg_0_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.trade_route_get_is_trade_forbidden(container_arg_0_id);
}
void alice_trade_route_set_is_trade_forbidden(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.trade_route_set_is_trade_forbidden(container_arg_0_id, container_arg_1_value);
}
bool alice_trade_route_get_is_tariff_applied_0(int32_t api_arg_0_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.trade_route_get_is_tariff_applied_0(container_arg_0_id);
}
void alice_trade_route_set_is_tariff_applied_0(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.trade_route_set_is_tariff_applied_0(container_arg_0_id, container_arg_1_value);
}
bool alice_trade_route_get_is_tariff_applied_1(int32_t api_arg_0_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.trade_route_get_is_tariff_applied_1(container_arg_0_id);
}
void alice_trade_route_set_is_tariff_applied_1(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.trade_route_set_is_tariff_applied_1(container_arg_0_id, container_arg_1_value);
}
float alice_trade_route_get_volume(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.trade_route_get_volume(container_arg_0_id, container_arg_1_id);
}
void alice_trade_route_set_volume(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.trade_route_set_volume(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_trade_route_get_volume_size(){
	return alice_state_ptr->world.trade_route_get_volume_size();
}
void alice_trade_route_resize_volume(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.trade_route_resize_volume(container_arg_0_value);
}
float alice_trade_route_get_stabilization_volume(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.trade_route_get_stabilization_volume(container_arg_0_id, container_arg_1_id);
}
void alice_trade_route_set_stabilization_volume(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.trade_route_set_stabilization_volume(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_trade_route_get_stabilization_volume_size(){
	return alice_state_ptr->world.trade_route_get_stabilization_volume_size();
}
void alice_trade_route_resize_stabilization_volume(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.trade_route_resize_stabilization_volume(container_arg_0_value);
}
int32_t alice_trade_route_get_connected_markets(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::market_id result = alice_state_ptr->world.trade_route_get_connected_markets(container_arg_0_id, container_arg_1_value);
	return result.index();
}
void alice_trade_route_set_connected_markets(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::market_id container_arg_2_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.trade_route_set_connected_markets(container_arg_0_id, container_arg_1_value, container_arg_2_id);
}
void alice_trade_route_try_set_connected_markets(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id){
	dcon::trade_route_id container_arg_0_id = dcon::trade_route_id{dcon::trade_route_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::market_id container_arg_2_id = dcon::market_id{dcon::market_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.trade_route_try_set_connected_markets(container_arg_0_id, container_arg_1_value, container_arg_2_id);
}

void alice_pop_back_trade_route() { 
	if(alice_state_ptr->world.trade_route_size() > 0) {
		auto index = dcon::trade_route_id{dcon::trade_route_id::value_base_t(alice_state_ptr->world.trade_route_size() - 1)};
		alice_state_ptr->world.pop_back_trade_route();
	}
}
int32_t alice_try_create_trade_route(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_trade_route(dcon::market_id{dcon::market_id::value_base_t(p1)}, dcon::market_id{dcon::market_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_trade_route(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_trade_route(dcon::market_id{dcon::market_id::value_base_t(p1)}, dcon::market_id{dcon::market_id::value_base_t(p2)});
	return result.index();
}
void alice_delete_trade_route(int32_t j) { 
	auto index = dcon::trade_route_id{dcon::trade_route_id::value_base_t(j)};
	alice_state_ptr->world.delete_trade_route(index);
}
int32_t alice_get_trade_route_by_province_pair(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.get_trade_route_by_province_pair(dcon::market_id{dcon::market_id::value_base_t(p1)}, dcon::market_id{dcon::market_id::value_base_t(p2)});
	return result.index();
}
bool alice_diplomatic_relation_is_valid(int32_t api_arg_0_id){
	dcon::diplomatic_relation_id container_arg_0_id = dcon::diplomatic_relation_id{dcon::diplomatic_relation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.diplomatic_relation_is_valid(container_arg_0_id);
}
uint32_t alice_diplomatic_relation_size(){
	return alice_state_ptr->world.diplomatic_relation_size();
}
void alice_diplomatic_relation_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.diplomatic_relation_resize(container_arg_0_value);
}
float alice_diplomatic_relation_get_value(int32_t api_arg_0_id){
	dcon::diplomatic_relation_id container_arg_0_id = dcon::diplomatic_relation_id{dcon::diplomatic_relation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.diplomatic_relation_get_value(container_arg_0_id);
}
void alice_diplomatic_relation_set_value(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::diplomatic_relation_id container_arg_0_id = dcon::diplomatic_relation_id{dcon::diplomatic_relation_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.diplomatic_relation_set_value(container_arg_0_id, container_arg_1_value);
}
bool alice_diplomatic_relation_get_are_allied(int32_t api_arg_0_id){
	dcon::diplomatic_relation_id container_arg_0_id = dcon::diplomatic_relation_id{dcon::diplomatic_relation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.diplomatic_relation_get_are_allied(container_arg_0_id);
}
void alice_diplomatic_relation_set_are_allied(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::diplomatic_relation_id container_arg_0_id = dcon::diplomatic_relation_id{dcon::diplomatic_relation_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.diplomatic_relation_set_are_allied(container_arg_0_id, container_arg_1_value);
}
sys::date* alice_diplomatic_relation_get_truce_until(int32_t api_arg_0_id){
	dcon::diplomatic_relation_id container_arg_0_id = dcon::diplomatic_relation_id{dcon::diplomatic_relation_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.diplomatic_relation_get_truce_until(container_arg_0_id);
}
int32_t alice_diplomatic_relation_get_related_nations(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::diplomatic_relation_id container_arg_0_id = dcon::diplomatic_relation_id{dcon::diplomatic_relation_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::nation_id result = alice_state_ptr->world.diplomatic_relation_get_related_nations(container_arg_0_id, container_arg_1_value);
	return result.index();
}
void alice_diplomatic_relation_set_related_nations(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id){
	dcon::diplomatic_relation_id container_arg_0_id = dcon::diplomatic_relation_id{dcon::diplomatic_relation_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::nation_id container_arg_2_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.diplomatic_relation_set_related_nations(container_arg_0_id, container_arg_1_value, container_arg_2_id);
}
void alice_diplomatic_relation_try_set_related_nations(int32_t api_arg_0_id, int32_t api_arg_1_value, int32_t api_arg_2_id){
	dcon::diplomatic_relation_id container_arg_0_id = dcon::diplomatic_relation_id{dcon::diplomatic_relation_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	dcon::nation_id container_arg_2_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_2_id)};
	alice_state_ptr->world.diplomatic_relation_try_set_related_nations(container_arg_0_id, container_arg_1_value, container_arg_2_id);
}

void alice_pop_back_diplomatic_relation() { 
	if(alice_state_ptr->world.diplomatic_relation_size() > 0) {
		auto index = dcon::diplomatic_relation_id{dcon::diplomatic_relation_id::value_base_t(alice_state_ptr->world.diplomatic_relation_size() - 1)};
		alice_state_ptr->world.pop_back_diplomatic_relation();
	}
}
int32_t alice_try_create_diplomatic_relation(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_diplomatic_relation(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_diplomatic_relation(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_diplomatic_relation(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
void alice_delete_diplomatic_relation(int32_t j) { 
	auto index = dcon::diplomatic_relation_id{dcon::diplomatic_relation_id::value_base_t(j)};
	alice_state_ptr->world.delete_diplomatic_relation(index);
}
int32_t alice_get_diplomatic_relation_by_diplomatic_pair(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.get_diplomatic_relation_by_diplomatic_pair(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_unilateral_relationship_is_valid(int32_t api_arg_0_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.unilateral_relationship_is_valid(container_arg_0_id);
}
uint32_t alice_unilateral_relationship_size(){
	return alice_state_ptr->world.unilateral_relationship_size();
}
void alice_unilateral_relationship_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.unilateral_relationship_resize(container_arg_0_value);
}
float alice_unilateral_relationship_get_foreign_investment(int32_t api_arg_0_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.unilateral_relationship_get_foreign_investment(container_arg_0_id);
}
void alice_unilateral_relationship_set_foreign_investment(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.unilateral_relationship_set_foreign_investment(container_arg_0_id, container_arg_1_value);
}
float alice_unilateral_relationship_get_owns_debt_of(int32_t api_arg_0_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.unilateral_relationship_get_owns_debt_of(container_arg_0_id);
}
void alice_unilateral_relationship_set_owns_debt_of(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.unilateral_relationship_set_owns_debt_of(container_arg_0_id, container_arg_1_value);
}
bool alice_unilateral_relationship_get_military_access(int32_t api_arg_0_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.unilateral_relationship_get_military_access(container_arg_0_id);
}
void alice_unilateral_relationship_set_military_access(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.unilateral_relationship_set_military_access(container_arg_0_id, container_arg_1_value);
}
bool alice_unilateral_relationship_get_war_subsidies(int32_t api_arg_0_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.unilateral_relationship_get_war_subsidies(container_arg_0_id);
}
void alice_unilateral_relationship_set_war_subsidies(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.unilateral_relationship_set_war_subsidies(container_arg_0_id, container_arg_1_value);
}
bool alice_unilateral_relationship_get_reparations(int32_t api_arg_0_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.unilateral_relationship_get_reparations(container_arg_0_id);
}
void alice_unilateral_relationship_set_reparations(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.unilateral_relationship_set_reparations(container_arg_0_id, container_arg_1_value);
}
bool alice_unilateral_relationship_get_interested_in_alliance(int32_t api_arg_0_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.unilateral_relationship_get_interested_in_alliance(container_arg_0_id);
}
void alice_unilateral_relationship_set_interested_in_alliance(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.unilateral_relationship_set_interested_in_alliance(container_arg_0_id, container_arg_1_value);
}
sys::date* alice_unilateral_relationship_get_no_tariffs_until(int32_t api_arg_0_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.unilateral_relationship_get_no_tariffs_until(container_arg_0_id);
}
bool alice_unilateral_relationship_get_embargo(int32_t api_arg_0_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.unilateral_relationship_get_embargo(container_arg_0_id);
}
void alice_unilateral_relationship_set_embargo(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.unilateral_relationship_set_embargo(container_arg_0_id, container_arg_1_value);
}
int32_t alice_unilateral_relationship_get_target(int32_t api_arg_0_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.unilateral_relationship_get_target(container_arg_0_id);
	return result.index();
}
void alice_unilateral_relationship_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.unilateral_relationship_set_target(container_arg_0_id, container_arg_1_id);
}
void alice_unilateral_relationship_try_set_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.unilateral_relationship_try_set_target(container_arg_0_id, container_arg_1_id);
}
int32_t alice_unilateral_relationship_get_source(int32_t api_arg_0_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.unilateral_relationship_get_source(container_arg_0_id);
	return result.index();
}
void alice_unilateral_relationship_set_source(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.unilateral_relationship_set_source(container_arg_0_id, container_arg_1_id);
}
void alice_unilateral_relationship_try_set_source(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::unilateral_relationship_id container_arg_0_id = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.unilateral_relationship_try_set_source(container_arg_0_id, container_arg_1_id);
}

void alice_pop_back_unilateral_relationship() { 
	if(alice_state_ptr->world.unilateral_relationship_size() > 0) {
		auto index = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(alice_state_ptr->world.unilateral_relationship_size() - 1)};
		alice_state_ptr->world.pop_back_unilateral_relationship();
	}
}
int32_t alice_try_create_unilateral_relationship(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_unilateral_relationship(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_unilateral_relationship(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_unilateral_relationship(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
void alice_delete_unilateral_relationship(int32_t j) { 
	auto index = dcon::unilateral_relationship_id{dcon::unilateral_relationship_id::value_base_t(j)};
	alice_state_ptr->world.delete_unilateral_relationship(index);
}
int32_t alice_get_unilateral_relationship_by_unilateral_pair(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.get_unilateral_relationship_by_unilateral_pair(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_gp_relationship_is_valid(int32_t api_arg_0_id){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.gp_relationship_is_valid(container_arg_0_id);
}
uint32_t alice_gp_relationship_size(){
	return alice_state_ptr->world.gp_relationship_size();
}
void alice_gp_relationship_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.gp_relationship_resize(container_arg_0_value);
}
float alice_gp_relationship_get_influence(int32_t api_arg_0_id){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.gp_relationship_get_influence(container_arg_0_id);
}
void alice_gp_relationship_set_influence(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.gp_relationship_set_influence(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_gp_relationship_get_status(int32_t api_arg_0_id){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.gp_relationship_get_status(container_arg_0_id);
}
void alice_gp_relationship_set_status(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.gp_relationship_set_status(container_arg_0_id, container_arg_1_value);
}
sys::date* alice_gp_relationship_get_penalty_expires_date(int32_t api_arg_0_id){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.gp_relationship_get_penalty_expires_date(container_arg_0_id);
}
int32_t alice_gp_relationship_get_influence_target(int32_t api_arg_0_id){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.gp_relationship_get_influence_target(container_arg_0_id);
	return result.index();
}
void alice_gp_relationship_set_influence_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.gp_relationship_set_influence_target(container_arg_0_id, container_arg_1_id);
}
void alice_gp_relationship_try_set_influence_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.gp_relationship_try_set_influence_target(container_arg_0_id, container_arg_1_id);
}
int32_t alice_gp_relationship_get_great_power(int32_t api_arg_0_id){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.gp_relationship_get_great_power(container_arg_0_id);
	return result.index();
}
void alice_gp_relationship_set_great_power(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.gp_relationship_set_great_power(container_arg_0_id, container_arg_1_id);
}
void alice_gp_relationship_try_set_great_power(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::gp_relationship_id container_arg_0_id = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.gp_relationship_try_set_great_power(container_arg_0_id, container_arg_1_id);
}

void alice_pop_back_gp_relationship() { 
	if(alice_state_ptr->world.gp_relationship_size() > 0) {
		auto index = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(alice_state_ptr->world.gp_relationship_size() - 1)};
		alice_state_ptr->world.pop_back_gp_relationship();
	}
}
int32_t alice_try_create_gp_relationship(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_gp_relationship(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_gp_relationship(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_gp_relationship(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
void alice_delete_gp_relationship(int32_t j) { 
	auto index = dcon::gp_relationship_id{dcon::gp_relationship_id::value_base_t(j)};
	alice_state_ptr->world.delete_gp_relationship(index);
}
int32_t alice_get_gp_relationship_by_gp_influence_pair(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.get_gp_relationship_by_gp_influence_pair(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_factory_is_valid(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_is_valid(container_arg_0_id);
}
uint32_t alice_factory_size(){
	return alice_state_ptr->world.factory_size();
}
void alice_factory_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.factory_resize(container_arg_0_value);
}
int32_t alice_factory_get_building_type(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id result = alice_state_ptr->world.factory_get_building_type(container_arg_0_id);
	return result.index();
}
void alice_factory_set_building_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_set_building_type(container_arg_0_id, container_arg_1_id);
}
bool alice_factory_get_priority_low(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_priority_low(container_arg_0_id);
}
void alice_factory_set_priority_low(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_priority_low(container_arg_0_id, container_arg_1_value);
}
bool alice_factory_get_priority_high(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_priority_high(container_arg_0_id);
}
void alice_factory_set_priority_high(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_priority_high(container_arg_0_id, container_arg_1_value);
}
bool alice_factory_get_subsidized(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_subsidized(container_arg_0_id);
}
void alice_factory_set_subsidized(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_subsidized(container_arg_0_id, container_arg_1_value);
}
bool alice_factory_get_unprofitable(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_unprofitable(container_arg_0_id);
}
void alice_factory_set_unprofitable(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_unprofitable(container_arg_0_id, container_arg_1_value);
}
float alice_factory_get_size(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_size(container_arg_0_id);
}
void alice_factory_set_size(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_size(container_arg_0_id, container_arg_1_value);
}
float alice_factory_get_unqualified_employment(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_unqualified_employment(container_arg_0_id);
}
void alice_factory_set_unqualified_employment(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_unqualified_employment(container_arg_0_id, container_arg_1_value);
}
float alice_factory_get_primary_employment(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_primary_employment(container_arg_0_id);
}
void alice_factory_set_primary_employment(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_primary_employment(container_arg_0_id, container_arg_1_value);
}
float alice_factory_get_secondary_employment(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_secondary_employment(container_arg_0_id);
}
void alice_factory_set_secondary_employment(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_secondary_employment(container_arg_0_id, container_arg_1_value);
}
float alice_factory_get_efficiency_level(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	return alice_state_ptr->world.factory_get_efficiency_level(container_arg_0_id, container_arg_1_value);
}
void alice_factory_set_efficiency_level(int32_t api_arg_0_id, uint8_t api_arg_1_value, float api_arg_2_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.factory_set_efficiency_level(container_arg_0_id, container_arg_1_value, container_arg_2_value);
}
uint32_t alice_factory_get_efficiency_level_size(){
	return alice_state_ptr->world.factory_get_efficiency_level_size();
}
void alice_factory_resize_efficiency_level(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.factory_resize_efficiency_level(container_arg_0_value);
}
float alice_factory_get_technology_scale(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_technology_scale(container_arg_0_id);
}
void alice_factory_set_technology_scale(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_technology_scale(container_arg_0_id, container_arg_1_value);
}
float alice_factory_get_profit(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_profit(container_arg_0_id);
}
void alice_factory_set_profit(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_profit(container_arg_0_id, container_arg_1_value);
}
float alice_factory_get_triggered_modifiers(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_triggered_modifiers(container_arg_0_id);
}
void alice_factory_set_triggered_modifiers(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_triggered_modifiers(container_arg_0_id, container_arg_1_value);
}
float alice_factory_get_output(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_output(container_arg_0_id);
}
void alice_factory_set_output(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_output(container_arg_0_id, container_arg_1_value);
}
float alice_factory_get_output_per_worker(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_output_per_worker(container_arg_0_id);
}
void alice_factory_set_output_per_worker(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_output_per_worker(container_arg_0_id, container_arg_1_value);
}
float alice_factory_get_input_cost(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_input_cost(container_arg_0_id);
}
void alice_factory_set_input_cost(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_input_cost(container_arg_0_id, container_arg_1_value);
}
float alice_factory_get_input_cost_per_worker(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_get_input_cost_per_worker(container_arg_0_id);
}
void alice_factory_set_input_cost_per_worker(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_set_input_cost_per_worker(container_arg_0_id, container_arg_1_value);
}
int32_t alice_factory_get_factory_location_as_factory(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	dcon::factory_location_id result = alice_state_ptr->world.factory_get_factory_location_as_factory(container_arg_0_id);
	return result.index();
}
int32_t alice_factory_get_factory_location(int32_t api_arg_0_id){
	dcon::factory_id container_arg_0_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_0_id)};
	dcon::factory_location_id result = alice_state_ptr->world.factory_get_factory_location(container_arg_0_id);
	return result.index();
}

void alice_delete_factory(int32_t j) { 
	auto index = dcon::factory_id{dcon::factory_id::value_base_t(j)};
	alice_state_ptr->world.delete_factory(index);
}
int32_t alice_create_factory() { 
	auto result = alice_state_ptr->world.create_factory();
	return result.index();
}
bool alice_factory_location_is_valid(int32_t api_arg_0_id){
	dcon::factory_location_id container_arg_0_id = dcon::factory_location_id{dcon::factory_location_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_location_is_valid(container_arg_0_id);
}
uint32_t alice_factory_location_size(){
	return alice_state_ptr->world.factory_location_size();
}
void alice_factory_location_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.factory_location_resize(container_arg_0_value);
}
int32_t alice_factory_location_get_factory(int32_t api_arg_0_id){
	dcon::factory_location_id container_arg_0_id = dcon::factory_location_id{dcon::factory_location_id::value_base_t(api_arg_0_id)};
	dcon::factory_id result = alice_state_ptr->world.factory_location_get_factory(container_arg_0_id);
	return result.index();
}
void alice_factory_location_set_factory(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_location_id container_arg_0_id = dcon::factory_location_id{dcon::factory_location_id::value_base_t(api_arg_0_id)};
	dcon::factory_id container_arg_1_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_location_set_factory(container_arg_0_id, container_arg_1_id);
}
void alice_factory_location_try_set_factory(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_location_id container_arg_0_id = dcon::factory_location_id{dcon::factory_location_id::value_base_t(api_arg_0_id)};
	dcon::factory_id container_arg_1_id = dcon::factory_id{dcon::factory_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_location_try_set_factory(container_arg_0_id, container_arg_1_id);
}
int32_t alice_factory_location_get_province(int32_t api_arg_0_id){
	dcon::factory_location_id container_arg_0_id = dcon::factory_location_id{dcon::factory_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.factory_location_get_province(container_arg_0_id);
	return result.index();
}
void alice_factory_location_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_location_id container_arg_0_id = dcon::factory_location_id{dcon::factory_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_location_set_province(container_arg_0_id, container_arg_1_id);
}
void alice_factory_location_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_location_id container_arg_0_id = dcon::factory_location_id{dcon::factory_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_location_try_set_province(container_arg_0_id, container_arg_1_id);
}

void alice_delete_factory_location(int32_t j) { 
	auto index = dcon::factory_location_id{dcon::factory_location_id::value_base_t(j)};
	alice_state_ptr->world.delete_factory_location(index);
}
int32_t alice_try_create_factory_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_factory_location(dcon::factory_id{dcon::factory_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_factory_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_factory_location(dcon::factory_id{dcon::factory_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
bool alice_province_ownership_is_valid(int32_t api_arg_0_id){
	dcon::province_ownership_id container_arg_0_id = dcon::province_ownership_id{dcon::province_ownership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_ownership_is_valid(container_arg_0_id);
}
uint32_t alice_province_ownership_size(){
	return alice_state_ptr->world.province_ownership_size();
}
void alice_province_ownership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_ownership_resize(container_arg_0_value);
}
int32_t alice_province_ownership_get_province(int32_t api_arg_0_id){
	dcon::province_ownership_id container_arg_0_id = dcon::province_ownership_id{dcon::province_ownership_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.province_ownership_get_province(container_arg_0_id);
	return result.index();
}
void alice_province_ownership_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_ownership_id container_arg_0_id = dcon::province_ownership_id{dcon::province_ownership_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_ownership_set_province(container_arg_0_id, container_arg_1_id);
}
void alice_province_ownership_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_ownership_id container_arg_0_id = dcon::province_ownership_id{dcon::province_ownership_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_ownership_try_set_province(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_ownership_get_nation(int32_t api_arg_0_id){
	dcon::province_ownership_id container_arg_0_id = dcon::province_ownership_id{dcon::province_ownership_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.province_ownership_get_nation(container_arg_0_id);
	return result.index();
}
void alice_province_ownership_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_ownership_id container_arg_0_id = dcon::province_ownership_id{dcon::province_ownership_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_ownership_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_province_ownership_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_ownership_id container_arg_0_id = dcon::province_ownership_id{dcon::province_ownership_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_ownership_try_set_nation(container_arg_0_id, container_arg_1_id);
}

void alice_delete_province_ownership(int32_t j) { 
	auto index = dcon::province_ownership_id{dcon::province_ownership_id::value_base_t(j)};
	alice_state_ptr->world.delete_province_ownership(index);
}
int32_t alice_try_create_province_ownership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_province_ownership(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_province_ownership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_province_ownership(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_province_control_is_valid(int32_t api_arg_0_id){
	dcon::province_control_id container_arg_0_id = dcon::province_control_id{dcon::province_control_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_control_is_valid(container_arg_0_id);
}
uint32_t alice_province_control_size(){
	return alice_state_ptr->world.province_control_size();
}
void alice_province_control_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_control_resize(container_arg_0_value);
}
int32_t alice_province_control_get_province(int32_t api_arg_0_id){
	dcon::province_control_id container_arg_0_id = dcon::province_control_id{dcon::province_control_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.province_control_get_province(container_arg_0_id);
	return result.index();
}
void alice_province_control_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_control_id container_arg_0_id = dcon::province_control_id{dcon::province_control_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_control_set_province(container_arg_0_id, container_arg_1_id);
}
void alice_province_control_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_control_id container_arg_0_id = dcon::province_control_id{dcon::province_control_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_control_try_set_province(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_control_get_nation(int32_t api_arg_0_id){
	dcon::province_control_id container_arg_0_id = dcon::province_control_id{dcon::province_control_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.province_control_get_nation(container_arg_0_id);
	return result.index();
}
void alice_province_control_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_control_id container_arg_0_id = dcon::province_control_id{dcon::province_control_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_control_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_province_control_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_control_id container_arg_0_id = dcon::province_control_id{dcon::province_control_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_control_try_set_nation(container_arg_0_id, container_arg_1_id);
}

void alice_delete_province_control(int32_t j) { 
	auto index = dcon::province_control_id{dcon::province_control_id::value_base_t(j)};
	alice_state_ptr->world.delete_province_control(index);
}
int32_t alice_try_create_province_control(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_province_control(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_province_control(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_province_control(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_province_rebel_control_is_valid(int32_t api_arg_0_id){
	dcon::province_rebel_control_id container_arg_0_id = dcon::province_rebel_control_id{dcon::province_rebel_control_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_rebel_control_is_valid(container_arg_0_id);
}
uint32_t alice_province_rebel_control_size(){
	return alice_state_ptr->world.province_rebel_control_size();
}
void alice_province_rebel_control_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_rebel_control_resize(container_arg_0_value);
}
int32_t alice_province_rebel_control_get_province(int32_t api_arg_0_id){
	dcon::province_rebel_control_id container_arg_0_id = dcon::province_rebel_control_id{dcon::province_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.province_rebel_control_get_province(container_arg_0_id);
	return result.index();
}
void alice_province_rebel_control_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_rebel_control_id container_arg_0_id = dcon::province_rebel_control_id{dcon::province_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_rebel_control_set_province(container_arg_0_id, container_arg_1_id);
}
void alice_province_rebel_control_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_rebel_control_id container_arg_0_id = dcon::province_rebel_control_id{dcon::province_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_rebel_control_try_set_province(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_rebel_control_get_rebel_faction(int32_t api_arg_0_id){
	dcon::province_rebel_control_id container_arg_0_id = dcon::province_rebel_control_id{dcon::province_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id result = alice_state_ptr->world.province_rebel_control_get_rebel_faction(container_arg_0_id);
	return result.index();
}
void alice_province_rebel_control_set_rebel_faction(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_rebel_control_id container_arg_0_id = dcon::province_rebel_control_id{dcon::province_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id container_arg_1_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_rebel_control_set_rebel_faction(container_arg_0_id, container_arg_1_id);
}
void alice_province_rebel_control_try_set_rebel_faction(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_rebel_control_id container_arg_0_id = dcon::province_rebel_control_id{dcon::province_rebel_control_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id container_arg_1_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_rebel_control_try_set_rebel_faction(container_arg_0_id, container_arg_1_id);
}

void alice_delete_province_rebel_control(int32_t j) { 
	auto index = dcon::province_rebel_control_id{dcon::province_rebel_control_id::value_base_t(j)};
	alice_state_ptr->world.delete_province_rebel_control(index);
}
int32_t alice_try_create_province_rebel_control(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_province_rebel_control(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_province_rebel_control(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_province_rebel_control(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(p2)});
	return result.index();
}
bool alice_province_land_construction_is_valid(int32_t api_arg_0_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_land_construction_is_valid(container_arg_0_id);
}
uint32_t alice_province_land_construction_size(){
	return alice_state_ptr->world.province_land_construction_size();
}
void alice_province_land_construction_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_land_construction_resize(container_arg_0_value);
}
economy::commodity_set* alice_province_land_construction_get_purchased_goods(int32_t api_arg_0_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_land_construction_get_purchased_goods(container_arg_0_id);
}
int32_t alice_province_land_construction_get_type(int32_t api_arg_0_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id result = alice_state_ptr->world.province_land_construction_get_type(container_arg_0_id);
	return result.index();
}
void alice_province_land_construction_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_land_construction_set_type(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_land_construction_get_template_province(int32_t api_arg_0_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.province_land_construction_get_template_province(container_arg_0_id);
	return result.index();
}
void alice_province_land_construction_set_template_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_land_construction_set_template_province(container_arg_0_id, container_arg_1_id);
}
sys::date* alice_province_land_construction_get_start_date(int32_t api_arg_0_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_land_construction_get_start_date(container_arg_0_id);
}
int32_t alice_province_land_construction_get_pop(int32_t api_arg_0_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	dcon::pop_id result = alice_state_ptr->world.province_land_construction_get_pop(container_arg_0_id);
	return result.index();
}
void alice_province_land_construction_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	dcon::pop_id container_arg_1_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_land_construction_set_pop(container_arg_0_id, container_arg_1_id);
}
void alice_province_land_construction_try_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	dcon::pop_id container_arg_1_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_land_construction_try_set_pop(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_land_construction_get_nation(int32_t api_arg_0_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.province_land_construction_get_nation(container_arg_0_id);
	return result.index();
}
void alice_province_land_construction_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_land_construction_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_province_land_construction_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_land_construction_id container_arg_0_id = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_land_construction_try_set_nation(container_arg_0_id, container_arg_1_id);
}

void alice_delete_province_land_construction(int32_t j) { 
	auto index = dcon::province_land_construction_id{dcon::province_land_construction_id::value_base_t(j)};
	alice_state_ptr->world.delete_province_land_construction(index);
}
int32_t alice_try_create_province_land_construction(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_province_land_construction(dcon::pop_id{dcon::pop_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_province_land_construction(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_province_land_construction(dcon::pop_id{dcon::pop_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_province_naval_construction_is_valid(int32_t api_arg_0_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_naval_construction_is_valid(container_arg_0_id);
}
uint32_t alice_province_naval_construction_size(){
	return alice_state_ptr->world.province_naval_construction_size();
}
void alice_province_naval_construction_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_naval_construction_resize(container_arg_0_value);
}
economy::commodity_set* alice_province_naval_construction_get_purchased_goods(int32_t api_arg_0_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_naval_construction_get_purchased_goods(container_arg_0_id);
}
int32_t alice_province_naval_construction_get_type(int32_t api_arg_0_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id result = alice_state_ptr->world.province_naval_construction_get_type(container_arg_0_id);
	return result.index();
}
void alice_province_naval_construction_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	dcon::unit_type_id container_arg_1_id = dcon::unit_type_id{dcon::unit_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_naval_construction_set_type(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_naval_construction_get_template_province(int32_t api_arg_0_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.province_naval_construction_get_template_province(container_arg_0_id);
	return result.index();
}
void alice_province_naval_construction_set_template_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_naval_construction_set_template_province(container_arg_0_id, container_arg_1_id);
}
sys::date* alice_province_naval_construction_get_start_date(int32_t api_arg_0_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_naval_construction_get_start_date(container_arg_0_id);
}
int32_t alice_province_naval_construction_get_province(int32_t api_arg_0_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.province_naval_construction_get_province(container_arg_0_id);
	return result.index();
}
void alice_province_naval_construction_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_naval_construction_set_province(container_arg_0_id, container_arg_1_id);
}
void alice_province_naval_construction_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_naval_construction_try_set_province(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_naval_construction_get_nation(int32_t api_arg_0_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.province_naval_construction_get_nation(container_arg_0_id);
	return result.index();
}
void alice_province_naval_construction_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_naval_construction_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_province_naval_construction_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_naval_construction_id container_arg_0_id = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_naval_construction_try_set_nation(container_arg_0_id, container_arg_1_id);
}

void alice_delete_province_naval_construction(int32_t j) { 
	auto index = dcon::province_naval_construction_id{dcon::province_naval_construction_id::value_base_t(j)};
	alice_state_ptr->world.delete_province_naval_construction(index);
}
int32_t alice_try_create_province_naval_construction(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_province_naval_construction(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_province_naval_construction(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_province_naval_construction(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_province_building_construction_is_valid(int32_t api_arg_0_id){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_building_construction_is_valid(container_arg_0_id);
}
uint32_t alice_province_building_construction_size(){
	return alice_state_ptr->world.province_building_construction_size();
}
void alice_province_building_construction_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.province_building_construction_resize(container_arg_0_value);
}
economy::commodity_set* alice_province_building_construction_get_purchased_goods(int32_t api_arg_0_id){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.province_building_construction_get_purchased_goods(container_arg_0_id);
}
uint8_t alice_province_building_construction_get_type(int32_t api_arg_0_id){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_building_construction_get_type(container_arg_0_id);
}
void alice_province_building_construction_set_type(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_building_construction_set_type(container_arg_0_id, container_arg_1_value);
}
bool alice_province_building_construction_get_is_pop_project(int32_t api_arg_0_id){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.province_building_construction_get_is_pop_project(container_arg_0_id);
}
void alice_province_building_construction_set_is_pop_project(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.province_building_construction_set_is_pop_project(container_arg_0_id, container_arg_1_value);
}
int32_t alice_province_building_construction_get_province(int32_t api_arg_0_id){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.province_building_construction_get_province(container_arg_0_id);
	return result.index();
}
void alice_province_building_construction_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_building_construction_set_province(container_arg_0_id, container_arg_1_id);
}
void alice_province_building_construction_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_building_construction_try_set_province(container_arg_0_id, container_arg_1_id);
}
int32_t alice_province_building_construction_get_nation(int32_t api_arg_0_id){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.province_building_construction_get_nation(container_arg_0_id);
	return result.index();
}
void alice_province_building_construction_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_building_construction_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_province_building_construction_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::province_building_construction_id container_arg_0_id = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.province_building_construction_try_set_nation(container_arg_0_id, container_arg_1_id);
}

void alice_delete_province_building_construction(int32_t j) { 
	auto index = dcon::province_building_construction_id{dcon::province_building_construction_id::value_base_t(j)};
	alice_state_ptr->world.delete_province_building_construction(index);
}
int32_t alice_try_create_province_building_construction(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_province_building_construction(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_province_building_construction(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_province_building_construction(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_factory_construction_is_valid(int32_t api_arg_0_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_construction_is_valid(container_arg_0_id);
}
uint32_t alice_factory_construction_size(){
	return alice_state_ptr->world.factory_construction_size();
}
void alice_factory_construction_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.factory_construction_resize(container_arg_0_value);
}
economy::commodity_set* alice_factory_construction_get_purchased_goods(int32_t api_arg_0_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.factory_construction_get_purchased_goods(container_arg_0_id);
}
int32_t alice_factory_construction_get_type(int32_t api_arg_0_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id result = alice_state_ptr->world.factory_construction_get_type(container_arg_0_id);
	return result.index();
}
void alice_factory_construction_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_construction_set_type(container_arg_0_id, container_arg_1_id);
}
bool alice_factory_construction_get_is_pop_project(int32_t api_arg_0_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_construction_get_is_pop_project(container_arg_0_id);
}
void alice_factory_construction_set_is_pop_project(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_construction_set_is_pop_project(container_arg_0_id, container_arg_1_value);
}
bool alice_factory_construction_get_is_upgrade(int32_t api_arg_0_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.factory_construction_get_is_upgrade(container_arg_0_id);
}
void alice_factory_construction_set_is_upgrade(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.factory_construction_set_is_upgrade(container_arg_0_id, container_arg_1_value);
}
int32_t alice_factory_construction_get_refit_target(int32_t api_arg_0_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id result = alice_state_ptr->world.factory_construction_get_refit_target(container_arg_0_id);
	return result.index();
}
void alice_factory_construction_set_refit_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	dcon::factory_type_id container_arg_1_id = dcon::factory_type_id{dcon::factory_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_construction_set_refit_target(container_arg_0_id, container_arg_1_id);
}
int32_t alice_factory_construction_get_province(int32_t api_arg_0_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.factory_construction_get_province(container_arg_0_id);
	return result.index();
}
void alice_factory_construction_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_construction_set_province(container_arg_0_id, container_arg_1_id);
}
void alice_factory_construction_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_construction_try_set_province(container_arg_0_id, container_arg_1_id);
}
int32_t alice_factory_construction_get_nation(int32_t api_arg_0_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.factory_construction_get_nation(container_arg_0_id);
	return result.index();
}
void alice_factory_construction_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_construction_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_factory_construction_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::factory_construction_id container_arg_0_id = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.factory_construction_try_set_nation(container_arg_0_id, container_arg_1_id);
}

void alice_delete_factory_construction(int32_t j) { 
	auto index = dcon::factory_construction_id{dcon::factory_construction_id::value_base_t(j)};
	alice_state_ptr->world.delete_factory_construction(index);
}
int32_t alice_try_create_factory_construction(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_factory_construction(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_factory_construction(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_factory_construction(dcon::province_id{dcon::province_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_overlord_is_valid(int32_t api_arg_0_id){
	dcon::overlord_id container_arg_0_id = dcon::overlord_id{dcon::overlord_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.overlord_is_valid(container_arg_0_id);
}
uint32_t alice_overlord_size(){
	return alice_state_ptr->world.overlord_size();
}
void alice_overlord_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.overlord_resize(container_arg_0_value);
}
int32_t alice_overlord_get_subject(int32_t api_arg_0_id){
	dcon::overlord_id container_arg_0_id = dcon::overlord_id{dcon::overlord_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.overlord_get_subject(container_arg_0_id);
	return result.index();
}
void alice_overlord_set_subject(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::overlord_id container_arg_0_id = dcon::overlord_id{dcon::overlord_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.overlord_set_subject(container_arg_0_id, container_arg_1_id);
}
void alice_overlord_try_set_subject(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::overlord_id container_arg_0_id = dcon::overlord_id{dcon::overlord_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.overlord_try_set_subject(container_arg_0_id, container_arg_1_id);
}
int32_t alice_overlord_get_ruler(int32_t api_arg_0_id){
	dcon::overlord_id container_arg_0_id = dcon::overlord_id{dcon::overlord_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.overlord_get_ruler(container_arg_0_id);
	return result.index();
}
void alice_overlord_set_ruler(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::overlord_id container_arg_0_id = dcon::overlord_id{dcon::overlord_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.overlord_set_ruler(container_arg_0_id, container_arg_1_id);
}
void alice_overlord_try_set_ruler(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::overlord_id container_arg_0_id = dcon::overlord_id{dcon::overlord_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.overlord_try_set_ruler(container_arg_0_id, container_arg_1_id);
}

void alice_delete_overlord(int32_t j) { 
	auto index = dcon::overlord_id{dcon::overlord_id::value_base_t(j)};
	alice_state_ptr->world.delete_overlord(index);
}
int32_t alice_try_create_overlord(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_overlord(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_overlord(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_overlord(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_rebel_faction_is_valid(int32_t api_arg_0_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_faction_is_valid(container_arg_0_id);
}
uint32_t alice_rebel_faction_size(){
	return alice_state_ptr->world.rebel_faction_size();
}
void alice_rebel_faction_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.rebel_faction_resize(container_arg_0_value);
}
int32_t alice_rebel_faction_get_type(int32_t api_arg_0_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::rebel_type_id result = alice_state_ptr->world.rebel_faction_get_type(container_arg_0_id);
	return result.index();
}
void alice_rebel_faction_set_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::rebel_type_id container_arg_1_id = dcon::rebel_type_id{dcon::rebel_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_faction_set_type(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_faction_get_defection_target(int32_t api_arg_0_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id result = alice_state_ptr->world.rebel_faction_get_defection_target(container_arg_0_id);
	return result.index();
}
void alice_rebel_faction_set_defection_target(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_faction_set_defection_target(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_faction_get_primary_culture(int32_t api_arg_0_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::culture_id result = alice_state_ptr->world.rebel_faction_get_primary_culture(container_arg_0_id);
	return result.index();
}
void alice_rebel_faction_set_primary_culture(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_faction_set_primary_culture(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_faction_get_primary_culture_group(int32_t api_arg_0_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::culture_group_id result = alice_state_ptr->world.rebel_faction_get_primary_culture_group(container_arg_0_id);
	return result.index();
}
void alice_rebel_faction_set_primary_culture_group(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::culture_group_id container_arg_1_id = dcon::culture_group_id{dcon::culture_group_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_faction_set_primary_culture_group(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_faction_get_religion(int32_t api_arg_0_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::religion_id result = alice_state_ptr->world.rebel_faction_get_religion(container_arg_0_id);
	return result.index();
}
void alice_rebel_faction_set_religion(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::religion_id container_arg_1_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebel_faction_set_religion(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebel_faction_get_possible_regiments(int32_t api_arg_0_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_faction_get_possible_regiments(container_arg_0_id);
}
void alice_rebel_faction_set_possible_regiments(int32_t api_arg_0_id, int32_t api_arg_1_value){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	int32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_faction_set_possible_regiments(container_arg_0_id, container_arg_1_value);
}
float alice_rebel_faction_get_organization(int32_t api_arg_0_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebel_faction_get_organization(container_arg_0_id);
}
void alice_rebel_faction_set_organization(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.rebel_faction_set_organization(container_arg_0_id, container_arg_1_value);
}
int32_t alice_rebel_faction_get_range_army_rebel_control_as_controller(int32_t i) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_army_rebel_control_as_controller(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_rebel_faction_get_index_army_rebel_control_as_controller(int32_t i, int32_t subindex) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_army_rebel_control_as_controller(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_rebel_faction_get_range_army_rebel_control(int32_t i) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_army_rebel_control_as_controller(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_rebel_faction_get_index_army_rebel_control(int32_t i, int32_t subindex) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_army_rebel_control_as_controller(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_rebel_faction_get_range_province_rebel_control_as_rebel_faction(int32_t i) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_province_rebel_control_as_rebel_faction(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_rebel_faction_get_index_province_rebel_control_as_rebel_faction(int32_t i, int32_t subindex) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_province_rebel_control_as_rebel_faction(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_rebel_faction_get_range_province_rebel_control(int32_t i) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_province_rebel_control_as_rebel_faction(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_rebel_faction_get_index_province_rebel_control(int32_t i, int32_t subindex) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_province_rebel_control_as_rebel_faction(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_rebel_faction_get_rebellion_within_as_rebels(int32_t api_arg_0_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::rebellion_within_id result = alice_state_ptr->world.rebel_faction_get_rebellion_within_as_rebels(container_arg_0_id);
	return result.index();
}
int32_t alice_rebel_faction_get_rebellion_within(int32_t api_arg_0_id){
	dcon::rebel_faction_id container_arg_0_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_0_id)};
	dcon::rebellion_within_id result = alice_state_ptr->world.rebel_faction_get_rebellion_within(container_arg_0_id);
	return result.index();
}
int32_t alice_rebel_faction_get_range_pop_rebellion_membership_as_rebel_faction(int32_t i) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_pop_rebellion_membership_as_rebel_faction(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_rebel_faction_get_index_pop_rebellion_membership_as_rebel_faction(int32_t i, int32_t subindex) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_pop_rebellion_membership_as_rebel_faction(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_rebel_faction_get_range_pop_rebellion_membership(int32_t i) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_pop_rebellion_membership_as_rebel_faction(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_rebel_faction_get_index_pop_rebellion_membership(int32_t i, int32_t subindex) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.rebel_faction_get_pop_rebellion_membership_as_rebel_faction(index);
	return rng.begin()[subindex].id.index();
}

void alice_pop_back_rebel_faction() { 
	if(alice_state_ptr->world.rebel_faction_size() > 0) {
		auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(alice_state_ptr->world.rebel_faction_size() - 1)};
		alice_state_ptr->world.pop_back_rebel_faction();
	}
}
int32_t alice_create_rebel_faction() { 
	auto result = alice_state_ptr->world.create_rebel_faction();
	return result.index();
}
void alice_delete_rebel_faction(int32_t j) { 
	auto index = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(j)};
	alice_state_ptr->world.delete_rebel_faction(index);
}
bool alice_rebellion_within_is_valid(int32_t api_arg_0_id){
	dcon::rebellion_within_id container_arg_0_id = dcon::rebellion_within_id{dcon::rebellion_within_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.rebellion_within_is_valid(container_arg_0_id);
}
uint32_t alice_rebellion_within_size(){
	return alice_state_ptr->world.rebellion_within_size();
}
void alice_rebellion_within_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.rebellion_within_resize(container_arg_0_value);
}
int32_t alice_rebellion_within_get_rebels(int32_t api_arg_0_id){
	dcon::rebellion_within_id container_arg_0_id = dcon::rebellion_within_id{dcon::rebellion_within_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id result = alice_state_ptr->world.rebellion_within_get_rebels(container_arg_0_id);
	return result.index();
}
void alice_rebellion_within_set_rebels(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebellion_within_id container_arg_0_id = dcon::rebellion_within_id{dcon::rebellion_within_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id container_arg_1_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebellion_within_set_rebels(container_arg_0_id, container_arg_1_id);
}
void alice_rebellion_within_try_set_rebels(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebellion_within_id container_arg_0_id = dcon::rebellion_within_id{dcon::rebellion_within_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id container_arg_1_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebellion_within_try_set_rebels(container_arg_0_id, container_arg_1_id);
}
int32_t alice_rebellion_within_get_ruler(int32_t api_arg_0_id){
	dcon::rebellion_within_id container_arg_0_id = dcon::rebellion_within_id{dcon::rebellion_within_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.rebellion_within_get_ruler(container_arg_0_id);
	return result.index();
}
void alice_rebellion_within_set_ruler(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebellion_within_id container_arg_0_id = dcon::rebellion_within_id{dcon::rebellion_within_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebellion_within_set_ruler(container_arg_0_id, container_arg_1_id);
}
void alice_rebellion_within_try_set_ruler(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::rebellion_within_id container_arg_0_id = dcon::rebellion_within_id{dcon::rebellion_within_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.rebellion_within_try_set_ruler(container_arg_0_id, container_arg_1_id);
}

void alice_delete_rebellion_within(int32_t j) { 
	auto index = dcon::rebellion_within_id{dcon::rebellion_within_id::value_base_t(j)};
	alice_state_ptr->world.delete_rebellion_within(index);
}
int32_t alice_try_create_rebellion_within(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_rebellion_within(dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_rebellion_within(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_rebellion_within(dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_movement_is_valid(int32_t api_arg_0_id){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.movement_is_valid(container_arg_0_id);
}
uint32_t alice_movement_size(){
	return alice_state_ptr->world.movement_size();
}
void alice_movement_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.movement_resize(container_arg_0_value);
}
int32_t alice_movement_get_associated_issue_option(int32_t api_arg_0_id){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id result = alice_state_ptr->world.movement_get_associated_issue_option(container_arg_0_id);
	return result.index();
}
void alice_movement_set_associated_issue_option(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id container_arg_1_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.movement_set_associated_issue_option(container_arg_0_id, container_arg_1_id);
}
int32_t alice_movement_get_associated_independence(int32_t api_arg_0_id){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id result = alice_state_ptr->world.movement_get_associated_independence(container_arg_0_id);
	return result.index();
}
void alice_movement_set_associated_independence(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	dcon::national_identity_id container_arg_1_id = dcon::national_identity_id{dcon::national_identity_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.movement_set_associated_independence(container_arg_0_id, container_arg_1_id);
}
float alice_movement_get_pop_support(int32_t api_arg_0_id){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.movement_get_pop_support(container_arg_0_id);
}
void alice_movement_set_pop_support(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.movement_set_pop_support(container_arg_0_id, container_arg_1_value);
}
float alice_movement_get_radicalism(int32_t api_arg_0_id){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.movement_get_radicalism(container_arg_0_id);
}
void alice_movement_set_radicalism(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.movement_set_radicalism(container_arg_0_id, container_arg_1_value);
}
float alice_movement_get_transient_radicalism(int32_t api_arg_0_id){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.movement_get_transient_radicalism(container_arg_0_id);
}
void alice_movement_set_transient_radicalism(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.movement_set_transient_radicalism(container_arg_0_id, container_arg_1_value);
}
int32_t alice_movement_get_movement_within_as_movement(int32_t api_arg_0_id){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	dcon::movement_within_id result = alice_state_ptr->world.movement_get_movement_within_as_movement(container_arg_0_id);
	return result.index();
}
int32_t alice_movement_get_movement_within(int32_t api_arg_0_id){
	dcon::movement_id container_arg_0_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_0_id)};
	dcon::movement_within_id result = alice_state_ptr->world.movement_get_movement_within(container_arg_0_id);
	return result.index();
}
int32_t alice_movement_get_range_pop_movement_membership_as_movement(int32_t i) { 
	auto index = dcon::movement_id{dcon::movement_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.movement_get_pop_movement_membership_as_movement(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_movement_get_index_pop_movement_membership_as_movement(int32_t i, int32_t subindex) { 
	auto index = dcon::movement_id{dcon::movement_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.movement_get_pop_movement_membership_as_movement(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_movement_get_range_pop_movement_membership(int32_t i) { 
	auto index = dcon::movement_id{dcon::movement_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.movement_get_pop_movement_membership_as_movement(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_movement_get_index_pop_movement_membership(int32_t i, int32_t subindex) { 
	auto index = dcon::movement_id{dcon::movement_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.movement_get_pop_movement_membership_as_movement(index);
	return rng.begin()[subindex].id.index();
}

void alice_pop_back_movement() { 
	if(alice_state_ptr->world.movement_size() > 0) {
		auto index = dcon::movement_id{dcon::movement_id::value_base_t(alice_state_ptr->world.movement_size() - 1)};
		alice_state_ptr->world.pop_back_movement();
	}
}
int32_t alice_create_movement() { 
	auto result = alice_state_ptr->world.create_movement();
	return result.index();
}
void alice_delete_movement(int32_t j) { 
	auto index = dcon::movement_id{dcon::movement_id::value_base_t(j)};
	alice_state_ptr->world.delete_movement(index);
}
bool alice_movement_within_is_valid(int32_t api_arg_0_id){
	dcon::movement_within_id container_arg_0_id = dcon::movement_within_id{dcon::movement_within_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.movement_within_is_valid(container_arg_0_id);
}
uint32_t alice_movement_within_size(){
	return alice_state_ptr->world.movement_within_size();
}
void alice_movement_within_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.movement_within_resize(container_arg_0_value);
}
int32_t alice_movement_within_get_movement(int32_t api_arg_0_id){
	dcon::movement_within_id container_arg_0_id = dcon::movement_within_id{dcon::movement_within_id::value_base_t(api_arg_0_id)};
	dcon::movement_id result = alice_state_ptr->world.movement_within_get_movement(container_arg_0_id);
	return result.index();
}
void alice_movement_within_set_movement(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::movement_within_id container_arg_0_id = dcon::movement_within_id{dcon::movement_within_id::value_base_t(api_arg_0_id)};
	dcon::movement_id container_arg_1_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.movement_within_set_movement(container_arg_0_id, container_arg_1_id);
}
void alice_movement_within_try_set_movement(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::movement_within_id container_arg_0_id = dcon::movement_within_id{dcon::movement_within_id::value_base_t(api_arg_0_id)};
	dcon::movement_id container_arg_1_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.movement_within_try_set_movement(container_arg_0_id, container_arg_1_id);
}
int32_t alice_movement_within_get_nation(int32_t api_arg_0_id){
	dcon::movement_within_id container_arg_0_id = dcon::movement_within_id{dcon::movement_within_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.movement_within_get_nation(container_arg_0_id);
	return result.index();
}
void alice_movement_within_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::movement_within_id container_arg_0_id = dcon::movement_within_id{dcon::movement_within_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.movement_within_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_movement_within_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::movement_within_id container_arg_0_id = dcon::movement_within_id{dcon::movement_within_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.movement_within_try_set_nation(container_arg_0_id, container_arg_1_id);
}

void alice_delete_movement_within(int32_t j) { 
	auto index = dcon::movement_within_id{dcon::movement_within_id::value_base_t(j)};
	alice_state_ptr->world.delete_movement_within(index);
}
int32_t alice_try_create_movement_within(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_movement_within(dcon::movement_id{dcon::movement_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_movement_within(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_movement_within(dcon::movement_id{dcon::movement_id::value_base_t(p1)}, dcon::nation_id{dcon::nation_id::value_base_t(p2)});
	return result.index();
}
bool alice_pop_movement_membership_is_valid(int32_t api_arg_0_id){
	dcon::pop_movement_membership_id container_arg_0_id = dcon::pop_movement_membership_id{dcon::pop_movement_membership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_movement_membership_is_valid(container_arg_0_id);
}
uint32_t alice_pop_movement_membership_size(){
	return alice_state_ptr->world.pop_movement_membership_size();
}
void alice_pop_movement_membership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_movement_membership_resize(container_arg_0_value);
}
int32_t alice_pop_movement_membership_get_pop(int32_t api_arg_0_id){
	dcon::pop_movement_membership_id container_arg_0_id = dcon::pop_movement_membership_id{dcon::pop_movement_membership_id::value_base_t(api_arg_0_id)};
	dcon::pop_id result = alice_state_ptr->world.pop_movement_membership_get_pop(container_arg_0_id);
	return result.index();
}
void alice_pop_movement_membership_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_movement_membership_id container_arg_0_id = dcon::pop_movement_membership_id{dcon::pop_movement_membership_id::value_base_t(api_arg_0_id)};
	dcon::pop_id container_arg_1_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_movement_membership_set_pop(container_arg_0_id, container_arg_1_id);
}
void alice_pop_movement_membership_try_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_movement_membership_id container_arg_0_id = dcon::pop_movement_membership_id{dcon::pop_movement_membership_id::value_base_t(api_arg_0_id)};
	dcon::pop_id container_arg_1_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_movement_membership_try_set_pop(container_arg_0_id, container_arg_1_id);
}
int32_t alice_pop_movement_membership_get_movement(int32_t api_arg_0_id){
	dcon::pop_movement_membership_id container_arg_0_id = dcon::pop_movement_membership_id{dcon::pop_movement_membership_id::value_base_t(api_arg_0_id)};
	dcon::movement_id result = alice_state_ptr->world.pop_movement_membership_get_movement(container_arg_0_id);
	return result.index();
}
void alice_pop_movement_membership_set_movement(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_movement_membership_id container_arg_0_id = dcon::pop_movement_membership_id{dcon::pop_movement_membership_id::value_base_t(api_arg_0_id)};
	dcon::movement_id container_arg_1_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_movement_membership_set_movement(container_arg_0_id, container_arg_1_id);
}
void alice_pop_movement_membership_try_set_movement(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_movement_membership_id container_arg_0_id = dcon::pop_movement_membership_id{dcon::pop_movement_membership_id::value_base_t(api_arg_0_id)};
	dcon::movement_id container_arg_1_id = dcon::movement_id{dcon::movement_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_movement_membership_try_set_movement(container_arg_0_id, container_arg_1_id);
}

void alice_delete_pop_movement_membership(int32_t j) { 
	auto index = dcon::pop_movement_membership_id{dcon::pop_movement_membership_id::value_base_t(j)};
	alice_state_ptr->world.delete_pop_movement_membership(index);
}
int32_t alice_try_create_pop_movement_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_pop_movement_membership(dcon::pop_id{dcon::pop_id::value_base_t(p1)}, dcon::movement_id{dcon::movement_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_pop_movement_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_pop_movement_membership(dcon::pop_id{dcon::pop_id::value_base_t(p1)}, dcon::movement_id{dcon::movement_id::value_base_t(p2)});
	return result.index();
}
bool alice_pop_rebellion_membership_is_valid(int32_t api_arg_0_id){
	dcon::pop_rebellion_membership_id container_arg_0_id = dcon::pop_rebellion_membership_id{dcon::pop_rebellion_membership_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_rebellion_membership_is_valid(container_arg_0_id);
}
uint32_t alice_pop_rebellion_membership_size(){
	return alice_state_ptr->world.pop_rebellion_membership_size();
}
void alice_pop_rebellion_membership_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_rebellion_membership_resize(container_arg_0_value);
}
int32_t alice_pop_rebellion_membership_get_pop(int32_t api_arg_0_id){
	dcon::pop_rebellion_membership_id container_arg_0_id = dcon::pop_rebellion_membership_id{dcon::pop_rebellion_membership_id::value_base_t(api_arg_0_id)};
	dcon::pop_id result = alice_state_ptr->world.pop_rebellion_membership_get_pop(container_arg_0_id);
	return result.index();
}
void alice_pop_rebellion_membership_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_rebellion_membership_id container_arg_0_id = dcon::pop_rebellion_membership_id{dcon::pop_rebellion_membership_id::value_base_t(api_arg_0_id)};
	dcon::pop_id container_arg_1_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_rebellion_membership_set_pop(container_arg_0_id, container_arg_1_id);
}
void alice_pop_rebellion_membership_try_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_rebellion_membership_id container_arg_0_id = dcon::pop_rebellion_membership_id{dcon::pop_rebellion_membership_id::value_base_t(api_arg_0_id)};
	dcon::pop_id container_arg_1_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_rebellion_membership_try_set_pop(container_arg_0_id, container_arg_1_id);
}
int32_t alice_pop_rebellion_membership_get_rebel_faction(int32_t api_arg_0_id){
	dcon::pop_rebellion_membership_id container_arg_0_id = dcon::pop_rebellion_membership_id{dcon::pop_rebellion_membership_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id result = alice_state_ptr->world.pop_rebellion_membership_get_rebel_faction(container_arg_0_id);
	return result.index();
}
void alice_pop_rebellion_membership_set_rebel_faction(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_rebellion_membership_id container_arg_0_id = dcon::pop_rebellion_membership_id{dcon::pop_rebellion_membership_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id container_arg_1_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_rebellion_membership_set_rebel_faction(container_arg_0_id, container_arg_1_id);
}
void alice_pop_rebellion_membership_try_set_rebel_faction(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_rebellion_membership_id container_arg_0_id = dcon::pop_rebellion_membership_id{dcon::pop_rebellion_membership_id::value_base_t(api_arg_0_id)};
	dcon::rebel_faction_id container_arg_1_id = dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_rebellion_membership_try_set_rebel_faction(container_arg_0_id, container_arg_1_id);
}

void alice_delete_pop_rebellion_membership(int32_t j) { 
	auto index = dcon::pop_rebellion_membership_id{dcon::pop_rebellion_membership_id::value_base_t(j)};
	alice_state_ptr->world.delete_pop_rebellion_membership(index);
}
int32_t alice_try_create_pop_rebellion_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_pop_rebellion_membership(dcon::pop_id{dcon::pop_id::value_base_t(p1)}, dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_pop_rebellion_membership(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_pop_rebellion_membership(dcon::pop_id{dcon::pop_id::value_base_t(p1)}, dcon::rebel_faction_id{dcon::rebel_faction_id::value_base_t(p2)});
	return result.index();
}
bool alice_pop_is_valid(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_is_valid(container_arg_0_id);
}
uint32_t alice_pop_size(){
	return alice_state_ptr->world.pop_size();
}
void alice_pop_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_resize(container_arg_0_value);
}
int32_t alice_pop_get_poptype(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id result = alice_state_ptr->world.pop_get_poptype(container_arg_0_id);
	return result.index();
}
void alice_pop_set_poptype(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_set_poptype(container_arg_0_id, container_arg_1_id);
}
int32_t alice_pop_get_religion(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::religion_id result = alice_state_ptr->world.pop_get_religion(container_arg_0_id);
	return result.index();
}
void alice_pop_set_religion(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::religion_id container_arg_1_id = dcon::religion_id{dcon::religion_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_set_religion(container_arg_0_id, container_arg_1_id);
}
int32_t alice_pop_get_culture(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::culture_id result = alice_state_ptr->world.pop_get_culture(container_arg_0_id);
	return result.index();
}
void alice_pop_set_culture(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::culture_id container_arg_1_id = dcon::culture_id{dcon::culture_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_set_culture(container_arg_0_id, container_arg_1_id);
}
float alice_pop_get_size(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_get_size(container_arg_0_id);
}
void alice_pop_set_size(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_set_size(container_arg_0_id, container_arg_1_value);
}
float alice_pop_get_savings(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_get_savings(container_arg_0_id);
}
void alice_pop_set_savings(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_set_savings(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_pop_get_uconsciousness(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_get_uconsciousness(container_arg_0_id);
}
void alice_pop_set_uconsciousness(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_set_uconsciousness(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_pop_get_umilitancy(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_get_umilitancy(container_arg_0_id);
}
void alice_pop_set_umilitancy(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_set_umilitancy(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_pop_get_uliteracy(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_get_uliteracy(container_arg_0_id);
}
void alice_pop_set_uliteracy(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_set_uliteracy(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_pop_get_uemployment(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_get_uemployment(container_arg_0_id);
}
void alice_pop_set_uemployment(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_set_uemployment(container_arg_0_id, container_arg_1_value);
}
float alice_pop_get_satisfaction(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_get_satisfaction(container_arg_0_id);
}
void alice_pop_set_satisfaction(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_set_satisfaction(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_pop_get_upolitical_reform_desire(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_get_upolitical_reform_desire(container_arg_0_id);
}
void alice_pop_set_upolitical_reform_desire(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_set_upolitical_reform_desire(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_pop_get_usocial_reform_desire(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_get_usocial_reform_desire(container_arg_0_id);
}
void alice_pop_set_usocial_reform_desire(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_set_usocial_reform_desire(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_pop_get_udemographics(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::pop_demographics_key container_arg_1_id = dcon::pop_demographics_key{dcon::pop_demographics_key::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.pop_get_udemographics(container_arg_0_id, container_arg_1_id);
}
void alice_pop_set_udemographics(int32_t api_arg_0_id, int32_t api_arg_1_id, uint8_t api_arg_2_value){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::pop_demographics_key container_arg_1_id = dcon::pop_demographics_key{dcon::pop_demographics_key::value_base_t(api_arg_1_id)};
	uint8_t container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.pop_set_udemographics(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_pop_get_udemographics_size(){
	return alice_state_ptr->world.pop_get_udemographics_size();
}
void alice_pop_resize_udemographics(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_resize_udemographics(container_arg_0_value);
}
int32_t alice_pop_get_dominant_ideology(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id result = alice_state_ptr->world.pop_get_dominant_ideology(container_arg_0_id);
	return result.index();
}
void alice_pop_set_dominant_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_set_dominant_ideology(container_arg_0_id, container_arg_1_id);
}
int32_t alice_pop_get_dominant_issue_option(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id result = alice_state_ptr->world.pop_get_dominant_issue_option(container_arg_0_id);
	return result.index();
}
void alice_pop_set_dominant_issue_option(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::issue_option_id container_arg_1_id = dcon::issue_option_id{dcon::issue_option_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_set_dominant_issue_option(container_arg_0_id, container_arg_1_id);
}
bool alice_pop_get_is_primary_or_accepted_culture(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_get_is_primary_or_accepted_culture(container_arg_0_id);
}
void alice_pop_set_is_primary_or_accepted_culture(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.pop_set_is_primary_or_accepted_culture(container_arg_0_id, container_arg_1_value);
}
int32_t alice_pop_get_range_regiment_source_as_pop(int32_t i) { 
	auto index = dcon::pop_id{dcon::pop_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.pop_get_regiment_source_as_pop(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_pop_get_index_regiment_source_as_pop(int32_t i, int32_t subindex) { 
	auto index = dcon::pop_id{dcon::pop_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.pop_get_regiment_source_as_pop(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_pop_get_range_regiment_source(int32_t i) { 
	auto index = dcon::pop_id{dcon::pop_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.pop_get_regiment_source_as_pop(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_pop_get_index_regiment_source(int32_t i, int32_t subindex) { 
	auto index = dcon::pop_id{dcon::pop_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.pop_get_regiment_source_as_pop(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_pop_get_range_province_land_construction_as_pop(int32_t i) { 
	auto index = dcon::pop_id{dcon::pop_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.pop_get_province_land_construction_as_pop(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_pop_get_index_province_land_construction_as_pop(int32_t i, int32_t subindex) { 
	auto index = dcon::pop_id{dcon::pop_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.pop_get_province_land_construction_as_pop(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_pop_get_range_province_land_construction(int32_t i) { 
	auto index = dcon::pop_id{dcon::pop_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.pop_get_province_land_construction_as_pop(index);
	return int32_t(rng.end() - rng.begin());
}
int32_t alice_pop_get_index_province_land_construction(int32_t i, int32_t subindex) { 
	auto index = dcon::pop_id{dcon::pop_id::value_base_t(i)};
	auto rng = alice_state_ptr->world.pop_get_province_land_construction_as_pop(index);
	return rng.begin()[subindex].id.index();
}
int32_t alice_pop_get_pop_movement_membership_as_pop(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::pop_movement_membership_id result = alice_state_ptr->world.pop_get_pop_movement_membership_as_pop(container_arg_0_id);
	return result.index();
}
int32_t alice_pop_get_pop_movement_membership(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::pop_movement_membership_id result = alice_state_ptr->world.pop_get_pop_movement_membership(container_arg_0_id);
	return result.index();
}
int32_t alice_pop_get_pop_rebellion_membership_as_pop(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::pop_rebellion_membership_id result = alice_state_ptr->world.pop_get_pop_rebellion_membership_as_pop(container_arg_0_id);
	return result.index();
}
int32_t alice_pop_get_pop_rebellion_membership(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::pop_rebellion_membership_id result = alice_state_ptr->world.pop_get_pop_rebellion_membership(container_arg_0_id);
	return result.index();
}
int32_t alice_pop_get_pop_location_as_pop(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::pop_location_id result = alice_state_ptr->world.pop_get_pop_location_as_pop(container_arg_0_id);
	return result.index();
}
int32_t alice_pop_get_pop_location(int32_t api_arg_0_id){
	dcon::pop_id container_arg_0_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_0_id)};
	dcon::pop_location_id result = alice_state_ptr->world.pop_get_pop_location(container_arg_0_id);
	return result.index();
}

void alice_pop_back_pop() { 
	if(alice_state_ptr->world.pop_size() > 0) {
		auto index = dcon::pop_id{dcon::pop_id::value_base_t(alice_state_ptr->world.pop_size() - 1)};
		alice_state_ptr->world.pop_back_pop();
	}
}
int32_t alice_create_pop() { 
	auto result = alice_state_ptr->world.create_pop();
	return result.index();
}
void alice_delete_pop(int32_t j) { 
	auto index = dcon::pop_id{dcon::pop_id::value_base_t(j)};
	alice_state_ptr->world.delete_pop(index);
}
bool alice_pop_location_is_valid(int32_t api_arg_0_id){
	dcon::pop_location_id container_arg_0_id = dcon::pop_location_id{dcon::pop_location_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.pop_location_is_valid(container_arg_0_id);
}
uint32_t alice_pop_location_size(){
	return alice_state_ptr->world.pop_location_size();
}
void alice_pop_location_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.pop_location_resize(container_arg_0_value);
}
int32_t alice_pop_location_get_pop(int32_t api_arg_0_id){
	dcon::pop_location_id container_arg_0_id = dcon::pop_location_id{dcon::pop_location_id::value_base_t(api_arg_0_id)};
	dcon::pop_id result = alice_state_ptr->world.pop_location_get_pop(container_arg_0_id);
	return result.index();
}
void alice_pop_location_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_location_id container_arg_0_id = dcon::pop_location_id{dcon::pop_location_id::value_base_t(api_arg_0_id)};
	dcon::pop_id container_arg_1_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_location_set_pop(container_arg_0_id, container_arg_1_id);
}
void alice_pop_location_try_set_pop(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_location_id container_arg_0_id = dcon::pop_location_id{dcon::pop_location_id::value_base_t(api_arg_0_id)};
	dcon::pop_id container_arg_1_id = dcon::pop_id{dcon::pop_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_location_try_set_pop(container_arg_0_id, container_arg_1_id);
}
int32_t alice_pop_location_get_province(int32_t api_arg_0_id){
	dcon::pop_location_id container_arg_0_id = dcon::pop_location_id{dcon::pop_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id result = alice_state_ptr->world.pop_location_get_province(container_arg_0_id);
	return result.index();
}
void alice_pop_location_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_location_id container_arg_0_id = dcon::pop_location_id{dcon::pop_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_location_set_province(container_arg_0_id, container_arg_1_id);
}
void alice_pop_location_try_set_province(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::pop_location_id container_arg_0_id = dcon::pop_location_id{dcon::pop_location_id::value_base_t(api_arg_0_id)};
	dcon::province_id container_arg_1_id = dcon::province_id{dcon::province_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.pop_location_try_set_province(container_arg_0_id, container_arg_1_id);
}

void alice_delete_pop_location(int32_t j) { 
	auto index = dcon::pop_location_id{dcon::pop_location_id::value_base_t(j)};
	alice_state_ptr->world.delete_pop_location(index);
}
int32_t alice_try_create_pop_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_pop_location(dcon::pop_id{dcon::pop_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_pop_location(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_pop_location(dcon::pop_id{dcon::pop_id::value_base_t(p1)}, dcon::province_id{dcon::province_id::value_base_t(p2)});
	return result.index();
}
bool alice_national_event_is_valid(int32_t api_arg_0_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_event_is_valid(container_arg_0_id);
}
uint32_t alice_national_event_size(){
	return alice_state_ptr->world.national_event_size();
}
void alice_national_event_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.national_event_resize(container_arg_0_value);
}
int32_t alice_national_event_get_name(int32_t api_arg_0_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.national_event_get_name(container_arg_0_id);
	return result.index();
}
void alice_national_event_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_event_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_national_event_get_description(int32_t api_arg_0_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.national_event_get_description(container_arg_0_id);
	return result.index();
}
void alice_national_event_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_event_set_description(container_arg_0_id, container_arg_1_id);
}
bool alice_national_event_get_is_major(int32_t api_arg_0_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_event_get_is_major(container_arg_0_id);
}
void alice_national_event_set_is_major(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_event_set_is_major(container_arg_0_id, container_arg_1_value);
}
dcon::gfx_object_id* alice_national_event_get_image(int32_t api_arg_0_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.national_event_get_image(container_arg_0_id);
}
int32_t alice_national_event_get_immediate_effect(int32_t api_arg_0_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	dcon::effect_key result = alice_state_ptr->world.national_event_get_immediate_effect(container_arg_0_id);
	return result.index();
}
void alice_national_event_set_immediate_effect(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	dcon::effect_key container_arg_1_id = dcon::effect_key{dcon::effect_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_event_set_immediate_effect(container_arg_0_id, container_arg_1_id);
}
std::array<sys::event_option,sys::max_event_options>* alice_national_event_get_options(int32_t api_arg_0_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.national_event_get_options(container_arg_0_id);
}
uint8_t alice_national_event_get_auto_choice(int32_t api_arg_0_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_event_get_auto_choice(container_arg_0_id);
}
void alice_national_event_set_auto_choice(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_event_set_auto_choice(container_arg_0_id, container_arg_1_value);
}
bool alice_national_event_get_allow_multiple_instances(int32_t api_arg_0_id){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_event_get_allow_multiple_instances(container_arg_0_id);
}
void alice_national_event_set_allow_multiple_instances(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::national_event_id container_arg_0_id = dcon::national_event_id{dcon::national_event_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_event_set_allow_multiple_instances(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_national_event() { 
	if(alice_state_ptr->world.national_event_size() > 0) {
		auto index = dcon::national_event_id{dcon::national_event_id::value_base_t(alice_state_ptr->world.national_event_size() - 1)};
		alice_state_ptr->world.pop_back_national_event();
	}
}
int32_t alice_create_national_event() { 
	auto result = alice_state_ptr->world.create_national_event();
	return result.index();
}
bool alice_provincial_event_is_valid(int32_t api_arg_0_id){
	dcon::provincial_event_id container_arg_0_id = dcon::provincial_event_id{dcon::provincial_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.provincial_event_is_valid(container_arg_0_id);
}
uint32_t alice_provincial_event_size(){
	return alice_state_ptr->world.provincial_event_size();
}
void alice_provincial_event_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.provincial_event_resize(container_arg_0_value);
}
int32_t alice_provincial_event_get_name(int32_t api_arg_0_id){
	dcon::provincial_event_id container_arg_0_id = dcon::provincial_event_id{dcon::provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.provincial_event_get_name(container_arg_0_id);
	return result.index();
}
void alice_provincial_event_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::provincial_event_id container_arg_0_id = dcon::provincial_event_id{dcon::provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.provincial_event_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_provincial_event_get_description(int32_t api_arg_0_id){
	dcon::provincial_event_id container_arg_0_id = dcon::provincial_event_id{dcon::provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.provincial_event_get_description(container_arg_0_id);
	return result.index();
}
void alice_provincial_event_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::provincial_event_id container_arg_0_id = dcon::provincial_event_id{dcon::provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.provincial_event_set_description(container_arg_0_id, container_arg_1_id);
}
int32_t alice_provincial_event_get_immediate_effect(int32_t api_arg_0_id){
	dcon::provincial_event_id container_arg_0_id = dcon::provincial_event_id{dcon::provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::effect_key result = alice_state_ptr->world.provincial_event_get_immediate_effect(container_arg_0_id);
	return result.index();
}
void alice_provincial_event_set_immediate_effect(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::provincial_event_id container_arg_0_id = dcon::provincial_event_id{dcon::provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::effect_key container_arg_1_id = dcon::effect_key{dcon::effect_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.provincial_event_set_immediate_effect(container_arg_0_id, container_arg_1_id);
}
std::array<sys::event_option,sys::max_event_options>* alice_provincial_event_get_options(int32_t api_arg_0_id){
	dcon::provincial_event_id container_arg_0_id = dcon::provincial_event_id{dcon::provincial_event_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.provincial_event_get_options(container_arg_0_id);
}
uint8_t alice_provincial_event_get_auto_choice(int32_t api_arg_0_id){
	dcon::provincial_event_id container_arg_0_id = dcon::provincial_event_id{dcon::provincial_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.provincial_event_get_auto_choice(container_arg_0_id);
}
void alice_provincial_event_set_auto_choice(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::provincial_event_id container_arg_0_id = dcon::provincial_event_id{dcon::provincial_event_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.provincial_event_set_auto_choice(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_provincial_event() { 
	if(alice_state_ptr->world.provincial_event_size() > 0) {
		auto index = dcon::provincial_event_id{dcon::provincial_event_id::value_base_t(alice_state_ptr->world.provincial_event_size() - 1)};
		alice_state_ptr->world.pop_back_provincial_event();
	}
}
int32_t alice_create_provincial_event() { 
	auto result = alice_state_ptr->world.create_provincial_event();
	return result.index();
}
bool alice_free_national_event_is_valid(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.free_national_event_is_valid(container_arg_0_id);
}
uint32_t alice_free_national_event_size(){
	return alice_state_ptr->world.free_national_event_size();
}
void alice_free_national_event_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.free_national_event_resize(container_arg_0_value);
}
int32_t alice_free_national_event_get_name(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.free_national_event_get_name(container_arg_0_id);
	return result.index();
}
void alice_free_national_event_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.free_national_event_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_free_national_event_get_description(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.free_national_event_get_description(container_arg_0_id);
	return result.index();
}
void alice_free_national_event_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.free_national_event_set_description(container_arg_0_id, container_arg_1_id);
}
bool alice_free_national_event_get_only_once(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.free_national_event_get_only_once(container_arg_0_id);
}
void alice_free_national_event_set_only_once(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.free_national_event_set_only_once(container_arg_0_id, container_arg_1_value);
}
bool alice_free_national_event_get_has_been_triggered(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.free_national_event_get_has_been_triggered(container_arg_0_id);
}
void alice_free_national_event_set_has_been_triggered(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.free_national_event_set_has_been_triggered(container_arg_0_id, container_arg_1_value);
}
bool alice_free_national_event_get_is_major(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.free_national_event_get_is_major(container_arg_0_id);
}
void alice_free_national_event_set_is_major(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.free_national_event_set_is_major(container_arg_0_id, container_arg_1_value);
}
dcon::gfx_object_id* alice_free_national_event_get_image(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.free_national_event_get_image(container_arg_0_id);
}
int32_t alice_free_national_event_get_trigger(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.free_national_event_get_trigger(container_arg_0_id);
	return result.index();
}
void alice_free_national_event_set_trigger(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.free_national_event_set_trigger(container_arg_0_id, container_arg_1_id);
}
int32_t alice_free_national_event_get_mtth(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.free_national_event_get_mtth(container_arg_0_id);
	return result.index();
}
void alice_free_national_event_set_mtth(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.free_national_event_set_mtth(container_arg_0_id, container_arg_1_id);
}
int32_t alice_free_national_event_get_immediate_effect(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	dcon::effect_key result = alice_state_ptr->world.free_national_event_get_immediate_effect(container_arg_0_id);
	return result.index();
}
void alice_free_national_event_set_immediate_effect(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	dcon::effect_key container_arg_1_id = dcon::effect_key{dcon::effect_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.free_national_event_set_immediate_effect(container_arg_0_id, container_arg_1_id);
}
std::array<sys::event_option,sys::max_event_options>* alice_free_national_event_get_options(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.free_national_event_get_options(container_arg_0_id);
}
uint32_t alice_free_national_event_get_legacy_id(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.free_national_event_get_legacy_id(container_arg_0_id);
}
void alice_free_national_event_set_legacy_id(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.free_national_event_set_legacy_id(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_free_national_event_get_auto_choice(int32_t api_arg_0_id){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.free_national_event_get_auto_choice(container_arg_0_id);
}
void alice_free_national_event_set_auto_choice(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::free_national_event_id container_arg_0_id = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.free_national_event_set_auto_choice(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_free_national_event() { 
	if(alice_state_ptr->world.free_national_event_size() > 0) {
		auto index = dcon::free_national_event_id{dcon::free_national_event_id::value_base_t(alice_state_ptr->world.free_national_event_size() - 1)};
		alice_state_ptr->world.pop_back_free_national_event();
	}
}
int32_t alice_create_free_national_event() { 
	auto result = alice_state_ptr->world.create_free_national_event();
	return result.index();
}
bool alice_free_provincial_event_is_valid(int32_t api_arg_0_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.free_provincial_event_is_valid(container_arg_0_id);
}
uint32_t alice_free_provincial_event_size(){
	return alice_state_ptr->world.free_provincial_event_size();
}
void alice_free_provincial_event_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.free_provincial_event_resize(container_arg_0_value);
}
int32_t alice_free_provincial_event_get_name(int32_t api_arg_0_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.free_provincial_event_get_name(container_arg_0_id);
	return result.index();
}
void alice_free_provincial_event_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.free_provincial_event_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_free_provincial_event_get_description(int32_t api_arg_0_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.free_provincial_event_get_description(container_arg_0_id);
	return result.index();
}
void alice_free_provincial_event_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.free_provincial_event_set_description(container_arg_0_id, container_arg_1_id);
}
bool alice_free_provincial_event_get_only_once(int32_t api_arg_0_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.free_provincial_event_get_only_once(container_arg_0_id);
}
void alice_free_provincial_event_set_only_once(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.free_provincial_event_set_only_once(container_arg_0_id, container_arg_1_value);
}
bool alice_free_provincial_event_get_has_been_triggered(int32_t api_arg_0_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.free_provincial_event_get_has_been_triggered(container_arg_0_id);
}
void alice_free_provincial_event_set_has_been_triggered(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.free_provincial_event_set_has_been_triggered(container_arg_0_id, container_arg_1_value);
}
int32_t alice_free_provincial_event_get_trigger(int32_t api_arg_0_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.free_provincial_event_get_trigger(container_arg_0_id);
	return result.index();
}
void alice_free_provincial_event_set_trigger(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.free_provincial_event_set_trigger(container_arg_0_id, container_arg_1_id);
}
int32_t alice_free_provincial_event_get_mtth(int32_t api_arg_0_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.free_provincial_event_get_mtth(container_arg_0_id);
	return result.index();
}
void alice_free_provincial_event_set_mtth(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.free_provincial_event_set_mtth(container_arg_0_id, container_arg_1_id);
}
int32_t alice_free_provincial_event_get_immediate_effect(int32_t api_arg_0_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::effect_key result = alice_state_ptr->world.free_provincial_event_get_immediate_effect(container_arg_0_id);
	return result.index();
}
void alice_free_provincial_event_set_immediate_effect(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	dcon::effect_key container_arg_1_id = dcon::effect_key{dcon::effect_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.free_provincial_event_set_immediate_effect(container_arg_0_id, container_arg_1_id);
}
std::array<sys::event_option,sys::max_event_options>* alice_free_provincial_event_get_options(int32_t api_arg_0_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.free_provincial_event_get_options(container_arg_0_id);
}
uint8_t alice_free_provincial_event_get_auto_choice(int32_t api_arg_0_id){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.free_provincial_event_get_auto_choice(container_arg_0_id);
}
void alice_free_provincial_event_set_auto_choice(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::free_provincial_event_id container_arg_0_id = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.free_provincial_event_set_auto_choice(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_free_provincial_event() { 
	if(alice_state_ptr->world.free_provincial_event_size() > 0) {
		auto index = dcon::free_provincial_event_id{dcon::free_provincial_event_id::value_base_t(alice_state_ptr->world.free_provincial_event_size() - 1)};
		alice_state_ptr->world.pop_back_free_provincial_event();
	}
}
int32_t alice_create_free_provincial_event() { 
	auto result = alice_state_ptr->world.create_free_provincial_event();
	return result.index();
}
bool alice_national_focus_is_valid(int32_t api_arg_0_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_focus_is_valid(container_arg_0_id);
}
uint32_t alice_national_focus_size(){
	return alice_state_ptr->world.national_focus_size();
}
void alice_national_focus_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.national_focus_resize(container_arg_0_value);
}
int32_t alice_national_focus_get_name(int32_t api_arg_0_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.national_focus_get_name(container_arg_0_id);
	return result.index();
}
void alice_national_focus_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_focus_set_name(container_arg_0_id, container_arg_1_id);
}
uint8_t alice_national_focus_get_icon(int32_t api_arg_0_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_focus_get_icon(container_arg_0_id);
}
void alice_national_focus_set_icon(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_focus_set_icon(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_national_focus_get_type(int32_t api_arg_0_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_focus_get_type(container_arg_0_id);
}
void alice_national_focus_set_type(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_focus_set_type(container_arg_0_id, container_arg_1_value);
}
float alice_national_focus_get_loyalty_value(int32_t api_arg_0_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_focus_get_loyalty_value(container_arg_0_id);
}
void alice_national_focus_set_loyalty_value(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_focus_set_loyalty_value(container_arg_0_id, container_arg_1_value);
}
int32_t alice_national_focus_get_ideology(int32_t api_arg_0_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id result = alice_state_ptr->world.national_focus_get_ideology(container_arg_0_id);
	return result.index();
}
void alice_national_focus_set_ideology(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::ideology_id container_arg_1_id = dcon::ideology_id{dcon::ideology_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_focus_set_ideology(container_arg_0_id, container_arg_1_id);
}
int32_t alice_national_focus_get_limit(int32_t api_arg_0_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.national_focus_get_limit(container_arg_0_id);
	return result.index();
}
void alice_national_focus_set_limit(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_focus_set_limit(container_arg_0_id, container_arg_1_id);
}
int32_t alice_national_focus_get_promotion_type(int32_t api_arg_0_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id result = alice_state_ptr->world.national_focus_get_promotion_type(container_arg_0_id);
	return result.index();
}
void alice_national_focus_set_promotion_type(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::pop_type_id container_arg_1_id = dcon::pop_type_id{dcon::pop_type_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_focus_set_promotion_type(container_arg_0_id, container_arg_1_id);
}
float alice_national_focus_get_promotion_amount(int32_t api_arg_0_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_focus_get_promotion_amount(container_arg_0_id);
}
void alice_national_focus_set_promotion_amount(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_focus_set_promotion_amount(container_arg_0_id, container_arg_1_value);
}
float alice_national_focus_get_railroads(int32_t api_arg_0_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.national_focus_get_railroads(container_arg_0_id);
}
void alice_national_focus_set_railroads(int32_t api_arg_0_id, float api_arg_1_value){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	float container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.national_focus_set_railroads(container_arg_0_id, container_arg_1_value);
}
float alice_national_focus_get_production_focus(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	return alice_state_ptr->world.national_focus_get_production_focus(container_arg_0_id, container_arg_1_id);
}
void alice_national_focus_set_production_focus(int32_t api_arg_0_id, int32_t api_arg_1_id, float api_arg_2_value){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::commodity_id container_arg_1_id = dcon::commodity_id{dcon::commodity_id::value_base_t(api_arg_1_id)};
	float container_arg_2_value = api_arg_2_value;
	alice_state_ptr->world.national_focus_set_production_focus(container_arg_0_id, container_arg_1_id, container_arg_2_value);
}
uint32_t alice_national_focus_get_production_focus_size(){
	return alice_state_ptr->world.national_focus_get_production_focus_size();
}
void alice_national_focus_resize_production_focus(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.national_focus_resize_production_focus(container_arg_0_value);
}
int32_t alice_national_focus_get_modifier(int32_t api_arg_0_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id result = alice_state_ptr->world.national_focus_get_modifier(container_arg_0_id);
	return result.index();
}
void alice_national_focus_set_modifier(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::national_focus_id container_arg_0_id = dcon::national_focus_id{dcon::national_focus_id::value_base_t(api_arg_0_id)};
	dcon::modifier_id container_arg_1_id = dcon::modifier_id{dcon::modifier_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.national_focus_set_modifier(container_arg_0_id, container_arg_1_id);
}

void alice_pop_back_national_focus() { 
	if(alice_state_ptr->world.national_focus_size() > 0) {
		auto index = dcon::national_focus_id{dcon::national_focus_id::value_base_t(alice_state_ptr->world.national_focus_size() - 1)};
		alice_state_ptr->world.pop_back_national_focus();
	}
}
int32_t alice_create_national_focus() { 
	auto result = alice_state_ptr->world.create_national_focus();
	return result.index();
}
bool alice_stored_trigger_is_valid(int32_t api_arg_0_id){
	dcon::stored_trigger_id container_arg_0_id = dcon::stored_trigger_id{dcon::stored_trigger_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.stored_trigger_is_valid(container_arg_0_id);
}
uint32_t alice_stored_trigger_size(){
	return alice_state_ptr->world.stored_trigger_size();
}
void alice_stored_trigger_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.stored_trigger_resize(container_arg_0_value);
}
int32_t alice_stored_trigger_get_name(int32_t api_arg_0_id){
	dcon::stored_trigger_id container_arg_0_id = dcon::stored_trigger_id{dcon::stored_trigger_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.stored_trigger_get_name(container_arg_0_id);
	return result.index();
}
void alice_stored_trigger_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::stored_trigger_id container_arg_0_id = dcon::stored_trigger_id{dcon::stored_trigger_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.stored_trigger_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_stored_trigger_get_function(int32_t api_arg_0_id){
	dcon::stored_trigger_id container_arg_0_id = dcon::stored_trigger_id{dcon::stored_trigger_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.stored_trigger_get_function(container_arg_0_id);
	return result.index();
}
void alice_stored_trigger_set_function(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::stored_trigger_id container_arg_0_id = dcon::stored_trigger_id{dcon::stored_trigger_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.stored_trigger_set_function(container_arg_0_id, container_arg_1_id);
}

void alice_pop_back_stored_trigger() { 
	if(alice_state_ptr->world.stored_trigger_size() > 0) {
		auto index = dcon::stored_trigger_id{dcon::stored_trigger_id::value_base_t(alice_state_ptr->world.stored_trigger_size() - 1)};
		alice_state_ptr->world.pop_back_stored_trigger();
	}
}
int32_t alice_create_stored_trigger() { 
	auto result = alice_state_ptr->world.create_stored_trigger();
	return result.index();
}
bool alice_gamerule_is_valid(int32_t api_arg_0_id){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.gamerule_is_valid(container_arg_0_id);
}
uint32_t alice_gamerule_size(){
	return alice_state_ptr->world.gamerule_size();
}
void alice_gamerule_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.gamerule_resize(container_arg_0_value);
}
int32_t alice_gamerule_get_name(int32_t api_arg_0_id){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.gamerule_get_name(container_arg_0_id);
	return result.index();
}
void alice_gamerule_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.gamerule_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_gamerule_get_tooltip_explain(int32_t api_arg_0_id){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.gamerule_get_tooltip_explain(container_arg_0_id);
	return result.index();
}
void alice_gamerule_set_tooltip_explain(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.gamerule_set_tooltip_explain(container_arg_0_id, container_arg_1_id);
}
uint8_t alice_gamerule_get_default_setting(int32_t api_arg_0_id){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.gamerule_get_default_setting(container_arg_0_id);
}
void alice_gamerule_set_default_setting(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.gamerule_set_default_setting(container_arg_0_id, container_arg_1_value);
}
std::array<sys::gamerule_option,sys::max_gamerule_settings>* alice_gamerule_get_options(int32_t api_arg_0_id){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.gamerule_get_options(container_arg_0_id);
}
uint8_t alice_gamerule_get_settings_count(int32_t api_arg_0_id){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.gamerule_get_settings_count(container_arg_0_id);
}
void alice_gamerule_set_settings_count(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.gamerule_set_settings_count(container_arg_0_id, container_arg_1_value);
}
uint8_t alice_gamerule_get_current_setting(int32_t api_arg_0_id){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.gamerule_get_current_setting(container_arg_0_id);
}
void alice_gamerule_set_current_setting(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::gamerule_id container_arg_0_id = dcon::gamerule_id{dcon::gamerule_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.gamerule_set_current_setting(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_gamerule() { 
	if(alice_state_ptr->world.gamerule_size() > 0) {
		auto index = dcon::gamerule_id{dcon::gamerule_id::value_base_t(alice_state_ptr->world.gamerule_size() - 1)};
		alice_state_ptr->world.pop_back_gamerule();
	}
}
int32_t alice_create_gamerule() { 
	auto result = alice_state_ptr->world.create_gamerule();
	return result.index();
}
bool alice_decision_is_valid(int32_t api_arg_0_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.decision_is_valid(container_arg_0_id);
}
uint32_t alice_decision_size(){
	return alice_state_ptr->world.decision_size();
}
void alice_decision_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.decision_resize(container_arg_0_value);
}
int32_t alice_decision_get_name(int32_t api_arg_0_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.decision_get_name(container_arg_0_id);
	return result.index();
}
void alice_decision_set_name(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.decision_set_name(container_arg_0_id, container_arg_1_id);
}
int32_t alice_decision_get_description(int32_t api_arg_0_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::text_key result = alice_state_ptr->world.decision_get_description(container_arg_0_id);
	return result.index();
}
void alice_decision_set_description(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::text_key container_arg_1_id = dcon::text_key{dcon::text_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.decision_set_description(container_arg_0_id, container_arg_1_id);
}
dcon::gfx_object_id* alice_decision_get_image(int32_t api_arg_0_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.decision_get_image(container_arg_0_id);
}
int32_t alice_decision_get_potential(int32_t api_arg_0_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.decision_get_potential(container_arg_0_id);
	return result.index();
}
void alice_decision_set_potential(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.decision_set_potential(container_arg_0_id, container_arg_1_id);
}
int32_t alice_decision_get_allow(int32_t api_arg_0_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key result = alice_state_ptr->world.decision_get_allow(container_arg_0_id);
	return result.index();
}
void alice_decision_set_allow(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::trigger_key container_arg_1_id = dcon::trigger_key{dcon::trigger_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.decision_set_allow(container_arg_0_id, container_arg_1_id);
}
int32_t alice_decision_get_effect(int32_t api_arg_0_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::effect_key result = alice_state_ptr->world.decision_get_effect(container_arg_0_id);
	return result.index();
}
void alice_decision_set_effect(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::effect_key container_arg_1_id = dcon::effect_key{dcon::effect_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.decision_set_effect(container_arg_0_id, container_arg_1_id);
}
int32_t alice_decision_get_ai_will_do(int32_t api_arg_0_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key result = alice_state_ptr->world.decision_get_ai_will_do(container_arg_0_id);
	return result.index();
}
void alice_decision_set_ai_will_do(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	dcon::value_modifier_key container_arg_1_id = dcon::value_modifier_key{dcon::value_modifier_key::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.decision_set_ai_will_do(container_arg_0_id, container_arg_1_id);
}
bool alice_decision_get_hide_notification(int32_t api_arg_0_id){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.decision_get_hide_notification(container_arg_0_id);
}
void alice_decision_set_hide_notification(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::decision_id container_arg_0_id = dcon::decision_id{dcon::decision_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.decision_set_hide_notification(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_decision() { 
	if(alice_state_ptr->world.decision_size() > 0) {
		auto index = dcon::decision_id{dcon::decision_id::value_base_t(alice_state_ptr->world.decision_size() - 1)};
		alice_state_ptr->world.pop_back_decision();
	}
}
int32_t alice_create_decision() { 
	auto result = alice_state_ptr->world.create_decision();
	return result.index();
}
bool alice_locale_is_valid(int32_t api_arg_0_id){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.locale_is_valid(container_arg_0_id);
}
uint32_t alice_locale_size(){
	return alice_state_ptr->world.locale_size();
}
void alice_locale_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.locale_resize(container_arg_0_value);
}
bool alice_locale_get_native_rtl(int32_t api_arg_0_id){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.locale_get_native_rtl(container_arg_0_id);
}
void alice_locale_set_native_rtl(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.locale_set_native_rtl(container_arg_0_id, container_arg_1_value);
}
bool alice_locale_get_prevent_letterspace(int32_t api_arg_0_id){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.locale_get_prevent_letterspace(container_arg_0_id);
}
void alice_locale_set_prevent_letterspace(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.locale_set_prevent_letterspace(container_arg_0_id, container_arg_1_value);
}
hb_language_t* alice_locale_get_resolved_language(int32_t api_arg_0_id){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.locale_get_resolved_language(container_arg_0_id);
}
uint32_t alice_locale_get_hb_script(int32_t api_arg_0_id){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.locale_get_hb_script(container_arg_0_id);
}
void alice_locale_set_hb_script(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.locale_set_hb_script(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_locale_get_resolved_body_font(int32_t api_arg_0_id){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.locale_get_resolved_body_font(container_arg_0_id);
}
void alice_locale_set_resolved_body_font(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.locale_set_resolved_body_font(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_locale_get_resolved_header_font(int32_t api_arg_0_id){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.locale_get_resolved_header_font(container_arg_0_id);
}
void alice_locale_set_resolved_header_font(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.locale_set_resolved_header_font(container_arg_0_id, container_arg_1_value);
}
uint16_t alice_locale_get_resolved_map_font(int32_t api_arg_0_id){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.locale_get_resolved_map_font(container_arg_0_id);
}
void alice_locale_set_resolved_map_font(int32_t api_arg_0_id, uint16_t api_arg_1_value){
	dcon::locale_id container_arg_0_id = dcon::locale_id{dcon::locale_id::value_base_t(api_arg_0_id)};
	uint16_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.locale_set_resolved_map_font(container_arg_0_id, container_arg_1_value);
}

void alice_pop_back_locale() { 
	if(alice_state_ptr->world.locale_size() > 0) {
		auto index = dcon::locale_id{dcon::locale_id::value_base_t(alice_state_ptr->world.locale_size() - 1)};
		alice_state_ptr->world.pop_back_locale();
	}
}
int32_t alice_create_locale() { 
	auto result = alice_state_ptr->world.create_locale();
	return result.index();
}
bool alice_mp_player_is_valid(int32_t api_arg_0_id){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.mp_player_is_valid(container_arg_0_id);
}
uint32_t alice_mp_player_size(){
	return alice_state_ptr->world.mp_player_size();
}
void alice_mp_player_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.mp_player_resize(container_arg_0_value);
}
sys::player_name* alice_mp_player_get_nickname(int32_t api_arg_0_id){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.mp_player_get_nickname(container_arg_0_id);
}
std::array<uint8_t,24>* alice_mp_player_get_password_salt(int32_t api_arg_0_id){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.mp_player_get_password_salt(container_arg_0_id);
}
std::array<uint8_t,64>* alice_mp_player_get_password_hash(int32_t api_arg_0_id){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.mp_player_get_password_hash(container_arg_0_id);
}
bool alice_mp_player_get_fully_loaded(int32_t api_arg_0_id){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.mp_player_get_fully_loaded(container_arg_0_id);
}
void alice_mp_player_set_fully_loaded(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.mp_player_set_fully_loaded(container_arg_0_id, container_arg_1_value);
}
bool alice_mp_player_get_is_oos(int32_t api_arg_0_id){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.mp_player_get_is_oos(container_arg_0_id);
}
void alice_mp_player_set_is_oos(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.mp_player_set_is_oos(container_arg_0_id, container_arg_1_value);
}
int32_t alice_mp_player_get_player_nation_as_mp_player(int32_t api_arg_0_id){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	dcon::player_nation_id result = alice_state_ptr->world.mp_player_get_player_nation_as_mp_player(container_arg_0_id);
	return result.index();
}
int32_t alice_mp_player_get_player_nation(int32_t api_arg_0_id){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	dcon::player_nation_id result = alice_state_ptr->world.mp_player_get_player_nation(container_arg_0_id);
	return result.index();
}
int32_t alice_mp_player_get_player_client_as_mp_player(int32_t api_arg_0_id){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	dcon::player_client_id result = alice_state_ptr->world.mp_player_get_player_client_as_mp_player(container_arg_0_id);
	return result.index();
}
int32_t alice_mp_player_get_player_client(int32_t api_arg_0_id){
	dcon::mp_player_id container_arg_0_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_0_id)};
	dcon::player_client_id result = alice_state_ptr->world.mp_player_get_player_client(container_arg_0_id);
	return result.index();
}

void alice_delete_mp_player(int32_t j) { 
	auto index = dcon::mp_player_id{dcon::mp_player_id::value_base_t(j)};
	alice_state_ptr->world.delete_mp_player(index);
}
int32_t alice_create_mp_player() { 
	auto result = alice_state_ptr->world.create_mp_player();
	return result.index();
}
bool alice_player_nation_is_valid(int32_t api_arg_0_id){
	dcon::player_nation_id container_arg_0_id = dcon::player_nation_id{dcon::player_nation_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.player_nation_is_valid(container_arg_0_id);
}
uint32_t alice_player_nation_size(){
	return alice_state_ptr->world.player_nation_size();
}
void alice_player_nation_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.player_nation_resize(container_arg_0_value);
}
int32_t alice_player_nation_get_nation(int32_t api_arg_0_id){
	dcon::player_nation_id container_arg_0_id = dcon::player_nation_id{dcon::player_nation_id::value_base_t(api_arg_0_id)};
	dcon::nation_id result = alice_state_ptr->world.player_nation_get_nation(container_arg_0_id);
	return result.index();
}
void alice_player_nation_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::player_nation_id container_arg_0_id = dcon::player_nation_id{dcon::player_nation_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.player_nation_set_nation(container_arg_0_id, container_arg_1_id);
}
void alice_player_nation_try_set_nation(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::player_nation_id container_arg_0_id = dcon::player_nation_id{dcon::player_nation_id::value_base_t(api_arg_0_id)};
	dcon::nation_id container_arg_1_id = dcon::nation_id{dcon::nation_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.player_nation_try_set_nation(container_arg_0_id, container_arg_1_id);
}
int32_t alice_player_nation_get_mp_player(int32_t api_arg_0_id){
	dcon::player_nation_id container_arg_0_id = dcon::player_nation_id{dcon::player_nation_id::value_base_t(api_arg_0_id)};
	dcon::mp_player_id result = alice_state_ptr->world.player_nation_get_mp_player(container_arg_0_id);
	return result.index();
}
void alice_player_nation_set_mp_player(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::player_nation_id container_arg_0_id = dcon::player_nation_id{dcon::player_nation_id::value_base_t(api_arg_0_id)};
	dcon::mp_player_id container_arg_1_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.player_nation_set_mp_player(container_arg_0_id, container_arg_1_id);
}
void alice_player_nation_try_set_mp_player(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::player_nation_id container_arg_0_id = dcon::player_nation_id{dcon::player_nation_id::value_base_t(api_arg_0_id)};
	dcon::mp_player_id container_arg_1_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.player_nation_try_set_mp_player(container_arg_0_id, container_arg_1_id);
}

void alice_delete_player_nation(int32_t j) { 
	auto index = dcon::player_nation_id{dcon::player_nation_id::value_base_t(j)};
	alice_state_ptr->world.delete_player_nation(index);
}
int32_t alice_try_create_player_nation(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_player_nation(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::mp_player_id{dcon::mp_player_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_player_nation(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_player_nation(dcon::nation_id{dcon::nation_id::value_base_t(p1)}, dcon::mp_player_id{dcon::mp_player_id::value_base_t(p2)});
	return result.index();
}
bool alice_client_is_valid(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.client_is_valid(container_arg_0_id);
}
uint32_t alice_client_size(){
	return alice_state_ptr->world.client_size();
}
void alice_client_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.client_resize(container_arg_0_value);
}
network::socket_t* alice_client_get_socket_fd(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.client_get_socket_fd(container_arg_0_id);
}
sockaddr_storage* alice_client_get_address(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.client_get_address(container_arg_0_id);
}
network::client_handshake_data* alice_client_get_hshake_buffer(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.client_get_hshake_buffer(container_arg_0_id);
}
size_t alice_client_get_recv_count(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.client_get_recv_count(container_arg_0_id);
}
void alice_client_set_recv_count(int32_t api_arg_0_id, size_t api_arg_1_value){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	size_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.client_set_recv_count(container_arg_0_id, container_arg_1_value);
}
size_t alice_client_get_total_sent_bytes(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.client_get_total_sent_bytes(container_arg_0_id);
}
void alice_client_set_total_sent_bytes(int32_t api_arg_0_id, size_t api_arg_1_value){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	size_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.client_set_total_sent_bytes(container_arg_0_id, container_arg_1_value);
}
bool alice_client_get_handshake(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.client_get_handshake(container_arg_0_id);
}
void alice_client_set_handshake(int32_t api_arg_0_id, bool api_arg_1_value){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	bool container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.client_set_handshake(container_arg_0_id, container_arg_1_value);
}
std::array<uint8_t,network::RECV_BUFFER_SIZE>* alice_client_get_receive_buffer(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.client_get_receive_buffer(container_arg_0_id);
}
fixed_bool_t* alice_client_get_receiving_payload_flag(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.client_get_receiving_payload_flag(container_arg_0_id);
}
int alice_client_get_recv_buffer_size_used(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.client_get_recv_buffer_size_used(container_arg_0_id);
}
void alice_client_set_recv_buffer_size_used(int32_t api_arg_0_id, int api_arg_1_value){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	int container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.client_set_recv_buffer_size_used(container_arg_0_id, container_arg_1_value);
}
int alice_client_get_recv_buffer_bytes_read(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.client_get_recv_buffer_bytes_read(container_arg_0_id);
}
void alice_client_set_recv_buffer_bytes_read(int32_t api_arg_0_id, int api_arg_1_value){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	int container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.client_set_recv_buffer_bytes_read(container_arg_0_id, container_arg_1_value);
}
network::client_state* alice_client_get_client_state(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.client_get_client_state(container_arg_0_id);
}
time_t* alice_client_get_shutdown_time(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.client_get_shutdown_time(container_arg_0_id);
}
sys::date* alice_client_get_last_seen(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return &alice_state_ptr->world.client_get_last_seen(container_arg_0_id);
}
uint8_t alice_client_get_sending_payload(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.client_get_sending_payload(container_arg_0_id);
}
void alice_client_set_sending_payload(int32_t api_arg_0_id, uint8_t api_arg_1_value){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	uint8_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.client_set_sending_payload(container_arg_0_id, container_arg_1_value);
}
uint32_t alice_client_get_command_send_count(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.client_get_command_send_count(container_arg_0_id);
}
void alice_client_set_command_send_count(int32_t api_arg_0_id, uint32_t api_arg_1_value){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	uint32_t container_arg_1_value = api_arg_1_value;
	alice_state_ptr->world.client_set_command_send_count(container_arg_0_id, container_arg_1_value);
}
int32_t alice_client_get_player_client_as_client(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	dcon::player_client_id result = alice_state_ptr->world.client_get_player_client_as_client(container_arg_0_id);
	return result.index();
}
int32_t alice_client_get_player_client(int32_t api_arg_0_id){
	dcon::client_id container_arg_0_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_0_id)};
	dcon::player_client_id result = alice_state_ptr->world.client_get_player_client(container_arg_0_id);
	return result.index();
}

void alice_delete_client(int32_t j) { 
	auto index = dcon::client_id{dcon::client_id::value_base_t(j)};
	alice_state_ptr->world.delete_client(index);
}
int32_t alice_create_client() { 
	auto result = alice_state_ptr->world.create_client();
	return result.index();
}
bool alice_player_client_is_valid(int32_t api_arg_0_id){
	dcon::player_client_id container_arg_0_id = dcon::player_client_id{dcon::player_client_id::value_base_t(api_arg_0_id)};
	return alice_state_ptr->world.player_client_is_valid(container_arg_0_id);
}
uint32_t alice_player_client_size(){
	return alice_state_ptr->world.player_client_size();
}
void alice_player_client_resize(uint32_t api_arg_0_value){
	uint32_t container_arg_0_value = api_arg_0_value;
	alice_state_ptr->world.player_client_resize(container_arg_0_value);
}
int32_t alice_player_client_get_client(int32_t api_arg_0_id){
	dcon::player_client_id container_arg_0_id = dcon::player_client_id{dcon::player_client_id::value_base_t(api_arg_0_id)};
	dcon::client_id result = alice_state_ptr->world.player_client_get_client(container_arg_0_id);
	return result.index();
}
void alice_player_client_set_client(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::player_client_id container_arg_0_id = dcon::player_client_id{dcon::player_client_id::value_base_t(api_arg_0_id)};
	dcon::client_id container_arg_1_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.player_client_set_client(container_arg_0_id, container_arg_1_id);
}
void alice_player_client_try_set_client(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::player_client_id container_arg_0_id = dcon::player_client_id{dcon::player_client_id::value_base_t(api_arg_0_id)};
	dcon::client_id container_arg_1_id = dcon::client_id{dcon::client_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.player_client_try_set_client(container_arg_0_id, container_arg_1_id);
}
int32_t alice_player_client_get_mp_player(int32_t api_arg_0_id){
	dcon::player_client_id container_arg_0_id = dcon::player_client_id{dcon::player_client_id::value_base_t(api_arg_0_id)};
	dcon::mp_player_id result = alice_state_ptr->world.player_client_get_mp_player(container_arg_0_id);
	return result.index();
}
void alice_player_client_set_mp_player(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::player_client_id container_arg_0_id = dcon::player_client_id{dcon::player_client_id::value_base_t(api_arg_0_id)};
	dcon::mp_player_id container_arg_1_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.player_client_set_mp_player(container_arg_0_id, container_arg_1_id);
}
void alice_player_client_try_set_mp_player(int32_t api_arg_0_id, int32_t api_arg_1_id){
	dcon::player_client_id container_arg_0_id = dcon::player_client_id{dcon::player_client_id::value_base_t(api_arg_0_id)};
	dcon::mp_player_id container_arg_1_id = dcon::mp_player_id{dcon::mp_player_id::value_base_t(api_arg_1_id)};
	alice_state_ptr->world.player_client_try_set_mp_player(container_arg_0_id, container_arg_1_id);
}

void alice_delete_player_client(int32_t j) { 
	auto index = dcon::player_client_id{dcon::player_client_id::value_base_t(j)};
	alice_state_ptr->world.delete_player_client(index);
}
int32_t alice_try_create_player_client(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.try_create_player_client(dcon::client_id{dcon::client_id::value_base_t(p1)}, dcon::mp_player_id{dcon::mp_player_id::value_base_t(p2)});
	return result.index();
}
int32_t alice_force_create_player_client(int32_t p1, int32_t p2) { 
	auto result = alice_state_ptr->world.force_create_player_client(dcon::client_id{dcon::client_id::value_base_t(p1)}, dcon::mp_player_id{dcon::mp_player_id::value_base_t(p2)});
	return result.index();
}

int32_t alice_reset() { 
	alice_state_ptr->world.reset();
	return 0;
}
void alice_store_scenario_write_file(char const* name) { 
	std::ofstream file_out(name, std::ios::binary);
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_scenario();
	auto sz = alice_state_ptr->world.serialize_size(selection);
	std::byte* temp_buffer = new std::byte[sz];
	auto ptr = temp_buffer;
	alice_state_ptr->world.serialize(ptr, selection); 
	file_out.write((char*)temp_buffer, sz);
	delete[] temp_buffer;
}
void alice_store_scenario_read_file(char const* name) { 
	std::ifstream file_in(name, std::ios::binary);
	file_in.unsetf(std::ios::skipws);
	file_in.seekg(0, std::ios::end);
	auto sz = file_in.tellg();
	file_in.seekg(0, std::ios::beg);
	std::vector<unsigned char> vec;
	vec.reserve(sz);
	vec.insert(vec.begin(), std::istream_iterator<unsigned char>(file_in),  std::istream_iterator<unsigned char>());
	std::byte const* ptr = (std::byte const*)(vec.data());
	dcon::load_record loaded;
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_scenario();
	alice_state_ptr->world.deserialize(ptr, ptr + sz, loaded, selection); 
}
void alice_store_save_write_file(char const* name) { 
	std::ofstream file_out(name, std::ios::binary);
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_save();
	auto sz = alice_state_ptr->world.serialize_size(selection);
	std::byte* temp_buffer = new std::byte[sz];
	auto ptr = temp_buffer;
	alice_state_ptr->world.serialize(ptr, selection); 
	file_out.write((char*)temp_buffer, sz);
	delete[] temp_buffer;
}
void alice_store_save_read_file(char const* name) { 
	std::ifstream file_in(name, std::ios::binary);
	file_in.unsetf(std::ios::skipws);
	file_in.seekg(0, std::ios::end);
	auto sz = file_in.tellg();
	file_in.seekg(0, std::ios::beg);
	std::vector<unsigned char> vec;
	vec.reserve(sz);
	vec.insert(vec.begin(), std::istream_iterator<unsigned char>(file_in),  std::istream_iterator<unsigned char>());
	std::byte const* ptr = (std::byte const*)(vec.data());
	dcon::load_record loaded;
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_save();
	alice_state_ptr->world.deserialize(ptr, ptr + sz, loaded, selection); 
}
void alice_store_full_save_write_file(char const* name) { 
	std::ofstream file_out(name, std::ios::binary);
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_full_save();
	auto sz = alice_state_ptr->world.serialize_size(selection);
	std::byte* temp_buffer = new std::byte[sz];
	auto ptr = temp_buffer;
	alice_state_ptr->world.serialize(ptr, selection); 
	file_out.write((char*)temp_buffer, sz);
	delete[] temp_buffer;
}
void alice_store_full_save_read_file(char const* name) { 
	std::ifstream file_in(name, std::ios::binary);
	file_in.unsetf(std::ios::skipws);
	file_in.seekg(0, std::ios::end);
	auto sz = file_in.tellg();
	file_in.seekg(0, std::ios::beg);
	std::vector<unsigned char> vec;
	vec.reserve(sz);
	vec.insert(vec.begin(), std::istream_iterator<unsigned char>(file_in),  std::istream_iterator<unsigned char>());
	std::byte const* ptr = (std::byte const*)(vec.data());
	dcon::load_record loaded;
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_full_save();
	alice_state_ptr->world.deserialize(ptr, ptr + sz, loaded, selection); 
}
void alice_store_reload_protected_state_write_file(char const* name) { 
	std::ofstream file_out(name, std::ios::binary);
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_reload_protected_state();
	auto sz = alice_state_ptr->world.serialize_size(selection);
	std::byte* temp_buffer = new std::byte[sz];
	auto ptr = temp_buffer;
	alice_state_ptr->world.serialize(ptr, selection); 
	file_out.write((char*)temp_buffer, sz);
	delete[] temp_buffer;
}
void alice_store_reload_protected_state_read_file(char const* name) { 
	std::ifstream file_in(name, std::ios::binary);
	file_in.unsetf(std::ios::skipws);
	file_in.seekg(0, std::ios::end);
	auto sz = file_in.tellg();
	file_in.seekg(0, std::ios::beg);
	std::vector<unsigned char> vec;
	vec.reserve(sz);
	vec.insert(vec.begin(), std::istream_iterator<unsigned char>(file_in),  std::istream_iterator<unsigned char>());
	std::byte const* ptr = (std::byte const*)(vec.data());
	dcon::load_record loaded;
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_reload_protected_state();
	alice_state_ptr->world.deserialize(ptr, ptr + sz, loaded, selection); 
}
void alice_store_mp_checksum_excluded_write_file(char const* name) { 
	std::ofstream file_out(name, std::ios::binary);
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_mp_checksum_excluded();
	auto sz = alice_state_ptr->world.serialize_size(selection);
	std::byte* temp_buffer = new std::byte[sz];
	auto ptr = temp_buffer;
	alice_state_ptr->world.serialize(ptr, selection); 
	file_out.write((char*)temp_buffer, sz);
	delete[] temp_buffer;
}
void alice_store_mp_checksum_excluded_read_file(char const* name) { 
	std::ifstream file_in(name, std::ios::binary);
	file_in.unsetf(std::ios::skipws);
	file_in.seekg(0, std::ios::end);
	auto sz = file_in.tellg();
	file_in.seekg(0, std::ios::beg);
	std::vector<unsigned char> vec;
	vec.reserve(sz);
	vec.insert(vec.begin(), std::istream_iterator<unsigned char>(file_in),  std::istream_iterator<unsigned char>());
	std::byte const* ptr = (std::byte const*)(vec.data());
	dcon::load_record loaded;
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_mp_checksum_excluded();
	alice_state_ptr->world.deserialize(ptr, ptr + sz, loaded, selection); 
}
void alice_store_mp_data_write_file(char const* name) { 
	std::ofstream file_out(name, std::ios::binary);
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_mp_data();
	auto sz = alice_state_ptr->world.serialize_size(selection);
	std::byte* temp_buffer = new std::byte[sz];
	auto ptr = temp_buffer;
	alice_state_ptr->world.serialize(ptr, selection); 
	file_out.write((char*)temp_buffer, sz);
	delete[] temp_buffer;
}
void alice_store_mp_data_read_file(char const* name) { 
	std::ifstream file_in(name, std::ios::binary);
	file_in.unsetf(std::ios::skipws);
	file_in.seekg(0, std::ios::end);
	auto sz = file_in.tellg();
	file_in.seekg(0, std::ios::beg);
	std::vector<unsigned char> vec;
	vec.reserve(sz);
	vec.insert(vec.begin(), std::istream_iterator<unsigned char>(file_in),  std::istream_iterator<unsigned char>());
	std::byte const* ptr = (std::byte const*)(vec.data());
	dcon::load_record loaded;
	dcon::load_record selection = alice_state_ptr->world.make_serialize_record_store_mp_data();
	alice_state_ptr->world.deserialize(ptr, ptr + sz, loaded, selection); 
}

