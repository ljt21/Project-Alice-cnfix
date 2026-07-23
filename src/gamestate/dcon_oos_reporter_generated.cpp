// This file was automatically generated from: C:/Users/Lijintao/Documents/GitHub/Project-Alice-cnfix/src/gamestate/dcon_generated.txt
// EDIT AT YOUR OWN RISK; all changes will be lost upon regeneration
// NOT SUITABLE FOR USE IN CRITICAL SOFTWARE WHERE LIVES OR LIVELIHOODS DEPEND ON THE CORRECT OPERATION
#include "dcon_generated.hpp"
#include "dcon_oos_reporter_generated.hpp"
#include "debug_string_convertions.hpp"
namespace dcon
{
template<typename T>
std::string get_string(T input)
{
	if constexpr(std::is_same<T, bool>::value)
	{
		return input ? "true" : "false";
	}
	else if constexpr(requires{ sys::to_debug_string(input); })
	{
		return sys::to_debug_string(input);
	}
	else if constexpr(requires{ std::to_string(input); } )
	{
		return std::to_string(input);
	}
	else if constexpr(requires{ std::to_string(input.value); })
	{
		return std::to_string(input.value);
	}
	else
	{
		return "";
	}
}
template<typename T>
bool compare_values(const T& val_1, const T& val_2)
{
	if constexpr(std::is_trivially_copyable<T>::value)
	{
		return std::memcmp(&val_1, &val_2, sizeof(T)) == 0;
	}
	else
	{
		return val_1 == val_2;
	}
}
std::string generate_oos_report(const dcon::data_container& container_1, const dcon::data_container& container_2, const dcon::load_record& record)	{
	std::string report;
	report.reserve(104857600);
	if(record.government_flag)
	{
		report += std::string("GOVERNMENT_FLAG") + "\n";
		if(!compare_values(container_1.government_flag_size(), container_2.government_flag_size()))
		{
			std::string cont_1_size = std::to_string(container_1.government_flag_size());
			std::string cont_2_size = std::to_string(container_2.government_flag_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.government_flag_size(), container_2.government_flag_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::government_flag_id obj{dcon::government_flag_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.government_flag_filename)
			{
				dcon::text_key cont_1_val = container_1.government_flag_get_filename(obj);
				dcon::text_key cont_2_val = container_2.government_flag_get_filename(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "filename: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.national_identity)
	{
		report += std::string("NATIONAL_IDENTITY") + "\n";
		if(!compare_values(container_1.national_identity_size(), container_2.national_identity_size()))
		{
			std::string cont_1_size = std::to_string(container_1.national_identity_size());
			std::string cont_2_size = std::to_string(container_2.national_identity_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.national_identity_size(), container_2.national_identity_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::national_identity_id obj{dcon::national_identity_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.national_identity_color)
			{
				const auto& cont_1_val = container_1.national_identity_get_color(obj);
				const auto& cont_2_val = container_2.national_identity_get_color(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "color: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_identity_name)
			{
				dcon::text_key cont_1_val = container_1.national_identity_get_name(obj);
				dcon::text_key cont_2_val = container_2.national_identity_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_identity_adjective)
			{
				dcon::text_key cont_1_val = container_1.national_identity_get_adjective(obj);
				dcon::text_key cont_2_val = container_2.national_identity_get_adjective(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "adjective: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_identity_identifying_int)
			{
				const auto& cont_1_val = container_1.national_identity_get_identifying_int(obj);
				const auto& cont_2_val = container_2.national_identity_get_identifying_int(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "identifying_int: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_identity_unit_names_first)
			{
				if(!compare_values(container_1.national_identity_get_unit_names_first_size(), container_2.national_identity_get_unit_names_first_size()))
				{
					std::string cont_1_size = std::to_string(container_1.national_identity_get_unit_names_first_size());
					std::string cont_2_size = std::to_string(container_2.national_identity_get_unit_names_first_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: unit_names_first, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.national_identity_get_unit_names_first_size(), container_2.national_identity_get_unit_names_first_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(j)};
					dcon::unit_name_id cont_1_arr_val = container_1.national_identity_get_unit_names_first(obj, arr_index);
					dcon::unit_name_id cont_2_arr_val = container_2.national_identity_get_unit_names_first(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "unit_names_first, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.national_identity_unit_names_count)
			{
				if(!compare_values(container_1.national_identity_get_unit_names_count_size(), container_2.national_identity_get_unit_names_count_size()))
				{
					std::string cont_1_size = std::to_string(container_1.national_identity_get_unit_names_count_size());
					std::string cont_2_size = std::to_string(container_2.national_identity_get_unit_names_count_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: unit_names_count, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.national_identity_get_unit_names_count_size(), container_2.national_identity_get_unit_names_count_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.national_identity_get_unit_names_count(obj, arr_index);
					const auto& cont_2_arr_val = container_2.national_identity_get_unit_names_count(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "unit_names_count, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.national_identity_political_party_first)
			{
				dcon::political_party_id cont_1_val = container_1.national_identity_get_political_party_first(obj);
				dcon::political_party_id cont_2_val = container_2.national_identity_get_political_party_first(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "political_party_first: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_identity_political_party_count)
			{
				const auto& cont_1_val = container_1.national_identity_get_political_party_count(obj);
				const auto& cont_2_val = container_2.national_identity_get_political_party_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "political_party_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_identity_government_flag_type)
			{
				if(!compare_values(container_1.national_identity_get_government_flag_type_size(), container_2.national_identity_get_government_flag_type_size()))
				{
					std::string cont_1_size = std::to_string(container_1.national_identity_get_government_flag_type_size());
					std::string cont_2_size = std::to_string(container_2.national_identity_get_government_flag_type_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: government_flag_type, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.national_identity_get_government_flag_type_size(), container_2.national_identity_get_government_flag_type_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(j)};
					dcon::government_flag_id cont_1_arr_val = container_1.national_identity_get_government_flag_type(obj, arr_index);
					dcon::government_flag_id cont_2_arr_val = container_2.national_identity_get_government_flag_type(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "government_flag_type, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.national_identity_government_name)
			{
				if(!compare_values(container_1.national_identity_get_government_name_size(), container_2.national_identity_get_government_name_size()))
				{
					std::string cont_1_size = std::to_string(container_1.national_identity_get_government_name_size());
					std::string cont_2_size = std::to_string(container_2.national_identity_get_government_name_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: government_name, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.national_identity_get_government_name_size(), container_2.national_identity_get_government_name_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(j)};
					dcon::text_key cont_1_arr_val = container_1.national_identity_get_government_name(obj, arr_index);
					dcon::text_key cont_2_arr_val = container_2.national_identity_get_government_name(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "government_name, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.national_identity_government_adjective)
			{
				if(!compare_values(container_1.national_identity_get_government_adjective_size(), container_2.national_identity_get_government_adjective_size()))
				{
					std::string cont_1_size = std::to_string(container_1.national_identity_get_government_adjective_size());
					std::string cont_2_size = std::to_string(container_2.national_identity_get_government_adjective_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: government_adjective, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.national_identity_get_government_adjective_size(), container_2.national_identity_get_government_adjective_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(j)};
					dcon::text_key cont_1_arr_val = container_1.national_identity_get_government_adjective(obj, arr_index);
					dcon::text_key cont_2_arr_val = container_2.national_identity_get_government_adjective(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "government_adjective, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.national_identity_government_ruler_name)
			{
				if(!compare_values(container_1.national_identity_get_government_ruler_name_size(), container_2.national_identity_get_government_ruler_name_size()))
				{
					std::string cont_1_size = std::to_string(container_1.national_identity_get_government_ruler_name_size());
					std::string cont_2_size = std::to_string(container_2.national_identity_get_government_ruler_name_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: government_ruler_name, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.national_identity_get_government_ruler_name_size(), container_2.national_identity_get_government_ruler_name_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(j)};
					dcon::text_key cont_1_arr_val = container_1.national_identity_get_government_ruler_name(obj, arr_index);
					dcon::text_key cont_2_arr_val = container_2.national_identity_get_government_ruler_name(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "government_ruler_name, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.national_identity_government_color)
			{
				if(!compare_values(container_1.national_identity_get_government_color_size(), container_2.national_identity_get_government_color_size()))
				{
					std::string cont_1_size = std::to_string(container_1.national_identity_get_government_color_size());
					std::string cont_2_size = std::to_string(container_2.national_identity_get_government_color_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: government_color, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.national_identity_get_government_color_size(), container_2.national_identity_get_government_color_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.national_identity_get_government_color(obj, arr_index);
					const auto& cont_2_arr_val = container_2.national_identity_get_government_color(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "government_color, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.national_identity_primary_culture)
			{
				dcon::culture_id cont_1_val = container_1.national_identity_get_primary_culture(obj);
				dcon::culture_id cont_2_val = container_2.national_identity_get_primary_culture(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "primary_culture: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_identity_religion)
			{
				dcon::religion_id cont_1_val = container_1.national_identity_get_religion(obj);
				dcon::religion_id cont_2_val = container_2.national_identity_get_religion(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "religion: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_identity_capital)
			{
				dcon::province_id cont_1_val = container_1.national_identity_get_capital(obj);
				dcon::province_id cont_2_val = container_2.national_identity_get_capital(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "capital: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_identity_is_not_releasable)
			{
				const auto& cont_1_val = container_1.national_identity_get_is_not_releasable(obj);
				const auto& cont_2_val = container_2.national_identity_get_is_not_releasable(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_not_releasable: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.political_party)
	{
		report += std::string("POLITICAL_PARTY") + "\n";
		if(!compare_values(container_1.political_party_size(), container_2.political_party_size()))
		{
			std::string cont_1_size = std::to_string(container_1.political_party_size());
			std::string cont_2_size = std::to_string(container_2.political_party_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.political_party_size(), container_2.political_party_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::political_party_id obj{dcon::political_party_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.political_party_name)
			{
				dcon::text_key cont_1_val = container_1.political_party_get_name(obj);
				dcon::text_key cont_2_val = container_2.political_party_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.political_party_start_date)
			{
				const auto& cont_1_val = container_1.political_party_get_start_date(obj);
				const auto& cont_2_val = container_2.political_party_get_start_date(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "start_date: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.political_party_end_date)
			{
				const auto& cont_1_val = container_1.political_party_get_end_date(obj);
				const auto& cont_2_val = container_2.political_party_get_end_date(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "end_date: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.political_party_ideology)
			{
				dcon::ideology_id cont_1_val = container_1.political_party_get_ideology(obj);
				dcon::ideology_id cont_2_val = container_2.political_party_get_ideology(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ideology: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.political_party_party_issues)
			{
				if(!compare_values(container_1.political_party_get_party_issues_size(), container_2.political_party_get_party_issues_size()))
				{
					std::string cont_1_size = std::to_string(container_1.political_party_get_party_issues_size());
					std::string cont_2_size = std::to_string(container_2.political_party_get_party_issues_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: party_issues, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.political_party_get_party_issues_size(), container_2.political_party_get_party_issues_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::issue_id arr_index{dcon::issue_id::value_base_t(j)};
					dcon::issue_option_id cont_1_arr_val = container_1.political_party_get_party_issues(obj, arr_index);
					dcon::issue_option_id cont_2_arr_val = container_2.political_party_get_party_issues(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "party_issues, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.political_party_trigger)
			{
				dcon::trigger_key cont_1_val = container_1.political_party_get_trigger(obj);
				dcon::trigger_key cont_2_val = container_2.political_party_get_trigger(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "trigger: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.leader_images)
	{
		report += std::string("LEADER_IMAGES") + "\n";
		if(!compare_values(container_1.leader_images_size(), container_2.leader_images_size()))
		{
			std::string cont_1_size = std::to_string(container_1.leader_images_size());
			std::string cont_2_size = std::to_string(container_2.leader_images_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.leader_images_size(), container_2.leader_images_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::leader_images_id obj{dcon::leader_images_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.leader_images_admirals)
			{
				auto vec_1 = container_1.leader_images_get_admirals(obj);
				auto vec_2 = container_2.leader_images_get_admirals(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: admirals, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						dcon::gfx_object_id cont_1_arr_val = vec_1[j];
						dcon::gfx_object_id cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "admirals, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.leader_images_generals)
			{
				auto vec_1 = container_1.leader_images_get_generals(obj);
				auto vec_2 = container_2.leader_images_get_generals(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: generals, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						dcon::gfx_object_id cont_1_arr_val = vec_1[j];
						dcon::gfx_object_id cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "generals, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.religion)
	{
		report += std::string("RELIGION") + "\n";
		if(!compare_values(container_1.religion_size(), container_2.religion_size()))
		{
			std::string cont_1_size = std::to_string(container_1.religion_size());
			std::string cont_2_size = std::to_string(container_2.religion_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.religion_size(), container_2.religion_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::religion_id obj{dcon::religion_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.religion_name)
			{
				dcon::text_key cont_1_val = container_1.religion_get_name(obj);
				dcon::text_key cont_2_val = container_2.religion_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.religion_color)
			{
				const auto& cont_1_val = container_1.religion_get_color(obj);
				const auto& cont_2_val = container_2.religion_get_color(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "color: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.religion_icon)
			{
				const auto& cont_1_val = container_1.religion_get_icon(obj);
				const auto& cont_2_val = container_2.religion_get_icon(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "icon: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.religion_is_pagan)
			{
				const auto& cont_1_val = container_1.religion_get_is_pagan(obj);
				const auto& cont_2_val = container_2.religion_get_is_pagan(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_pagan: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.religion_nation_modifier)
			{
				dcon::modifier_id cont_1_val = container_1.religion_get_nation_modifier(obj);
				dcon::modifier_id cont_2_val = container_2.religion_get_nation_modifier(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "nation_modifier: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.culture_group)
	{
		report += std::string("CULTURE_GROUP") + "\n";
		if(!compare_values(container_1.culture_group_size(), container_2.culture_group_size()))
		{
			std::string cont_1_size = std::to_string(container_1.culture_group_size());
			std::string cont_2_size = std::to_string(container_2.culture_group_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.culture_group_size(), container_2.culture_group_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::culture_group_id obj{dcon::culture_group_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.culture_group_name)
			{
				dcon::text_key cont_1_val = container_1.culture_group_get_name(obj);
				dcon::text_key cont_2_val = container_2.culture_group_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.culture_group_is_overseas)
			{
				const auto& cont_1_val = container_1.culture_group_get_is_overseas(obj);
				const auto& cont_2_val = container_2.culture_group_get_is_overseas(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_overseas: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.culture_group_leader)
			{
				dcon::leader_images_id cont_1_val = container_1.culture_group_get_leader(obj);
				dcon::leader_images_id cont_2_val = container_2.culture_group_get_leader(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "leader: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.culture)
	{
		report += std::string("CULTURE") + "\n";
		if(!compare_values(container_1.culture_size(), container_2.culture_size()))
		{
			std::string cont_1_size = std::to_string(container_1.culture_size());
			std::string cont_2_size = std::to_string(container_2.culture_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.culture_size(), container_2.culture_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::culture_id obj{dcon::culture_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.culture_name)
			{
				dcon::text_key cont_1_val = container_1.culture_get_name(obj);
				dcon::text_key cont_2_val = container_2.culture_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.culture_color)
			{
				const auto& cont_1_val = container_1.culture_get_color(obj);
				const auto& cont_2_val = container_2.culture_get_color(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "color: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.culture_radicalism)
			{
				const auto& cont_1_val = container_1.culture_get_radicalism(obj);
				const auto& cont_2_val = container_2.culture_get_radicalism(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "radicalism: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.culture_first_names)
			{
				auto vec_1 = container_1.culture_get_first_names(obj);
				auto vec_2 = container_2.culture_get_first_names(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: first_names, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						dcon::unit_name_id cont_1_arr_val = vec_1[j];
						dcon::unit_name_id cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "first_names, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.culture_last_names)
			{
				auto vec_1 = container_1.culture_get_last_names(obj);
				auto vec_2 = container_2.culture_get_last_names(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: last_names, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						dcon::unit_name_id cont_1_arr_val = vec_1[j];
						dcon::unit_name_id cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "last_names, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.culture_group_membership)
	{
		report += std::string("CULTURE_GROUP_MEMBERSHIP") + "\n";
		if(!compare_values(container_1.culture_group_membership_size(), container_2.culture_group_membership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.culture_group_membership_size());
			std::string cont_2_size = std::to_string(container_2.culture_group_membership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.culture_group_membership_size(), container_2.culture_group_membership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::culture_group_membership_id obj{dcon::culture_group_membership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.culture_group_membership_member)
			{
				if(!compare_values(container_1.culture_group_membership_get_member(obj), container_2.culture_group_membership_get_member(obj)))
				{
					auto cont_1_val = std::to_string(container_1.culture_group_membership_get_member(obj).value);
					auto cont_2_val = std::to_string(container_2.culture_group_membership_get_member(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "member: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.culture_group_membership_group)
			{
				if(!compare_values(container_1.culture_group_membership_get_group(obj), container_2.culture_group_membership_get_group(obj)))
				{
					auto cont_1_val = std::to_string(container_1.culture_group_membership_get_group(obj).value);
					auto cont_2_val = std::to_string(container_2.culture_group_membership_get_group(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "group: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.cultural_union_of)
	{
		report += std::string("CULTURAL_UNION_OF") + "\n";
		if(!compare_values(container_1.cultural_union_of_size(), container_2.cultural_union_of_size()))
		{
			std::string cont_1_size = std::to_string(container_1.cultural_union_of_size());
			std::string cont_2_size = std::to_string(container_2.cultural_union_of_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.cultural_union_of_size(), container_2.cultural_union_of_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::cultural_union_of_id obj{dcon::cultural_union_of_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.cultural_union_of_identity)
			{
				if(!compare_values(container_1.cultural_union_of_get_identity(obj), container_2.cultural_union_of_get_identity(obj)))
				{
					auto cont_1_val = std::to_string(container_1.cultural_union_of_get_identity(obj).value);
					auto cont_2_val = std::to_string(container_2.cultural_union_of_get_identity(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "identity: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.cultural_union_of_culture_group)
			{
				if(!compare_values(container_1.cultural_union_of_get_culture_group(obj), container_2.cultural_union_of_get_culture_group(obj)))
				{
					auto cont_1_val = std::to_string(container_1.cultural_union_of_get_culture_group(obj).value);
					auto cont_2_val = std::to_string(container_2.cultural_union_of_get_culture_group(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "culture_group: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.commodity)
	{
		report += std::string("COMMODITY") + "\n";
		if(!compare_values(container_1.commodity_size(), container_2.commodity_size()))
		{
			std::string cont_1_size = std::to_string(container_1.commodity_size());
			std::string cont_2_size = std::to_string(container_2.commodity_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.commodity_size(), container_2.commodity_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::commodity_id obj{dcon::commodity_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.commodity_name)
			{
				dcon::text_key cont_1_val = container_1.commodity_get_name(obj);
				dcon::text_key cont_2_val = container_2.commodity_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_color)
			{
				const auto& cont_1_val = container_1.commodity_get_color(obj);
				const auto& cont_2_val = container_2.commodity_get_color(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "color: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_cost)
			{
				const auto& cont_1_val = container_1.commodity_get_cost(obj);
				const auto& cont_2_val = container_2.commodity_get_cost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "cost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_median_price)
			{
				const auto& cont_1_val = container_1.commodity_get_median_price(obj);
				const auto& cont_2_val = container_2.commodity_get_median_price(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "median_price: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_actually_exists_in_nature)
			{
				const auto& cont_1_val = container_1.commodity_get_actually_exists_in_nature(obj);
				const auto& cont_2_val = container_2.commodity_get_actually_exists_in_nature(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "actually_exists_in_nature: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_commodity_group)
			{
				const auto& cont_1_val = container_1.commodity_get_commodity_group(obj);
				const auto& cont_2_val = container_2.commodity_get_commodity_group(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "commodity_group: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_is_available_from_start)
			{
				const auto& cont_1_val = container_1.commodity_get_is_available_from_start(obj);
				const auto& cont_2_val = container_2.commodity_get_is_available_from_start(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_available_from_start: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_is_local)
			{
				const auto& cont_1_val = container_1.commodity_get_is_local(obj);
				const auto& cont_2_val = container_2.commodity_get_is_local(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_local: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_money_rgo)
			{
				const auto& cont_1_val = container_1.commodity_get_money_rgo(obj);
				const auto& cont_2_val = container_2.commodity_get_money_rgo(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "money_rgo: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_is_mine)
			{
				const auto& cont_1_val = container_1.commodity_get_is_mine(obj);
				const auto& cont_2_val = container_2.commodity_get_is_mine(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_mine: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_overseas_penalty)
			{
				const auto& cont_1_val = container_1.commodity_get_overseas_penalty(obj);
				const auto& cont_2_val = container_2.commodity_get_overseas_penalty(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "overseas_penalty: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_rgo_amount)
			{
				const auto& cont_1_val = container_1.commodity_get_rgo_amount(obj);
				const auto& cont_2_val = container_2.commodity_get_rgo_amount(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_amount: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_rgo_workforce)
			{
				const auto& cont_1_val = container_1.commodity_get_rgo_workforce(obj);
				const auto& cont_2_val = container_2.commodity_get_rgo_workforce(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_workforce: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_rgo_efficiency_inputs)
			{
				const auto& cont_1_val = container_1.commodity_get_rgo_efficiency_inputs(obj);
				const auto& cont_2_val = container_2.commodity_get_rgo_efficiency_inputs(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_efficiency_inputs: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_rgo_efficiency_inputs_are_defined_in_content)
			{
				const auto& cont_1_val = container_1.commodity_get_rgo_efficiency_inputs_are_defined_in_content(obj);
				const auto& cont_2_val = container_2.commodity_get_rgo_efficiency_inputs_are_defined_in_content(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_efficiency_inputs_are_defined_in_content: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_artisan_inputs)
			{
				const auto& cont_1_val = container_1.commodity_get_artisan_inputs(obj);
				const auto& cont_2_val = container_2.commodity_get_artisan_inputs(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "artisan_inputs: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_artisan_output_amount)
			{
				const auto& cont_1_val = container_1.commodity_get_artisan_output_amount(obj);
				const auto& cont_2_val = container_2.commodity_get_artisan_output_amount(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "artisan_output_amount: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_icon)
			{
				const auto& cont_1_val = container_1.commodity_get_icon(obj);
				const auto& cont_2_val = container_2.commodity_get_icon(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "icon: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_producer_payout_fraction)
			{
				const auto& cont_1_val = container_1.commodity_get_producer_payout_fraction(obj);
				const auto& cont_2_val = container_2.commodity_get_producer_payout_fraction(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "producer_payout_fraction: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_price_record)
			{
				if(!compare_values(container_1.commodity_get_price_record_size(), container_2.commodity_get_price_record_size()))
				{
					std::string cont_1_size = std::to_string(container_1.commodity_get_price_record_size());
					std::string cont_2_size = std::to_string(container_2.commodity_get_price_record_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: price_record, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.commodity_get_price_record_size(), container_2.commodity_get_price_record_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.commodity_get_price_record(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.commodity_get_price_record(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "price_record, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.commodity_is_life_need)
			{
				const auto& cont_1_val = container_1.commodity_get_is_life_need(obj);
				const auto& cont_2_val = container_2.commodity_get_is_life_need(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_life_need: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_is_everyday_need)
			{
				const auto& cont_1_val = container_1.commodity_get_is_everyday_need(obj);
				const auto& cont_2_val = container_2.commodity_get_is_everyday_need(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_everyday_need: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_is_luxury_need)
			{
				const auto& cont_1_val = container_1.commodity_get_is_luxury_need(obj);
				const auto& cont_2_val = container_2.commodity_get_is_luxury_need(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_luxury_need: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.commodity_uses_potentials)
			{
				const auto& cont_1_val = container_1.commodity_get_uses_potentials(obj);
				const auto& cont_2_val = container_2.commodity_get_uses_potentials(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "uses_potentials: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.modifier)
	{
		report += std::string("MODIFIER") + "\n";
		if(!compare_values(container_1.modifier_size(), container_2.modifier_size()))
		{
			std::string cont_1_size = std::to_string(container_1.modifier_size());
			std::string cont_2_size = std::to_string(container_2.modifier_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.modifier_size(), container_2.modifier_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::modifier_id obj{dcon::modifier_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.modifier_name)
			{
				dcon::text_key cont_1_val = container_1.modifier_get_name(obj);
				dcon::text_key cont_2_val = container_2.modifier_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.modifier_desc)
			{
				dcon::text_key cont_1_val = container_1.modifier_get_desc(obj);
				dcon::text_key cont_2_val = container_2.modifier_get_desc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "desc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.modifier_province_values)
			{
				const auto& cont_1_val = container_1.modifier_get_province_values(obj);
				const auto& cont_2_val = container_2.modifier_get_province_values(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "province_values: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.modifier_national_values)
			{
				const auto& cont_1_val = container_1.modifier_get_national_values(obj);
				const auto& cont_2_val = container_2.modifier_get_national_values(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "national_values: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.modifier_icon)
			{
				const auto& cont_1_val = container_1.modifier_get_icon(obj);
				const auto& cont_2_val = container_2.modifier_get_icon(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "icon: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.factory_type)
	{
		report += std::string("FACTORY_TYPE") + "\n";
		if(!compare_values(container_1.factory_type_size(), container_2.factory_type_size()))
		{
			std::string cont_1_size = std::to_string(container_1.factory_type_size());
			std::string cont_2_size = std::to_string(container_2.factory_type_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.factory_type_size(), container_2.factory_type_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::factory_type_id obj{dcon::factory_type_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.factory_type_name)
			{
				dcon::text_key cont_1_val = container_1.factory_type_get_name(obj);
				dcon::text_key cont_2_val = container_2.factory_type_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_description)
			{
				dcon::text_key cont_1_val = container_1.factory_type_get_description(obj);
				dcon::text_key cont_2_val = container_2.factory_type_get_description(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "description: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_construction_costs)
			{
				const auto& cont_1_val = container_1.factory_type_get_construction_costs(obj);
				const auto& cont_2_val = container_2.factory_type_get_construction_costs(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "construction_costs: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_construction_time)
			{
				const auto& cont_1_val = container_1.factory_type_get_construction_time(obj);
				const auto& cont_2_val = container_2.factory_type_get_construction_time(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "construction_time: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_is_available_from_start)
			{
				const auto& cont_1_val = container_1.factory_type_get_is_available_from_start(obj);
				const auto& cont_2_val = container_2.factory_type_get_is_available_from_start(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_available_from_start: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_is_coastal)
			{
				const auto& cont_1_val = container_1.factory_type_get_is_coastal(obj);
				const auto& cont_2_val = container_2.factory_type_get_is_coastal(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_coastal: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_inputs)
			{
				const auto& cont_1_val = container_1.factory_type_get_inputs(obj);
				const auto& cont_2_val = container_2.factory_type_get_inputs(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "inputs: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_efficiency_inputs)
			{
				const auto& cont_1_val = container_1.factory_type_get_efficiency_inputs(obj);
				const auto& cont_2_val = container_2.factory_type_get_efficiency_inputs(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "efficiency_inputs: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_base_workforce)
			{
				const auto& cont_1_val = container_1.factory_type_get_base_workforce(obj);
				const auto& cont_2_val = container_2.factory_type_get_base_workforce(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "base_workforce: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_output)
			{
				dcon::commodity_id cont_1_val = container_1.factory_type_get_output(obj);
				dcon::commodity_id cont_2_val = container_2.factory_type_get_output(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "output: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_output_amount)
			{
				const auto& cont_1_val = container_1.factory_type_get_output_amount(obj);
				const auto& cont_2_val = container_2.factory_type_get_output_amount(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "output_amount: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_factory_bonuses)
			{
				const auto& vec_1 = container_1.factory_type_get_factory_bonuses(obj);
				const auto& vec_2 = container_2.factory_type_get_factory_bonuses(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: factory_bonuses, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_bonuses, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.factory_type_can_be_built_in_colonies)
			{
				const auto& cont_1_val = container_1.factory_type_get_can_be_built_in_colonies(obj);
				const auto& cont_2_val = container_2.factory_type_get_can_be_built_in_colonies(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "can_be_built_in_colonies: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_type_factory_tier)
			{
				const auto& cont_1_val = container_1.factory_type_get_factory_tier(obj);
				const auto& cont_2_val = container_2.factory_type_get_factory_tier(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_tier: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.ideology_group)
	{
		report += std::string("IDEOLOGY_GROUP") + "\n";
		if(!compare_values(container_1.ideology_group_size(), container_2.ideology_group_size()))
		{
			std::string cont_1_size = std::to_string(container_1.ideology_group_size());
			std::string cont_2_size = std::to_string(container_2.ideology_group_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.ideology_group_size(), container_2.ideology_group_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::ideology_group_id obj{dcon::ideology_group_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.ideology_group_name)
			{
				dcon::text_key cont_1_val = container_1.ideology_group_get_name(obj);
				dcon::text_key cont_2_val = container_2.ideology_group_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.ideology)
	{
		report += std::string("IDEOLOGY") + "\n";
		if(!compare_values(container_1.ideology_size(), container_2.ideology_size()))
		{
			std::string cont_1_size = std::to_string(container_1.ideology_size());
			std::string cont_2_size = std::to_string(container_2.ideology_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.ideology_size(), container_2.ideology_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::ideology_id obj{dcon::ideology_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.ideology_name)
			{
				dcon::text_key cont_1_val = container_1.ideology_get_name(obj);
				dcon::text_key cont_2_val = container_2.ideology_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ideology_color)
			{
				const auto& cont_1_val = container_1.ideology_get_color(obj);
				const auto& cont_2_val = container_2.ideology_get_color(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "color: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ideology_is_civilized_only)
			{
				const auto& cont_1_val = container_1.ideology_get_is_civilized_only(obj);
				const auto& cont_2_val = container_2.ideology_get_is_civilized_only(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_civilized_only: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ideology_activation_date)
			{
				const auto& cont_1_val = container_1.ideology_get_activation_date(obj);
				const auto& cont_2_val = container_2.ideology_get_activation_date(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "activation_date: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ideology_add_political_reform)
			{
				dcon::value_modifier_key cont_1_val = container_1.ideology_get_add_political_reform(obj);
				dcon::value_modifier_key cont_2_val = container_2.ideology_get_add_political_reform(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "add_political_reform: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ideology_remove_political_reform)
			{
				dcon::value_modifier_key cont_1_val = container_1.ideology_get_remove_political_reform(obj);
				dcon::value_modifier_key cont_2_val = container_2.ideology_get_remove_political_reform(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "remove_political_reform: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ideology_add_social_reform)
			{
				dcon::value_modifier_key cont_1_val = container_1.ideology_get_add_social_reform(obj);
				dcon::value_modifier_key cont_2_val = container_2.ideology_get_add_social_reform(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "add_social_reform: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ideology_remove_social_reform)
			{
				dcon::value_modifier_key cont_1_val = container_1.ideology_get_remove_social_reform(obj);
				dcon::value_modifier_key cont_2_val = container_2.ideology_get_remove_social_reform(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "remove_social_reform: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ideology_add_military_reform)
			{
				dcon::value_modifier_key cont_1_val = container_1.ideology_get_add_military_reform(obj);
				dcon::value_modifier_key cont_2_val = container_2.ideology_get_add_military_reform(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "add_military_reform: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ideology_add_economic_reform)
			{
				dcon::value_modifier_key cont_1_val = container_1.ideology_get_add_economic_reform(obj);
				dcon::value_modifier_key cont_2_val = container_2.ideology_get_add_economic_reform(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "add_economic_reform: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ideology_enabled)
			{
				const auto& cont_1_val = container_1.ideology_get_enabled(obj);
				const auto& cont_2_val = container_2.ideology_get_enabled(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "enabled: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.ideology_group_membership)
	{
		report += std::string("IDEOLOGY_GROUP_MEMBERSHIP") + "\n";
		if(!compare_values(container_1.ideology_group_membership_size(), container_2.ideology_group_membership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.ideology_group_membership_size());
			std::string cont_2_size = std::to_string(container_2.ideology_group_membership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.ideology_group_membership_size(), container_2.ideology_group_membership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::ideology_group_membership_id obj{dcon::ideology_group_membership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.ideology_group_membership_ideology)
			{
				if(!compare_values(container_1.ideology_group_membership_get_ideology(obj), container_2.ideology_group_membership_get_ideology(obj)))
				{
					auto cont_1_val = std::to_string(container_1.ideology_group_membership_get_ideology(obj).value);
					auto cont_2_val = std::to_string(container_2.ideology_group_membership_get_ideology(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "ideology: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.ideology_group_membership_ideology_group)
			{
				if(!compare_values(container_1.ideology_group_membership_get_ideology_group(obj), container_2.ideology_group_membership_get_ideology_group(obj)))
				{
					auto cont_1_val = std::to_string(container_1.ideology_group_membership_get_ideology_group(obj).value);
					auto cont_2_val = std::to_string(container_2.ideology_group_membership_get_ideology_group(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "ideology_group: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.issue)
	{
		report += std::string("ISSUE") + "\n";
		if(!compare_values(container_1.issue_size(), container_2.issue_size()))
		{
			std::string cont_1_size = std::to_string(container_1.issue_size());
			std::string cont_2_size = std::to_string(container_2.issue_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.issue_size(), container_2.issue_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::issue_id obj{dcon::issue_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.issue_name)
			{
				dcon::text_key cont_1_val = container_1.issue_get_name(obj);
				dcon::text_key cont_2_val = container_2.issue_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_desc)
			{
				dcon::text_key cont_1_val = container_1.issue_get_desc(obj);
				dcon::text_key cont_2_val = container_2.issue_get_desc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "desc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_options)
			{
				const auto& vec_1 = container_1.issue_get_options(obj);
				const auto& vec_2 = container_2.issue_get_options(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: options, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "options, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.issue_is_next_step_only)
			{
				const auto& cont_1_val = container_1.issue_get_is_next_step_only(obj);
				const auto& cont_2_val = container_2.issue_get_is_next_step_only(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_next_step_only: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_is_administrative)
			{
				const auto& cont_1_val = container_1.issue_get_is_administrative(obj);
				const auto& cont_2_val = container_2.issue_get_is_administrative(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_administrative: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_issue_type)
			{
				const auto& cont_1_val = container_1.issue_get_issue_type(obj);
				const auto& cont_2_val = container_2.issue_get_issue_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "issue_type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.issue_option)
	{
		report += std::string("ISSUE_OPTION") + "\n";
		if(!compare_values(container_1.issue_option_size(), container_2.issue_option_size()))
		{
			std::string cont_1_size = std::to_string(container_1.issue_option_size());
			std::string cont_2_size = std::to_string(container_2.issue_option_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.issue_option_size(), container_2.issue_option_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::issue_option_id obj{dcon::issue_option_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.issue_option_name)
			{
				dcon::text_key cont_1_val = container_1.issue_option_get_name(obj);
				dcon::text_key cont_2_val = container_2.issue_option_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_option_desc)
			{
				dcon::text_key cont_1_val = container_1.issue_option_get_desc(obj);
				dcon::text_key cont_2_val = container_2.issue_option_get_desc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "desc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_option_movement_name)
			{
				dcon::text_key cont_1_val = container_1.issue_option_get_movement_name(obj);
				dcon::text_key cont_2_val = container_2.issue_option_get_movement_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "movement_name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_option_rules)
			{
				const auto& cont_1_val = container_1.issue_option_get_rules(obj);
				const auto& cont_2_val = container_2.issue_option_get_rules(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rules: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_option_modifier)
			{
				dcon::modifier_id cont_1_val = container_1.issue_option_get_modifier(obj);
				dcon::modifier_id cont_2_val = container_2.issue_option_get_modifier(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "modifier: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_option_war_exhaustion_effect)
			{
				const auto& cont_1_val = container_1.issue_option_get_war_exhaustion_effect(obj);
				const auto& cont_2_val = container_2.issue_option_get_war_exhaustion_effect(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "war_exhaustion_effect: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_option_administrative_multiplier)
			{
				const auto& cont_1_val = container_1.issue_option_get_administrative_multiplier(obj);
				const auto& cont_2_val = container_2.issue_option_get_administrative_multiplier(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "administrative_multiplier: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_option_allow)
			{
				dcon::trigger_key cont_1_val = container_1.issue_option_get_allow(obj);
				dcon::trigger_key cont_2_val = container_2.issue_option_get_allow(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "allow: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_option_on_execute_trigger)
			{
				dcon::trigger_key cont_1_val = container_1.issue_option_get_on_execute_trigger(obj);
				dcon::trigger_key cont_2_val = container_2.issue_option_get_on_execute_trigger(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "on_execute_trigger: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_option_on_execute_effect)
			{
				dcon::effect_key cont_1_val = container_1.issue_option_get_on_execute_effect(obj);
				dcon::effect_key cont_2_val = container_2.issue_option_get_on_execute_effect(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "on_execute_effect: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_option_parent_issue)
			{
				dcon::issue_id cont_1_val = container_1.issue_option_get_parent_issue(obj);
				dcon::issue_id cont_2_val = container_2.issue_option_get_parent_issue(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "parent_issue: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.issue_option_support_modifiers)
			{
				if(!compare_values(container_1.issue_option_get_support_modifiers_size(), container_2.issue_option_get_support_modifiers_size()))
				{
					std::string cont_1_size = std::to_string(container_1.issue_option_get_support_modifiers_size());
					std::string cont_2_size = std::to_string(container_2.issue_option_get_support_modifiers_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: support_modifiers, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.issue_option_get_support_modifiers_size(), container_2.issue_option_get_support_modifiers_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::issue_option_id arr_index{dcon::issue_option_id::value_base_t(j)};
					dcon::value_modifier_key cont_1_arr_val = container_1.issue_option_get_support_modifiers(obj, arr_index);
					dcon::value_modifier_key cont_2_arr_val = container_2.issue_option_get_support_modifiers(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "support_modifiers, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.reform)
	{
		report += std::string("REFORM") + "\n";
		if(!compare_values(container_1.reform_size(), container_2.reform_size()))
		{
			std::string cont_1_size = std::to_string(container_1.reform_size());
			std::string cont_2_size = std::to_string(container_2.reform_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.reform_size(), container_2.reform_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::reform_id obj{dcon::reform_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.reform_name)
			{
				dcon::text_key cont_1_val = container_1.reform_get_name(obj);
				dcon::text_key cont_2_val = container_2.reform_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_desc)
			{
				dcon::text_key cont_1_val = container_1.reform_get_desc(obj);
				dcon::text_key cont_2_val = container_2.reform_get_desc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "desc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_options)
			{
				const auto& vec_1 = container_1.reform_get_options(obj);
				const auto& vec_2 = container_2.reform_get_options(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: options, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "options, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.reform_is_next_step_only)
			{
				const auto& cont_1_val = container_1.reform_get_is_next_step_only(obj);
				const auto& cont_2_val = container_2.reform_get_is_next_step_only(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_next_step_only: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_reform_type)
			{
				const auto& cont_1_val = container_1.reform_get_reform_type(obj);
				const auto& cont_2_val = container_2.reform_get_reform_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "reform_type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.reform_option)
	{
		report += std::string("REFORM_OPTION") + "\n";
		if(!compare_values(container_1.reform_option_size(), container_2.reform_option_size()))
		{
			std::string cont_1_size = std::to_string(container_1.reform_option_size());
			std::string cont_2_size = std::to_string(container_2.reform_option_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.reform_option_size(), container_2.reform_option_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::reform_option_id obj{dcon::reform_option_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.reform_option_name)
			{
				dcon::text_key cont_1_val = container_1.reform_option_get_name(obj);
				dcon::text_key cont_2_val = container_2.reform_option_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_option_desc)
			{
				dcon::text_key cont_1_val = container_1.reform_option_get_desc(obj);
				dcon::text_key cont_2_val = container_2.reform_option_get_desc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "desc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_option_rules)
			{
				const auto& cont_1_val = container_1.reform_option_get_rules(obj);
				const auto& cont_2_val = container_2.reform_option_get_rules(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rules: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_option_modifier)
			{
				dcon::modifier_id cont_1_val = container_1.reform_option_get_modifier(obj);
				dcon::modifier_id cont_2_val = container_2.reform_option_get_modifier(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "modifier: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_option_technology_cost)
			{
				const auto& cont_1_val = container_1.reform_option_get_technology_cost(obj);
				const auto& cont_2_val = container_2.reform_option_get_technology_cost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "technology_cost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_option_war_exhaustion_effect)
			{
				const auto& cont_1_val = container_1.reform_option_get_war_exhaustion_effect(obj);
				const auto& cont_2_val = container_2.reform_option_get_war_exhaustion_effect(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "war_exhaustion_effect: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_option_allow)
			{
				dcon::trigger_key cont_1_val = container_1.reform_option_get_allow(obj);
				dcon::trigger_key cont_2_val = container_2.reform_option_get_allow(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "allow: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_option_on_execute_trigger)
			{
				dcon::trigger_key cont_1_val = container_1.reform_option_get_on_execute_trigger(obj);
				dcon::trigger_key cont_2_val = container_2.reform_option_get_on_execute_trigger(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "on_execute_trigger: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_option_on_execute_effect)
			{
				dcon::effect_key cont_1_val = container_1.reform_option_get_on_execute_effect(obj);
				dcon::effect_key cont_2_val = container_2.reform_option_get_on_execute_effect(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "on_execute_effect: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.reform_option_parent_reform)
			{
				dcon::reform_id cont_1_val = container_1.reform_option_get_parent_reform(obj);
				dcon::reform_id cont_2_val = container_2.reform_option_get_parent_reform(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "parent_reform: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.cb_type)
	{
		report += std::string("CB_TYPE") + "\n";
		if(!compare_values(container_1.cb_type_size(), container_2.cb_type_size()))
		{
			std::string cont_1_size = std::to_string(container_1.cb_type_size());
			std::string cont_2_size = std::to_string(container_2.cb_type_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.cb_type_size(), container_2.cb_type_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::cb_type_id obj{dcon::cb_type_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.cb_type_name)
			{
				dcon::text_key cont_1_val = container_1.cb_type_get_name(obj);
				dcon::text_key cont_2_val = container_2.cb_type_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_short_desc)
			{
				dcon::text_key cont_1_val = container_1.cb_type_get_short_desc(obj);
				dcon::text_key cont_2_val = container_2.cb_type_get_short_desc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "short_desc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_shortest_desc)
			{
				dcon::text_key cont_1_val = container_1.cb_type_get_shortest_desc(obj);
				dcon::text_key cont_2_val = container_2.cb_type_get_shortest_desc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "shortest_desc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_long_desc)
			{
				dcon::text_key cont_1_val = container_1.cb_type_get_long_desc(obj);
				dcon::text_key cont_2_val = container_2.cb_type_get_long_desc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "long_desc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_war_name)
			{
				dcon::text_key cont_1_val = container_1.cb_type_get_war_name(obj);
				dcon::text_key cont_2_val = container_2.cb_type_get_war_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "war_name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_type_bits)
			{
				const auto& cont_1_val = container_1.cb_type_get_type_bits(obj);
				const auto& cont_2_val = container_2.cb_type_get_type_bits(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "type_bits: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_months)
			{
				const auto& cont_1_val = container_1.cb_type_get_months(obj);
				const auto& cont_2_val = container_2.cb_type_get_months(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "months: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_truce_months)
			{
				const auto& cont_1_val = container_1.cb_type_get_truce_months(obj);
				const auto& cont_2_val = container_2.cb_type_get_truce_months(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "truce_months: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_sprite_index)
			{
				const auto& cont_1_val = container_1.cb_type_get_sprite_index(obj);
				const auto& cont_2_val = container_2.cb_type_get_sprite_index(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "sprite_index: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_allowed_states)
			{
				dcon::trigger_key cont_1_val = container_1.cb_type_get_allowed_states(obj);
				dcon::trigger_key cont_2_val = container_2.cb_type_get_allowed_states(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "allowed_states: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_allowed_states_in_crisis)
			{
				dcon::trigger_key cont_1_val = container_1.cb_type_get_allowed_states_in_crisis(obj);
				dcon::trigger_key cont_2_val = container_2.cb_type_get_allowed_states_in_crisis(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "allowed_states_in_crisis: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_allowed_substate_regions)
			{
				dcon::trigger_key cont_1_val = container_1.cb_type_get_allowed_substate_regions(obj);
				dcon::trigger_key cont_2_val = container_2.cb_type_get_allowed_substate_regions(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "allowed_substate_regions: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_allowed_countries)
			{
				dcon::trigger_key cont_1_val = container_1.cb_type_get_allowed_countries(obj);
				dcon::trigger_key cont_2_val = container_2.cb_type_get_allowed_countries(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "allowed_countries: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_can_use)
			{
				dcon::trigger_key cont_1_val = container_1.cb_type_get_can_use(obj);
				dcon::trigger_key cont_2_val = container_2.cb_type_get_can_use(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "can_use: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_on_add)
			{
				dcon::effect_key cont_1_val = container_1.cb_type_get_on_add(obj);
				dcon::effect_key cont_2_val = container_2.cb_type_get_on_add(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "on_add: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_on_po_accepted)
			{
				dcon::effect_key cont_1_val = container_1.cb_type_get_on_po_accepted(obj);
				dcon::effect_key cont_2_val = container_2.cb_type_get_on_po_accepted(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "on_po_accepted: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_badboy_factor)
			{
				const auto& cont_1_val = container_1.cb_type_get_badboy_factor(obj);
				const auto& cont_2_val = container_2.cb_type_get_badboy_factor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "badboy_factor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_prestige_factor)
			{
				const auto& cont_1_val = container_1.cb_type_get_prestige_factor(obj);
				const auto& cont_2_val = container_2.cb_type_get_prestige_factor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "prestige_factor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_peace_cost_factor)
			{
				const auto& cont_1_val = container_1.cb_type_get_peace_cost_factor(obj);
				const auto& cont_2_val = container_2.cb_type_get_peace_cost_factor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "peace_cost_factor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_penalty_factor)
			{
				const auto& cont_1_val = container_1.cb_type_get_penalty_factor(obj);
				const auto& cont_2_val = container_2.cb_type_get_penalty_factor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "penalty_factor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_break_truce_prestige_factor)
			{
				const auto& cont_1_val = container_1.cb_type_get_break_truce_prestige_factor(obj);
				const auto& cont_2_val = container_2.cb_type_get_break_truce_prestige_factor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "break_truce_prestige_factor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_break_truce_infamy_factor)
			{
				const auto& cont_1_val = container_1.cb_type_get_break_truce_infamy_factor(obj);
				const auto& cont_2_val = container_2.cb_type_get_break_truce_infamy_factor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "break_truce_infamy_factor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_break_truce_militancy_factor)
			{
				const auto& cont_1_val = container_1.cb_type_get_break_truce_militancy_factor(obj);
				const auto& cont_2_val = container_2.cb_type_get_break_truce_militancy_factor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "break_truce_militancy_factor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_good_relation_prestige_factor)
			{
				const auto& cont_1_val = container_1.cb_type_get_good_relation_prestige_factor(obj);
				const auto& cont_2_val = container_2.cb_type_get_good_relation_prestige_factor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "good_relation_prestige_factor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_good_relation_infamy_factor)
			{
				const auto& cont_1_val = container_1.cb_type_get_good_relation_infamy_factor(obj);
				const auto& cont_2_val = container_2.cb_type_get_good_relation_infamy_factor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "good_relation_infamy_factor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_good_relation_militancy_factor)
			{
				const auto& cont_1_val = container_1.cb_type_get_good_relation_militancy_factor(obj);
				const auto& cont_2_val = container_2.cb_type_get_good_relation_militancy_factor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "good_relation_militancy_factor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_construction_speed)
			{
				const auto& cont_1_val = container_1.cb_type_get_construction_speed(obj);
				const auto& cont_2_val = container_2.cb_type_get_construction_speed(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "construction_speed: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.cb_type_tws_battle_factor)
			{
				const auto& cont_1_val = container_1.cb_type_get_tws_battle_factor(obj);
				const auto& cont_2_val = container_2.cb_type_get_tws_battle_factor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "tws_battle_factor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.leader_trait)
	{
		report += std::string("LEADER_TRAIT") + "\n";
		if(!compare_values(container_1.leader_trait_size(), container_2.leader_trait_size()))
		{
			std::string cont_1_size = std::to_string(container_1.leader_trait_size());
			std::string cont_2_size = std::to_string(container_2.leader_trait_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.leader_trait_size(), container_2.leader_trait_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::leader_trait_id obj{dcon::leader_trait_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.leader_trait_name)
			{
				dcon::text_key cont_1_val = container_1.leader_trait_get_name(obj);
				dcon::text_key cont_2_val = container_2.leader_trait_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_trait_organisation)
			{
				const auto& cont_1_val = container_1.leader_trait_get_organisation(obj);
				const auto& cont_2_val = container_2.leader_trait_get_organisation(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "organisation: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_trait_morale)
			{
				const auto& cont_1_val = container_1.leader_trait_get_morale(obj);
				const auto& cont_2_val = container_2.leader_trait_get_morale(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "morale: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_trait_attack)
			{
				const auto& cont_1_val = container_1.leader_trait_get_attack(obj);
				const auto& cont_2_val = container_2.leader_trait_get_attack(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attack: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_trait_defense)
			{
				const auto& cont_1_val = container_1.leader_trait_get_defense(obj);
				const auto& cont_2_val = container_2.leader_trait_get_defense(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defense: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_trait_reconnaissance)
			{
				const auto& cont_1_val = container_1.leader_trait_get_reconnaissance(obj);
				const auto& cont_2_val = container_2.leader_trait_get_reconnaissance(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "reconnaissance: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_trait_speed)
			{
				const auto& cont_1_val = container_1.leader_trait_get_speed(obj);
				const auto& cont_2_val = container_2.leader_trait_get_speed(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "speed: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_trait_experience)
			{
				const auto& cont_1_val = container_1.leader_trait_get_experience(obj);
				const auto& cont_2_val = container_2.leader_trait_get_experience(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "experience: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_trait_reliability)
			{
				const auto& cont_1_val = container_1.leader_trait_get_reliability(obj);
				const auto& cont_2_val = container_2.leader_trait_get_reliability(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "reliability: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.pop_type)
	{
		report += std::string("POP_TYPE") + "\n";
		if(!compare_values(container_1.pop_type_size(), container_2.pop_type_size()))
		{
			std::string cont_1_size = std::to_string(container_1.pop_type_size());
			std::string cont_2_size = std::to_string(container_2.pop_type_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.pop_type_size(), container_2.pop_type_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::pop_type_id obj{dcon::pop_type_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.pop_type_name)
			{
				dcon::text_key cont_1_val = container_1.pop_type_get_name(obj);
				dcon::text_key cont_2_val = container_2.pop_type_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_sprite)
			{
				const auto& cont_1_val = container_1.pop_type_get_sprite(obj);
				const auto& cont_2_val = container_2.pop_type_get_sprite(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "sprite: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_color)
			{
				const auto& cont_1_val = container_1.pop_type_get_color(obj);
				const auto& cont_2_val = container_2.pop_type_get_color(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "color: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_strata)
			{
				const auto& cont_1_val = container_1.pop_type_get_strata(obj);
				const auto& cont_2_val = container_2.pop_type_get_strata(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "strata: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_state_capital_only)
			{
				const auto& cont_1_val = container_1.pop_type_get_state_capital_only(obj);
				const auto& cont_2_val = container_2.pop_type_get_state_capital_only(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "state_capital_only: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_voting_forbidden)
			{
				const auto& cont_1_val = container_1.pop_type_get_voting_forbidden(obj);
				const auto& cont_2_val = container_2.pop_type_get_voting_forbidden(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "voting_forbidden: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_is_paid_rgo_worker)
			{
				const auto& cont_1_val = container_1.pop_type_get_is_paid_rgo_worker(obj);
				const auto& cont_2_val = container_2.pop_type_get_is_paid_rgo_worker(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_paid_rgo_worker: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_everyday_needs_income_type)
			{
				const auto& cont_1_val = container_1.pop_type_get_everyday_needs_income_type(obj);
				const auto& cont_2_val = container_2.pop_type_get_everyday_needs_income_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "everyday_needs_income_type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_luxury_needs_income_type)
			{
				const auto& cont_1_val = container_1.pop_type_get_luxury_needs_income_type(obj);
				const auto& cont_2_val = container_2.pop_type_get_luxury_needs_income_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "luxury_needs_income_type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_life_needs_income_type)
			{
				const auto& cont_1_val = container_1.pop_type_get_life_needs_income_type(obj);
				const auto& cont_2_val = container_2.pop_type_get_life_needs_income_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "life_needs_income_type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_research_optimum)
			{
				const auto& cont_1_val = container_1.pop_type_get_research_optimum(obj);
				const auto& cont_2_val = container_2.pop_type_get_research_optimum(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "research_optimum: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_research_points)
			{
				const auto& cont_1_val = container_1.pop_type_get_research_points(obj);
				const auto& cont_2_val = container_2.pop_type_get_research_points(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "research_points: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_has_unemployment)
			{
				const auto& cont_1_val = container_1.pop_type_get_has_unemployment(obj);
				const auto& cont_2_val = container_2.pop_type_get_has_unemployment(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "has_unemployment: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_migration_target)
			{
				dcon::value_modifier_key cont_1_val = container_1.pop_type_get_migration_target(obj);
				dcon::value_modifier_key cont_2_val = container_2.pop_type_get_migration_target(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "migration_target: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_migration_target_fn)
			{
				const auto& cont_1_val = container_1.pop_type_get_migration_target_fn(obj);
				const auto& cont_2_val = container_2.pop_type_get_migration_target_fn(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "migration_target_fn: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_country_migration_target)
			{
				dcon::value_modifier_key cont_1_val = container_1.pop_type_get_country_migration_target(obj);
				dcon::value_modifier_key cont_2_val = container_2.pop_type_get_country_migration_target(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "country_migration_target: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_country_migration_target_fn)
			{
				const auto& cont_1_val = container_1.pop_type_get_country_migration_target_fn(obj);
				const auto& cont_2_val = container_2.pop_type_get_country_migration_target_fn(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "country_migration_target_fn: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_type_issues)
			{
				if(!compare_values(container_1.pop_type_get_issues_size(), container_2.pop_type_get_issues_size()))
				{
					std::string cont_1_size = std::to_string(container_1.pop_type_get_issues_size());
					std::string cont_2_size = std::to_string(container_2.pop_type_get_issues_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: issues, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.pop_type_get_issues_size(), container_2.pop_type_get_issues_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::issue_option_id arr_index{dcon::issue_option_id::value_base_t(j)};
					dcon::value_modifier_key cont_1_arr_val = container_1.pop_type_get_issues(obj, arr_index);
					dcon::value_modifier_key cont_2_arr_val = container_2.pop_type_get_issues(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "issues, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.pop_type_issues_fns)
			{
				if(!compare_values(container_1.pop_type_get_issues_fns_size(), container_2.pop_type_get_issues_fns_size()))
				{
					std::string cont_1_size = std::to_string(container_1.pop_type_get_issues_fns_size());
					std::string cont_2_size = std::to_string(container_2.pop_type_get_issues_fns_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: issues_fns, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.pop_type_get_issues_fns_size(), container_2.pop_type_get_issues_fns_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::issue_option_id arr_index{dcon::issue_option_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.pop_type_get_issues_fns(obj, arr_index);
					const auto& cont_2_arr_val = container_2.pop_type_get_issues_fns(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "issues_fns, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.pop_type_ideology)
			{
				if(!compare_values(container_1.pop_type_get_ideology_size(), container_2.pop_type_get_ideology_size()))
				{
					std::string cont_1_size = std::to_string(container_1.pop_type_get_ideology_size());
					std::string cont_2_size = std::to_string(container_2.pop_type_get_ideology_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: ideology, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.pop_type_get_ideology_size(), container_2.pop_type_get_ideology_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::ideology_id arr_index{dcon::ideology_id::value_base_t(j)};
					dcon::value_modifier_key cont_1_arr_val = container_1.pop_type_get_ideology(obj, arr_index);
					dcon::value_modifier_key cont_2_arr_val = container_2.pop_type_get_ideology(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ideology, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.pop_type_ideology_fns)
			{
				if(!compare_values(container_1.pop_type_get_ideology_fns_size(), container_2.pop_type_get_ideology_fns_size()))
				{
					std::string cont_1_size = std::to_string(container_1.pop_type_get_ideology_fns_size());
					std::string cont_2_size = std::to_string(container_2.pop_type_get_ideology_fns_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: ideology_fns, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.pop_type_get_ideology_fns_size(), container_2.pop_type_get_ideology_fns_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::ideology_id arr_index{dcon::ideology_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.pop_type_get_ideology_fns(obj, arr_index);
					const auto& cont_2_arr_val = container_2.pop_type_get_ideology_fns(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ideology_fns, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.pop_type_promotion)
			{
				if(!compare_values(container_1.pop_type_get_promotion_size(), container_2.pop_type_get_promotion_size()))
				{
					std::string cont_1_size = std::to_string(container_1.pop_type_get_promotion_size());
					std::string cont_2_size = std::to_string(container_2.pop_type_get_promotion_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: promotion, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.pop_type_get_promotion_size(), container_2.pop_type_get_promotion_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					dcon::value_modifier_key cont_1_arr_val = container_1.pop_type_get_promotion(obj, arr_index);
					dcon::value_modifier_key cont_2_arr_val = container_2.pop_type_get_promotion(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "promotion, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.pop_type_promotion_fns)
			{
				if(!compare_values(container_1.pop_type_get_promotion_fns_size(), container_2.pop_type_get_promotion_fns_size()))
				{
					std::string cont_1_size = std::to_string(container_1.pop_type_get_promotion_fns_size());
					std::string cont_2_size = std::to_string(container_2.pop_type_get_promotion_fns_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: promotion_fns, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.pop_type_get_promotion_fns_size(), container_2.pop_type_get_promotion_fns_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.pop_type_get_promotion_fns(obj, arr_index);
					const auto& cont_2_arr_val = container_2.pop_type_get_promotion_fns(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "promotion_fns, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.pop_type_life_needs)
			{
				if(!compare_values(container_1.pop_type_get_life_needs_size(), container_2.pop_type_get_life_needs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.pop_type_get_life_needs_size());
					std::string cont_2_size = std::to_string(container_2.pop_type_get_life_needs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: life_needs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.pop_type_get_life_needs_size(), container_2.pop_type_get_life_needs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.pop_type_get_life_needs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.pop_type_get_life_needs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "life_needs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.pop_type_everyday_needs)
			{
				if(!compare_values(container_1.pop_type_get_everyday_needs_size(), container_2.pop_type_get_everyday_needs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.pop_type_get_everyday_needs_size());
					std::string cont_2_size = std::to_string(container_2.pop_type_get_everyday_needs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: everyday_needs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.pop_type_get_everyday_needs_size(), container_2.pop_type_get_everyday_needs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.pop_type_get_everyday_needs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.pop_type_get_everyday_needs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "everyday_needs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.pop_type_luxury_needs)
			{
				if(!compare_values(container_1.pop_type_get_luxury_needs_size(), container_2.pop_type_get_luxury_needs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.pop_type_get_luxury_needs_size());
					std::string cont_2_size = std::to_string(container_2.pop_type_get_luxury_needs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: luxury_needs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.pop_type_get_luxury_needs_size(), container_2.pop_type_get_luxury_needs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.pop_type_get_luxury_needs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.pop_type_get_luxury_needs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "luxury_needs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.rebel_type)
	{
		report += std::string("REBEL_TYPE") + "\n";
		if(!compare_values(container_1.rebel_type_size(), container_2.rebel_type_size()))
		{
			std::string cont_1_size = std::to_string(container_1.rebel_type_size());
			std::string cont_2_size = std::to_string(container_2.rebel_type_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.rebel_type_size(), container_2.rebel_type_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::rebel_type_id obj{dcon::rebel_type_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.rebel_type_name)
			{
				dcon::text_key cont_1_val = container_1.rebel_type_get_name(obj);
				dcon::text_key cont_2_val = container_2.rebel_type_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_title)
			{
				dcon::text_key cont_1_val = container_1.rebel_type_get_title(obj);
				dcon::text_key cont_2_val = container_2.rebel_type_get_title(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "title: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_description)
			{
				dcon::text_key cont_1_val = container_1.rebel_type_get_description(obj);
				dcon::text_key cont_2_val = container_2.rebel_type_get_description(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "description: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_army_name)
			{
				dcon::text_key cont_1_val = container_1.rebel_type_get_army_name(obj);
				dcon::text_key cont_2_val = container_2.rebel_type_get_army_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "army_name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_icon)
			{
				const auto& cont_1_val = container_1.rebel_type_get_icon(obj);
				const auto& cont_2_val = container_2.rebel_type_get_icon(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "icon: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_break_alliance_on_win)
			{
				const auto& cont_1_val = container_1.rebel_type_get_break_alliance_on_win(obj);
				const auto& cont_2_val = container_2.rebel_type_get_break_alliance_on_win(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "break_alliance_on_win: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_area)
			{
				const auto& cont_1_val = container_1.rebel_type_get_area(obj);
				const auto& cont_2_val = container_2.rebel_type_get_area(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "area: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_defection)
			{
				const auto& cont_1_val = container_1.rebel_type_get_defection(obj);
				const auto& cont_2_val = container_2.rebel_type_get_defection(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defection: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_independence)
			{
				const auto& cont_1_val = container_1.rebel_type_get_independence(obj);
				const auto& cont_2_val = container_2.rebel_type_get_independence(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "independence: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_ideology)
			{
				dcon::ideology_id cont_1_val = container_1.rebel_type_get_ideology(obj);
				dcon::ideology_id cont_2_val = container_2.rebel_type_get_ideology(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ideology: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_occupation_multiplier)
			{
				const auto& cont_1_val = container_1.rebel_type_get_occupation_multiplier(obj);
				const auto& cont_2_val = container_2.rebel_type_get_occupation_multiplier(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "occupation_multiplier: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_defect_delay)
			{
				const auto& cont_1_val = container_1.rebel_type_get_defect_delay(obj);
				const auto& cont_2_val = container_2.rebel_type_get_defect_delay(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defect_delay: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_culture_restriction)
			{
				const auto& cont_1_val = container_1.rebel_type_get_culture_restriction(obj);
				const auto& cont_2_val = container_2.rebel_type_get_culture_restriction(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "culture_restriction: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_ideology_restriction)
			{
				const auto& cont_1_val = container_1.rebel_type_get_ideology_restriction(obj);
				const auto& cont_2_val = container_2.rebel_type_get_ideology_restriction(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ideology_restriction: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_culture_group_restriction)
			{
				const auto& cont_1_val = container_1.rebel_type_get_culture_group_restriction(obj);
				const auto& cont_2_val = container_2.rebel_type_get_culture_group_restriction(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "culture_group_restriction: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_will_rise)
			{
				dcon::value_modifier_key cont_1_val = container_1.rebel_type_get_will_rise(obj);
				dcon::value_modifier_key cont_2_val = container_2.rebel_type_get_will_rise(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "will_rise: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_spawn_chance)
			{
				dcon::value_modifier_key cont_1_val = container_1.rebel_type_get_spawn_chance(obj);
				dcon::value_modifier_key cont_2_val = container_2.rebel_type_get_spawn_chance(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "spawn_chance: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_movement_evaluation)
			{
				dcon::value_modifier_key cont_1_val = container_1.rebel_type_get_movement_evaluation(obj);
				dcon::value_modifier_key cont_2_val = container_2.rebel_type_get_movement_evaluation(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "movement_evaluation: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_siege_won_trigger)
			{
				dcon::trigger_key cont_1_val = container_1.rebel_type_get_siege_won_trigger(obj);
				dcon::trigger_key cont_2_val = container_2.rebel_type_get_siege_won_trigger(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "siege_won_trigger: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_siege_won_effect)
			{
				dcon::effect_key cont_1_val = container_1.rebel_type_get_siege_won_effect(obj);
				dcon::effect_key cont_2_val = container_2.rebel_type_get_siege_won_effect(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "siege_won_effect: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_demands_enforced_trigger)
			{
				dcon::trigger_key cont_1_val = container_1.rebel_type_get_demands_enforced_trigger(obj);
				dcon::trigger_key cont_2_val = container_2.rebel_type_get_demands_enforced_trigger(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "demands_enforced_trigger: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_demands_enforced_effect)
			{
				dcon::effect_key cont_1_val = container_1.rebel_type_get_demands_enforced_effect(obj);
				dcon::effect_key cont_2_val = container_2.rebel_type_get_demands_enforced_effect(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "demands_enforced_effect: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_type_government_change)
			{
				if(!compare_values(container_1.rebel_type_get_government_change_size(), container_2.rebel_type_get_government_change_size()))
				{
					std::string cont_1_size = std::to_string(container_1.rebel_type_get_government_change_size());
					std::string cont_2_size = std::to_string(container_2.rebel_type_get_government_change_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: government_change, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.rebel_type_get_government_change_size(), container_2.rebel_type_get_government_change_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(j)};
					dcon::government_type_id cont_1_arr_val = container_1.rebel_type_get_government_change(obj, arr_index);
					dcon::government_type_id cont_2_arr_val = container_2.rebel_type_get_government_change(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "government_change, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.government_type)
	{
		report += std::string("GOVERNMENT_TYPE") + "\n";
		if(!compare_values(container_1.government_type_size(), container_2.government_type_size()))
		{
			std::string cont_1_size = std::to_string(container_1.government_type_size());
			std::string cont_2_size = std::to_string(container_2.government_type_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.government_type_size(), container_2.government_type_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::government_type_id obj{dcon::government_type_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.government_type_name)
			{
				dcon::text_key cont_1_val = container_1.government_type_get_name(obj);
				dcon::text_key cont_2_val = container_2.government_type_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.government_type_desc)
			{
				dcon::text_key cont_1_val = container_1.government_type_get_desc(obj);
				dcon::text_key cont_2_val = container_2.government_type_get_desc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "desc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.government_type_ruler_name)
			{
				dcon::text_key cont_1_val = container_1.government_type_get_ruler_name(obj);
				dcon::text_key cont_2_val = container_2.government_type_get_ruler_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ruler_name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.government_type_ideologies_allowed)
			{
				const auto& cont_1_val = container_1.government_type_get_ideologies_allowed(obj);
				const auto& cont_2_val = container_2.government_type_get_ideologies_allowed(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ideologies_allowed: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.government_type_has_elections)
			{
				const auto& cont_1_val = container_1.government_type_get_has_elections(obj);
				const auto& cont_2_val = container_2.government_type_get_has_elections(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "has_elections: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.government_type_can_appoint_ruling_party)
			{
				const auto& cont_1_val = container_1.government_type_get_can_appoint_ruling_party(obj);
				const auto& cont_2_val = container_2.government_type_get_can_appoint_ruling_party(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "can_appoint_ruling_party: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.government_type_duration)
			{
				const auto& cont_1_val = container_1.government_type_get_duration(obj);
				const auto& cont_2_val = container_2.government_type_get_duration(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "duration: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.government_type_flag)
			{
				dcon::government_flag_id cont_1_val = container_1.government_type_get_flag(obj);
				dcon::government_flag_id cont_2_val = container_2.government_type_get_flag(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "flag: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.province)
	{
		report += std::string("PROVINCE") + "\n";
		if(!compare_values(container_1.province_size(), container_2.province_size()))
		{
			std::string cont_1_size = std::to_string(container_1.province_size());
			std::string cont_2_size = std::to_string(container_2.province_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.province_size(), container_2.province_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::province_id obj{dcon::province_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.province_provid)
			{
				const auto& cont_1_val = container_1.province_get_provid(obj);
				const auto& cont_2_val = container_2.province_get_provid(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "provid: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_name)
			{
				dcon::text_key cont_1_val = container_1.province_get_name(obj);
				dcon::text_key cont_2_val = container_2.province_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_continent)
			{
				dcon::modifier_id cont_1_val = container_1.province_get_continent(obj);
				dcon::modifier_id cont_2_val = container_2.province_get_continent(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "continent: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_climate)
			{
				dcon::modifier_id cont_1_val = container_1.province_get_climate(obj);
				dcon::modifier_id cont_2_val = container_2.province_get_climate(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "climate: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_terrain)
			{
				dcon::modifier_id cont_1_val = container_1.province_get_terrain(obj);
				dcon::modifier_id cont_2_val = container_2.province_get_terrain(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "terrain: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_life_rating)
			{
				const auto& cont_1_val = container_1.province_get_life_rating(obj);
				const auto& cont_2_val = container_2.province_get_life_rating(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "life_rating: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_rgo)
			{
				dcon::commodity_id cont_1_val = container_1.province_get_rgo(obj);
				dcon::commodity_id cont_2_val = container_2.province_get_rgo(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_building_level)
			{
				if(!compare_values(container_1.province_get_building_level_size(), container_2.province_get_building_level_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_building_level_size());
					std::string cont_2_size = std::to_string(container_2.province_get_building_level_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: building_level, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_building_level_size(), container_2.province_get_building_level_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_building_level(obj, uint8_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_building_level(obj, uint8_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "building_level, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_is_slave)
			{
				const auto& cont_1_val = container_1.province_get_is_slave(obj);
				const auto& cont_2_val = container_2.province_get_is_slave(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_slave: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_naval_rally_point)
			{
				const auto& cont_1_val = container_1.province_get_naval_rally_point(obj);
				const auto& cont_2_val = container_2.province_get_naval_rally_point(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "naval_rally_point: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_land_rally_point)
			{
				const auto& cont_1_val = container_1.province_get_land_rally_point(obj);
				const auto& cont_2_val = container_2.province_get_land_rally_point(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "land_rally_point: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_is_colonial)
			{
				const auto& cont_1_val = container_1.province_get_is_colonial(obj);
				const auto& cont_2_val = container_2.province_get_is_colonial(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_colonial: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_has_major_river)
			{
				const auto& cont_1_val = container_1.province_get_has_major_river(obj);
				const auto& cont_2_val = container_2.province_get_has_major_river(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "has_major_river: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_has_minor_river)
			{
				const auto& cont_1_val = container_1.province_get_has_minor_river(obj);
				const auto& cont_2_val = container_2.province_get_has_minor_river(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "has_minor_river: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_crime)
			{
				dcon::crime_id cont_1_val = container_1.province_get_crime(obj);
				dcon::crime_id cont_2_val = container_2.province_get_crime(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "crime: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_mid_point)
			{
				const auto& cont_1_val = container_1.province_get_mid_point(obj);
				const auto& cont_2_val = container_2.province_get_mid_point(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "mid_point: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_mid_point_b)
			{
				const auto& cont_1_val = container_1.province_get_mid_point_b(obj);
				const auto& cont_2_val = container_2.province_get_mid_point_b(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "mid_point_b: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_port_to)
			{
				dcon::province_id cont_1_val = container_1.province_get_port_to(obj);
				dcon::province_id cont_2_val = container_2.province_get_port_to(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "port_to: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_party_loyalty)
			{
				if(!compare_values(container_1.province_get_party_loyalty_size(), container_2.province_get_party_loyalty_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_party_loyalty_size());
					std::string cont_2_size = std::to_string(container_2.province_get_party_loyalty_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: party_loyalty, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_party_loyalty_size(), container_2.province_get_party_loyalty_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::ideology_id arr_index{dcon::ideology_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_party_loyalty(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_party_loyalty(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "party_loyalty, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_modifier_values)
			{
				if(!compare_values(container_1.province_get_modifier_values_size(), container_2.province_get_modifier_values_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_modifier_values_size());
					std::string cont_2_size = std::to_string(container_2.province_get_modifier_values_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: modifier_values, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_modifier_values_size(), container_2.province_get_modifier_values_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::provincial_modifier_value arr_index{dcon::provincial_modifier_value::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_modifier_values(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_modifier_values(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "modifier_values, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_current_modifiers)
			{
				auto vec_1 = container_1.province_get_current_modifiers(obj);
				auto vec_2 = container_2.province_get_current_modifiers(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: current_modifiers, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "current_modifiers, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_nationalism)
			{
				const auto& cont_1_val = container_1.province_get_nationalism(obj);
				const auto& cont_2_val = container_2.province_get_nationalism(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "nationalism: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_connected_region_id)
			{
				const auto& cont_1_val = container_1.province_get_connected_region_id(obj);
				const auto& cont_2_val = container_2.province_get_connected_region_id(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "connected_region_id: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_connected_coast_id)
			{
				const auto& cont_1_val = container_1.province_get_connected_coast_id(obj);
				const auto& cont_2_val = container_2.province_get_connected_coast_id(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "connected_coast_id: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_state_membership)
			{
				dcon::state_instance_id cont_1_val = container_1.province_get_state_membership(obj);
				dcon::state_instance_id cont_2_val = container_2.province_get_state_membership(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "state_membership: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_is_coast)
			{
				const auto& cont_1_val = container_1.province_get_is_coast(obj);
				const auto& cont_2_val = container_2.province_get_is_coast(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_coast: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_demographics)
			{
				if(!compare_values(container_1.province_get_demographics_size(), container_2.province_get_demographics_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_demographics_size());
					std::string cont_2_size = std::to_string(container_2.province_get_demographics_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: demographics, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_demographics_size(), container_2.province_get_demographics_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_demographics(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_demographics(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "demographics, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_demographics_alt)
			{
				if(!compare_values(container_1.province_get_demographics_alt_size(), container_2.province_get_demographics_alt_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_demographics_alt_size());
					std::string cont_2_size = std::to_string(container_2.province_get_demographics_alt_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: demographics_alt, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_demographics_alt_size(), container_2.province_get_demographics_alt_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_demographics_alt(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_demographics_alt(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "demographics_alt, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_dominant_culture)
			{
				dcon::culture_id cont_1_val = container_1.province_get_dominant_culture(obj);
				dcon::culture_id cont_2_val = container_2.province_get_dominant_culture(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_culture: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_dominant_accepted_culture)
			{
				dcon::culture_id cont_1_val = container_1.province_get_dominant_accepted_culture(obj);
				dcon::culture_id cont_2_val = container_2.province_get_dominant_accepted_culture(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_accepted_culture: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_dominant_religion)
			{
				dcon::religion_id cont_1_val = container_1.province_get_dominant_religion(obj);
				dcon::religion_id cont_2_val = container_2.province_get_dominant_religion(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_religion: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_dominant_ideology)
			{
				dcon::ideology_id cont_1_val = container_1.province_get_dominant_ideology(obj);
				dcon::ideology_id cont_2_val = container_2.province_get_dominant_ideology(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_ideology: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_dominant_issue_option)
			{
				dcon::issue_option_id cont_1_val = container_1.province_get_dominant_issue_option(obj);
				dcon::issue_option_id cont_2_val = container_2.province_get_dominant_issue_option(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_issue_option: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_last_control_change)
			{
				const auto& cont_1_val = container_1.province_get_last_control_change(obj);
				const auto& cont_2_val = container_2.province_get_last_control_change(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "last_control_change: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_last_immigration)
			{
				const auto& cont_1_val = container_1.province_get_last_immigration(obj);
				const auto& cont_2_val = container_2.province_get_last_immigration(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "last_immigration: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_is_owner_core)
			{
				const auto& cont_1_val = container_1.province_get_is_owner_core(obj);
				const auto& cont_2_val = container_2.province_get_is_owner_core(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_owner_core: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_rgo_base_size)
			{
				const auto& cont_1_val = container_1.province_get_rgo_base_size(obj);
				const auto& cont_2_val = container_2.province_get_rgo_base_size(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_base_size: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_rgo_was_set_during_scenario_creation)
			{
				const auto& cont_1_val = container_1.province_get_rgo_was_set_during_scenario_creation(obj);
				const auto& cont_2_val = container_2.province_get_rgo_was_set_during_scenario_creation(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_was_set_during_scenario_creation: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_rgo_size)
			{
				if(!compare_values(container_1.province_get_rgo_size_size(), container_2.province_get_rgo_size_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_rgo_size_size());
					std::string cont_2_size = std::to_string(container_2.province_get_rgo_size_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rgo_size, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_rgo_size_size(), container_2.province_get_rgo_size_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_rgo_size(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_rgo_size(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_size, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_rgo_max_size)
			{
				if(!compare_values(container_1.province_get_rgo_max_size_size(), container_2.province_get_rgo_max_size_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_rgo_max_size_size());
					std::string cont_2_size = std::to_string(container_2.province_get_rgo_max_size_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rgo_max_size, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_rgo_max_size_size(), container_2.province_get_rgo_max_size_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_rgo_max_size(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_rgo_max_size(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_max_size, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_rgo_potential)
			{
				if(!compare_values(container_1.province_get_rgo_potential_size(), container_2.province_get_rgo_potential_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_rgo_potential_size());
					std::string cont_2_size = std::to_string(container_2.province_get_rgo_potential_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rgo_potential, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_rgo_potential_size(), container_2.province_get_rgo_potential_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_rgo_potential(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_rgo_potential(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_potential, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_rgo_efficiency)
			{
				if(!compare_values(container_1.province_get_rgo_efficiency_size(), container_2.province_get_rgo_efficiency_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_rgo_efficiency_size());
					std::string cont_2_size = std::to_string(container_2.province_get_rgo_efficiency_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rgo_efficiency, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_rgo_efficiency_size(), container_2.province_get_rgo_efficiency_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_rgo_efficiency(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_rgo_efficiency(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_efficiency, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_rgo_max_efficiency)
			{
				if(!compare_values(container_1.province_get_rgo_max_efficiency_size(), container_2.province_get_rgo_max_efficiency_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_rgo_max_efficiency_size());
					std::string cont_2_size = std::to_string(container_2.province_get_rgo_max_efficiency_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rgo_max_efficiency, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_rgo_max_efficiency_size(), container_2.province_get_rgo_max_efficiency_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_rgo_max_efficiency(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_rgo_max_efficiency(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_max_efficiency, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_rgo_base_efficiency)
			{
				if(!compare_values(container_1.province_get_rgo_base_efficiency_size(), container_2.province_get_rgo_base_efficiency_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_rgo_base_efficiency_size());
					std::string cont_2_size = std::to_string(container_2.province_get_rgo_base_efficiency_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rgo_base_efficiency, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_rgo_base_efficiency_size(), container_2.province_get_rgo_base_efficiency_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_rgo_base_efficiency(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_rgo_base_efficiency(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_base_efficiency, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_rgo_target_employment)
			{
				if(!compare_values(container_1.province_get_rgo_target_employment_size(), container_2.province_get_rgo_target_employment_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_rgo_target_employment_size());
					std::string cont_2_size = std::to_string(container_2.province_get_rgo_target_employment_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rgo_target_employment, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_rgo_target_employment_size(), container_2.province_get_rgo_target_employment_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_rgo_target_employment(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_rgo_target_employment(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_target_employment, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_rgo_output)
			{
				if(!compare_values(container_1.province_get_rgo_output_size(), container_2.province_get_rgo_output_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_rgo_output_size());
					std::string cont_2_size = std::to_string(container_2.province_get_rgo_output_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rgo_output, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_rgo_output_size(), container_2.province_get_rgo_output_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_rgo_output(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_rgo_output(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_output, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_rgo_output_per_worker)
			{
				if(!compare_values(container_1.province_get_rgo_output_per_worker_size(), container_2.province_get_rgo_output_per_worker_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_rgo_output_per_worker_size());
					std::string cont_2_size = std::to_string(container_2.province_get_rgo_output_per_worker_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rgo_output_per_worker, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_rgo_output_per_worker_size(), container_2.province_get_rgo_output_per_worker_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_rgo_output_per_worker(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_rgo_output_per_worker(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_output_per_worker, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_factory_limit_was_set_during_scenario_creation)
			{
				const auto& cont_1_val = container_1.province_get_factory_limit_was_set_during_scenario_creation(obj);
				const auto& cont_2_val = container_2.province_get_factory_limit_was_set_during_scenario_creation(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_limit_was_set_during_scenario_creation: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_factory_max_size)
			{
				if(!compare_values(container_1.province_get_factory_max_size_size(), container_2.province_get_factory_max_size_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_factory_max_size_size());
					std::string cont_2_size = std::to_string(container_2.province_get_factory_max_size_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: factory_max_size, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_factory_max_size_size(), container_2.province_get_factory_max_size_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_factory_max_size(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_factory_max_size(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_max_size, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_rgo_profit)
			{
				const auto& cont_1_val = container_1.province_get_rgo_profit(obj);
				const auto& cont_2_val = container_2.province_get_rgo_profit(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_profit: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_artisan_score)
			{
				if(!compare_values(container_1.province_get_artisan_score_size(), container_2.province_get_artisan_score_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_artisan_score_size());
					std::string cont_2_size = std::to_string(container_2.province_get_artisan_score_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: artisan_score, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_artisan_score_size(), container_2.province_get_artisan_score_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_artisan_score(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_artisan_score(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "artisan_score, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_artisan_actual_production)
			{
				if(!compare_values(container_1.province_get_artisan_actual_production_size(), container_2.province_get_artisan_actual_production_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_artisan_actual_production_size());
					std::string cont_2_size = std::to_string(container_2.province_get_artisan_actual_production_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: artisan_actual_production, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_artisan_actual_production_size(), container_2.province_get_artisan_actual_production_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.province_get_artisan_actual_production(obj, arr_index);
					const auto& cont_2_arr_val = container_2.province_get_artisan_actual_production(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "artisan_actual_production, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_artisan_profit)
			{
				const auto& cont_1_val = container_1.province_get_artisan_profit(obj);
				const auto& cont_2_val = container_2.province_get_artisan_profit(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "artisan_profit: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_artisan_bank)
			{
				const auto& cont_1_val = container_1.province_get_artisan_bank(obj);
				const auto& cont_2_val = container_2.province_get_artisan_bank(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "artisan_bank: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_rgo_bank)
			{
				const auto& cont_1_val = container_1.province_get_rgo_bank(obj);
				const auto& cont_2_val = container_2.province_get_rgo_bank(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_bank: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_factory_bank)
			{
				const auto& cont_1_val = container_1.province_get_factory_bank(obj);
				const auto& cont_2_val = container_2.province_get_factory_bank(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_bank: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_subsistence_score)
			{
				const auto& cont_1_val = container_1.province_get_subsistence_score(obj);
				const auto& cont_2_val = container_2.province_get_subsistence_score(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "subsistence_score: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_landowners_share)
			{
				const auto& cont_1_val = container_1.province_get_landowners_share(obj);
				const auto& cont_2_val = container_2.province_get_landowners_share(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "landowners_share: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_capitalists_share)
			{
				const auto& cont_1_val = container_1.province_get_capitalists_share(obj);
				const auto& cont_2_val = container_2.province_get_capitalists_share(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "capitalists_share: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_subsistence_employment)
			{
				const auto& cont_1_val = container_1.province_get_subsistence_employment(obj);
				const auto& cont_2_val = container_2.province_get_subsistence_employment(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "subsistence_employment: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_tax_base_poor)
			{
				const auto& cont_1_val = container_1.province_get_tax_base_poor(obj);
				const auto& cont_2_val = container_2.province_get_tax_base_poor(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "tax_base_poor: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_tax_base_middle)
			{
				const auto& cont_1_val = container_1.province_get_tax_base_middle(obj);
				const auto& cont_2_val = container_2.province_get_tax_base_middle(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "tax_base_middle: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_tax_base_rich)
			{
				const auto& cont_1_val = container_1.province_get_tax_base_rich(obj);
				const auto& cont_2_val = container_2.province_get_tax_base_rich(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "tax_base_rich: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_daily_net_migration)
			{
				const auto& cont_1_val = container_1.province_get_daily_net_migration(obj);
				const auto& cont_2_val = container_2.province_get_daily_net_migration(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "daily_net_migration: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_daily_net_immigration)
			{
				const auto& cont_1_val = container_1.province_get_daily_net_immigration(obj);
				const auto& cont_2_val = container_2.province_get_daily_net_immigration(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "daily_net_immigration: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_siege_progress)
			{
				const auto& cont_1_val = container_1.province_get_siege_progress(obj);
				const auto& cont_2_val = container_2.province_get_siege_progress(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "siege_progress: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_is_blockaded)
			{
				const auto& cont_1_val = container_1.province_get_is_blockaded(obj);
				const auto& cont_2_val = container_2.province_get_is_blockaded(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_blockaded: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_former_controller)
			{
				dcon::nation_id cont_1_val = container_1.province_get_former_controller(obj);
				dcon::nation_id cont_2_val = container_2.province_get_former_controller(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "former_controller: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_former_rebel_controller)
			{
				dcon::rebel_faction_id cont_1_val = container_1.province_get_former_rebel_controller(obj);
				dcon::rebel_faction_id cont_2_val = container_2.province_get_former_rebel_controller(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "former_rebel_controller: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_advanced_province_building_national_size)
			{
				if(!compare_values(container_1.province_get_advanced_province_building_national_size_size(), container_2.province_get_advanced_province_building_national_size_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_advanced_province_building_national_size_size());
					std::string cont_2_size = std::to_string(container_2.province_get_advanced_province_building_national_size_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: advanced_province_building_national_size, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_advanced_province_building_national_size_size(), container_2.province_get_advanced_province_building_national_size_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_advanced_province_building_national_size(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_advanced_province_building_national_size(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "advanced_province_building_national_size, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_advanced_province_building_max_national_size)
			{
				if(!compare_values(container_1.province_get_advanced_province_building_max_national_size_size(), container_2.province_get_advanced_province_building_max_national_size_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_advanced_province_building_max_national_size_size());
					std::string cont_2_size = std::to_string(container_2.province_get_advanced_province_building_max_national_size_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: advanced_province_building_max_national_size, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_advanced_province_building_max_national_size_size(), container_2.province_get_advanced_province_building_max_national_size_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_advanced_province_building_max_national_size(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_advanced_province_building_max_national_size(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "advanced_province_building_max_national_size, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_advanced_province_building_private_size)
			{
				if(!compare_values(container_1.province_get_advanced_province_building_private_size_size(), container_2.province_get_advanced_province_building_private_size_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_advanced_province_building_private_size_size());
					std::string cont_2_size = std::to_string(container_2.province_get_advanced_province_building_private_size_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: advanced_province_building_private_size, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_advanced_province_building_private_size_size(), container_2.province_get_advanced_province_building_private_size_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_advanced_province_building_private_size(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_advanced_province_building_private_size(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "advanced_province_building_private_size, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_advanced_province_building_private_savings)
			{
				if(!compare_values(container_1.province_get_advanced_province_building_private_savings_size(), container_2.province_get_advanced_province_building_private_savings_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_advanced_province_building_private_savings_size());
					std::string cont_2_size = std::to_string(container_2.province_get_advanced_province_building_private_savings_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: advanced_province_building_private_savings, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_advanced_province_building_private_savings_size(), container_2.province_get_advanced_province_building_private_savings_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_advanced_province_building_private_savings(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_advanced_province_building_private_savings(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "advanced_province_building_private_savings, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_advanced_province_building_max_private_size)
			{
				if(!compare_values(container_1.province_get_advanced_province_building_max_private_size_size(), container_2.province_get_advanced_province_building_max_private_size_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_advanced_province_building_max_private_size_size());
					std::string cont_2_size = std::to_string(container_2.province_get_advanced_province_building_max_private_size_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: advanced_province_building_max_private_size, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_advanced_province_building_max_private_size_size(), container_2.province_get_advanced_province_building_max_private_size_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_advanced_province_building_max_private_size(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_advanced_province_building_max_private_size(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "advanced_province_building_max_private_size, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_advanced_province_building_private_output)
			{
				if(!compare_values(container_1.province_get_advanced_province_building_private_output_size(), container_2.province_get_advanced_province_building_private_output_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_advanced_province_building_private_output_size());
					std::string cont_2_size = std::to_string(container_2.province_get_advanced_province_building_private_output_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: advanced_province_building_private_output, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_advanced_province_building_private_output_size(), container_2.province_get_advanced_province_building_private_output_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_advanced_province_building_private_output(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_advanced_province_building_private_output(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "advanced_province_building_private_output, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_service_price)
			{
				if(!compare_values(container_1.province_get_service_price_size(), container_2.province_get_service_price_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_service_price_size());
					std::string cont_2_size = std::to_string(container_2.province_get_service_price_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: service_price, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_service_price_size(), container_2.province_get_service_price_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_service_price(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_service_price(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "service_price, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_service_supply_private)
			{
				if(!compare_values(container_1.province_get_service_supply_private_size(), container_2.province_get_service_supply_private_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_service_supply_private_size());
					std::string cont_2_size = std::to_string(container_2.province_get_service_supply_private_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: service_supply_private, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_service_supply_private_size(), container_2.province_get_service_supply_private_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_service_supply_private(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_service_supply_private(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "service_supply_private, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_service_supply_public)
			{
				if(!compare_values(container_1.province_get_service_supply_public_size(), container_2.province_get_service_supply_public_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_service_supply_public_size());
					std::string cont_2_size = std::to_string(container_2.province_get_service_supply_public_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: service_supply_public, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_service_supply_public_size(), container_2.province_get_service_supply_public_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_service_supply_public(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_service_supply_public(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "service_supply_public, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_service_demand_allowed_public_supply)
			{
				if(!compare_values(container_1.province_get_service_demand_allowed_public_supply_size(), container_2.province_get_service_demand_allowed_public_supply_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_service_demand_allowed_public_supply_size());
					std::string cont_2_size = std::to_string(container_2.province_get_service_demand_allowed_public_supply_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: service_demand_allowed_public_supply, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_service_demand_allowed_public_supply_size(), container_2.province_get_service_demand_allowed_public_supply_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_service_demand_allowed_public_supply(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_service_demand_allowed_public_supply(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "service_demand_allowed_public_supply, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_service_demand_forbidden_public_supply)
			{
				if(!compare_values(container_1.province_get_service_demand_forbidden_public_supply_size(), container_2.province_get_service_demand_forbidden_public_supply_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_service_demand_forbidden_public_supply_size());
					std::string cont_2_size = std::to_string(container_2.province_get_service_demand_forbidden_public_supply_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: service_demand_forbidden_public_supply, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_service_demand_forbidden_public_supply_size(), container_2.province_get_service_demand_forbidden_public_supply_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_service_demand_forbidden_public_supply(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_service_demand_forbidden_public_supply(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "service_demand_forbidden_public_supply, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_service_satisfaction)
			{
				if(!compare_values(container_1.province_get_service_satisfaction_size(), container_2.province_get_service_satisfaction_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_service_satisfaction_size());
					std::string cont_2_size = std::to_string(container_2.province_get_service_satisfaction_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: service_satisfaction, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_service_satisfaction_size(), container_2.province_get_service_satisfaction_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_service_satisfaction(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_service_satisfaction(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "service_satisfaction, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_service_satisfaction_for_free)
			{
				if(!compare_values(container_1.province_get_service_satisfaction_for_free_size(), container_2.province_get_service_satisfaction_for_free_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_service_satisfaction_for_free_size());
					std::string cont_2_size = std::to_string(container_2.province_get_service_satisfaction_for_free_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: service_satisfaction_for_free, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_service_satisfaction_for_free_size(), container_2.province_get_service_satisfaction_for_free_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_service_satisfaction_for_free(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_service_satisfaction_for_free(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "service_satisfaction_for_free, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_service_sold)
			{
				if(!compare_values(container_1.province_get_service_sold_size(), container_2.province_get_service_sold_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_service_sold_size());
					std::string cont_2_size = std::to_string(container_2.province_get_service_sold_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: service_sold, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_service_sold_size(), container_2.province_get_service_sold_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_service_sold(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_service_sold(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "service_sold, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_labor_price)
			{
				if(!compare_values(container_1.province_get_labor_price_size(), container_2.province_get_labor_price_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_labor_price_size());
					std::string cont_2_size = std::to_string(container_2.province_get_labor_price_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: labor_price, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_labor_price_size(), container_2.province_get_labor_price_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_labor_price(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_labor_price(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "labor_price, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_labor_supply)
			{
				if(!compare_values(container_1.province_get_labor_supply_size(), container_2.province_get_labor_supply_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_labor_supply_size());
					std::string cont_2_size = std::to_string(container_2.province_get_labor_supply_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: labor_supply, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_labor_supply_size(), container_2.province_get_labor_supply_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_labor_supply(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_labor_supply(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "labor_supply, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_labor_demand)
			{
				if(!compare_values(container_1.province_get_labor_demand_size(), container_2.province_get_labor_demand_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_labor_demand_size());
					std::string cont_2_size = std::to_string(container_2.province_get_labor_demand_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: labor_demand, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_labor_demand_size(), container_2.province_get_labor_demand_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_labor_demand(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_labor_demand(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "labor_demand, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_labor_demand_satisfaction)
			{
				if(!compare_values(container_1.province_get_labor_demand_satisfaction_size(), container_2.province_get_labor_demand_satisfaction_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_labor_demand_satisfaction_size());
					std::string cont_2_size = std::to_string(container_2.province_get_labor_demand_satisfaction_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: labor_demand_satisfaction, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_labor_demand_satisfaction_size(), container_2.province_get_labor_demand_satisfaction_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_labor_demand_satisfaction(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_labor_demand_satisfaction(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "labor_demand_satisfaction, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_labor_supply_sold)
			{
				if(!compare_values(container_1.province_get_labor_supply_sold_size(), container_2.province_get_labor_supply_sold_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_labor_supply_sold_size());
					std::string cont_2_size = std::to_string(container_2.province_get_labor_supply_sold_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: labor_supply_sold, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_labor_supply_sold_size(), container_2.province_get_labor_supply_sold_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_labor_supply_sold(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_labor_supply_sold(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "labor_supply_sold, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_administration_employment_target)
			{
				const auto& cont_1_val = container_1.province_get_administration_employment_target(obj);
				const auto& cont_2_val = container_2.province_get_administration_employment_target(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "administration_employment_target: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_pop_labor_distribution)
			{
				if(!compare_values(container_1.province_get_pop_labor_distribution_size(), container_2.province_get_pop_labor_distribution_size()))
				{
					std::string cont_1_size = std::to_string(container_1.province_get_pop_labor_distribution_size());
					std::string cont_2_size = std::to_string(container_2.province_get_pop_labor_distribution_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: pop_labor_distribution, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.province_get_pop_labor_distribution_size(), container_2.province_get_pop_labor_distribution_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.province_get_pop_labor_distribution(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.province_get_pop_labor_distribution(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "pop_labor_distribution, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.province_control_scale)
			{
				const auto& cont_1_val = container_1.province_get_control_scale(obj);
				const auto& cont_2_val = container_2.province_get_control_scale(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "control_scale: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_control_ratio)
			{
				const auto& cont_1_val = container_1.province_get_control_ratio(obj);
				const auto& cont_2_val = container_2.province_get_control_ratio(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "control_ratio: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.province_adjacency)
	{
		report += std::string("PROVINCE_ADJACENCY") + "\n";
		if(!compare_values(container_1.province_adjacency_size(), container_2.province_adjacency_size()))
		{
			std::string cont_1_size = std::to_string(container_1.province_adjacency_size());
			std::string cont_2_size = std::to_string(container_2.province_adjacency_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.province_adjacency_size(), container_2.province_adjacency_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::province_adjacency_id obj{dcon::province_adjacency_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.province_adjacency_connected_provinces)
			{
				for(uint32_t k = 0;k < 2;k++)
				{
					if(!compare_values(container_1.province_adjacency_get_connected_provinces(obj, k), container_2.province_adjacency_get_connected_provinces(obj, k)))
					{
						auto cont_1_val = std::to_string(container_1.province_adjacency_get_connected_provinces(obj, k).value);
						auto cont_2_val = std::to_string(container_2.province_adjacency_get_connected_provinces(obj, k).value);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "connected_provinces: " + cont_1_val + ", " + cont_2_val) + "\n";
					}
				}
			}
			if(record.province_adjacency_distance)
			{
				const auto& cont_1_val = container_1.province_adjacency_get_distance(obj);
				const auto& cont_2_val = container_2.province_adjacency_get_distance(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "distance: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_adjacency_distance_km)
			{
				const auto& cont_1_val = container_1.province_adjacency_get_distance_km(obj);
				const auto& cont_2_val = container_2.province_adjacency_get_distance_km(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "distance_km: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_adjacency_canal_or_blockade_province)
			{
				dcon::province_id cont_1_val = container_1.province_adjacency_get_canal_or_blockade_province(obj);
				dcon::province_id cont_2_val = container_2.province_adjacency_get_canal_or_blockade_province(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "canal_or_blockade_province: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_adjacency_type)
			{
				const auto& cont_1_val = container_1.province_adjacency_get_type(obj);
				const auto& cont_2_val = container_2.province_adjacency_get_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.nation_adjacency)
	{
		report += std::string("NATION_ADJACENCY") + "\n";
		if(!compare_values(container_1.nation_adjacency_size(), container_2.nation_adjacency_size()))
		{
			std::string cont_1_size = std::to_string(container_1.nation_adjacency_size());
			std::string cont_2_size = std::to_string(container_2.nation_adjacency_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.nation_adjacency_size(), container_2.nation_adjacency_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::nation_adjacency_id obj{dcon::nation_adjacency_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.nation_adjacency_connected_nations)
			{
				for(uint32_t k = 0;k < 2;k++)
				{
					if(!compare_values(container_1.nation_adjacency_get_connected_nations(obj, k), container_2.nation_adjacency_get_connected_nations(obj, k)))
					{
						auto cont_1_val = std::to_string(container_1.nation_adjacency_get_connected_nations(obj, k).value);
						auto cont_2_val = std::to_string(container_2.nation_adjacency_get_connected_nations(obj, k).value);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "connected_nations: " + cont_1_val + ", " + cont_2_val) + "\n";
					}
				}
			}
		}
	}
	if(record.regiment)
	{
		report += std::string("REGIMENT") + "\n";
		if(!compare_values(container_1.regiment_size(), container_2.regiment_size()))
		{
			std::string cont_1_size = std::to_string(container_1.regiment_size());
			std::string cont_2_size = std::to_string(container_2.regiment_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.regiment_size(), container_2.regiment_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::regiment_id obj{dcon::regiment_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.regiment_name)
			{
				dcon::unit_name_id cont_1_val = container_1.regiment_get_name(obj);
				dcon::unit_name_id cont_2_val = container_2.regiment_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.regiment_type)
			{
				dcon::unit_type_id cont_1_val = container_1.regiment_get_type(obj);
				dcon::unit_type_id cont_2_val = container_2.regiment_get_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.regiment_strength)
			{
				const auto& cont_1_val = container_1.regiment_get_strength(obj);
				const auto& cont_2_val = container_2.regiment_get_strength(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "strength: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.regiment_pending_combat_damage)
			{
				const auto& cont_1_val = container_1.regiment_get_pending_combat_damage(obj);
				const auto& cont_2_val = container_2.regiment_get_pending_combat_damage(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "pending_combat_damage: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.regiment_pending_attrition_damage)
			{
				const auto& cont_1_val = container_1.regiment_get_pending_attrition_damage(obj);
				const auto& cont_2_val = container_2.regiment_get_pending_attrition_damage(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "pending_attrition_damage: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.regiment_org)
			{
				const auto& cont_1_val = container_1.regiment_get_org(obj);
				const auto& cont_2_val = container_2.regiment_get_org(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "org: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.regiment_experience)
			{
				const auto& cont_1_val = container_1.regiment_get_experience(obj);
				const auto& cont_2_val = container_2.regiment_get_experience(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "experience: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.automated_army_group)
	{
		report += std::string("AUTOMATED_ARMY_GROUP") + "\n";
		if(!compare_values(container_1.automated_army_group_size(), container_2.automated_army_group_size()))
		{
			std::string cont_1_size = std::to_string(container_1.automated_army_group_size());
			std::string cont_2_size = std::to_string(container_2.automated_army_group_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.automated_army_group_size(), container_2.automated_army_group_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::automated_army_group_id obj{dcon::automated_army_group_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.automated_army_group_owner)
			{
				dcon::nation_id cont_1_val = container_1.automated_army_group_get_owner(obj);
				dcon::nation_id cont_2_val = container_2.automated_army_group_get_owner(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "owner: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.automated_army_group_hq)
			{
				dcon::province_id cont_1_val = container_1.automated_army_group_get_hq(obj);
				dcon::province_id cont_2_val = container_2.automated_army_group_get_hq(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "hq: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.automated_army_group_provinces_defend)
			{
				auto vec_1 = container_1.automated_army_group_get_provinces_defend(obj);
				auto vec_2 = container_2.automated_army_group_get_provinces_defend(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: provinces_defend, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						dcon::province_id cont_1_arr_val = vec_1[j];
						dcon::province_id cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "provinces_defend, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.automated_army_group_provinces_enforce_control)
			{
				auto vec_1 = container_1.automated_army_group_get_provinces_enforce_control(obj);
				auto vec_2 = container_2.automated_army_group_get_provinces_enforce_control(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: provinces_enforce_control, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						dcon::province_id cont_1_arr_val = vec_1[j];
						dcon::province_id cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "provinces_enforce_control, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.automated_army_group_provinces_ferry_origin)
			{
				auto vec_1 = container_1.automated_army_group_get_provinces_ferry_origin(obj);
				auto vec_2 = container_2.automated_army_group_get_provinces_ferry_origin(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: provinces_ferry_origin, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						dcon::province_id cont_1_arr_val = vec_1[j];
						dcon::province_id cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "provinces_ferry_origin, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.automated_army_group_membership_regiment)
	{
		report += std::string("AUTOMATED_ARMY_GROUP_MEMBERSHIP_REGIMENT") + "\n";
		if(!compare_values(container_1.automated_army_group_membership_regiment_size(), container_2.automated_army_group_membership_regiment_size()))
		{
			std::string cont_1_size = std::to_string(container_1.automated_army_group_membership_regiment_size());
			std::string cont_2_size = std::to_string(container_2.automated_army_group_membership_regiment_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.automated_army_group_membership_regiment_size(), container_2.automated_army_group_membership_regiment_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::automated_army_group_membership_regiment_id obj{dcon::automated_army_group_membership_regiment_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.automated_army_group_membership_regiment_regiment)
			{
				if(!compare_values(container_1.automated_army_group_membership_regiment_get_regiment(obj), container_2.automated_army_group_membership_regiment_get_regiment(obj)))
				{
					auto cont_1_val = std::to_string(container_1.automated_army_group_membership_regiment_get_regiment(obj).value);
					auto cont_2_val = std::to_string(container_2.automated_army_group_membership_regiment_get_regiment(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "regiment: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.automated_army_group_membership_regiment_army)
			{
				if(!compare_values(container_1.automated_army_group_membership_regiment_get_army(obj), container_2.automated_army_group_membership_regiment_get_army(obj)))
				{
					auto cont_1_val = std::to_string(container_1.automated_army_group_membership_regiment_get_army(obj).value);
					auto cont_2_val = std::to_string(container_2.automated_army_group_membership_regiment_get_army(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "army: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.automated_army_group_membership_navy)
	{
		report += std::string("AUTOMATED_ARMY_GROUP_MEMBERSHIP_NAVY") + "\n";
		if(!compare_values(container_1.automated_army_group_membership_navy_size(), container_2.automated_army_group_membership_navy_size()))
		{
			std::string cont_1_size = std::to_string(container_1.automated_army_group_membership_navy_size());
			std::string cont_2_size = std::to_string(container_2.automated_army_group_membership_navy_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.automated_army_group_membership_navy_size(), container_2.automated_army_group_membership_navy_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::automated_army_group_membership_navy_id obj{dcon::automated_army_group_membership_navy_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.automated_army_group_membership_navy_navy)
			{
				if(!compare_values(container_1.automated_army_group_membership_navy_get_navy(obj), container_2.automated_army_group_membership_navy_get_navy(obj)))
				{
					auto cont_1_val = std::to_string(container_1.automated_army_group_membership_navy_get_navy(obj).value);
					auto cont_2_val = std::to_string(container_2.automated_army_group_membership_navy_get_navy(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "navy: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.automated_army_group_membership_navy_army)
			{
				if(!compare_values(container_1.automated_army_group_membership_navy_get_army(obj), container_2.automated_army_group_membership_navy_get_army(obj)))
				{
					auto cont_1_val = std::to_string(container_1.automated_army_group_membership_navy_get_army(obj).value);
					auto cont_2_val = std::to_string(container_2.automated_army_group_membership_navy_get_army(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "army: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.regiment_automation_data)
	{
		report += std::string("REGIMENT_AUTOMATION_DATA") + "\n";
		if(!compare_values(container_1.regiment_automation_data_size(), container_2.regiment_automation_data_size()))
		{
			std::string cont_1_size = std::to_string(container_1.regiment_automation_data_size());
			std::string cont_2_size = std::to_string(container_2.regiment_automation_data_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.regiment_automation_data_size(), container_2.regiment_automation_data_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::regiment_automation_data_id obj{dcon::regiment_automation_data_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.regiment_automation_data_status)
			{
				const auto& cont_1_val = container_1.regiment_automation_data_get_status(obj);
				const auto& cont_2_val = container_2.regiment_automation_data_get_status(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "status: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.regiment_automation_data_task)
			{
				const auto& cont_1_val = container_1.regiment_automation_data_get_task(obj);
				const auto& cont_2_val = container_2.regiment_automation_data_get_task(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "task: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.regiment_automation_data_await_command_execution_flag)
			{
				const auto& cont_1_val = container_1.regiment_automation_data_get_await_command_execution_flag(obj);
				const auto& cont_2_val = container_2.regiment_automation_data_get_await_command_execution_flag(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "await_command_execution_flag: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.regiment_automation_data_target)
			{
				dcon::province_id cont_1_val = container_1.regiment_automation_data_get_target(obj);
				dcon::province_id cont_2_val = container_2.regiment_automation_data_get_target(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "target: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.regiment_automation_data_ferry_target)
			{
				dcon::province_id cont_1_val = container_1.regiment_automation_data_get_ferry_target(obj);
				dcon::province_id cont_2_val = container_2.regiment_automation_data_get_ferry_target(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ferry_target: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.regiment_automation_data_ferry_origin)
			{
				dcon::province_id cont_1_val = container_1.regiment_automation_data_get_ferry_origin(obj);
				dcon::province_id cont_2_val = container_2.regiment_automation_data_get_ferry_origin(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ferry_origin: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.automation)
	{
		report += std::string("AUTOMATION") + "\n";
		if(!compare_values(container_1.automation_size(), container_2.automation_size()))
		{
			std::string cont_1_size = std::to_string(container_1.automation_size());
			std::string cont_2_size = std::to_string(container_2.automation_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.automation_size(), container_2.automation_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::automation_id obj{dcon::automation_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.automation_automation_data)
			{
				if(!compare_values(container_1.automation_get_automation_data(obj), container_2.automation_get_automation_data(obj)))
				{
					auto cont_1_val = std::to_string(container_1.automation_get_automation_data(obj).value);
					auto cont_2_val = std::to_string(container_2.automation_get_automation_data(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "automation_data: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.automation_regiment)
			{
				if(!compare_values(container_1.automation_get_regiment(obj), container_2.automation_get_regiment(obj)))
				{
					auto cont_1_val = std::to_string(container_1.automation_get_regiment(obj).value);
					auto cont_2_val = std::to_string(container_2.automation_get_regiment(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "regiment: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.ship)
	{
		report += std::string("SHIP") + "\n";
		if(!compare_values(container_1.ship_size(), container_2.ship_size()))
		{
			std::string cont_1_size = std::to_string(container_1.ship_size());
			std::string cont_2_size = std::to_string(container_2.ship_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.ship_size(), container_2.ship_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::ship_id obj{dcon::ship_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.ship_name)
			{
				dcon::unit_name_id cont_1_val = container_1.ship_get_name(obj);
				dcon::unit_name_id cont_2_val = container_2.ship_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ship_type)
			{
				dcon::unit_type_id cont_1_val = container_1.ship_get_type(obj);
				dcon::unit_type_id cont_2_val = container_2.ship_get_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ship_strength)
			{
				const auto& cont_1_val = container_1.ship_get_strength(obj);
				const auto& cont_2_val = container_2.ship_get_strength(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "strength: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ship_org)
			{
				const auto& cont_1_val = container_1.ship_get_org(obj);
				const auto& cont_2_val = container_2.ship_get_org(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "org: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.ship_experience)
			{
				const auto& cont_1_val = container_1.ship_get_experience(obj);
				const auto& cont_2_val = container_2.ship_get_experience(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "experience: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.army)
	{
		report += std::string("ARMY") + "\n";
		if(!compare_values(container_1.army_size(), container_2.army_size()))
		{
			std::string cont_1_size = std::to_string(container_1.army_size());
			std::string cont_2_size = std::to_string(container_2.army_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.army_size(), container_2.army_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::army_id obj{dcon::army_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.army_name)
			{
				dcon::unit_name_id cont_1_val = container_1.army_get_name(obj);
				dcon::unit_name_id cont_2_val = container_2.army_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.army_black_flag)
			{
				const auto& cont_1_val = container_1.army_get_black_flag(obj);
				const auto& cont_2_val = container_2.army_get_black_flag(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "black_flag: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.army_is_retreating)
			{
				const auto& cont_1_val = container_1.army_get_is_retreating(obj);
				const auto& cont_2_val = container_2.army_get_is_retreating(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_retreating: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.army_is_rebel_hunter)
			{
				const auto& cont_1_val = container_1.army_get_is_rebel_hunter(obj);
				const auto& cont_2_val = container_2.army_get_is_rebel_hunter(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_rebel_hunter: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.army_moving_to_merge)
			{
				const auto& cont_1_val = container_1.army_get_moving_to_merge(obj);
				const auto& cont_2_val = container_2.army_get_moving_to_merge(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "moving_to_merge: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.army_special_order)
			{
				const auto& cont_1_val = container_1.army_get_special_order(obj);
				const auto& cont_2_val = container_2.army_get_special_order(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "special_order: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.army_dig_in)
			{
				const auto& cont_1_val = container_1.army_get_dig_in(obj);
				const auto& cont_2_val = container_2.army_get_dig_in(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dig_in: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.army_path)
			{
				auto vec_1 = container_1.army_get_path(obj);
				auto vec_2 = container_2.army_get_path(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: path, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						dcon::province_id cont_1_arr_val = vec_1[j];
						dcon::province_id cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "path, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.army_arrival_time)
			{
				const auto& cont_1_val = container_1.army_get_arrival_time(obj);
				const auto& cont_2_val = container_2.army_get_arrival_time(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "arrival_time: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.army_unused_travel_days)
			{
				const auto& cont_1_val = container_1.army_get_unused_travel_days(obj);
				const auto& cont_2_val = container_2.army_get_unused_travel_days(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "unused_travel_days: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.army_ai_activity)
			{
				const auto& cont_1_val = container_1.army_get_ai_activity(obj);
				const auto& cont_2_val = container_2.army_get_ai_activity(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ai_activity: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.army_ai_province)
			{
				dcon::province_id cont_1_val = container_1.army_get_ai_province(obj);
				dcon::province_id cont_2_val = container_2.army_get_ai_province(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ai_province: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.army_is_ai_controlled)
			{
				const auto& cont_1_val = container_1.army_get_is_ai_controlled(obj);
				const auto& cont_2_val = container_2.army_get_is_ai_controlled(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_ai_controlled: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.army_pursuit)
	{
		report += std::string("ARMY_PURSUIT") + "\n";
		if(!compare_values(container_1.army_pursuit_size(), container_2.army_pursuit_size()))
		{
			std::string cont_1_size = std::to_string(container_1.army_pursuit_size());
			std::string cont_2_size = std::to_string(container_2.army_pursuit_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.army_pursuit_size(), container_2.army_pursuit_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::army_pursuit_id obj{dcon::army_pursuit_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.army_pursuit_source)
			{
				if(!compare_values(container_1.army_pursuit_get_source(obj), container_2.army_pursuit_get_source(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_pursuit_get_source(obj).value);
					auto cont_2_val = std::to_string(container_2.army_pursuit_get_source(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "source: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.army_pursuit_target)
			{
				if(!compare_values(container_1.army_pursuit_get_target(obj), container_2.army_pursuit_get_target(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_pursuit_get_target(obj).value);
					auto cont_2_val = std::to_string(container_2.army_pursuit_get_target(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "target: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.navy)
	{
		report += std::string("NAVY") + "\n";
		if(!compare_values(container_1.navy_size(), container_2.navy_size()))
		{
			std::string cont_1_size = std::to_string(container_1.navy_size());
			std::string cont_2_size = std::to_string(container_2.navy_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.navy_size(), container_2.navy_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::navy_id obj{dcon::navy_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.navy_name)
			{
				dcon::unit_name_id cont_1_val = container_1.navy_get_name(obj);
				dcon::unit_name_id cont_2_val = container_2.navy_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.navy_path)
			{
				auto vec_1 = container_1.navy_get_path(obj);
				auto vec_2 = container_2.navy_get_path(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: path, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						dcon::province_id cont_1_arr_val = vec_1[j];
						dcon::province_id cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "path, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.navy_arrival_time)
			{
				const auto& cont_1_val = container_1.navy_get_arrival_time(obj);
				const auto& cont_2_val = container_2.navy_get_arrival_time(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "arrival_time: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.navy_unused_travel_days)
			{
				const auto& cont_1_val = container_1.navy_get_unused_travel_days(obj);
				const auto& cont_2_val = container_2.navy_get_unused_travel_days(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "unused_travel_days: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.navy_months_outside_naval_range)
			{
				const auto& cont_1_val = container_1.navy_get_months_outside_naval_range(obj);
				const auto& cont_2_val = container_2.navy_get_months_outside_naval_range(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "months_outside_naval_range: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.navy_is_retreating)
			{
				const auto& cont_1_val = container_1.navy_get_is_retreating(obj);
				const auto& cont_2_val = container_2.navy_get_is_retreating(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_retreating: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.navy_moving_to_merge)
			{
				const auto& cont_1_val = container_1.navy_get_moving_to_merge(obj);
				const auto& cont_2_val = container_2.navy_get_moving_to_merge(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "moving_to_merge: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.navy_ai_activity)
			{
				const auto& cont_1_val = container_1.navy_get_ai_activity(obj);
				const auto& cont_2_val = container_2.navy_get_ai_activity(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ai_activity: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.army_transport)
	{
		report += std::string("ARMY_TRANSPORT") + "\n";
		if(!compare_values(container_1.army_transport_size(), container_2.army_transport_size()))
		{
			std::string cont_1_size = std::to_string(container_1.army_transport_size());
			std::string cont_2_size = std::to_string(container_2.army_transport_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.army_transport_size(), container_2.army_transport_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::army_transport_id obj{dcon::army_transport_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.army_transport_army)
			{
				if(!compare_values(container_1.army_transport_get_army(obj), container_2.army_transport_get_army(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_transport_get_army(obj).value);
					auto cont_2_val = std::to_string(container_2.army_transport_get_army(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "army: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.army_transport_navy)
			{
				if(!compare_values(container_1.army_transport_get_navy(obj), container_2.army_transport_get_navy(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_transport_get_navy(obj).value);
					auto cont_2_val = std::to_string(container_2.army_transport_get_navy(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "navy: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.army_control)
	{
		report += std::string("ARMY_CONTROL") + "\n";
		if(!compare_values(container_1.army_control_size(), container_2.army_control_size()))
		{
			std::string cont_1_size = std::to_string(container_1.army_control_size());
			std::string cont_2_size = std::to_string(container_2.army_control_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.army_control_size(), container_2.army_control_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::army_control_id obj{dcon::army_control_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.army_control_army)
			{
				if(!compare_values(container_1.army_control_get_army(obj), container_2.army_control_get_army(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_control_get_army(obj).value);
					auto cont_2_val = std::to_string(container_2.army_control_get_army(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "army: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.army_control_controller)
			{
				if(!compare_values(container_1.army_control_get_controller(obj), container_2.army_control_get_controller(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_control_get_controller(obj).value);
					auto cont_2_val = std::to_string(container_2.army_control_get_controller(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "controller: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.army_rebel_control)
	{
		report += std::string("ARMY_REBEL_CONTROL") + "\n";
		if(!compare_values(container_1.army_rebel_control_size(), container_2.army_rebel_control_size()))
		{
			std::string cont_1_size = std::to_string(container_1.army_rebel_control_size());
			std::string cont_2_size = std::to_string(container_2.army_rebel_control_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.army_rebel_control_size(), container_2.army_rebel_control_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::army_rebel_control_id obj{dcon::army_rebel_control_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.army_rebel_control_army)
			{
				if(!compare_values(container_1.army_rebel_control_get_army(obj), container_2.army_rebel_control_get_army(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_rebel_control_get_army(obj).value);
					auto cont_2_val = std::to_string(container_2.army_rebel_control_get_army(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "army: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.army_rebel_control_controller)
			{
				if(!compare_values(container_1.army_rebel_control_get_controller(obj), container_2.army_rebel_control_get_controller(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_rebel_control_get_controller(obj).value);
					auto cont_2_val = std::to_string(container_2.army_rebel_control_get_controller(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "controller: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.army_location)
	{
		report += std::string("ARMY_LOCATION") + "\n";
		if(!compare_values(container_1.army_location_size(), container_2.army_location_size()))
		{
			std::string cont_1_size = std::to_string(container_1.army_location_size());
			std::string cont_2_size = std::to_string(container_2.army_location_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.army_location_size(), container_2.army_location_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::army_location_id obj{dcon::army_location_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.army_location_army)
			{
				if(!compare_values(container_1.army_location_get_army(obj), container_2.army_location_get_army(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_location_get_army(obj).value);
					auto cont_2_val = std::to_string(container_2.army_location_get_army(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "army: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.army_location_location)
			{
				if(!compare_values(container_1.army_location_get_location(obj), container_2.army_location_get_location(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_location_get_location(obj).value);
					auto cont_2_val = std::to_string(container_2.army_location_get_location(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "location: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.army_membership)
	{
		report += std::string("ARMY_MEMBERSHIP") + "\n";
		if(!compare_values(container_1.army_membership_size(), container_2.army_membership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.army_membership_size());
			std::string cont_2_size = std::to_string(container_2.army_membership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.army_membership_size(), container_2.army_membership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::army_membership_id obj{dcon::army_membership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.army_membership_regiment)
			{
				if(!compare_values(container_1.army_membership_get_regiment(obj), container_2.army_membership_get_regiment(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_membership_get_regiment(obj).value);
					auto cont_2_val = std::to_string(container_2.army_membership_get_regiment(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "regiment: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.army_membership_army)
			{
				if(!compare_values(container_1.army_membership_get_army(obj), container_2.army_membership_get_army(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_membership_get_army(obj).value);
					auto cont_2_val = std::to_string(container_2.army_membership_get_army(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "army: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.regiment_source)
	{
		report += std::string("REGIMENT_SOURCE") + "\n";
		if(!compare_values(container_1.regiment_source_size(), container_2.regiment_source_size()))
		{
			std::string cont_1_size = std::to_string(container_1.regiment_source_size());
			std::string cont_2_size = std::to_string(container_2.regiment_source_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.regiment_source_size(), container_2.regiment_source_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::regiment_source_id obj{dcon::regiment_source_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.regiment_source_regiment)
			{
				if(!compare_values(container_1.regiment_source_get_regiment(obj), container_2.regiment_source_get_regiment(obj)))
				{
					auto cont_1_val = std::to_string(container_1.regiment_source_get_regiment(obj).value);
					auto cont_2_val = std::to_string(container_2.regiment_source_get_regiment(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "regiment: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.regiment_source_pop)
			{
				if(!compare_values(container_1.regiment_source_get_pop(obj), container_2.regiment_source_get_pop(obj)))
				{
					auto cont_1_val = std::to_string(container_1.regiment_source_get_pop(obj).value);
					auto cont_2_val = std::to_string(container_2.regiment_source_get_pop(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "pop: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.navy_control)
	{
		report += std::string("NAVY_CONTROL") + "\n";
		if(!compare_values(container_1.navy_control_size(), container_2.navy_control_size()))
		{
			std::string cont_1_size = std::to_string(container_1.navy_control_size());
			std::string cont_2_size = std::to_string(container_2.navy_control_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.navy_control_size(), container_2.navy_control_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::navy_control_id obj{dcon::navy_control_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.navy_control_navy)
			{
				if(!compare_values(container_1.navy_control_get_navy(obj), container_2.navy_control_get_navy(obj)))
				{
					auto cont_1_val = std::to_string(container_1.navy_control_get_navy(obj).value);
					auto cont_2_val = std::to_string(container_2.navy_control_get_navy(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "navy: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.navy_control_controller)
			{
				if(!compare_values(container_1.navy_control_get_controller(obj), container_2.navy_control_get_controller(obj)))
				{
					auto cont_1_val = std::to_string(container_1.navy_control_get_controller(obj).value);
					auto cont_2_val = std::to_string(container_2.navy_control_get_controller(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "controller: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.navy_location)
	{
		report += std::string("NAVY_LOCATION") + "\n";
		if(!compare_values(container_1.navy_location_size(), container_2.navy_location_size()))
		{
			std::string cont_1_size = std::to_string(container_1.navy_location_size());
			std::string cont_2_size = std::to_string(container_2.navy_location_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.navy_location_size(), container_2.navy_location_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::navy_location_id obj{dcon::navy_location_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.navy_location_navy)
			{
				if(!compare_values(container_1.navy_location_get_navy(obj), container_2.navy_location_get_navy(obj)))
				{
					auto cont_1_val = std::to_string(container_1.navy_location_get_navy(obj).value);
					auto cont_2_val = std::to_string(container_2.navy_location_get_navy(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "navy: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.navy_location_location)
			{
				if(!compare_values(container_1.navy_location_get_location(obj), container_2.navy_location_get_location(obj)))
				{
					auto cont_1_val = std::to_string(container_1.navy_location_get_location(obj).value);
					auto cont_2_val = std::to_string(container_2.navy_location_get_location(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "location: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.navy_membership)
	{
		report += std::string("NAVY_MEMBERSHIP") + "\n";
		if(!compare_values(container_1.navy_membership_size(), container_2.navy_membership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.navy_membership_size());
			std::string cont_2_size = std::to_string(container_2.navy_membership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.navy_membership_size(), container_2.navy_membership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::navy_membership_id obj{dcon::navy_membership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.navy_membership_ship)
			{
				if(!compare_values(container_1.navy_membership_get_ship(obj), container_2.navy_membership_get_ship(obj)))
				{
					auto cont_1_val = std::to_string(container_1.navy_membership_get_ship(obj).value);
					auto cont_2_val = std::to_string(container_2.navy_membership_get_ship(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "ship: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.navy_membership_navy)
			{
				if(!compare_values(container_1.navy_membership_get_navy(obj), container_2.navy_membership_get_navy(obj)))
				{
					auto cont_1_val = std::to_string(container_1.navy_membership_get_navy(obj).value);
					auto cont_2_val = std::to_string(container_2.navy_membership_get_navy(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "navy: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.naval_battle)
	{
		report += std::string("NAVAL_BATTLE") + "\n";
		if(!compare_values(container_1.naval_battle_size(), container_2.naval_battle_size()))
		{
			std::string cont_1_size = std::to_string(container_1.naval_battle_size());
			std::string cont_2_size = std::to_string(container_2.naval_battle_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.naval_battle_size(), container_2.naval_battle_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::naval_battle_id obj{dcon::naval_battle_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.naval_battle_start_date)
			{
				const auto& cont_1_val = container_1.naval_battle_get_start_date(obj);
				const auto& cont_2_val = container_2.naval_battle_get_start_date(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "start_date: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_war_attacker_is_attacker)
			{
				const auto& cont_1_val = container_1.naval_battle_get_war_attacker_is_attacker(obj);
				const auto& cont_2_val = container_2.naval_battle_get_war_attacker_is_attacker(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "war_attacker_is_attacker: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_dice_rolls)
			{
				const auto& cont_1_val = container_1.naval_battle_get_dice_rolls(obj);
				const auto& cont_2_val = container_2.naval_battle_get_dice_rolls(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dice_rolls: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_attacker_big_ships)
			{
				const auto& cont_1_val = container_1.naval_battle_get_attacker_big_ships(obj);
				const auto& cont_2_val = container_2.naval_battle_get_attacker_big_ships(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_big_ships: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_attacker_small_ships)
			{
				const auto& cont_1_val = container_1.naval_battle_get_attacker_small_ships(obj);
				const auto& cont_2_val = container_2.naval_battle_get_attacker_small_ships(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_small_ships: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_attacker_transport_ships)
			{
				const auto& cont_1_val = container_1.naval_battle_get_attacker_transport_ships(obj);
				const auto& cont_2_val = container_2.naval_battle_get_attacker_transport_ships(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_transport_ships: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_attacker_big_ships_lost)
			{
				const auto& cont_1_val = container_1.naval_battle_get_attacker_big_ships_lost(obj);
				const auto& cont_2_val = container_2.naval_battle_get_attacker_big_ships_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_big_ships_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_attacker_small_ships_lost)
			{
				const auto& cont_1_val = container_1.naval_battle_get_attacker_small_ships_lost(obj);
				const auto& cont_2_val = container_2.naval_battle_get_attacker_small_ships_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_small_ships_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_attacker_transport_ships_lost)
			{
				const auto& cont_1_val = container_1.naval_battle_get_attacker_transport_ships_lost(obj);
				const auto& cont_2_val = container_2.naval_battle_get_attacker_transport_ships_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_transport_ships_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_defender_big_ships)
			{
				const auto& cont_1_val = container_1.naval_battle_get_defender_big_ships(obj);
				const auto& cont_2_val = container_2.naval_battle_get_defender_big_ships(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_big_ships: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_defender_small_ships)
			{
				const auto& cont_1_val = container_1.naval_battle_get_defender_small_ships(obj);
				const auto& cont_2_val = container_2.naval_battle_get_defender_small_ships(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_small_ships: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_defender_transport_ships)
			{
				const auto& cont_1_val = container_1.naval_battle_get_defender_transport_ships(obj);
				const auto& cont_2_val = container_2.naval_battle_get_defender_transport_ships(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_transport_ships: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_defender_big_ships_lost)
			{
				const auto& cont_1_val = container_1.naval_battle_get_defender_big_ships_lost(obj);
				const auto& cont_2_val = container_2.naval_battle_get_defender_big_ships_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_big_ships_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_defender_small_ships_lost)
			{
				const auto& cont_1_val = container_1.naval_battle_get_defender_small_ships_lost(obj);
				const auto& cont_2_val = container_2.naval_battle_get_defender_small_ships_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_small_ships_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_defender_transport_ships_lost)
			{
				const auto& cont_1_val = container_1.naval_battle_get_defender_transport_ships_lost(obj);
				const auto& cont_2_val = container_2.naval_battle_get_defender_transport_ships_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_transport_ships_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_attacker_loss_value)
			{
				const auto& cont_1_val = container_1.naval_battle_get_attacker_loss_value(obj);
				const auto& cont_2_val = container_2.naval_battle_get_attacker_loss_value(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_loss_value: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_defender_loss_value)
			{
				const auto& cont_1_val = container_1.naval_battle_get_defender_loss_value(obj);
				const auto& cont_2_val = container_2.naval_battle_get_defender_loss_value(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_loss_value: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_avg_distance_from_center_line)
			{
				const auto& cont_1_val = container_1.naval_battle_get_avg_distance_from_center_line(obj);
				const auto& cont_2_val = container_2.naval_battle_get_avg_distance_from_center_line(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "avg_distance_from_center_line: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.naval_battle_slots)
			{
				auto vec_1 = container_1.naval_battle_get_slots(obj);
				auto vec_2 = container_2.naval_battle_get_slots(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: slots, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "slots, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.naval_battle_location)
	{
		report += std::string("NAVAL_BATTLE_LOCATION") + "\n";
		if(!compare_values(container_1.naval_battle_location_size(), container_2.naval_battle_location_size()))
		{
			std::string cont_1_size = std::to_string(container_1.naval_battle_location_size());
			std::string cont_2_size = std::to_string(container_2.naval_battle_location_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.naval_battle_location_size(), container_2.naval_battle_location_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::naval_battle_location_id obj{dcon::naval_battle_location_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.naval_battle_location_battle)
			{
				if(!compare_values(container_1.naval_battle_location_get_battle(obj), container_2.naval_battle_location_get_battle(obj)))
				{
					auto cont_1_val = std::to_string(container_1.naval_battle_location_get_battle(obj).value);
					auto cont_2_val = std::to_string(container_2.naval_battle_location_get_battle(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "battle: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.naval_battle_location_location)
			{
				if(!compare_values(container_1.naval_battle_location_get_location(obj), container_2.naval_battle_location_get_location(obj)))
				{
					auto cont_1_val = std::to_string(container_1.naval_battle_location_get_location(obj).value);
					auto cont_2_val = std::to_string(container_2.naval_battle_location_get_location(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "location: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.naval_battle_in_war)
	{
		report += std::string("NAVAL_BATTLE_IN_WAR") + "\n";
		if(!compare_values(container_1.naval_battle_in_war_size(), container_2.naval_battle_in_war_size()))
		{
			std::string cont_1_size = std::to_string(container_1.naval_battle_in_war_size());
			std::string cont_2_size = std::to_string(container_2.naval_battle_in_war_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.naval_battle_in_war_size(), container_2.naval_battle_in_war_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::naval_battle_in_war_id obj{dcon::naval_battle_in_war_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.naval_battle_in_war_battle)
			{
				if(!compare_values(container_1.naval_battle_in_war_get_battle(obj), container_2.naval_battle_in_war_get_battle(obj)))
				{
					auto cont_1_val = std::to_string(container_1.naval_battle_in_war_get_battle(obj).value);
					auto cont_2_val = std::to_string(container_2.naval_battle_in_war_get_battle(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "battle: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.naval_battle_in_war_war)
			{
				if(!compare_values(container_1.naval_battle_in_war_get_war(obj), container_2.naval_battle_in_war_get_war(obj)))
				{
					auto cont_1_val = std::to_string(container_1.naval_battle_in_war_get_war(obj).value);
					auto cont_2_val = std::to_string(container_2.naval_battle_in_war_get_war(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "war: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.navy_battle_participation)
	{
		report += std::string("NAVY_BATTLE_PARTICIPATION") + "\n";
		if(!compare_values(container_1.navy_battle_participation_size(), container_2.navy_battle_participation_size()))
		{
			std::string cont_1_size = std::to_string(container_1.navy_battle_participation_size());
			std::string cont_2_size = std::to_string(container_2.navy_battle_participation_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.navy_battle_participation_size(), container_2.navy_battle_participation_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::navy_battle_participation_id obj{dcon::navy_battle_participation_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.navy_battle_participation_navy)
			{
				if(!compare_values(container_1.navy_battle_participation_get_navy(obj), container_2.navy_battle_participation_get_navy(obj)))
				{
					auto cont_1_val = std::to_string(container_1.navy_battle_participation_get_navy(obj).value);
					auto cont_2_val = std::to_string(container_2.navy_battle_participation_get_navy(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "navy: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.navy_battle_participation_battle)
			{
				if(!compare_values(container_1.navy_battle_participation_get_battle(obj), container_2.navy_battle_participation_get_battle(obj)))
				{
					auto cont_1_val = std::to_string(container_1.navy_battle_participation_get_battle(obj).value);
					auto cont_2_val = std::to_string(container_2.navy_battle_participation_get_battle(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "battle: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.attacking_admiral)
	{
		report += std::string("ATTACKING_ADMIRAL") + "\n";
		if(!compare_values(container_1.attacking_admiral_size(), container_2.attacking_admiral_size()))
		{
			std::string cont_1_size = std::to_string(container_1.attacking_admiral_size());
			std::string cont_2_size = std::to_string(container_2.attacking_admiral_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.attacking_admiral_size(), container_2.attacking_admiral_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::attacking_admiral_id obj{dcon::attacking_admiral_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.attacking_admiral_battle)
			{
				if(!compare_values(container_1.attacking_admiral_get_battle(obj), container_2.attacking_admiral_get_battle(obj)))
				{
					auto cont_1_val = std::to_string(container_1.attacking_admiral_get_battle(obj).value);
					auto cont_2_val = std::to_string(container_2.attacking_admiral_get_battle(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "battle: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.attacking_admiral_admiral)
			{
				if(!compare_values(container_1.attacking_admiral_get_admiral(obj), container_2.attacking_admiral_get_admiral(obj)))
				{
					auto cont_1_val = std::to_string(container_1.attacking_admiral_get_admiral(obj).value);
					auto cont_2_val = std::to_string(container_2.attacking_admiral_get_admiral(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "admiral: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.defending_admiral)
	{
		report += std::string("DEFENDING_ADMIRAL") + "\n";
		if(!compare_values(container_1.defending_admiral_size(), container_2.defending_admiral_size()))
		{
			std::string cont_1_size = std::to_string(container_1.defending_admiral_size());
			std::string cont_2_size = std::to_string(container_2.defending_admiral_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.defending_admiral_size(), container_2.defending_admiral_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::defending_admiral_id obj{dcon::defending_admiral_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.defending_admiral_battle)
			{
				if(!compare_values(container_1.defending_admiral_get_battle(obj), container_2.defending_admiral_get_battle(obj)))
				{
					auto cont_1_val = std::to_string(container_1.defending_admiral_get_battle(obj).value);
					auto cont_2_val = std::to_string(container_2.defending_admiral_get_battle(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "battle: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.defending_admiral_admiral)
			{
				if(!compare_values(container_1.defending_admiral_get_admiral(obj), container_2.defending_admiral_get_admiral(obj)))
				{
					auto cont_1_val = std::to_string(container_1.defending_admiral_get_admiral(obj).value);
					auto cont_2_val = std::to_string(container_2.defending_admiral_get_admiral(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "admiral: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.land_battle)
	{
		report += std::string("LAND_BATTLE") + "\n";
		if(!compare_values(container_1.land_battle_size(), container_2.land_battle_size()))
		{
			std::string cont_1_size = std::to_string(container_1.land_battle_size());
			std::string cont_2_size = std::to_string(container_2.land_battle_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.land_battle_size(), container_2.land_battle_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::land_battle_id obj{dcon::land_battle_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.land_battle_start_date)
			{
				const auto& cont_1_val = container_1.land_battle_get_start_date(obj);
				const auto& cont_2_val = container_2.land_battle_get_start_date(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "start_date: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_war_attacker_is_attacker)
			{
				const auto& cont_1_val = container_1.land_battle_get_war_attacker_is_attacker(obj);
				const auto& cont_2_val = container_2.land_battle_get_war_attacker_is_attacker(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "war_attacker_is_attacker: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_dice_rolls)
			{
				const auto& cont_1_val = container_1.land_battle_get_dice_rolls(obj);
				const auto& cont_2_val = container_2.land_battle_get_dice_rolls(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dice_rolls: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_combat_width)
			{
				const auto& cont_1_val = container_1.land_battle_get_combat_width(obj);
				const auto& cont_2_val = container_2.land_battle_get_combat_width(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "combat_width: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_attacker_infantry)
			{
				const auto& cont_1_val = container_1.land_battle_get_attacker_infantry(obj);
				const auto& cont_2_val = container_2.land_battle_get_attacker_infantry(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_infantry: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_attacker_cav)
			{
				const auto& cont_1_val = container_1.land_battle_get_attacker_cav(obj);
				const auto& cont_2_val = container_2.land_battle_get_attacker_cav(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_cav: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_attacker_support)
			{
				const auto& cont_1_val = container_1.land_battle_get_attacker_support(obj);
				const auto& cont_2_val = container_2.land_battle_get_attacker_support(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_support: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_attacker_infantry_lost)
			{
				const auto& cont_1_val = container_1.land_battle_get_attacker_infantry_lost(obj);
				const auto& cont_2_val = container_2.land_battle_get_attacker_infantry_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_infantry_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_attacker_cav_lost)
			{
				const auto& cont_1_val = container_1.land_battle_get_attacker_cav_lost(obj);
				const auto& cont_2_val = container_2.land_battle_get_attacker_cav_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_cav_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_attacker_support_lost)
			{
				const auto& cont_1_val = container_1.land_battle_get_attacker_support_lost(obj);
				const auto& cont_2_val = container_2.land_battle_get_attacker_support_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_support_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_defender_infantry)
			{
				const auto& cont_1_val = container_1.land_battle_get_defender_infantry(obj);
				const auto& cont_2_val = container_2.land_battle_get_defender_infantry(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_infantry: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_defender_cav)
			{
				const auto& cont_1_val = container_1.land_battle_get_defender_cav(obj);
				const auto& cont_2_val = container_2.land_battle_get_defender_cav(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_cav: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_defender_support)
			{
				const auto& cont_1_val = container_1.land_battle_get_defender_support(obj);
				const auto& cont_2_val = container_2.land_battle_get_defender_support(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_support: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_defender_infantry_lost)
			{
				const auto& cont_1_val = container_1.land_battle_get_defender_infantry_lost(obj);
				const auto& cont_2_val = container_2.land_battle_get_defender_infantry_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_infantry_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_defender_cav_lost)
			{
				const auto& cont_1_val = container_1.land_battle_get_defender_cav_lost(obj);
				const auto& cont_2_val = container_2.land_battle_get_defender_cav_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_cav_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_defender_support_lost)
			{
				const auto& cont_1_val = container_1.land_battle_get_defender_support_lost(obj);
				const auto& cont_2_val = container_2.land_battle_get_defender_support_lost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_support_lost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_attacker_back_line)
			{
				const auto& vec_1 = container_1.land_battle_get_attacker_back_line(obj);
				const auto& vec_2 = container_2.land_battle_get_attacker_back_line(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: attacker_back_line, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_back_line, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.land_battle_attacker_front_line)
			{
				const auto& vec_1 = container_1.land_battle_get_attacker_front_line(obj);
				const auto& vec_2 = container_2.land_battle_get_attacker_front_line(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: attacker_front_line, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_front_line, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.land_battle_defender_back_line)
			{
				const auto& vec_1 = container_1.land_battle_get_defender_back_line(obj);
				const auto& vec_2 = container_2.land_battle_get_defender_back_line(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: defender_back_line, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_back_line, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.land_battle_defender_front_line)
			{
				const auto& vec_1 = container_1.land_battle_get_defender_front_line(obj);
				const auto& vec_2 = container_2.land_battle_get_defender_front_line(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: defender_front_line, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_front_line, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.land_battle_reserves)
			{
				auto vec_1 = container_1.land_battle_get_reserves(obj);
				auto vec_2 = container_2.land_battle_get_reserves(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: reserves, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "reserves, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.land_battle_defender_casualties)
			{
				const auto& cont_1_val = container_1.land_battle_get_defender_casualties(obj);
				const auto& cont_2_val = container_2.land_battle_get_defender_casualties(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_casualties: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.land_battle_attacker_casualties)
			{
				const auto& cont_1_val = container_1.land_battle_get_attacker_casualties(obj);
				const auto& cont_2_val = container_2.land_battle_get_attacker_casualties(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_casualties: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.land_battle_location)
	{
		report += std::string("LAND_BATTLE_LOCATION") + "\n";
		if(!compare_values(container_1.land_battle_location_size(), container_2.land_battle_location_size()))
		{
			std::string cont_1_size = std::to_string(container_1.land_battle_location_size());
			std::string cont_2_size = std::to_string(container_2.land_battle_location_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.land_battle_location_size(), container_2.land_battle_location_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::land_battle_location_id obj{dcon::land_battle_location_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.land_battle_location_battle)
			{
				if(!compare_values(container_1.land_battle_location_get_battle(obj), container_2.land_battle_location_get_battle(obj)))
				{
					auto cont_1_val = std::to_string(container_1.land_battle_location_get_battle(obj).value);
					auto cont_2_val = std::to_string(container_2.land_battle_location_get_battle(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "battle: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.land_battle_location_location)
			{
				if(!compare_values(container_1.land_battle_location_get_location(obj), container_2.land_battle_location_get_location(obj)))
				{
					auto cont_1_val = std::to_string(container_1.land_battle_location_get_location(obj).value);
					auto cont_2_val = std::to_string(container_2.land_battle_location_get_location(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "location: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.land_battle_in_war)
	{
		report += std::string("LAND_BATTLE_IN_WAR") + "\n";
		if(!compare_values(container_1.land_battle_in_war_size(), container_2.land_battle_in_war_size()))
		{
			std::string cont_1_size = std::to_string(container_1.land_battle_in_war_size());
			std::string cont_2_size = std::to_string(container_2.land_battle_in_war_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.land_battle_in_war_size(), container_2.land_battle_in_war_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::land_battle_in_war_id obj{dcon::land_battle_in_war_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.land_battle_in_war_battle)
			{
				if(!compare_values(container_1.land_battle_in_war_get_battle(obj), container_2.land_battle_in_war_get_battle(obj)))
				{
					auto cont_1_val = std::to_string(container_1.land_battle_in_war_get_battle(obj).value);
					auto cont_2_val = std::to_string(container_2.land_battle_in_war_get_battle(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "battle: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.land_battle_in_war_war)
			{
				if(!compare_values(container_1.land_battle_in_war_get_war(obj), container_2.land_battle_in_war_get_war(obj)))
				{
					auto cont_1_val = std::to_string(container_1.land_battle_in_war_get_war(obj).value);
					auto cont_2_val = std::to_string(container_2.land_battle_in_war_get_war(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "war: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.army_battle_participation)
	{
		report += std::string("ARMY_BATTLE_PARTICIPATION") + "\n";
		if(!compare_values(container_1.army_battle_participation_size(), container_2.army_battle_participation_size()))
		{
			std::string cont_1_size = std::to_string(container_1.army_battle_participation_size());
			std::string cont_2_size = std::to_string(container_2.army_battle_participation_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.army_battle_participation_size(), container_2.army_battle_participation_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::army_battle_participation_id obj{dcon::army_battle_participation_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.army_battle_participation_army)
			{
				if(!compare_values(container_1.army_battle_participation_get_army(obj), container_2.army_battle_participation_get_army(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_battle_participation_get_army(obj).value);
					auto cont_2_val = std::to_string(container_2.army_battle_participation_get_army(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "army: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.army_battle_participation_battle)
			{
				if(!compare_values(container_1.army_battle_participation_get_battle(obj), container_2.army_battle_participation_get_battle(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_battle_participation_get_battle(obj).value);
					auto cont_2_val = std::to_string(container_2.army_battle_participation_get_battle(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "battle: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.attacking_general)
	{
		report += std::string("ATTACKING_GENERAL") + "\n";
		if(!compare_values(container_1.attacking_general_size(), container_2.attacking_general_size()))
		{
			std::string cont_1_size = std::to_string(container_1.attacking_general_size());
			std::string cont_2_size = std::to_string(container_2.attacking_general_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.attacking_general_size(), container_2.attacking_general_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::attacking_general_id obj{dcon::attacking_general_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.attacking_general_battle)
			{
				if(!compare_values(container_1.attacking_general_get_battle(obj), container_2.attacking_general_get_battle(obj)))
				{
					auto cont_1_val = std::to_string(container_1.attacking_general_get_battle(obj).value);
					auto cont_2_val = std::to_string(container_2.attacking_general_get_battle(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "battle: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.attacking_general_general)
			{
				if(!compare_values(container_1.attacking_general_get_general(obj), container_2.attacking_general_get_general(obj)))
				{
					auto cont_1_val = std::to_string(container_1.attacking_general_get_general(obj).value);
					auto cont_2_val = std::to_string(container_2.attacking_general_get_general(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "general: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.defending_general)
	{
		report += std::string("DEFENDING_GENERAL") + "\n";
		if(!compare_values(container_1.defending_general_size(), container_2.defending_general_size()))
		{
			std::string cont_1_size = std::to_string(container_1.defending_general_size());
			std::string cont_2_size = std::to_string(container_2.defending_general_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.defending_general_size(), container_2.defending_general_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::defending_general_id obj{dcon::defending_general_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.defending_general_battle)
			{
				if(!compare_values(container_1.defending_general_get_battle(obj), container_2.defending_general_get_battle(obj)))
				{
					auto cont_1_val = std::to_string(container_1.defending_general_get_battle(obj).value);
					auto cont_2_val = std::to_string(container_2.defending_general_get_battle(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "battle: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.defending_general_general)
			{
				if(!compare_values(container_1.defending_general_get_general(obj), container_2.defending_general_get_general(obj)))
				{
					auto cont_1_val = std::to_string(container_1.defending_general_get_general(obj).value);
					auto cont_2_val = std::to_string(container_2.defending_general_get_general(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "general: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.leader)
	{
		report += std::string("LEADER") + "\n";
		if(!compare_values(container_1.leader_size(), container_2.leader_size()))
		{
			std::string cont_1_size = std::to_string(container_1.leader_size());
			std::string cont_2_size = std::to_string(container_2.leader_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.leader_size(), container_2.leader_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::leader_id obj{dcon::leader_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.leader_name)
			{
				dcon::unit_name_id cont_1_val = container_1.leader_get_name(obj);
				dcon::unit_name_id cont_2_val = container_2.leader_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_personality)
			{
				dcon::leader_trait_id cont_1_val = container_1.leader_get_personality(obj);
				dcon::leader_trait_id cont_2_val = container_2.leader_get_personality(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "personality: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_background)
			{
				dcon::leader_trait_id cont_1_val = container_1.leader_get_background(obj);
				dcon::leader_trait_id cont_2_val = container_2.leader_get_background(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "background: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_since)
			{
				const auto& cont_1_val = container_1.leader_get_since(obj);
				const auto& cont_2_val = container_2.leader_get_since(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "since: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_prestige)
			{
				const auto& cont_1_val = container_1.leader_get_prestige(obj);
				const auto& cont_2_val = container_2.leader_get_prestige(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "prestige: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.leader_is_admiral)
			{
				const auto& cont_1_val = container_1.leader_get_is_admiral(obj);
				const auto& cont_2_val = container_2.leader_get_is_admiral(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_admiral: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.army_leadership)
	{
		report += std::string("ARMY_LEADERSHIP") + "\n";
		if(!compare_values(container_1.army_leadership_size(), container_2.army_leadership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.army_leadership_size());
			std::string cont_2_size = std::to_string(container_2.army_leadership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.army_leadership_size(), container_2.army_leadership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::army_leadership_id obj{dcon::army_leadership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.army_leadership_army)
			{
				if(!compare_values(container_1.army_leadership_get_army(obj), container_2.army_leadership_get_army(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_leadership_get_army(obj).value);
					auto cont_2_val = std::to_string(container_2.army_leadership_get_army(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "army: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.army_leadership_general)
			{
				if(!compare_values(container_1.army_leadership_get_general(obj), container_2.army_leadership_get_general(obj)))
				{
					auto cont_1_val = std::to_string(container_1.army_leadership_get_general(obj).value);
					auto cont_2_val = std::to_string(container_2.army_leadership_get_general(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "general: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.navy_leadership)
	{
		report += std::string("NAVY_LEADERSHIP") + "\n";
		if(!compare_values(container_1.navy_leadership_size(), container_2.navy_leadership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.navy_leadership_size());
			std::string cont_2_size = std::to_string(container_2.navy_leadership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.navy_leadership_size(), container_2.navy_leadership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::navy_leadership_id obj{dcon::navy_leadership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.navy_leadership_navy)
			{
				if(!compare_values(container_1.navy_leadership_get_navy(obj), container_2.navy_leadership_get_navy(obj)))
				{
					auto cont_1_val = std::to_string(container_1.navy_leadership_get_navy(obj).value);
					auto cont_2_val = std::to_string(container_2.navy_leadership_get_navy(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "navy: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.navy_leadership_admiral)
			{
				if(!compare_values(container_1.navy_leadership_get_admiral(obj), container_2.navy_leadership_get_admiral(obj)))
				{
					auto cont_1_val = std::to_string(container_1.navy_leadership_get_admiral(obj).value);
					auto cont_2_val = std::to_string(container_2.navy_leadership_get_admiral(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "admiral: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.leader_loyalty)
	{
		report += std::string("LEADER_LOYALTY") + "\n";
		if(!compare_values(container_1.leader_loyalty_size(), container_2.leader_loyalty_size()))
		{
			std::string cont_1_size = std::to_string(container_1.leader_loyalty_size());
			std::string cont_2_size = std::to_string(container_2.leader_loyalty_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.leader_loyalty_size(), container_2.leader_loyalty_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::leader_loyalty_id obj{dcon::leader_loyalty_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.leader_loyalty_nation)
			{
				if(!compare_values(container_1.leader_loyalty_get_nation(obj), container_2.leader_loyalty_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.leader_loyalty_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.leader_loyalty_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.leader_loyalty_leader)
			{
				if(!compare_values(container_1.leader_loyalty_get_leader(obj), container_2.leader_loyalty_get_leader(obj)))
				{
					auto cont_1_val = std::to_string(container_1.leader_loyalty_get_leader(obj).value);
					auto cont_2_val = std::to_string(container_2.leader_loyalty_get_leader(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "leader: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.war)
	{
		report += std::string("WAR") + "\n";
		if(!compare_values(container_1.war_size(), container_2.war_size()))
		{
			std::string cont_1_size = std::to_string(container_1.war_size());
			std::string cont_2_size = std::to_string(container_2.war_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.war_size(), container_2.war_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::war_id obj{dcon::war_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.war_primary_attacker)
			{
				dcon::nation_id cont_1_val = container_1.war_get_primary_attacker(obj);
				dcon::nation_id cont_2_val = container_2.war_get_primary_attacker(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "primary_attacker: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_primary_defender)
			{
				dcon::nation_id cont_1_val = container_1.war_get_primary_defender(obj);
				dcon::nation_id cont_2_val = container_2.war_get_primary_defender(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "primary_defender: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_start_date)
			{
				const auto& cont_1_val = container_1.war_get_start_date(obj);
				const auto& cont_2_val = container_2.war_get_start_date(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "start_date: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_name)
			{
				dcon::text_key cont_1_val = container_1.war_get_name(obj);
				dcon::text_key cont_2_val = container_2.war_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_over_state)
			{
				dcon::state_definition_id cont_1_val = container_1.war_get_over_state(obj);
				dcon::state_definition_id cont_2_val = container_2.war_get_over_state(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "over_state: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_original_target)
			{
				dcon::nation_id cont_1_val = container_1.war_get_original_target(obj);
				dcon::nation_id cont_2_val = container_2.war_get_original_target(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "original_target: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_original_attacker)
			{
				dcon::nation_id cont_1_val = container_1.war_get_original_attacker(obj);
				dcon::nation_id cont_2_val = container_2.war_get_original_attacker(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "original_attacker: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_over_tag)
			{
				dcon::national_identity_id cont_1_val = container_1.war_get_over_tag(obj);
				dcon::national_identity_id cont_2_val = container_2.war_get_over_tag(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "over_tag: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_is_great)
			{
				const auto& cont_1_val = container_1.war_get_is_great(obj);
				const auto& cont_2_val = container_2.war_get_is_great(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_great: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_is_crisis_war)
			{
				const auto& cont_1_val = container_1.war_get_is_crisis_war(obj);
				const auto& cont_2_val = container_2.war_get_is_crisis_war(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_crisis_war: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_number_of_battles)
			{
				const auto& cont_1_val = container_1.war_get_number_of_battles(obj);
				const auto& cont_2_val = container_2.war_get_number_of_battles(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "number_of_battles: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_attacker_battle_score)
			{
				const auto& cont_1_val = container_1.war_get_attacker_battle_score(obj);
				const auto& cont_2_val = container_2.war_get_attacker_battle_score(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "attacker_battle_score: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.war_defender_battle_score)
			{
				const auto& cont_1_val = container_1.war_get_defender_battle_score(obj);
				const auto& cont_2_val = container_2.war_get_defender_battle_score(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defender_battle_score: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.peace_offer)
	{
		report += std::string("PEACE_OFFER") + "\n";
		if(!compare_values(container_1.peace_offer_size(), container_2.peace_offer_size()))
		{
			std::string cont_1_size = std::to_string(container_1.peace_offer_size());
			std::string cont_2_size = std::to_string(container_2.peace_offer_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.peace_offer_size(), container_2.peace_offer_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::peace_offer_id obj{dcon::peace_offer_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.peace_offer_target)
			{
				dcon::nation_id cont_1_val = container_1.peace_offer_get_target(obj);
				dcon::nation_id cont_2_val = container_2.peace_offer_get_target(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "target: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.peace_offer_is_concession)
			{
				const auto& cont_1_val = container_1.peace_offer_get_is_concession(obj);
				const auto& cont_2_val = container_2.peace_offer_get_is_concession(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_concession: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.peace_offer_is_crisis_offer)
			{
				const auto& cont_1_val = container_1.peace_offer_get_is_crisis_offer(obj);
				const auto& cont_2_val = container_2.peace_offer_get_is_crisis_offer(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_crisis_offer: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.pending_peace_offer)
	{
		report += std::string("PENDING_PEACE_OFFER") + "\n";
		if(!compare_values(container_1.pending_peace_offer_size(), container_2.pending_peace_offer_size()))
		{
			std::string cont_1_size = std::to_string(container_1.pending_peace_offer_size());
			std::string cont_2_size = std::to_string(container_2.pending_peace_offer_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.pending_peace_offer_size(), container_2.pending_peace_offer_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::pending_peace_offer_id obj{dcon::pending_peace_offer_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.pending_peace_offer_nation)
			{
				if(!compare_values(container_1.pending_peace_offer_get_nation(obj), container_2.pending_peace_offer_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.pending_peace_offer_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.pending_peace_offer_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.pending_peace_offer_peace_offer)
			{
				if(!compare_values(container_1.pending_peace_offer_get_peace_offer(obj), container_2.pending_peace_offer_get_peace_offer(obj)))
				{
					auto cont_1_val = std::to_string(container_1.pending_peace_offer_get_peace_offer(obj).value);
					auto cont_2_val = std::to_string(container_2.pending_peace_offer_get_peace_offer(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "peace_offer: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.war_settlement)
	{
		report += std::string("WAR_SETTLEMENT") + "\n";
		if(!compare_values(container_1.war_settlement_size(), container_2.war_settlement_size()))
		{
			std::string cont_1_size = std::to_string(container_1.war_settlement_size());
			std::string cont_2_size = std::to_string(container_2.war_settlement_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.war_settlement_size(), container_2.war_settlement_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::war_settlement_id obj{dcon::war_settlement_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.war_settlement_war)
			{
				if(!compare_values(container_1.war_settlement_get_war(obj), container_2.war_settlement_get_war(obj)))
				{
					auto cont_1_val = std::to_string(container_1.war_settlement_get_war(obj).value);
					auto cont_2_val = std::to_string(container_2.war_settlement_get_war(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "war: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.war_settlement_peace_offer)
			{
				if(!compare_values(container_1.war_settlement_get_peace_offer(obj), container_2.war_settlement_get_peace_offer(obj)))
				{
					auto cont_1_val = std::to_string(container_1.war_settlement_get_peace_offer(obj).value);
					auto cont_2_val = std::to_string(container_2.war_settlement_get_peace_offer(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "peace_offer: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.wargoal)
	{
		report += std::string("WARGOAL") + "\n";
		if(!compare_values(container_1.wargoal_size(), container_2.wargoal_size()))
		{
			std::string cont_1_size = std::to_string(container_1.wargoal_size());
			std::string cont_2_size = std::to_string(container_2.wargoal_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.wargoal_size(), container_2.wargoal_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::wargoal_id obj{dcon::wargoal_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.wargoal_added_by)
			{
				dcon::nation_id cont_1_val = container_1.wargoal_get_added_by(obj);
				dcon::nation_id cont_2_val = container_2.wargoal_get_added_by(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "added_by: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.wargoal_target_nation)
			{
				dcon::nation_id cont_1_val = container_1.wargoal_get_target_nation(obj);
				dcon::nation_id cont_2_val = container_2.wargoal_get_target_nation(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "target_nation: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.wargoal_type)
			{
				dcon::cb_type_id cont_1_val = container_1.wargoal_get_type(obj);
				dcon::cb_type_id cont_2_val = container_2.wargoal_get_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.wargoal_associated_tag)
			{
				dcon::national_identity_id cont_1_val = container_1.wargoal_get_associated_tag(obj);
				dcon::national_identity_id cont_2_val = container_2.wargoal_get_associated_tag(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "associated_tag: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.wargoal_secondary_nation)
			{
				dcon::nation_id cont_1_val = container_1.wargoal_get_secondary_nation(obj);
				dcon::nation_id cont_2_val = container_2.wargoal_get_secondary_nation(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "secondary_nation: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.wargoal_associated_state)
			{
				dcon::state_definition_id cont_1_val = container_1.wargoal_get_associated_state(obj);
				dcon::state_definition_id cont_2_val = container_2.wargoal_get_associated_state(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "associated_state: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.wargoal_ticking_war_score)
			{
				const auto& cont_1_val = container_1.wargoal_get_ticking_war_score(obj);
				const auto& cont_2_val = container_2.wargoal_get_ticking_war_score(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ticking_war_score: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.war_participant)
	{
		report += std::string("WAR_PARTICIPANT") + "\n";
		if(!compare_values(container_1.war_participant_size(), container_2.war_participant_size()))
		{
			std::string cont_1_size = std::to_string(container_1.war_participant_size());
			std::string cont_2_size = std::to_string(container_2.war_participant_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.war_participant_size(), container_2.war_participant_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::war_participant_id obj{dcon::war_participant_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.war_participant_war)
			{
				if(!compare_values(container_1.war_participant_get_war(obj), container_2.war_participant_get_war(obj)))
				{
					auto cont_1_val = std::to_string(container_1.war_participant_get_war(obj).value);
					auto cont_2_val = std::to_string(container_2.war_participant_get_war(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "war: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.war_participant_nation)
			{
				if(!compare_values(container_1.war_participant_get_nation(obj), container_2.war_participant_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.war_participant_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.war_participant_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.war_participant_is_attacker)
			{
				const auto& cont_1_val = container_1.war_participant_get_is_attacker(obj);
				const auto& cont_2_val = container_2.war_participant_get_is_attacker(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_attacker: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.wargoals_attached)
	{
		report += std::string("WARGOALS_ATTACHED") + "\n";
		if(!compare_values(container_1.wargoals_attached_size(), container_2.wargoals_attached_size()))
		{
			std::string cont_1_size = std::to_string(container_1.wargoals_attached_size());
			std::string cont_2_size = std::to_string(container_2.wargoals_attached_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.wargoals_attached_size(), container_2.wargoals_attached_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::wargoals_attached_id obj{dcon::wargoals_attached_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.wargoals_attached_war)
			{
				if(!compare_values(container_1.wargoals_attached_get_war(obj), container_2.wargoals_attached_get_war(obj)))
				{
					auto cont_1_val = std::to_string(container_1.wargoals_attached_get_war(obj).value);
					auto cont_2_val = std::to_string(container_2.wargoals_attached_get_war(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "war: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.wargoals_attached_wargoal)
			{
				if(!compare_values(container_1.wargoals_attached_get_wargoal(obj), container_2.wargoals_attached_get_wargoal(obj)))
				{
					auto cont_1_val = std::to_string(container_1.wargoals_attached_get_wargoal(obj).value);
					auto cont_2_val = std::to_string(container_2.wargoals_attached_get_wargoal(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "wargoal: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.peace_offer_item)
	{
		report += std::string("PEACE_OFFER_ITEM") + "\n";
		if(!compare_values(container_1.peace_offer_item_size(), container_2.peace_offer_item_size()))
		{
			std::string cont_1_size = std::to_string(container_1.peace_offer_item_size());
			std::string cont_2_size = std::to_string(container_2.peace_offer_item_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.peace_offer_item_size(), container_2.peace_offer_item_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::peace_offer_item_id obj{dcon::peace_offer_item_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.peace_offer_item_peace_offer)
			{
				if(!compare_values(container_1.peace_offer_item_get_peace_offer(obj), container_2.peace_offer_item_get_peace_offer(obj)))
				{
					auto cont_1_val = std::to_string(container_1.peace_offer_item_get_peace_offer(obj).value);
					auto cont_2_val = std::to_string(container_2.peace_offer_item_get_peace_offer(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "peace_offer: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.peace_offer_item_wargoal)
			{
				if(!compare_values(container_1.peace_offer_item_get_wargoal(obj), container_2.peace_offer_item_get_wargoal(obj)))
				{
					auto cont_1_val = std::to_string(container_1.peace_offer_item_get_wargoal(obj).value);
					auto cont_2_val = std::to_string(container_2.peace_offer_item_get_wargoal(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "wargoal: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.state_definition)
	{
		report += std::string("STATE_DEFINITION") + "\n";
		if(!compare_values(container_1.state_definition_size(), container_2.state_definition_size()))
		{
			std::string cont_1_size = std::to_string(container_1.state_definition_size());
			std::string cont_2_size = std::to_string(container_2.state_definition_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.state_definition_size(), container_2.state_definition_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::state_definition_id obj{dcon::state_definition_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.state_definition_name)
			{
				dcon::text_key cont_1_val = container_1.state_definition_get_name(obj);
				dcon::text_key cont_2_val = container_2.state_definition_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_definition_colonization_temperature)
			{
				const auto& cont_1_val = container_1.state_definition_get_colonization_temperature(obj);
				const auto& cont_2_val = container_2.state_definition_get_colonization_temperature(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "colonization_temperature: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_definition_colonization_stage)
			{
				const auto& cont_1_val = container_1.state_definition_get_colonization_stage(obj);
				const auto& cont_2_val = container_2.state_definition_get_colonization_stage(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "colonization_stage: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.administration)
	{
		report += std::string("ADMINISTRATION") + "\n";
		if(!compare_values(container_1.administration_size(), container_2.administration_size()))
		{
			std::string cont_1_size = std::to_string(container_1.administration_size());
			std::string cont_2_size = std::to_string(container_2.administration_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.administration_size(), container_2.administration_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::administration_id obj{dcon::administration_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.administration_capital)
			{
				dcon::province_id cont_1_val = container_1.administration_get_capital(obj);
				dcon::province_id cont_2_val = container_2.administration_get_capital(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "capital: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.administration_desired_size)
			{
				const auto& cont_1_val = container_1.administration_get_desired_size(obj);
				const auto& cont_2_val = container_2.administration_get_desired_size(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "desired_size: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.administration_weight)
			{
				const auto& cont_1_val = container_1.administration_get_weight(obj);
				const auto& cont_2_val = container_2.administration_get_weight(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "weight: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.nation_administration)
	{
		report += std::string("NATION_ADMINISTRATION") + "\n";
		if(!compare_values(container_1.nation_administration_size(), container_2.nation_administration_size()))
		{
			std::string cont_1_size = std::to_string(container_1.nation_administration_size());
			std::string cont_2_size = std::to_string(container_2.nation_administration_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.nation_administration_size(), container_2.nation_administration_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::nation_administration_id obj{dcon::nation_administration_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.nation_administration_administration)
			{
				if(!compare_values(container_1.nation_administration_get_administration(obj), container_2.nation_administration_get_administration(obj)))
				{
					auto cont_1_val = std::to_string(container_1.nation_administration_get_administration(obj).value);
					auto cont_2_val = std::to_string(container_2.nation_administration_get_administration(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "administration: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.nation_administration_nation)
			{
				if(!compare_values(container_1.nation_administration_get_nation(obj), container_2.nation_administration_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.nation_administration_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.nation_administration_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.state_instance)
	{
		report += std::string("STATE_INSTANCE") + "\n";
		if(!compare_values(container_1.state_instance_size(), container_2.state_instance_size()))
		{
			std::string cont_1_size = std::to_string(container_1.state_instance_size());
			std::string cont_2_size = std::to_string(container_2.state_instance_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.state_instance_size(), container_2.state_instance_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::state_instance_id obj{dcon::state_instance_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.state_instance_definition)
			{
				dcon::state_definition_id cont_1_val = container_1.state_instance_get_definition(obj);
				dcon::state_definition_id cont_2_val = container_2.state_instance_get_definition(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "definition: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_instance_flashpoint_tag)
			{
				dcon::national_identity_id cont_1_val = container_1.state_instance_get_flashpoint_tag(obj);
				dcon::national_identity_id cont_2_val = container_2.state_instance_get_flashpoint_tag(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "flashpoint_tag: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_instance_flashpoint_tension)
			{
				const auto& cont_1_val = container_1.state_instance_get_flashpoint_tension(obj);
				const auto& cont_2_val = container_2.state_instance_get_flashpoint_tension(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "flashpoint_tension: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_instance_capital)
			{
				dcon::province_id cont_1_val = container_1.state_instance_get_capital(obj);
				dcon::province_id cont_2_val = container_2.state_instance_get_capital(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "capital: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_instance_owner_focus)
			{
				dcon::national_focus_id cont_1_val = container_1.state_instance_get_owner_focus(obj);
				dcon::national_focus_id cont_2_val = container_2.state_instance_get_owner_focus(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "owner_focus: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_instance_demographics)
			{
				if(!compare_values(container_1.state_instance_get_demographics_size(), container_2.state_instance_get_demographics_size()))
				{
					std::string cont_1_size = std::to_string(container_1.state_instance_get_demographics_size());
					std::string cont_2_size = std::to_string(container_2.state_instance_get_demographics_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: demographics, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.state_instance_get_demographics_size(), container_2.state_instance_get_demographics_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.state_instance_get_demographics(obj, arr_index);
					const auto& cont_2_arr_val = container_2.state_instance_get_demographics(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "demographics, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.state_instance_demographics_alt)
			{
				if(!compare_values(container_1.state_instance_get_demographics_alt_size(), container_2.state_instance_get_demographics_alt_size()))
				{
					std::string cont_1_size = std::to_string(container_1.state_instance_get_demographics_alt_size());
					std::string cont_2_size = std::to_string(container_2.state_instance_get_demographics_alt_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: demographics_alt, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.state_instance_get_demographics_alt_size(), container_2.state_instance_get_demographics_alt_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.state_instance_get_demographics_alt(obj, arr_index);
					const auto& cont_2_arr_val = container_2.state_instance_get_demographics_alt(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "demographics_alt, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.state_instance_dominant_culture)
			{
				dcon::culture_id cont_1_val = container_1.state_instance_get_dominant_culture(obj);
				dcon::culture_id cont_2_val = container_2.state_instance_get_dominant_culture(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_culture: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_instance_dominant_religion)
			{
				dcon::religion_id cont_1_val = container_1.state_instance_get_dominant_religion(obj);
				dcon::religion_id cont_2_val = container_2.state_instance_get_dominant_religion(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_religion: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_instance_dominant_ideology)
			{
				dcon::ideology_id cont_1_val = container_1.state_instance_get_dominant_ideology(obj);
				dcon::ideology_id cont_2_val = container_2.state_instance_get_dominant_ideology(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_ideology: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_instance_dominant_issue_option)
			{
				dcon::issue_option_id cont_1_val = container_1.state_instance_get_dominant_issue_option(obj);
				dcon::issue_option_id cont_2_val = container_2.state_instance_get_dominant_issue_option(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_issue_option: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_instance_naval_base_is_taken)
			{
				const auto& cont_1_val = container_1.state_instance_get_naval_base_is_taken(obj);
				const auto& cont_2_val = container_2.state_instance_get_naval_base_is_taken(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "naval_base_is_taken: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.state_instance_production_directive)
			{
				if(!compare_values(container_1.state_instance_get_production_directive_size(), container_2.state_instance_get_production_directive_size()))
				{
					std::string cont_1_size = std::to_string(container_1.state_instance_get_production_directive_size());
					std::string cont_2_size = std::to_string(container_2.state_instance_get_production_directive_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: production_directive, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.state_instance_get_production_directive_size(), container_2.state_instance_get_production_directive_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::production_directive_id arr_index{dcon::production_directive_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.state_instance_get_production_directive(obj, arr_index);
					const auto& cont_2_arr_val = container_2.state_instance_get_production_directive(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "production_directive, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.colonization)
	{
		report += std::string("COLONIZATION") + "\n";
		if(!compare_values(container_1.colonization_size(), container_2.colonization_size()))
		{
			std::string cont_1_size = std::to_string(container_1.colonization_size());
			std::string cont_2_size = std::to_string(container_2.colonization_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.colonization_size(), container_2.colonization_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::colonization_id obj{dcon::colonization_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.colonization_state)
			{
				if(!compare_values(container_1.colonization_get_state(obj), container_2.colonization_get_state(obj)))
				{
					auto cont_1_val = std::to_string(container_1.colonization_get_state(obj).value);
					auto cont_2_val = std::to_string(container_2.colonization_get_state(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "state: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.colonization_colonizer)
			{
				if(!compare_values(container_1.colonization_get_colonizer(obj), container_2.colonization_get_colonizer(obj)))
				{
					auto cont_1_val = std::to_string(container_1.colonization_get_colonizer(obj).value);
					auto cont_2_val = std::to_string(container_2.colonization_get_colonizer(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "colonizer: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.colonization_last_investment)
			{
				const auto& cont_1_val = container_1.colonization_get_last_investment(obj);
				const auto& cont_2_val = container_2.colonization_get_last_investment(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "last_investment: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.colonization_points_invested)
			{
				const auto& cont_1_val = container_1.colonization_get_points_invested(obj);
				const auto& cont_2_val = container_2.colonization_get_points_invested(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "points_invested: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.colonization_level)
			{
				const auto& cont_1_val = container_1.colonization_get_level(obj);
				const auto& cont_2_val = container_2.colonization_get_level(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "level: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.state_ownership)
	{
		report += std::string("STATE_OWNERSHIP") + "\n";
		if(!compare_values(container_1.state_ownership_size(), container_2.state_ownership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.state_ownership_size());
			std::string cont_2_size = std::to_string(container_2.state_ownership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.state_ownership_size(), container_2.state_ownership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::state_ownership_id obj{dcon::state_ownership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.state_ownership_state)
			{
				if(!compare_values(container_1.state_ownership_get_state(obj), container_2.state_ownership_get_state(obj)))
				{
					auto cont_1_val = std::to_string(container_1.state_ownership_get_state(obj).value);
					auto cont_2_val = std::to_string(container_2.state_ownership_get_state(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "state: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.state_ownership_nation)
			{
				if(!compare_values(container_1.state_ownership_get_nation(obj), container_2.state_ownership_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.state_ownership_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.state_ownership_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.flashpoint_focus)
	{
		report += std::string("FLASHPOINT_FOCUS") + "\n";
		if(!compare_values(container_1.flashpoint_focus_size(), container_2.flashpoint_focus_size()))
		{
			std::string cont_1_size = std::to_string(container_1.flashpoint_focus_size());
			std::string cont_2_size = std::to_string(container_2.flashpoint_focus_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.flashpoint_focus_size(), container_2.flashpoint_focus_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::flashpoint_focus_id obj{dcon::flashpoint_focus_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.flashpoint_focus_state)
			{
				if(!compare_values(container_1.flashpoint_focus_get_state(obj), container_2.flashpoint_focus_get_state(obj)))
				{
					auto cont_1_val = std::to_string(container_1.flashpoint_focus_get_state(obj).value);
					auto cont_2_val = std::to_string(container_2.flashpoint_focus_get_state(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "state: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.flashpoint_focus_nation)
			{
				if(!compare_values(container_1.flashpoint_focus_get_nation(obj), container_2.flashpoint_focus_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.flashpoint_focus_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.flashpoint_focus_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.abstract_state_membership)
	{
		report += std::string("ABSTRACT_STATE_MEMBERSHIP") + "\n";
		if(!compare_values(container_1.abstract_state_membership_size(), container_2.abstract_state_membership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.abstract_state_membership_size());
			std::string cont_2_size = std::to_string(container_2.abstract_state_membership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.abstract_state_membership_size(), container_2.abstract_state_membership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::abstract_state_membership_id obj{dcon::abstract_state_membership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.abstract_state_membership_province)
			{
				if(!compare_values(container_1.abstract_state_membership_get_province(obj), container_2.abstract_state_membership_get_province(obj)))
				{
					auto cont_1_val = std::to_string(container_1.abstract_state_membership_get_province(obj).value);
					auto cont_2_val = std::to_string(container_2.abstract_state_membership_get_province(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "province: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.abstract_state_membership_state)
			{
				if(!compare_values(container_1.abstract_state_membership_get_state(obj), container_2.abstract_state_membership_get_state(obj)))
				{
					auto cont_1_val = std::to_string(container_1.abstract_state_membership_get_state(obj).value);
					auto cont_2_val = std::to_string(container_2.abstract_state_membership_get_state(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "state: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.abstract_state_membership_priority)
			{
				const auto& cont_1_val = container_1.abstract_state_membership_get_priority(obj);
				const auto& cont_2_val = container_2.abstract_state_membership_get_priority(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "priority: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.region)
	{
		report += std::string("REGION") + "\n";
		if(!compare_values(container_1.region_size(), container_2.region_size()))
		{
			std::string cont_1_size = std::to_string(container_1.region_size());
			std::string cont_2_size = std::to_string(container_2.region_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.region_size(), container_2.region_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::region_id obj{dcon::region_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.region_name)
			{
				dcon::text_key cont_1_val = container_1.region_get_name(obj);
				dcon::text_key cont_2_val = container_2.region_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.region_membership)
	{
		report += std::string("REGION_MEMBERSHIP") + "\n";
		if(!compare_values(container_1.region_membership_size(), container_2.region_membership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.region_membership_size());
			std::string cont_2_size = std::to_string(container_2.region_membership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.region_membership_size(), container_2.region_membership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::region_membership_id obj{dcon::region_membership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.region_membership_province)
			{
				if(!compare_values(container_1.region_membership_get_province(obj), container_2.region_membership_get_province(obj)))
				{
					auto cont_1_val = std::to_string(container_1.region_membership_get_province(obj).value);
					auto cont_2_val = std::to_string(container_2.region_membership_get_province(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "province: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.region_membership_region)
			{
				if(!compare_values(container_1.region_membership_get_region(obj), container_2.region_membership_get_region(obj)))
				{
					auto cont_1_val = std::to_string(container_1.region_membership_get_region(obj).value);
					auto cont_2_val = std::to_string(container_2.region_membership_get_region(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "region: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.core)
	{
		report += std::string("CORE") + "\n";
		if(!compare_values(container_1.core_size(), container_2.core_size()))
		{
			std::string cont_1_size = std::to_string(container_1.core_size());
			std::string cont_2_size = std::to_string(container_2.core_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.core_size(), container_2.core_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::core_id obj{dcon::core_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.core_province)
			{
				if(!compare_values(container_1.core_get_province(obj), container_2.core_get_province(obj)))
				{
					auto cont_1_val = std::to_string(container_1.core_get_province(obj).value);
					auto cont_2_val = std::to_string(container_2.core_get_province(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "province: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.core_identity)
			{
				if(!compare_values(container_1.core_get_identity(obj), container_2.core_get_identity(obj)))
				{
					auto cont_1_val = std::to_string(container_1.core_get_identity(obj).value);
					auto cont_2_val = std::to_string(container_2.core_get_identity(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "identity: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.identity_holder)
	{
		report += std::string("IDENTITY_HOLDER") + "\n";
		if(!compare_values(container_1.identity_holder_size(), container_2.identity_holder_size()))
		{
			std::string cont_1_size = std::to_string(container_1.identity_holder_size());
			std::string cont_2_size = std::to_string(container_2.identity_holder_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.identity_holder_size(), container_2.identity_holder_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::identity_holder_id obj{dcon::identity_holder_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.identity_holder_nation)
			{
				if(!compare_values(container_1.identity_holder_get_nation(obj), container_2.identity_holder_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.identity_holder_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.identity_holder_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.identity_holder_identity)
			{
				if(!compare_values(container_1.identity_holder_get_identity(obj), container_2.identity_holder_get_identity(obj)))
				{
					auto cont_1_val = std::to_string(container_1.identity_holder_get_identity(obj).value);
					auto cont_2_val = std::to_string(container_2.identity_holder_get_identity(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "identity: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.technology)
	{
		report += std::string("TECHNOLOGY") + "\n";
		if(!compare_values(container_1.technology_size(), container_2.technology_size()))
		{
			std::string cont_1_size = std::to_string(container_1.technology_size());
			std::string cont_2_size = std::to_string(container_2.technology_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.technology_size(), container_2.technology_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::technology_id obj{dcon::technology_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.technology_name)
			{
				dcon::text_key cont_1_val = container_1.technology_get_name(obj);
				dcon::text_key cont_2_val = container_2.technology_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_desc)
			{
				dcon::text_key cont_1_val = container_1.technology_get_desc(obj);
				dcon::text_key cont_2_val = container_2.technology_get_desc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "desc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_modifier)
			{
				dcon::modifier_id cont_1_val = container_1.technology_get_modifier(obj);
				dcon::modifier_id cont_2_val = container_2.technology_get_modifier(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "modifier: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_plurality)
			{
				const auto& cont_1_val = container_1.technology_get_plurality(obj);
				const auto& cont_2_val = container_2.technology_get_plurality(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "plurality: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_image)
			{
				dcon::gfx_object_id cont_1_val = container_1.technology_get_image(obj);
				dcon::gfx_object_id cont_2_val = container_2.technology_get_image(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "image: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_folder_index)
			{
				const auto& cont_1_val = container_1.technology_get_folder_index(obj);
				const auto& cont_2_val = container_2.technology_get_folder_index(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "folder_index: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_year)
			{
				const auto& cont_1_val = container_1.technology_get_year(obj);
				const auto& cont_2_val = container_2.technology_get_year(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "year: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_ai_chance)
			{
				dcon::value_modifier_key cont_1_val = container_1.technology_get_ai_chance(obj);
				dcon::value_modifier_key cont_2_val = container_2.technology_get_ai_chance(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ai_chance: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_ai_weight)
			{
				const auto& cont_1_val = container_1.technology_get_ai_weight(obj);
				const auto& cont_2_val = container_2.technology_get_ai_weight(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ai_weight: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_cost)
			{
				const auto& cont_1_val = container_1.technology_get_cost(obj);
				const auto& cont_2_val = container_2.technology_get_cost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "cost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_leadership_cost)
			{
				const auto& cont_1_val = container_1.technology_get_leadership_cost(obj);
				const auto& cont_2_val = container_2.technology_get_leadership_cost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "leadership_cost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_colonial_points)
			{
				const auto& cont_1_val = container_1.technology_get_colonial_points(obj);
				const auto& cont_2_val = container_2.technology_get_colonial_points(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "colonial_points: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.technology_increase_building)
			{
				if(!compare_values(container_1.technology_get_increase_building_size(), container_2.technology_get_increase_building_size()))
				{
					std::string cont_1_size = std::to_string(container_1.technology_get_increase_building_size());
					std::string cont_2_size = std::to_string(container_2.technology_get_increase_building_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: increase_building, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.technology_get_increase_building_size(), container_2.technology_get_increase_building_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.technology_get_increase_building(obj, economy::province_building_type(arr_index));
					const auto& cont_2_arr_val = container_2.technology_get_increase_building(obj, economy::province_building_type(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "increase_building, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.technology_activate_unit)
			{
				if(!compare_values(container_1.technology_get_activate_unit_size(), container_2.technology_get_activate_unit_size()))
				{
					std::string cont_1_size = std::to_string(container_1.technology_get_activate_unit_size());
					std::string cont_2_size = std::to_string(container_2.technology_get_activate_unit_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: activate_unit, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.technology_get_activate_unit_size(), container_2.technology_get_activate_unit_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.technology_get_activate_unit(obj, arr_index);
					const auto& cont_2_arr_val = container_2.technology_get_activate_unit(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "activate_unit, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.technology_activate_building)
			{
				if(!compare_values(container_1.technology_get_activate_building_size(), container_2.technology_get_activate_building_size()))
				{
					std::string cont_1_size = std::to_string(container_1.technology_get_activate_building_size());
					std::string cont_2_size = std::to_string(container_2.technology_get_activate_building_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: activate_building, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.technology_get_activate_building_size(), container_2.technology_get_activate_building_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.technology_get_activate_building(obj, arr_index);
					const auto& cont_2_arr_val = container_2.technology_get_activate_building(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "activate_building, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.technology_rgo_goods_output)
			{
				auto vec_1 = container_1.technology_get_rgo_goods_output(obj);
				auto vec_2 = container_2.technology_get_rgo_goods_output(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: rgo_goods_output, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_goods_output, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.technology_factory_goods_output)
			{
				auto vec_1 = container_1.technology_get_factory_goods_output(obj);
				auto vec_2 = container_2.technology_get_factory_goods_output(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: factory_goods_output, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_goods_output, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.technology_rgo_size)
			{
				auto vec_1 = container_1.technology_get_rgo_size(obj);
				auto vec_2 = container_2.technology_get_rgo_size(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: rgo_size, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_size, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.technology_modified_units)
			{
				auto vec_1 = container_1.technology_get_modified_units(obj);
				auto vec_2 = container_2.technology_get_modified_units(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: modified_units, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "modified_units, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.invention)
	{
		report += std::string("INVENTION") + "\n";
		if(!compare_values(container_1.invention_size(), container_2.invention_size()))
		{
			std::string cont_1_size = std::to_string(container_1.invention_size());
			std::string cont_2_size = std::to_string(container_2.invention_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.invention_size(), container_2.invention_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::invention_id obj{dcon::invention_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.invention_name)
			{
				dcon::text_key cont_1_val = container_1.invention_get_name(obj);
				dcon::text_key cont_2_val = container_2.invention_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.invention_desc)
			{
				dcon::text_key cont_1_val = container_1.invention_get_desc(obj);
				dcon::text_key cont_2_val = container_2.invention_get_desc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "desc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.invention_technology_type)
			{
				const auto& cont_1_val = container_1.invention_get_technology_type(obj);
				const auto& cont_2_val = container_2.invention_get_technology_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "technology_type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.invention_colonial_points)
			{
				const auto& cont_1_val = container_1.invention_get_colonial_points(obj);
				const auto& cont_2_val = container_2.invention_get_colonial_points(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "colonial_points: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.invention_increase_building)
			{
				if(!compare_values(container_1.invention_get_increase_building_size(), container_2.invention_get_increase_building_size()))
				{
					std::string cont_1_size = std::to_string(container_1.invention_get_increase_building_size());
					std::string cont_2_size = std::to_string(container_2.invention_get_increase_building_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: increase_building, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.invention_get_increase_building_size(), container_2.invention_get_increase_building_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.invention_get_increase_building(obj, economy::province_building_type(arr_index));
					const auto& cont_2_arr_val = container_2.invention_get_increase_building(obj, economy::province_building_type(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "increase_building, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.invention_modifier)
			{
				dcon::modifier_id cont_1_val = container_1.invention_get_modifier(obj);
				dcon::modifier_id cont_2_val = container_2.invention_get_modifier(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "modifier: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.invention_chance)
			{
				dcon::value_modifier_key cont_1_val = container_1.invention_get_chance(obj);
				dcon::value_modifier_key cont_2_val = container_2.invention_get_chance(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "chance: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.invention_limit)
			{
				dcon::trigger_key cont_1_val = container_1.invention_get_limit(obj);
				dcon::trigger_key cont_2_val = container_2.invention_get_limit(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "limit: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.invention_enable_gas_attack)
			{
				const auto& cont_1_val = container_1.invention_get_enable_gas_attack(obj);
				const auto& cont_2_val = container_2.invention_get_enable_gas_attack(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "enable_gas_attack: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.invention_enable_gas_defense)
			{
				const auto& cont_1_val = container_1.invention_get_enable_gas_defense(obj);
				const auto& cont_2_val = container_2.invention_get_enable_gas_defense(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "enable_gas_defense: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.invention_shared_prestige)
			{
				const auto& cont_1_val = container_1.invention_get_shared_prestige(obj);
				const auto& cont_2_val = container_2.invention_get_shared_prestige(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "shared_prestige: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.invention_plurality)
			{
				const auto& cont_1_val = container_1.invention_get_plurality(obj);
				const auto& cont_2_val = container_2.invention_get_plurality(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "plurality: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.invention_activate_unit)
			{
				if(!compare_values(container_1.invention_get_activate_unit_size(), container_2.invention_get_activate_unit_size()))
				{
					std::string cont_1_size = std::to_string(container_1.invention_get_activate_unit_size());
					std::string cont_2_size = std::to_string(container_2.invention_get_activate_unit_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: activate_unit, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.invention_get_activate_unit_size(), container_2.invention_get_activate_unit_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.invention_get_activate_unit(obj, arr_index);
					const auto& cont_2_arr_val = container_2.invention_get_activate_unit(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "activate_unit, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.invention_activate_crime)
			{
				if(!compare_values(container_1.invention_get_activate_crime_size(), container_2.invention_get_activate_crime_size()))
				{
					std::string cont_1_size = std::to_string(container_1.invention_get_activate_crime_size());
					std::string cont_2_size = std::to_string(container_2.invention_get_activate_crime_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: activate_crime, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.invention_get_activate_crime_size(), container_2.invention_get_activate_crime_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::crime_id arr_index{dcon::crime_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.invention_get_activate_crime(obj, arr_index);
					const auto& cont_2_arr_val = container_2.invention_get_activate_crime(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "activate_crime, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.invention_activate_building)
			{
				if(!compare_values(container_1.invention_get_activate_building_size(), container_2.invention_get_activate_building_size()))
				{
					std::string cont_1_size = std::to_string(container_1.invention_get_activate_building_size());
					std::string cont_2_size = std::to_string(container_2.invention_get_activate_building_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: activate_building, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.invention_get_activate_building_size(), container_2.invention_get_activate_building_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.invention_get_activate_building(obj, arr_index);
					const auto& cont_2_arr_val = container_2.invention_get_activate_building(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "activate_building, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.invention_rgo_goods_output)
			{
				auto vec_1 = container_1.invention_get_rgo_goods_output(obj);
				auto vec_2 = container_2.invention_get_rgo_goods_output(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: rgo_goods_output, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_goods_output, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.invention_rgo_size)
			{
				auto vec_1 = container_1.invention_get_rgo_size(obj);
				auto vec_2 = container_2.invention_get_rgo_size(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: rgo_size, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_size, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.invention_factory_goods_output)
			{
				auto vec_1 = container_1.invention_get_factory_goods_output(obj);
				auto vec_2 = container_2.invention_get_factory_goods_output(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: factory_goods_output, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_goods_output, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.invention_factory_goods_throughput)
			{
				auto vec_1 = container_1.invention_get_factory_goods_throughput(obj);
				auto vec_2 = container_2.invention_get_factory_goods_throughput(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: factory_goods_throughput, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_goods_throughput, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.invention_modified_units)
			{
				auto vec_1 = container_1.invention_get_modified_units(obj);
				auto vec_2 = container_2.invention_get_modified_units(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: modified_units, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "modified_units, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.invention_rebel_org)
			{
				auto vec_1 = container_1.invention_get_rebel_org(obj);
				auto vec_2 = container_2.invention_get_rebel_org(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: rebel_org, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rebel_org, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.nation)
	{
		report += std::string("NATION") + "\n";
		if(!compare_values(container_1.nation_size(), container_2.nation_size()))
		{
			std::string cont_1_size = std::to_string(container_1.nation_size());
			std::string cont_2_size = std::to_string(container_2.nation_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.nation_size(), container_2.nation_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::nation_id obj{dcon::nation_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.nation_color)
			{
				const auto& cont_1_val = container_1.nation_get_color(obj);
				const auto& cont_2_val = container_2.nation_get_color(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "color: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_masquerade_identity)
			{
				dcon::national_identity_id cont_1_val = container_1.nation_get_masquerade_identity(obj);
				dcon::national_identity_id cont_2_val = container_2.nation_get_masquerade_identity(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "masquerade_identity: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_primary_culture)
			{
				dcon::culture_id cont_1_val = container_1.nation_get_primary_culture(obj);
				dcon::culture_id cont_2_val = container_2.nation_get_primary_culture(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "primary_culture: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_accepted_cultures)
			{
				if(!compare_values(container_1.nation_get_accepted_cultures_size(), container_2.nation_get_accepted_cultures_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_accepted_cultures_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_accepted_cultures_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: accepted_cultures, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_accepted_cultures_size(), container_2.nation_get_accepted_cultures_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::culture_id arr_index{dcon::culture_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_accepted_cultures(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_accepted_cultures(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "accepted_cultures, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_religion)
			{
				dcon::religion_id cont_1_val = container_1.nation_get_religion(obj);
				dcon::religion_id cont_2_val = container_2.nation_get_religion(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "religion: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_capital)
			{
				dcon::province_id cont_1_val = container_1.nation_get_capital(obj);
				dcon::province_id cont_2_val = container_2.nation_get_capital(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "capital: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_is_civilized)
			{
				const auto& cont_1_val = container_1.nation_get_is_civilized(obj);
				const auto& cont_2_val = container_2.nation_get_is_civilized(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_civilized: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_marked_for_gc)
			{
				const auto& cont_1_val = container_1.nation_get_marked_for_gc(obj);
				const auto& cont_2_val = container_2.nation_get_marked_for_gc(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "marked_for_gc: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_is_great_power)
			{
				const auto& cont_1_val = container_1.nation_get_is_great_power(obj);
				const auto& cont_2_val = container_2.nation_get_is_great_power(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_great_power: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_national_value)
			{
				dcon::modifier_id cont_1_val = container_1.nation_get_national_value(obj);
				dcon::modifier_id cont_2_val = container_2.nation_get_national_value(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "national_value: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_tech_school)
			{
				dcon::modifier_id cont_1_val = container_1.nation_get_tech_school(obj);
				dcon::modifier_id cont_2_val = container_2.nation_get_tech_school(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "tech_school: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_government_type)
			{
				dcon::government_type_id cont_1_val = container_1.nation_get_government_type(obj);
				dcon::government_type_id cont_2_val = container_2.nation_get_government_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "government_type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_plurality)
			{
				const auto& cont_1_val = container_1.nation_get_plurality(obj);
				const auto& cont_2_val = container_2.nation_get_plurality(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "plurality: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_prestige)
			{
				const auto& cont_1_val = container_1.nation_get_prestige(obj);
				const auto& cont_2_val = container_2.nation_get_prestige(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "prestige: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_infamy)
			{
				const auto& cont_1_val = container_1.nation_get_infamy(obj);
				const auto& cont_2_val = container_2.nation_get_infamy(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "infamy: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_revanchism)
			{
				const auto& cont_1_val = container_1.nation_get_revanchism(obj);
				const auto& cont_2_val = container_2.nation_get_revanchism(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "revanchism: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_permanent_colonial_points)
			{
				const auto& cont_1_val = container_1.nation_get_permanent_colonial_points(obj);
				const auto& cont_2_val = container_2.nation_get_permanent_colonial_points(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "permanent_colonial_points: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_active_technologies)
			{
				if(!compare_values(container_1.nation_get_active_technologies_size(), container_2.nation_get_active_technologies_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_active_technologies_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_active_technologies_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: active_technologies, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_active_technologies_size(), container_2.nation_get_active_technologies_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::technology_id arr_index{dcon::technology_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_active_technologies(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_active_technologies(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "active_technologies, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_active_inventions)
			{
				if(!compare_values(container_1.nation_get_active_inventions_size(), container_2.nation_get_active_inventions_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_active_inventions_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_active_inventions_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: active_inventions, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_active_inventions_size(), container_2.nation_get_active_inventions_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::invention_id arr_index{dcon::invention_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_active_inventions(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_active_inventions(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "active_inventions, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_ruling_party)
			{
				dcon::political_party_id cont_1_val = container_1.nation_get_ruling_party(obj);
				dcon::political_party_id cont_2_val = container_2.nation_get_ruling_party(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ruling_party: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_ruling_party_last_appointed)
			{
				const auto& cont_1_val = container_1.nation_get_ruling_party_last_appointed(obj);
				const auto& cont_2_val = container_2.nation_get_ruling_party_last_appointed(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ruling_party_last_appointed: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_issues)
			{
				if(!compare_values(container_1.nation_get_issues_size(), container_2.nation_get_issues_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_issues_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_issues_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: issues, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_issues_size(), container_2.nation_get_issues_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::issue_id arr_index{dcon::issue_id::value_base_t(j)};
					dcon::issue_option_id cont_1_arr_val = container_1.nation_get_issues(obj, arr_index);
					dcon::issue_option_id cont_2_arr_val = container_2.nation_get_issues(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "issues, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_reforms)
			{
				if(!compare_values(container_1.nation_get_reforms_size(), container_2.nation_get_reforms_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_reforms_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_reforms_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: reforms, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_reforms_size(), container_2.nation_get_reforms_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::reform_id arr_index{dcon::reform_id::value_base_t(j)};
					dcon::reform_option_id cont_1_arr_val = container_1.nation_get_reforms(obj, arr_index);
					dcon::reform_option_id cont_2_arr_val = container_2.nation_get_reforms(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "reforms, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_last_issue_or_reform_change)
			{
				const auto& cont_1_val = container_1.nation_get_last_issue_or_reform_change(obj);
				const auto& cont_2_val = container_2.nation_get_last_issue_or_reform_change(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "last_issue_or_reform_change: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_combined_issue_rules)
			{
				const auto& cont_1_val = container_1.nation_get_combined_issue_rules(obj);
				const auto& cont_2_val = container_2.nation_get_combined_issue_rules(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "combined_issue_rules: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_upper_house)
			{
				if(!compare_values(container_1.nation_get_upper_house_size(), container_2.nation_get_upper_house_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_upper_house_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_upper_house_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: upper_house, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_upper_house_size(), container_2.nation_get_upper_house_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::ideology_id arr_index{dcon::ideology_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_upper_house(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_upper_house(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "upper_house, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_is_substate)
			{
				const auto& cont_1_val = container_1.nation_get_is_substate(obj);
				const auto& cont_2_val = container_2.nation_get_is_substate(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_substate: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_flag_variables)
			{
				if(!compare_values(container_1.nation_get_flag_variables_size(), container_2.nation_get_flag_variables_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_flag_variables_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_flag_variables_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: flag_variables, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_flag_variables_size(), container_2.nation_get_flag_variables_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::national_flag_id arr_index{dcon::national_flag_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_flag_variables(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_flag_variables(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "flag_variables, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_variables)
			{
				if(!compare_values(container_1.nation_get_variables_size(), container_2.nation_get_variables_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_variables_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_variables_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: variables, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_variables_size(), container_2.nation_get_variables_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::national_variable_id arr_index{dcon::national_variable_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_variables(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_variables(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "variables, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_modifier_values)
			{
				if(!compare_values(container_1.nation_get_modifier_values_size(), container_2.nation_get_modifier_values_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_modifier_values_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_modifier_values_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: modifier_values, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_modifier_values_size(), container_2.nation_get_modifier_values_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::national_modifier_value arr_index{dcon::national_modifier_value::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_modifier_values(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_modifier_values(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "modifier_values, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_rgo_goods_output)
			{
				if(!compare_values(container_1.nation_get_rgo_goods_output_size(), container_2.nation_get_rgo_goods_output_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_rgo_goods_output_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_rgo_goods_output_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rgo_goods_output, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_rgo_goods_output_size(), container_2.nation_get_rgo_goods_output_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_rgo_goods_output(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_rgo_goods_output(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_goods_output, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_factory_goods_output)
			{
				if(!compare_values(container_1.nation_get_factory_goods_output_size(), container_2.nation_get_factory_goods_output_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_factory_goods_output_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_factory_goods_output_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: factory_goods_output, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_factory_goods_output_size(), container_2.nation_get_factory_goods_output_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_factory_goods_output(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_factory_goods_output(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_goods_output, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_rgo_size)
			{
				if(!compare_values(container_1.nation_get_rgo_size_size(), container_2.nation_get_rgo_size_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_rgo_size_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_rgo_size_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rgo_size, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_rgo_size_size(), container_2.nation_get_rgo_size_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_rgo_size(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_rgo_size(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rgo_size, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_factory_goods_throughput)
			{
				if(!compare_values(container_1.nation_get_factory_goods_throughput_size(), container_2.nation_get_factory_goods_throughput_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_factory_goods_throughput_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_factory_goods_throughput_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: factory_goods_throughput, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_factory_goods_throughput_size(), container_2.nation_get_factory_goods_throughput_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_factory_goods_throughput(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_factory_goods_throughput(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_goods_throughput, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_rebel_org_modifier)
			{
				if(!compare_values(container_1.nation_get_rebel_org_modifier_size(), container_2.nation_get_rebel_org_modifier_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_rebel_org_modifier_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_rebel_org_modifier_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: rebel_org_modifier, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_rebel_org_modifier_size(), container_2.nation_get_rebel_org_modifier_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::rebel_type_id arr_index{dcon::rebel_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_rebel_org_modifier(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_rebel_org_modifier(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rebel_org_modifier, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_unit_stats)
			{
				if(!compare_values(container_1.nation_get_unit_stats_size(), container_2.nation_get_unit_stats_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_unit_stats_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_unit_stats_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: unit_stats, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_unit_stats_size(), container_2.nation_get_unit_stats_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_unit_stats(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_unit_stats(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "unit_stats, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_active_unit)
			{
				if(!compare_values(container_1.nation_get_active_unit_size(), container_2.nation_get_active_unit_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_active_unit_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_active_unit_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: active_unit, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_active_unit_size(), container_2.nation_get_active_unit_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_active_unit(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_active_unit(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "active_unit, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_active_crime)
			{
				if(!compare_values(container_1.nation_get_active_crime_size(), container_2.nation_get_active_crime_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_active_crime_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_active_crime_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: active_crime, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_active_crime_size(), container_2.nation_get_active_crime_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::crime_id arr_index{dcon::crime_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_active_crime(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_active_crime(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "active_crime, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_active_building)
			{
				if(!compare_values(container_1.nation_get_active_building_size(), container_2.nation_get_active_building_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_active_building_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_active_building_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: active_building, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_active_building_size(), container_2.nation_get_active_building_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_active_building(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_active_building(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "active_building, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_unlocked_commodities)
			{
				if(!compare_values(container_1.nation_get_unlocked_commodities_size(), container_2.nation_get_unlocked_commodities_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_unlocked_commodities_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_unlocked_commodities_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: unlocked_commodities, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_unlocked_commodities_size(), container_2.nation_get_unlocked_commodities_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_unlocked_commodities(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_unlocked_commodities(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "unlocked_commodities, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_factory_type_experience)
			{
				if(!compare_values(container_1.nation_get_factory_type_experience_size(), container_2.nation_get_factory_type_experience_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_factory_type_experience_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_factory_type_experience_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: factory_type_experience, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_factory_type_experience_size(), container_2.nation_get_factory_type_experience_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_factory_type_experience(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_factory_type_experience(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_type_experience, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_factory_type_experience_priority_national)
			{
				if(!compare_values(container_1.nation_get_factory_type_experience_priority_national_size(), container_2.nation_get_factory_type_experience_priority_national_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_factory_type_experience_priority_national_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_factory_type_experience_priority_national_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: factory_type_experience_priority_national, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_factory_type_experience_priority_national_size(), container_2.nation_get_factory_type_experience_priority_national_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_factory_type_experience_priority_national(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_factory_type_experience_priority_national(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_type_experience_priority_national, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_factory_type_experience_priority_private)
			{
				if(!compare_values(container_1.nation_get_factory_type_experience_priority_private_size(), container_2.nation_get_factory_type_experience_priority_private_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_factory_type_experience_priority_private_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_factory_type_experience_priority_private_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: factory_type_experience_priority_private, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_factory_type_experience_priority_private_size(), container_2.nation_get_factory_type_experience_priority_private_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_factory_type_experience_priority_private(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_factory_type_experience_priority_private(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "factory_type_experience_priority_private, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_has_gas_attack)
			{
				const auto& cont_1_val = container_1.nation_get_has_gas_attack(obj);
				const auto& cont_2_val = container_2.nation_get_has_gas_attack(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "has_gas_attack: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_has_gas_defense)
			{
				const auto& cont_1_val = container_1.nation_get_has_gas_defense(obj);
				const auto& cont_2_val = container_2.nation_get_has_gas_defense(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "has_gas_defense: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_max_building_level)
			{
				if(!compare_values(container_1.nation_get_max_building_level_size(), container_2.nation_get_max_building_level_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_max_building_level_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_max_building_level_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: max_building_level, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_max_building_level_size(), container_2.nation_get_max_building_level_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.nation_get_max_building_level(obj, uint8_t(arr_index));
					const auto& cont_2_arr_val = container_2.nation_get_max_building_level(obj, uint8_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "max_building_level, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_current_modifiers)
			{
				auto vec_1 = container_1.nation_get_current_modifiers(obj);
				auto vec_2 = container_2.nation_get_current_modifiers(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: current_modifiers, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "current_modifiers, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_in_sphere_of)
			{
				dcon::nation_id cont_1_val = container_1.nation_get_in_sphere_of(obj);
				dcon::nation_id cont_2_val = container_2.nation_get_in_sphere_of(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "in_sphere_of: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_rank)
			{
				const auto& cont_1_val = container_1.nation_get_rank(obj);
				const auto& cont_2_val = container_2.nation_get_rank(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rank: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_industrial_rank)
			{
				const auto& cont_1_val = container_1.nation_get_industrial_rank(obj);
				const auto& cont_2_val = container_2.nation_get_industrial_rank(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "industrial_rank: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_military_rank)
			{
				const auto& cont_1_val = container_1.nation_get_military_rank(obj);
				const auto& cont_2_val = container_2.nation_get_military_rank(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "military_rank: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_prestige_rank)
			{
				const auto& cont_1_val = container_1.nation_get_prestige_rank(obj);
				const auto& cont_2_val = container_2.nation_get_prestige_rank(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "prestige_rank: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_demographics)
			{
				if(!compare_values(container_1.nation_get_demographics_size(), container_2.nation_get_demographics_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_demographics_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_demographics_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: demographics, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_demographics_size(), container_2.nation_get_demographics_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_demographics(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_demographics(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "demographics, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_demographics_alt)
			{
				if(!compare_values(container_1.nation_get_demographics_alt_size(), container_2.nation_get_demographics_alt_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_demographics_alt_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_demographics_alt_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: demographics_alt, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_demographics_alt_size(), container_2.nation_get_demographics_alt_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_demographics_alt(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_demographics_alt(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "demographics_alt, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_war_exhaustion)
			{
				const auto& cont_1_val = container_1.nation_get_war_exhaustion(obj);
				const auto& cont_2_val = container_2.nation_get_war_exhaustion(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "war_exhaustion: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_is_at_war)
			{
				const auto& cont_1_val = container_1.nation_get_is_at_war(obj);
				const auto& cont_2_val = container_2.nation_get_is_at_war(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_at_war: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_is_mobilized)
			{
				const auto& cont_1_val = container_1.nation_get_is_mobilized(obj);
				const auto& cont_2_val = container_2.nation_get_is_mobilized(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_mobilized: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_mobilization_remaining)
			{
				const auto& cont_1_val = container_1.nation_get_mobilization_remaining(obj);
				const auto& cont_2_val = container_2.nation_get_mobilization_remaining(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "mobilization_remaining: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_mobilization_schedule)
			{
				auto vec_1 = container_1.nation_get_mobilization_schedule(obj);
				auto vec_2 = container_2.nation_get_mobilization_schedule(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: mobilization_schedule, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "mobilization_schedule, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_is_bankrupt)
			{
				const auto& cont_1_val = container_1.nation_get_is_bankrupt(obj);
				const auto& cont_2_val = container_2.nation_get_is_bankrupt(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_bankrupt: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_last_war_loss)
			{
				const auto& cont_1_val = container_1.nation_get_last_war_loss(obj);
				const auto& cont_2_val = container_2.nation_get_last_war_loss(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "last_war_loss: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_election_ends)
			{
				const auto& cont_1_val = container_1.nation_get_election_ends(obj);
				const auto& cont_2_val = container_2.nation_get_election_ends(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "election_ends: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_disarmed_until)
			{
				const auto& cont_1_val = container_1.nation_get_disarmed_until(obj);
				const auto& cont_2_val = container_2.nation_get_disarmed_until(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "disarmed_until: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_reparations_until)
			{
				const auto& cont_1_val = container_1.nation_get_reparations_until(obj);
				const auto& cont_2_val = container_2.nation_get_reparations_until(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "reparations_until: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_education_spending)
			{
				const auto& cont_1_val = container_1.nation_get_education_spending(obj);
				const auto& cont_2_val = container_2.nation_get_education_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "education_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_military_spending)
			{
				const auto& cont_1_val = container_1.nation_get_military_spending(obj);
				const auto& cont_2_val = container_2.nation_get_military_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "military_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_administrative_spending)
			{
				const auto& cont_1_val = container_1.nation_get_administrative_spending(obj);
				const auto& cont_2_val = container_2.nation_get_administrative_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "administrative_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_administration_employment_target_in_capital)
			{
				const auto& cont_1_val = container_1.nation_get_administration_employment_target_in_capital(obj);
				const auto& cont_2_val = container_2.nation_get_administration_employment_target_in_capital(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "administration_employment_target_in_capital: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_social_spending)
			{
				const auto& cont_1_val = container_1.nation_get_social_spending(obj);
				const auto& cont_2_val = container_2.nation_get_social_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "social_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_domestic_investment_spending)
			{
				const auto& cont_1_val = container_1.nation_get_domestic_investment_spending(obj);
				const auto& cont_2_val = container_2.nation_get_domestic_investment_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "domestic_investment_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_overseas_spending)
			{
				const auto& cont_1_val = container_1.nation_get_overseas_spending(obj);
				const auto& cont_2_val = container_2.nation_get_overseas_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "overseas_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_land_spending)
			{
				const auto& cont_1_val = container_1.nation_get_land_spending(obj);
				const auto& cont_2_val = container_2.nation_get_land_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "land_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_naval_spending)
			{
				const auto& cont_1_val = container_1.nation_get_naval_spending(obj);
				const auto& cont_2_val = container_2.nation_get_naval_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "naval_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_construction_spending)
			{
				const auto& cont_1_val = container_1.nation_get_construction_spending(obj);
				const auto& cont_2_val = container_2.nation_get_construction_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "construction_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_land_reinforcement_buffer)
			{
				const auto& cont_1_val = container_1.nation_get_land_reinforcement_buffer(obj);
				const auto& cont_2_val = container_2.nation_get_land_reinforcement_buffer(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "land_reinforcement_buffer: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_naval_reinforcement_buffer)
			{
				const auto& cont_1_val = container_1.nation_get_naval_reinforcement_buffer(obj);
				const auto& cont_2_val = container_2.nation_get_naval_reinforcement_buffer(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "naval_reinforcement_buffer: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_effective_land_spending)
			{
				const auto& cont_1_val = container_1.nation_get_effective_land_spending(obj);
				const auto& cont_2_val = container_2.nation_get_effective_land_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "effective_land_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_effective_naval_spending)
			{
				const auto& cont_1_val = container_1.nation_get_effective_naval_spending(obj);
				const auto& cont_2_val = container_2.nation_get_effective_naval_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "effective_naval_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_effective_construction_spending)
			{
				const auto& cont_1_val = container_1.nation_get_effective_construction_spending(obj);
				const auto& cont_2_val = container_2.nation_get_effective_construction_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "effective_construction_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_maximum_military_costs)
			{
				const auto& cont_1_val = container_1.nation_get_maximum_military_costs(obj);
				const auto& cont_2_val = container_2.nation_get_maximum_military_costs(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "maximum_military_costs: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_subsidy_token_price)
			{
				const auto& cont_1_val = container_1.nation_get_subsidy_token_price(obj);
				const auto& cont_2_val = container_2.nation_get_subsidy_token_price(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "subsidy_token_price: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_subsidy_token_total)
			{
				const auto& cont_1_val = container_1.nation_get_subsidy_token_total(obj);
				const auto& cont_2_val = container_2.nation_get_subsidy_token_total(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "subsidy_token_total: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_subsidies_spending)
			{
				const auto& cont_1_val = container_1.nation_get_subsidies_spending(obj);
				const auto& cont_2_val = container_2.nation_get_subsidies_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "subsidies_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_spending_level)
			{
				const auto& cont_1_val = container_1.nation_get_spending_level(obj);
				const auto& cont_2_val = container_2.nation_get_spending_level(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "spending_level: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_last_base_budget)
			{
				const auto& cont_1_val = container_1.nation_get_last_base_budget(obj);
				const auto& cont_2_val = container_2.nation_get_last_base_budget(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "last_base_budget: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_private_investment)
			{
				const auto& cont_1_val = container_1.nation_get_private_investment(obj);
				const auto& cont_2_val = container_2.nation_get_private_investment(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "private_investment: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_private_investment_effective_fraction)
			{
				const auto& cont_1_val = container_1.nation_get_private_investment_effective_fraction(obj);
				const auto& cont_2_val = container_2.nation_get_private_investment_effective_fraction(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "private_investment_effective_fraction: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_total_rich_income)
			{
				const auto& cont_1_val = container_1.nation_get_total_rich_income(obj);
				const auto& cont_2_val = container_2.nation_get_total_rich_income(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "total_rich_income: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_total_middle_income)
			{
				const auto& cont_1_val = container_1.nation_get_total_middle_income(obj);
				const auto& cont_2_val = container_2.nation_get_total_middle_income(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "total_middle_income: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_total_poor_income)
			{
				const auto& cont_1_val = container_1.nation_get_total_poor_income(obj);
				const auto& cont_2_val = container_2.nation_get_total_poor_income(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "total_poor_income: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_poor_tax)
			{
				const auto& cont_1_val = container_1.nation_get_poor_tax(obj);
				const auto& cont_2_val = container_2.nation_get_poor_tax(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "poor_tax: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_middle_tax)
			{
				const auto& cont_1_val = container_1.nation_get_middle_tax(obj);
				const auto& cont_2_val = container_2.nation_get_middle_tax(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "middle_tax: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_rich_tax)
			{
				const auto& cont_1_val = container_1.nation_get_rich_tax(obj);
				const auto& cont_2_val = container_2.nation_get_rich_tax(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rich_tax: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_tariffs_import)
			{
				const auto& cont_1_val = container_1.nation_get_tariffs_import(obj);
				const auto& cont_2_val = container_2.nation_get_tariffs_import(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "tariffs_import: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_tariffs_export)
			{
				const auto& cont_1_val = container_1.nation_get_tariffs_export(obj);
				const auto& cont_2_val = container_2.nation_get_tariffs_export(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "tariffs_export: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_last_treasury)
			{
				const auto& cont_1_val = container_1.nation_get_last_treasury(obj);
				const auto& cont_2_val = container_2.nation_get_last_treasury(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "last_treasury: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_industrial_score)
			{
				const auto& cont_1_val = container_1.nation_get_industrial_score(obj);
				const auto& cont_2_val = container_2.nation_get_industrial_score(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "industrial_score: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_military_score)
			{
				const auto& cont_1_val = container_1.nation_get_military_score(obj);
				const auto& cont_2_val = container_2.nation_get_military_score(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "military_score: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_central_blockaded)
			{
				const auto& cont_1_val = container_1.nation_get_central_blockaded(obj);
				const auto& cont_2_val = container_2.nation_get_central_blockaded(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "central_blockaded: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_central_rebel_controlled)
			{
				const auto& cont_1_val = container_1.nation_get_central_rebel_controlled(obj);
				const auto& cont_2_val = container_2.nation_get_central_rebel_controlled(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "central_rebel_controlled: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_owned_province_count)
			{
				const auto& cont_1_val = container_1.nation_get_owned_province_count(obj);
				const auto& cont_2_val = container_2.nation_get_owned_province_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "owned_province_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_owned_state_count)
			{
				const auto& cont_1_val = container_1.nation_get_owned_state_count(obj);
				const auto& cont_2_val = container_2.nation_get_owned_state_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "owned_state_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_central_province_count)
			{
				const auto& cont_1_val = container_1.nation_get_central_province_count(obj);
				const auto& cont_2_val = container_2.nation_get_central_province_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "central_province_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_rebel_controlled_count)
			{
				const auto& cont_1_val = container_1.nation_get_rebel_controlled_count(obj);
				const auto& cont_2_val = container_2.nation_get_rebel_controlled_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "rebel_controlled_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_occupied_count)
			{
				const auto& cont_1_val = container_1.nation_get_occupied_count(obj);
				const auto& cont_2_val = container_2.nation_get_occupied_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "occupied_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_central_ports)
			{
				const auto& cont_1_val = container_1.nation_get_central_ports(obj);
				const auto& cont_2_val = container_2.nation_get_central_ports(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "central_ports: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_total_ports)
			{
				const auto& cont_1_val = container_1.nation_get_total_ports(obj);
				const auto& cont_2_val = container_2.nation_get_total_ports(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "total_ports: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_central_crime_count)
			{
				const auto& cont_1_val = container_1.nation_get_central_crime_count(obj);
				const auto& cont_2_val = container_2.nation_get_central_crime_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "central_crime_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_allies_count)
			{
				const auto& cont_1_val = container_1.nation_get_allies_count(obj);
				const auto& cont_2_val = container_2.nation_get_allies_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "allies_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_vassals_count)
			{
				const auto& cont_1_val = container_1.nation_get_vassals_count(obj);
				const auto& cont_2_val = container_2.nation_get_vassals_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "vassals_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_substates_count)
			{
				const auto& cont_1_val = container_1.nation_get_substates_count(obj);
				const auto& cont_2_val = container_2.nation_get_substates_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "substates_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_gdp)
			{
				const auto& cont_1_val = container_1.nation_get_gdp(obj);
				const auto& cont_2_val = container_2.nation_get_gdp(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "gdp: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_gdp_record)
			{
				if(!compare_values(container_1.nation_get_gdp_record_size(), container_2.nation_get_gdp_record_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_gdp_record_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_gdp_record_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: gdp_record, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_gdp_record_size(), container_2.nation_get_gdp_record_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.nation_get_gdp_record(obj, int32_t(arr_index));
					const auto& cont_2_arr_val = container_2.nation_get_gdp_record(obj, int32_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "gdp_record, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_stockpiles)
			{
				if(!compare_values(container_1.nation_get_stockpiles_size(), container_2.nation_get_stockpiles_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_stockpiles_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_stockpiles_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: stockpiles, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_stockpiles_size(), container_2.nation_get_stockpiles_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_stockpiles(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_stockpiles(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "stockpiles, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_national_bank)
			{
				const auto& cont_1_val = container_1.nation_get_national_bank(obj);
				const auto& cont_2_val = container_2.nation_get_national_bank(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "national_bank: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_local_loan)
			{
				const auto& cont_1_val = container_1.nation_get_local_loan(obj);
				const auto& cont_2_val = container_2.nation_get_local_loan(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "local_loan: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_stockpile_targets)
			{
				if(!compare_values(container_1.nation_get_stockpile_targets_size(), container_2.nation_get_stockpile_targets_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_stockpile_targets_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_stockpile_targets_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: stockpile_targets, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_stockpile_targets_size(), container_2.nation_get_stockpile_targets_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_stockpile_targets(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_stockpile_targets(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "stockpile_targets, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_drawing_on_stockpiles)
			{
				if(!compare_values(container_1.nation_get_drawing_on_stockpiles_size(), container_2.nation_get_drawing_on_stockpiles_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_drawing_on_stockpiles_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_drawing_on_stockpiles_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: drawing_on_stockpiles, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_drawing_on_stockpiles_size(), container_2.nation_get_drawing_on_stockpiles_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_drawing_on_stockpiles(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_drawing_on_stockpiles(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "drawing_on_stockpiles, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_overseas_penalty)
			{
				const auto& cont_1_val = container_1.nation_get_overseas_penalty(obj);
				const auto& cont_2_val = container_2.nation_get_overseas_penalty(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "overseas_penalty: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_is_player_controlled)
			{
				const auto& cont_1_val = container_1.nation_get_is_player_controlled(obj);
				const auto& cont_2_val = container_2.nation_get_is_player_controlled(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_player_controlled: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_is_debt_spending)
			{
				const auto& cont_1_val = container_1.nation_get_is_debt_spending(obj);
				const auto& cont_2_val = container_2.nation_get_is_debt_spending(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_debt_spending: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_bankrupt_until)
			{
				const auto& cont_1_val = container_1.nation_get_bankrupt_until(obj);
				const auto& cont_2_val = container_2.nation_get_bankrupt_until(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "bankrupt_until: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_is_colonial_nation)
			{
				const auto& cont_1_val = container_1.nation_get_is_colonial_nation(obj);
				const auto& cont_2_val = container_2.nation_get_is_colonial_nation(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_colonial_nation: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_dominant_culture)
			{
				dcon::culture_id cont_1_val = container_1.nation_get_dominant_culture(obj);
				dcon::culture_id cont_2_val = container_2.nation_get_dominant_culture(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_culture: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_dominant_religion)
			{
				dcon::religion_id cont_1_val = container_1.nation_get_dominant_religion(obj);
				dcon::religion_id cont_2_val = container_2.nation_get_dominant_religion(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_religion: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_dominant_ideology)
			{
				dcon::ideology_id cont_1_val = container_1.nation_get_dominant_ideology(obj);
				dcon::ideology_id cont_2_val = container_2.nation_get_dominant_ideology(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_ideology: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_dominant_issue_option)
			{
				dcon::issue_option_id cont_1_val = container_1.nation_get_dominant_issue_option(obj);
				dcon::issue_option_id cont_2_val = container_2.nation_get_dominant_issue_option(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_issue_option: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_constructing_cb_target)
			{
				dcon::nation_id cont_1_val = container_1.nation_get_constructing_cb_target(obj);
				dcon::nation_id cont_2_val = container_2.nation_get_constructing_cb_target(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "constructing_cb_target: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_constructing_cb_target_state)
			{
				dcon::state_definition_id cont_1_val = container_1.nation_get_constructing_cb_target_state(obj);
				dcon::state_definition_id cont_2_val = container_2.nation_get_constructing_cb_target_state(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "constructing_cb_target_state: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_constructing_cb_progress)
			{
				const auto& cont_1_val = container_1.nation_get_constructing_cb_progress(obj);
				const auto& cont_2_val = container_2.nation_get_constructing_cb_progress(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "constructing_cb_progress: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_constructing_cb_type)
			{
				dcon::cb_type_id cont_1_val = container_1.nation_get_constructing_cb_type(obj);
				dcon::cb_type_id cont_2_val = container_2.nation_get_constructing_cb_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "constructing_cb_type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_constructing_cb_is_discovered)
			{
				const auto& cont_1_val = container_1.nation_get_constructing_cb_is_discovered(obj);
				const auto& cont_2_val = container_2.nation_get_constructing_cb_is_discovered(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "constructing_cb_is_discovered: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_available_cbs)
			{
				auto vec_1 = container_1.nation_get_available_cbs(obj);
				auto vec_2 = container_2.nation_get_available_cbs(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: available_cbs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "available_cbs, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.nation_non_colonial_population)
			{
				const auto& cont_1_val = container_1.nation_get_non_colonial_population(obj);
				const auto& cont_2_val = container_2.nation_get_non_colonial_population(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "non_colonial_population: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_non_colonial_bureaucrats)
			{
				const auto& cont_1_val = container_1.nation_get_non_colonial_bureaucrats(obj);
				const auto& cont_2_val = container_2.nation_get_non_colonial_bureaucrats(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "non_colonial_bureaucrats: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_administrative_efficiency)
			{
				const auto& cont_1_val = container_1.nation_get_administrative_efficiency(obj);
				const auto& cont_2_val = container_2.nation_get_administrative_efficiency(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "administrative_efficiency: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_research_points)
			{
				const auto& cont_1_val = container_1.nation_get_research_points(obj);
				const auto& cont_2_val = container_2.nation_get_research_points(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "research_points: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_current_research)
			{
				dcon::technology_id cont_1_val = container_1.nation_get_current_research(obj);
				dcon::technology_id cont_2_val = container_2.nation_get_current_research(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "current_research: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_active_regiments)
			{
				const auto& cont_1_val = container_1.nation_get_active_regiments(obj);
				const auto& cont_2_val = container_2.nation_get_active_regiments(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "active_regiments: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_recruitable_regiments)
			{
				const auto& cont_1_val = container_1.nation_get_recruitable_regiments(obj);
				const auto& cont_2_val = container_2.nation_get_recruitable_regiments(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "recruitable_regiments: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_overlord_commanding_units)
			{
				const auto& cont_1_val = container_1.nation_get_overlord_commanding_units(obj);
				const auto& cont_2_val = container_2.nation_get_overlord_commanding_units(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "overlord_commanding_units: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_averge_land_unit_score)
			{
				const auto& cont_1_val = container_1.nation_get_averge_land_unit_score(obj);
				const auto& cont_2_val = container_2.nation_get_averge_land_unit_score(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "averge_land_unit_score: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_capital_ship_score)
			{
				const auto& cont_1_val = container_1.nation_get_capital_ship_score(obj);
				const auto& cont_2_val = container_2.nation_get_capital_ship_score(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "capital_ship_score: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_suppression_points)
			{
				const auto& cont_1_val = container_1.nation_get_suppression_points(obj);
				const auto& cont_2_val = container_2.nation_get_suppression_points(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "suppression_points: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_diplomatic_points)
			{
				const auto& cont_1_val = container_1.nation_get_diplomatic_points(obj);
				const auto& cont_2_val = container_2.nation_get_diplomatic_points(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "diplomatic_points: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_leadership_points)
			{
				const auto& cont_1_val = container_1.nation_get_leadership_points(obj);
				const auto& cont_2_val = container_2.nation_get_leadership_points(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "leadership_points: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_naval_supply_points)
			{
				const auto& cont_1_val = container_1.nation_get_naval_supply_points(obj);
				const auto& cont_2_val = container_2.nation_get_naval_supply_points(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "naval_supply_points: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_used_naval_supply_points)
			{
				const auto& cont_1_val = container_1.nation_get_used_naval_supply_points(obj);
				const auto& cont_2_val = container_2.nation_get_used_naval_supply_points(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "used_naval_supply_points: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_has_flash_point_state)
			{
				const auto& cont_1_val = container_1.nation_get_has_flash_point_state(obj);
				const auto& cont_2_val = container_2.nation_get_has_flash_point_state(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "has_flash_point_state: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_is_target_of_some_cb)
			{
				const auto& cont_1_val = container_1.nation_get_is_target_of_some_cb(obj);
				const auto& cont_2_val = container_2.nation_get_is_target_of_some_cb(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_target_of_some_cb: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_is_interesting)
			{
				const auto& cont_1_val = container_1.nation_get_is_interesting(obj);
				const auto& cont_2_val = container_2.nation_get_is_interesting(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_interesting: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_ai_is_threatened)
			{
				const auto& cont_1_val = container_1.nation_get_ai_is_threatened(obj);
				const auto& cont_2_val = container_2.nation_get_ai_is_threatened(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ai_is_threatened: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_ai_rival)
			{
				dcon::nation_id cont_1_val = container_1.nation_get_ai_rival(obj);
				dcon::nation_id cont_2_val = container_2.nation_get_ai_rival(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ai_rival: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_ai_home_port)
			{
				dcon::province_id cont_1_val = container_1.nation_get_ai_home_port(obj);
				dcon::province_id cont_2_val = container_2.nation_get_ai_home_port(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ai_home_port: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_mobilized_is_ai_controlled)
			{
				const auto& cont_1_val = container_1.nation_get_mobilized_is_ai_controlled(obj);
				const auto& cont_2_val = container_2.nation_get_mobilized_is_ai_controlled(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "mobilized_is_ai_controlled: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_ai_strategy)
			{
				const auto& cont_1_val = container_1.nation_get_ai_strategy(obj);
				const auto& cont_2_val = container_2.nation_get_ai_strategy(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ai_strategy: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_utility_tag)
			{
				const auto& cont_1_val = container_1.nation_get_utility_tag(obj);
				const auto& cont_2_val = container_2.nation_get_utility_tag(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "utility_tag: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.nation_production_directive)
			{
				if(!compare_values(container_1.nation_get_production_directive_size(), container_2.nation_get_production_directive_size()))
				{
					std::string cont_1_size = std::to_string(container_1.nation_get_production_directive_size());
					std::string cont_2_size = std::to_string(container_2.nation_get_production_directive_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: production_directive, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.nation_get_production_directive_size(), container_2.nation_get_production_directive_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::production_directive_id arr_index{dcon::production_directive_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.nation_get_production_directive(obj, arr_index);
					const auto& cont_2_arr_val = container_2.nation_get_production_directive(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "production_directive, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.market)
	{
		report += std::string("MARKET") + "\n";
		if(!compare_values(container_1.market_size(), container_2.market_size()))
		{
			std::string cont_1_size = std::to_string(container_1.market_size());
			std::string cont_2_size = std::to_string(container_2.market_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.market_size(), container_2.market_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::market_id obj{dcon::market_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.market_gdp)
			{
				const auto& cont_1_val = container_1.market_get_gdp(obj);
				const auto& cont_2_val = container_2.market_get_gdp(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "gdp: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.market_income_scale)
			{
				const auto& cont_1_val = container_1.market_get_income_scale(obj);
				const auto& cont_2_val = container_2.market_get_income_scale(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "income_scale: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.market_supply)
			{
				if(!compare_values(container_1.market_get_supply_size(), container_2.market_get_supply_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_supply_size());
					std::string cont_2_size = std::to_string(container_2.market_get_supply_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: supply, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_supply_size(), container_2.market_get_supply_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_supply(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_supply(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "supply, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_demand)
			{
				if(!compare_values(container_1.market_get_demand_size(), container_2.market_get_demand_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_demand_size());
					std::string cont_2_size = std::to_string(container_2.market_get_demand_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: demand, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_demand_size(), container_2.market_get_demand_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_demand(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_demand(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "demand, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_intermediate_demand)
			{
				if(!compare_values(container_1.market_get_intermediate_demand_size(), container_2.market_get_intermediate_demand_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_intermediate_demand_size());
					std::string cont_2_size = std::to_string(container_2.market_get_intermediate_demand_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: intermediate_demand, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_intermediate_demand_size(), container_2.market_get_intermediate_demand_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_intermediate_demand(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_intermediate_demand(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "intermediate_demand, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_consumption)
			{
				if(!compare_values(container_1.market_get_consumption_size(), container_2.market_get_consumption_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_consumption_size());
					std::string cont_2_size = std::to_string(container_2.market_get_consumption_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: consumption, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_consumption_size(), container_2.market_get_consumption_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_consumption(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_consumption(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "consumption, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_stockpile)
			{
				if(!compare_values(container_1.market_get_stockpile_size(), container_2.market_get_stockpile_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_stockpile_size());
					std::string cont_2_size = std::to_string(container_2.market_get_stockpile_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: stockpile, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_stockpile_size(), container_2.market_get_stockpile_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_stockpile(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_stockpile(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "stockpile, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_wealth)
			{
				const auto& cont_1_val = container_1.market_get_wealth(obj);
				const auto& cont_2_val = container_2.market_get_wealth(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "wealth: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.market_price)
			{
				if(!compare_values(container_1.market_get_price_size(), container_2.market_get_price_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_price_size());
					std::string cont_2_size = std::to_string(container_2.market_get_price_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: price, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_price_size(), container_2.market_get_price_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_price(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_price(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "price, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_army_demand)
			{
				if(!compare_values(container_1.market_get_army_demand_size(), container_2.market_get_army_demand_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_army_demand_size());
					std::string cont_2_size = std::to_string(container_2.market_get_army_demand_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: army_demand, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_army_demand_size(), container_2.market_get_army_demand_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_army_demand(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_army_demand(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "army_demand, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_navy_demand)
			{
				if(!compare_values(container_1.market_get_navy_demand_size(), container_2.market_get_navy_demand_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_navy_demand_size());
					std::string cont_2_size = std::to_string(container_2.market_get_navy_demand_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: navy_demand, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_navy_demand_size(), container_2.market_get_navy_demand_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_navy_demand(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_navy_demand(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "navy_demand, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_construction_demand)
			{
				if(!compare_values(container_1.market_get_construction_demand_size(), container_2.market_get_construction_demand_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_construction_demand_size());
					std::string cont_2_size = std::to_string(container_2.market_get_construction_demand_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: construction_demand, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_construction_demand_size(), container_2.market_get_construction_demand_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_construction_demand(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_construction_demand(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "construction_demand, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_private_construction_demand)
			{
				if(!compare_values(container_1.market_get_private_construction_demand_size(), container_2.market_get_private_construction_demand_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_private_construction_demand_size());
					std::string cont_2_size = std::to_string(container_2.market_get_private_construction_demand_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: private_construction_demand, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_private_construction_demand_size(), container_2.market_get_private_construction_demand_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_private_construction_demand(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_private_construction_demand(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "private_construction_demand, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_aggregated_demand_history)
			{
				if(!compare_values(container_1.market_get_aggregated_demand_history_size(), container_2.market_get_aggregated_demand_history_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_aggregated_demand_history_size());
					std::string cont_2_size = std::to_string(container_2.market_get_aggregated_demand_history_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: aggregated_demand_history, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_aggregated_demand_history_size(), container_2.market_get_aggregated_demand_history_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_aggregated_demand_history(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_aggregated_demand_history(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "aggregated_demand_history, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_aggregated_supply_history)
			{
				if(!compare_values(container_1.market_get_aggregated_supply_history_size(), container_2.market_get_aggregated_supply_history_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_aggregated_supply_history_size());
					std::string cont_2_size = std::to_string(container_2.market_get_aggregated_supply_history_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: aggregated_supply_history, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_aggregated_supply_history_size(), container_2.market_get_aggregated_supply_history_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_aggregated_supply_history(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_aggregated_supply_history(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "aggregated_supply_history, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_expected_probability_to_buy)
			{
				if(!compare_values(container_1.market_get_expected_probability_to_buy_size(), container_2.market_get_expected_probability_to_buy_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_expected_probability_to_buy_size());
					std::string cont_2_size = std::to_string(container_2.market_get_expected_probability_to_buy_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: expected_probability_to_buy, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_expected_probability_to_buy_size(), container_2.market_get_expected_probability_to_buy_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_expected_probability_to_buy(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_expected_probability_to_buy(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "expected_probability_to_buy, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_actual_probability_to_buy)
			{
				if(!compare_values(container_1.market_get_actual_probability_to_buy_size(), container_2.market_get_actual_probability_to_buy_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_actual_probability_to_buy_size());
					std::string cont_2_size = std::to_string(container_2.market_get_actual_probability_to_buy_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: actual_probability_to_buy, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_actual_probability_to_buy_size(), container_2.market_get_actual_probability_to_buy_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_actual_probability_to_buy(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_actual_probability_to_buy(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "actual_probability_to_buy, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_expected_probability_to_sell)
			{
				if(!compare_values(container_1.market_get_expected_probability_to_sell_size(), container_2.market_get_expected_probability_to_sell_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_expected_probability_to_sell_size());
					std::string cont_2_size = std::to_string(container_2.market_get_expected_probability_to_sell_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: expected_probability_to_sell, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_expected_probability_to_sell_size(), container_2.market_get_expected_probability_to_sell_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_expected_probability_to_sell(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_expected_probability_to_sell(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "expected_probability_to_sell, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_actual_probability_to_sell)
			{
				if(!compare_values(container_1.market_get_actual_probability_to_sell_size(), container_2.market_get_actual_probability_to_sell_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_actual_probability_to_sell_size());
					std::string cont_2_size = std::to_string(container_2.market_get_actual_probability_to_sell_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: actual_probability_to_sell, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_actual_probability_to_sell_size(), container_2.market_get_actual_probability_to_sell_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_actual_probability_to_sell(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_actual_probability_to_sell(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "actual_probability_to_sell, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_life_needs_costs)
			{
				if(!compare_values(container_1.market_get_life_needs_costs_size(), container_2.market_get_life_needs_costs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_life_needs_costs_size());
					std::string cont_2_size = std::to_string(container_2.market_get_life_needs_costs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: life_needs_costs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_life_needs_costs_size(), container_2.market_get_life_needs_costs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_life_needs_costs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_life_needs_costs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "life_needs_costs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_everyday_needs_costs)
			{
				if(!compare_values(container_1.market_get_everyday_needs_costs_size(), container_2.market_get_everyday_needs_costs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_everyday_needs_costs_size());
					std::string cont_2_size = std::to_string(container_2.market_get_everyday_needs_costs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: everyday_needs_costs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_everyday_needs_costs_size(), container_2.market_get_everyday_needs_costs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_everyday_needs_costs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_everyday_needs_costs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "everyday_needs_costs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_luxury_needs_costs)
			{
				if(!compare_values(container_1.market_get_luxury_needs_costs_size(), container_2.market_get_luxury_needs_costs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_luxury_needs_costs_size());
					std::string cont_2_size = std::to_string(container_2.market_get_luxury_needs_costs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: luxury_needs_costs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_luxury_needs_costs_size(), container_2.market_get_luxury_needs_costs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_luxury_needs_costs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_luxury_needs_costs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "luxury_needs_costs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_life_needs_scale)
			{
				if(!compare_values(container_1.market_get_life_needs_scale_size(), container_2.market_get_life_needs_scale_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_life_needs_scale_size());
					std::string cont_2_size = std::to_string(container_2.market_get_life_needs_scale_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: life_needs_scale, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_life_needs_scale_size(), container_2.market_get_life_needs_scale_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_life_needs_scale(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_life_needs_scale(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "life_needs_scale, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_everyday_needs_scale)
			{
				if(!compare_values(container_1.market_get_everyday_needs_scale_size(), container_2.market_get_everyday_needs_scale_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_everyday_needs_scale_size());
					std::string cont_2_size = std::to_string(container_2.market_get_everyday_needs_scale_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: everyday_needs_scale, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_everyday_needs_scale_size(), container_2.market_get_everyday_needs_scale_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_everyday_needs_scale(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_everyday_needs_scale(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "everyday_needs_scale, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_luxury_needs_scale)
			{
				if(!compare_values(container_1.market_get_luxury_needs_scale_size(), container_2.market_get_luxury_needs_scale_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_luxury_needs_scale_size());
					std::string cont_2_size = std::to_string(container_2.market_get_luxury_needs_scale_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: luxury_needs_scale, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_luxury_needs_scale_size(), container_2.market_get_luxury_needs_scale_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_luxury_needs_scale(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_luxury_needs_scale(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "luxury_needs_scale, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_satisfied_ratio_of_max_life_needs)
			{
				if(!compare_values(container_1.market_get_satisfied_ratio_of_max_life_needs_size(), container_2.market_get_satisfied_ratio_of_max_life_needs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_satisfied_ratio_of_max_life_needs_size());
					std::string cont_2_size = std::to_string(container_2.market_get_satisfied_ratio_of_max_life_needs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: satisfied_ratio_of_max_life_needs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_satisfied_ratio_of_max_life_needs_size(), container_2.market_get_satisfied_ratio_of_max_life_needs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_satisfied_ratio_of_max_life_needs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_satisfied_ratio_of_max_life_needs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "satisfied_ratio_of_max_life_needs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_satisfied_ratio_of_max_everyday_needs)
			{
				if(!compare_values(container_1.market_get_satisfied_ratio_of_max_everyday_needs_size(), container_2.market_get_satisfied_ratio_of_max_everyday_needs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_satisfied_ratio_of_max_everyday_needs_size());
					std::string cont_2_size = std::to_string(container_2.market_get_satisfied_ratio_of_max_everyday_needs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: satisfied_ratio_of_max_everyday_needs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_satisfied_ratio_of_max_everyday_needs_size(), container_2.market_get_satisfied_ratio_of_max_everyday_needs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_satisfied_ratio_of_max_everyday_needs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_satisfied_ratio_of_max_everyday_needs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "satisfied_ratio_of_max_everyday_needs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_satisfied_ratio_of_max_luxury_needs)
			{
				if(!compare_values(container_1.market_get_satisfied_ratio_of_max_luxury_needs_size(), container_2.market_get_satisfied_ratio_of_max_luxury_needs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_satisfied_ratio_of_max_luxury_needs_size());
					std::string cont_2_size = std::to_string(container_2.market_get_satisfied_ratio_of_max_luxury_needs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: satisfied_ratio_of_max_luxury_needs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_satisfied_ratio_of_max_luxury_needs_size(), container_2.market_get_satisfied_ratio_of_max_luxury_needs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_satisfied_ratio_of_max_luxury_needs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_satisfied_ratio_of_max_luxury_needs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "satisfied_ratio_of_max_luxury_needs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_satisfied_ratio_of_demanded_life_needs)
			{
				if(!compare_values(container_1.market_get_satisfied_ratio_of_demanded_life_needs_size(), container_2.market_get_satisfied_ratio_of_demanded_life_needs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_satisfied_ratio_of_demanded_life_needs_size());
					std::string cont_2_size = std::to_string(container_2.market_get_satisfied_ratio_of_demanded_life_needs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: satisfied_ratio_of_demanded_life_needs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_satisfied_ratio_of_demanded_life_needs_size(), container_2.market_get_satisfied_ratio_of_demanded_life_needs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_satisfied_ratio_of_demanded_life_needs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_satisfied_ratio_of_demanded_life_needs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "satisfied_ratio_of_demanded_life_needs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_satisfied_ratio_of_demanded_everyday_needs)
			{
				if(!compare_values(container_1.market_get_satisfied_ratio_of_demanded_everyday_needs_size(), container_2.market_get_satisfied_ratio_of_demanded_everyday_needs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_satisfied_ratio_of_demanded_everyday_needs_size());
					std::string cont_2_size = std::to_string(container_2.market_get_satisfied_ratio_of_demanded_everyday_needs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: satisfied_ratio_of_demanded_everyday_needs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_satisfied_ratio_of_demanded_everyday_needs_size(), container_2.market_get_satisfied_ratio_of_demanded_everyday_needs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_satisfied_ratio_of_demanded_everyday_needs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_satisfied_ratio_of_demanded_everyday_needs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "satisfied_ratio_of_demanded_everyday_needs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_satisfied_ratio_of_demanded_luxury_needs)
			{
				if(!compare_values(container_1.market_get_satisfied_ratio_of_demanded_luxury_needs_size(), container_2.market_get_satisfied_ratio_of_demanded_luxury_needs_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_satisfied_ratio_of_demanded_luxury_needs_size());
					std::string cont_2_size = std::to_string(container_2.market_get_satisfied_ratio_of_demanded_luxury_needs_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: satisfied_ratio_of_demanded_luxury_needs, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_satisfied_ratio_of_demanded_luxury_needs_size(), container_2.market_get_satisfied_ratio_of_demanded_luxury_needs_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_satisfied_ratio_of_demanded_luxury_needs(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_satisfied_ratio_of_demanded_luxury_needs(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "satisfied_ratio_of_demanded_luxury_needs, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_life_needs_weights)
			{
				if(!compare_values(container_1.market_get_life_needs_weights_size(), container_2.market_get_life_needs_weights_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_life_needs_weights_size());
					std::string cont_2_size = std::to_string(container_2.market_get_life_needs_weights_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: life_needs_weights, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_life_needs_weights_size(), container_2.market_get_life_needs_weights_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_life_needs_weights(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_life_needs_weights(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "life_needs_weights, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_everyday_needs_weights)
			{
				if(!compare_values(container_1.market_get_everyday_needs_weights_size(), container_2.market_get_everyday_needs_weights_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_everyday_needs_weights_size());
					std::string cont_2_size = std::to_string(container_2.market_get_everyday_needs_weights_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: everyday_needs_weights, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_everyday_needs_weights_size(), container_2.market_get_everyday_needs_weights_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_everyday_needs_weights(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_everyday_needs_weights(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "everyday_needs_weights, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_luxury_needs_weights)
			{
				if(!compare_values(container_1.market_get_luxury_needs_weights_size(), container_2.market_get_luxury_needs_weights_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_luxury_needs_weights_size());
					std::string cont_2_size = std::to_string(container_2.market_get_luxury_needs_weights_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: luxury_needs_weights, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_luxury_needs_weights_size(), container_2.market_get_luxury_needs_weights_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_luxury_needs_weights(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_luxury_needs_weights(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "luxury_needs_weights, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_import)
			{
				if(!compare_values(container_1.market_get_import_size(), container_2.market_get_import_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_import_size());
					std::string cont_2_size = std::to_string(container_2.market_get_import_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: import, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_import_size(), container_2.market_get_import_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_import(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_import(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "import, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_export)
			{
				if(!compare_values(container_1.market_get_export_size(), container_2.market_get_export_size()))
				{
					std::string cont_1_size = std::to_string(container_1.market_get_export_size());
					std::string cont_2_size = std::to_string(container_2.market_get_export_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: export, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.market_get_export_size(), container_2.market_get_export_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.market_get_export(obj, arr_index);
					const auto& cont_2_arr_val = container_2.market_get_export(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "export, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.market_tariff_collected)
			{
				const auto& cont_1_val = container_1.market_get_tariff_collected(obj);
				const auto& cont_2_val = container_2.market_get_tariff_collected(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "tariff_collected: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.market_max_throughput)
			{
				const auto& cont_1_val = container_1.market_get_max_throughput(obj);
				const auto& cont_2_val = container_2.market_get_max_throughput(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "max_throughput: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.local_market)
	{
		report += std::string("LOCAL_MARKET") + "\n";
		if(!compare_values(container_1.local_market_size(), container_2.local_market_size()))
		{
			std::string cont_1_size = std::to_string(container_1.local_market_size());
			std::string cont_2_size = std::to_string(container_2.local_market_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.local_market_size(), container_2.local_market_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::local_market_id obj{dcon::local_market_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.local_market_market)
			{
				if(!compare_values(container_1.local_market_get_market(obj), container_2.local_market_get_market(obj)))
				{
					auto cont_1_val = std::to_string(container_1.local_market_get_market(obj).value);
					auto cont_2_val = std::to_string(container_2.local_market_get_market(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "market: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.local_market_zone)
			{
				if(!compare_values(container_1.local_market_get_zone(obj), container_2.local_market_get_zone(obj)))
				{
					auto cont_1_val = std::to_string(container_1.local_market_get_zone(obj).value);
					auto cont_2_val = std::to_string(container_2.local_market_get_zone(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "zone: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.trade_route)
	{
		report += std::string("TRADE_ROUTE") + "\n";
		if(!compare_values(container_1.trade_route_size(), container_2.trade_route_size()))
		{
			std::string cont_1_size = std::to_string(container_1.trade_route_size());
			std::string cont_2_size = std::to_string(container_2.trade_route_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.trade_route_size(), container_2.trade_route_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::trade_route_id obj{dcon::trade_route_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.trade_route_connected_markets)
			{
				for(uint32_t k = 0;k < 2;k++)
				{
					if(!compare_values(container_1.trade_route_get_connected_markets(obj, k), container_2.trade_route_get_connected_markets(obj, k)))
					{
						auto cont_1_val = std::to_string(container_1.trade_route_get_connected_markets(obj, k).value);
						auto cont_2_val = std::to_string(container_2.trade_route_get_connected_markets(obj, k).value);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "connected_markets: " + cont_1_val + ", " + cont_2_val) + "\n";
					}
				}
			}
			if(record.trade_route_distance)
			{
				const auto& cont_1_val = container_1.trade_route_get_distance(obj);
				const auto& cont_2_val = container_2.trade_route_get_distance(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "distance: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.trade_route_sea_distance)
			{
				const auto& cont_1_val = container_1.trade_route_get_sea_distance(obj);
				const auto& cont_2_val = container_2.trade_route_get_sea_distance(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "sea_distance: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.trade_route_land_distance)
			{
				const auto& cont_1_val = container_1.trade_route_get_land_distance(obj);
				const auto& cont_2_val = container_2.trade_route_get_land_distance(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "land_distance: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.trade_route_is_sea_route)
			{
				const auto& cont_1_val = container_1.trade_route_get_is_sea_route(obj);
				const auto& cont_2_val = container_2.trade_route_get_is_sea_route(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_sea_route: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.trade_route_is_land_route)
			{
				const auto& cont_1_val = container_1.trade_route_get_is_land_route(obj);
				const auto& cont_2_val = container_2.trade_route_get_is_land_route(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_land_route: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.trade_route_is_trade_forbidden)
			{
				const auto& cont_1_val = container_1.trade_route_get_is_trade_forbidden(obj);
				const auto& cont_2_val = container_2.trade_route_get_is_trade_forbidden(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_trade_forbidden: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.trade_route_is_tariff_applied_0)
			{
				const auto& cont_1_val = container_1.trade_route_get_is_tariff_applied_0(obj);
				const auto& cont_2_val = container_2.trade_route_get_is_tariff_applied_0(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_tariff_applied_0: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.trade_route_is_tariff_applied_1)
			{
				const auto& cont_1_val = container_1.trade_route_get_is_tariff_applied_1(obj);
				const auto& cont_2_val = container_2.trade_route_get_is_tariff_applied_1(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_tariff_applied_1: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.trade_route_volume)
			{
				if(!compare_values(container_1.trade_route_get_volume_size(), container_2.trade_route_get_volume_size()))
				{
					std::string cont_1_size = std::to_string(container_1.trade_route_get_volume_size());
					std::string cont_2_size = std::to_string(container_2.trade_route_get_volume_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: volume, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.trade_route_get_volume_size(), container_2.trade_route_get_volume_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.trade_route_get_volume(obj, arr_index);
					const auto& cont_2_arr_val = container_2.trade_route_get_volume(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "volume, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.trade_route_stabilization_volume)
			{
				if(!compare_values(container_1.trade_route_get_stabilization_volume_size(), container_2.trade_route_get_stabilization_volume_size()))
				{
					std::string cont_1_size = std::to_string(container_1.trade_route_get_stabilization_volume_size());
					std::string cont_2_size = std::to_string(container_2.trade_route_get_stabilization_volume_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: stabilization_volume, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.trade_route_get_stabilization_volume_size(), container_2.trade_route_get_stabilization_volume_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.trade_route_get_stabilization_volume(obj, arr_index);
					const auto& cont_2_arr_val = container_2.trade_route_get_stabilization_volume(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "stabilization_volume, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.diplomatic_relation)
	{
		report += std::string("DIPLOMATIC_RELATION") + "\n";
		if(!compare_values(container_1.diplomatic_relation_size(), container_2.diplomatic_relation_size()))
		{
			std::string cont_1_size = std::to_string(container_1.diplomatic_relation_size());
			std::string cont_2_size = std::to_string(container_2.diplomatic_relation_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.diplomatic_relation_size(), container_2.diplomatic_relation_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::diplomatic_relation_id obj{dcon::diplomatic_relation_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.diplomatic_relation_related_nations)
			{
				for(uint32_t k = 0;k < 2;k++)
				{
					if(!compare_values(container_1.diplomatic_relation_get_related_nations(obj, k), container_2.diplomatic_relation_get_related_nations(obj, k)))
					{
						auto cont_1_val = std::to_string(container_1.diplomatic_relation_get_related_nations(obj, k).value);
						auto cont_2_val = std::to_string(container_2.diplomatic_relation_get_related_nations(obj, k).value);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "related_nations: " + cont_1_val + ", " + cont_2_val) + "\n";
					}
				}
			}
			if(record.diplomatic_relation_value)
			{
				const auto& cont_1_val = container_1.diplomatic_relation_get_value(obj);
				const auto& cont_2_val = container_2.diplomatic_relation_get_value(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "value: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.diplomatic_relation_are_allied)
			{
				const auto& cont_1_val = container_1.diplomatic_relation_get_are_allied(obj);
				const auto& cont_2_val = container_2.diplomatic_relation_get_are_allied(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "are_allied: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.diplomatic_relation_truce_until)
			{
				const auto& cont_1_val = container_1.diplomatic_relation_get_truce_until(obj);
				const auto& cont_2_val = container_2.diplomatic_relation_get_truce_until(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "truce_until: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.unilateral_relationship)
	{
		report += std::string("UNILATERAL_RELATIONSHIP") + "\n";
		if(!compare_values(container_1.unilateral_relationship_size(), container_2.unilateral_relationship_size()))
		{
			std::string cont_1_size = std::to_string(container_1.unilateral_relationship_size());
			std::string cont_2_size = std::to_string(container_2.unilateral_relationship_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.unilateral_relationship_size(), container_2.unilateral_relationship_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::unilateral_relationship_id obj{dcon::unilateral_relationship_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.unilateral_relationship_target)
			{
				if(!compare_values(container_1.unilateral_relationship_get_target(obj), container_2.unilateral_relationship_get_target(obj)))
				{
					auto cont_1_val = std::to_string(container_1.unilateral_relationship_get_target(obj).value);
					auto cont_2_val = std::to_string(container_2.unilateral_relationship_get_target(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "target: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.unilateral_relationship_source)
			{
				if(!compare_values(container_1.unilateral_relationship_get_source(obj), container_2.unilateral_relationship_get_source(obj)))
				{
					auto cont_1_val = std::to_string(container_1.unilateral_relationship_get_source(obj).value);
					auto cont_2_val = std::to_string(container_2.unilateral_relationship_get_source(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "source: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.unilateral_relationship_foreign_investment)
			{
				const auto& cont_1_val = container_1.unilateral_relationship_get_foreign_investment(obj);
				const auto& cont_2_val = container_2.unilateral_relationship_get_foreign_investment(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "foreign_investment: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.unilateral_relationship_owns_debt_of)
			{
				const auto& cont_1_val = container_1.unilateral_relationship_get_owns_debt_of(obj);
				const auto& cont_2_val = container_2.unilateral_relationship_get_owns_debt_of(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "owns_debt_of: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.unilateral_relationship_military_access)
			{
				const auto& cont_1_val = container_1.unilateral_relationship_get_military_access(obj);
				const auto& cont_2_val = container_2.unilateral_relationship_get_military_access(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "military_access: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.unilateral_relationship_war_subsidies)
			{
				const auto& cont_1_val = container_1.unilateral_relationship_get_war_subsidies(obj);
				const auto& cont_2_val = container_2.unilateral_relationship_get_war_subsidies(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "war_subsidies: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.unilateral_relationship_reparations)
			{
				const auto& cont_1_val = container_1.unilateral_relationship_get_reparations(obj);
				const auto& cont_2_val = container_2.unilateral_relationship_get_reparations(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "reparations: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.unilateral_relationship_interested_in_alliance)
			{
				const auto& cont_1_val = container_1.unilateral_relationship_get_interested_in_alliance(obj);
				const auto& cont_2_val = container_2.unilateral_relationship_get_interested_in_alliance(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "interested_in_alliance: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.unilateral_relationship_no_tariffs_until)
			{
				const auto& cont_1_val = container_1.unilateral_relationship_get_no_tariffs_until(obj);
				const auto& cont_2_val = container_2.unilateral_relationship_get_no_tariffs_until(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "no_tariffs_until: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.unilateral_relationship_embargo)
			{
				const auto& cont_1_val = container_1.unilateral_relationship_get_embargo(obj);
				const auto& cont_2_val = container_2.unilateral_relationship_get_embargo(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "embargo: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.gp_relationship)
	{
		report += std::string("GP_RELATIONSHIP") + "\n";
		if(!compare_values(container_1.gp_relationship_size(), container_2.gp_relationship_size()))
		{
			std::string cont_1_size = std::to_string(container_1.gp_relationship_size());
			std::string cont_2_size = std::to_string(container_2.gp_relationship_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.gp_relationship_size(), container_2.gp_relationship_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::gp_relationship_id obj{dcon::gp_relationship_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.gp_relationship_influence_target)
			{
				if(!compare_values(container_1.gp_relationship_get_influence_target(obj), container_2.gp_relationship_get_influence_target(obj)))
				{
					auto cont_1_val = std::to_string(container_1.gp_relationship_get_influence_target(obj).value);
					auto cont_2_val = std::to_string(container_2.gp_relationship_get_influence_target(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "influence_target: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.gp_relationship_great_power)
			{
				if(!compare_values(container_1.gp_relationship_get_great_power(obj), container_2.gp_relationship_get_great_power(obj)))
				{
					auto cont_1_val = std::to_string(container_1.gp_relationship_get_great_power(obj).value);
					auto cont_2_val = std::to_string(container_2.gp_relationship_get_great_power(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "great_power: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.gp_relationship_influence)
			{
				const auto& cont_1_val = container_1.gp_relationship_get_influence(obj);
				const auto& cont_2_val = container_2.gp_relationship_get_influence(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "influence: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.gp_relationship_status)
			{
				const auto& cont_1_val = container_1.gp_relationship_get_status(obj);
				const auto& cont_2_val = container_2.gp_relationship_get_status(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "status: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.gp_relationship_penalty_expires_date)
			{
				const auto& cont_1_val = container_1.gp_relationship_get_penalty_expires_date(obj);
				const auto& cont_2_val = container_2.gp_relationship_get_penalty_expires_date(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "penalty_expires_date: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.factory)
	{
		report += std::string("FACTORY") + "\n";
		if(!compare_values(container_1.factory_size(), container_2.factory_size()))
		{
			std::string cont_1_size = std::to_string(container_1.factory_size());
			std::string cont_2_size = std::to_string(container_2.factory_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.factory_size(), container_2.factory_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::factory_id obj{dcon::factory_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.factory_building_type)
			{
				dcon::factory_type_id cont_1_val = container_1.factory_get_building_type(obj);
				dcon::factory_type_id cont_2_val = container_2.factory_get_building_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "building_type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_priority_low)
			{
				const auto& cont_1_val = container_1.factory_get_priority_low(obj);
				const auto& cont_2_val = container_2.factory_get_priority_low(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "priority_low: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_priority_high)
			{
				const auto& cont_1_val = container_1.factory_get_priority_high(obj);
				const auto& cont_2_val = container_2.factory_get_priority_high(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "priority_high: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_subsidized)
			{
				const auto& cont_1_val = container_1.factory_get_subsidized(obj);
				const auto& cont_2_val = container_2.factory_get_subsidized(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "subsidized: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_unprofitable)
			{
				const auto& cont_1_val = container_1.factory_get_unprofitable(obj);
				const auto& cont_2_val = container_2.factory_get_unprofitable(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "unprofitable: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_size)
			{
				const auto& cont_1_val = container_1.factory_get_size(obj);
				const auto& cont_2_val = container_2.factory_get_size(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "size: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_unqualified_employment)
			{
				const auto& cont_1_val = container_1.factory_get_unqualified_employment(obj);
				const auto& cont_2_val = container_2.factory_get_unqualified_employment(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "unqualified_employment: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_primary_employment)
			{
				const auto& cont_1_val = container_1.factory_get_primary_employment(obj);
				const auto& cont_2_val = container_2.factory_get_primary_employment(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "primary_employment: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_secondary_employment)
			{
				const auto& cont_1_val = container_1.factory_get_secondary_employment(obj);
				const auto& cont_2_val = container_2.factory_get_secondary_employment(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "secondary_employment: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_efficiency_level)
			{
				if(!compare_values(container_1.factory_get_efficiency_level_size(), container_2.factory_get_efficiency_level_size()))
				{
					std::string cont_1_size = std::to_string(container_1.factory_get_efficiency_level_size());
					std::string cont_2_size = std::to_string(container_2.factory_get_efficiency_level_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: efficiency_level, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.factory_get_efficiency_level_size(), container_2.factory_get_efficiency_level_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					auto arr_index = j;
					const auto& cont_1_arr_val = container_1.factory_get_efficiency_level(obj, uint8_t(arr_index));
					const auto& cont_2_arr_val = container_2.factory_get_efficiency_level(obj, uint8_t(arr_index));
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "efficiency_level, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.factory_technology_scale)
			{
				const auto& cont_1_val = container_1.factory_get_technology_scale(obj);
				const auto& cont_2_val = container_2.factory_get_technology_scale(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "technology_scale: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_profit)
			{
				const auto& cont_1_val = container_1.factory_get_profit(obj);
				const auto& cont_2_val = container_2.factory_get_profit(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "profit: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_triggered_modifiers)
			{
				const auto& cont_1_val = container_1.factory_get_triggered_modifiers(obj);
				const auto& cont_2_val = container_2.factory_get_triggered_modifiers(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "triggered_modifiers: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_output)
			{
				const auto& cont_1_val = container_1.factory_get_output(obj);
				const auto& cont_2_val = container_2.factory_get_output(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "output: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_output_per_worker)
			{
				const auto& cont_1_val = container_1.factory_get_output_per_worker(obj);
				const auto& cont_2_val = container_2.factory_get_output_per_worker(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "output_per_worker: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_input_cost)
			{
				const auto& cont_1_val = container_1.factory_get_input_cost(obj);
				const auto& cont_2_val = container_2.factory_get_input_cost(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "input_cost: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_input_cost_per_worker)
			{
				const auto& cont_1_val = container_1.factory_get_input_cost_per_worker(obj);
				const auto& cont_2_val = container_2.factory_get_input_cost_per_worker(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "input_cost_per_worker: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.factory_location)
	{
		report += std::string("FACTORY_LOCATION") + "\n";
		if(!compare_values(container_1.factory_location_size(), container_2.factory_location_size()))
		{
			std::string cont_1_size = std::to_string(container_1.factory_location_size());
			std::string cont_2_size = std::to_string(container_2.factory_location_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.factory_location_size(), container_2.factory_location_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::factory_location_id obj{dcon::factory_location_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.factory_location_factory)
			{
				if(!compare_values(container_1.factory_location_get_factory(obj), container_2.factory_location_get_factory(obj)))
				{
					auto cont_1_val = std::to_string(container_1.factory_location_get_factory(obj).value);
					auto cont_2_val = std::to_string(container_2.factory_location_get_factory(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "factory: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.factory_location_province)
			{
				if(!compare_values(container_1.factory_location_get_province(obj), container_2.factory_location_get_province(obj)))
				{
					auto cont_1_val = std::to_string(container_1.factory_location_get_province(obj).value);
					auto cont_2_val = std::to_string(container_2.factory_location_get_province(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "province: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.province_ownership)
	{
		report += std::string("PROVINCE_OWNERSHIP") + "\n";
		if(!compare_values(container_1.province_ownership_size(), container_2.province_ownership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.province_ownership_size());
			std::string cont_2_size = std::to_string(container_2.province_ownership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.province_ownership_size(), container_2.province_ownership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::province_ownership_id obj{dcon::province_ownership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.province_ownership_province)
			{
				if(!compare_values(container_1.province_ownership_get_province(obj), container_2.province_ownership_get_province(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_ownership_get_province(obj).value);
					auto cont_2_val = std::to_string(container_2.province_ownership_get_province(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "province: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.province_ownership_nation)
			{
				if(!compare_values(container_1.province_ownership_get_nation(obj), container_2.province_ownership_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_ownership_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.province_ownership_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.province_control)
	{
		report += std::string("PROVINCE_CONTROL") + "\n";
		if(!compare_values(container_1.province_control_size(), container_2.province_control_size()))
		{
			std::string cont_1_size = std::to_string(container_1.province_control_size());
			std::string cont_2_size = std::to_string(container_2.province_control_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.province_control_size(), container_2.province_control_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::province_control_id obj{dcon::province_control_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.province_control_province)
			{
				if(!compare_values(container_1.province_control_get_province(obj), container_2.province_control_get_province(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_control_get_province(obj).value);
					auto cont_2_val = std::to_string(container_2.province_control_get_province(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "province: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.province_control_nation)
			{
				if(!compare_values(container_1.province_control_get_nation(obj), container_2.province_control_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_control_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.province_control_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.province_rebel_control)
	{
		report += std::string("PROVINCE_REBEL_CONTROL") + "\n";
		if(!compare_values(container_1.province_rebel_control_size(), container_2.province_rebel_control_size()))
		{
			std::string cont_1_size = std::to_string(container_1.province_rebel_control_size());
			std::string cont_2_size = std::to_string(container_2.province_rebel_control_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.province_rebel_control_size(), container_2.province_rebel_control_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::province_rebel_control_id obj{dcon::province_rebel_control_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.province_rebel_control_province)
			{
				if(!compare_values(container_1.province_rebel_control_get_province(obj), container_2.province_rebel_control_get_province(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_rebel_control_get_province(obj).value);
					auto cont_2_val = std::to_string(container_2.province_rebel_control_get_province(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "province: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.province_rebel_control_rebel_faction)
			{
				if(!compare_values(container_1.province_rebel_control_get_rebel_faction(obj), container_2.province_rebel_control_get_rebel_faction(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_rebel_control_get_rebel_faction(obj).value);
					auto cont_2_val = std::to_string(container_2.province_rebel_control_get_rebel_faction(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "rebel_faction: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.province_land_construction)
	{
		report += std::string("PROVINCE_LAND_CONSTRUCTION") + "\n";
		if(!compare_values(container_1.province_land_construction_size(), container_2.province_land_construction_size()))
		{
			std::string cont_1_size = std::to_string(container_1.province_land_construction_size());
			std::string cont_2_size = std::to_string(container_2.province_land_construction_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.province_land_construction_size(), container_2.province_land_construction_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::province_land_construction_id obj{dcon::province_land_construction_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.province_land_construction_pop)
			{
				if(!compare_values(container_1.province_land_construction_get_pop(obj), container_2.province_land_construction_get_pop(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_land_construction_get_pop(obj).value);
					auto cont_2_val = std::to_string(container_2.province_land_construction_get_pop(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "pop: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.province_land_construction_nation)
			{
				if(!compare_values(container_1.province_land_construction_get_nation(obj), container_2.province_land_construction_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_land_construction_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.province_land_construction_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.province_land_construction_purchased_goods)
			{
				const auto& cont_1_val = container_1.province_land_construction_get_purchased_goods(obj);
				const auto& cont_2_val = container_2.province_land_construction_get_purchased_goods(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "purchased_goods: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_land_construction_type)
			{
				dcon::unit_type_id cont_1_val = container_1.province_land_construction_get_type(obj);
				dcon::unit_type_id cont_2_val = container_2.province_land_construction_get_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_land_construction_template_province)
			{
				dcon::province_id cont_1_val = container_1.province_land_construction_get_template_province(obj);
				dcon::province_id cont_2_val = container_2.province_land_construction_get_template_province(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "template_province: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_land_construction_start_date)
			{
				const auto& cont_1_val = container_1.province_land_construction_get_start_date(obj);
				const auto& cont_2_val = container_2.province_land_construction_get_start_date(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "start_date: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.province_naval_construction)
	{
		report += std::string("PROVINCE_NAVAL_CONSTRUCTION") + "\n";
		if(!compare_values(container_1.province_naval_construction_size(), container_2.province_naval_construction_size()))
		{
			std::string cont_1_size = std::to_string(container_1.province_naval_construction_size());
			std::string cont_2_size = std::to_string(container_2.province_naval_construction_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.province_naval_construction_size(), container_2.province_naval_construction_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::province_naval_construction_id obj{dcon::province_naval_construction_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.province_naval_construction_province)
			{
				if(!compare_values(container_1.province_naval_construction_get_province(obj), container_2.province_naval_construction_get_province(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_naval_construction_get_province(obj).value);
					auto cont_2_val = std::to_string(container_2.province_naval_construction_get_province(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "province: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.province_naval_construction_nation)
			{
				if(!compare_values(container_1.province_naval_construction_get_nation(obj), container_2.province_naval_construction_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_naval_construction_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.province_naval_construction_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.province_naval_construction_purchased_goods)
			{
				const auto& cont_1_val = container_1.province_naval_construction_get_purchased_goods(obj);
				const auto& cont_2_val = container_2.province_naval_construction_get_purchased_goods(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "purchased_goods: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_naval_construction_type)
			{
				dcon::unit_type_id cont_1_val = container_1.province_naval_construction_get_type(obj);
				dcon::unit_type_id cont_2_val = container_2.province_naval_construction_get_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_naval_construction_template_province)
			{
				dcon::province_id cont_1_val = container_1.province_naval_construction_get_template_province(obj);
				dcon::province_id cont_2_val = container_2.province_naval_construction_get_template_province(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "template_province: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_naval_construction_start_date)
			{
				const auto& cont_1_val = container_1.province_naval_construction_get_start_date(obj);
				const auto& cont_2_val = container_2.province_naval_construction_get_start_date(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "start_date: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.province_building_construction)
	{
		report += std::string("PROVINCE_BUILDING_CONSTRUCTION") + "\n";
		if(!compare_values(container_1.province_building_construction_size(), container_2.province_building_construction_size()))
		{
			std::string cont_1_size = std::to_string(container_1.province_building_construction_size());
			std::string cont_2_size = std::to_string(container_2.province_building_construction_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.province_building_construction_size(), container_2.province_building_construction_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::province_building_construction_id obj{dcon::province_building_construction_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.province_building_construction_province)
			{
				if(!compare_values(container_1.province_building_construction_get_province(obj), container_2.province_building_construction_get_province(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_building_construction_get_province(obj).value);
					auto cont_2_val = std::to_string(container_2.province_building_construction_get_province(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "province: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.province_building_construction_nation)
			{
				if(!compare_values(container_1.province_building_construction_get_nation(obj), container_2.province_building_construction_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.province_building_construction_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.province_building_construction_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.province_building_construction_purchased_goods)
			{
				const auto& cont_1_val = container_1.province_building_construction_get_purchased_goods(obj);
				const auto& cont_2_val = container_2.province_building_construction_get_purchased_goods(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "purchased_goods: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_building_construction_type)
			{
				const auto& cont_1_val = container_1.province_building_construction_get_type(obj);
				const auto& cont_2_val = container_2.province_building_construction_get_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.province_building_construction_is_pop_project)
			{
				const auto& cont_1_val = container_1.province_building_construction_get_is_pop_project(obj);
				const auto& cont_2_val = container_2.province_building_construction_get_is_pop_project(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_pop_project: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.factory_construction)
	{
		report += std::string("FACTORY_CONSTRUCTION") + "\n";
		if(!compare_values(container_1.factory_construction_size(), container_2.factory_construction_size()))
		{
			std::string cont_1_size = std::to_string(container_1.factory_construction_size());
			std::string cont_2_size = std::to_string(container_2.factory_construction_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.factory_construction_size(), container_2.factory_construction_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::factory_construction_id obj{dcon::factory_construction_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.factory_construction_province)
			{
				if(!compare_values(container_1.factory_construction_get_province(obj), container_2.factory_construction_get_province(obj)))
				{
					auto cont_1_val = std::to_string(container_1.factory_construction_get_province(obj).value);
					auto cont_2_val = std::to_string(container_2.factory_construction_get_province(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "province: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.factory_construction_nation)
			{
				if(!compare_values(container_1.factory_construction_get_nation(obj), container_2.factory_construction_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.factory_construction_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.factory_construction_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.factory_construction_purchased_goods)
			{
				const auto& cont_1_val = container_1.factory_construction_get_purchased_goods(obj);
				const auto& cont_2_val = container_2.factory_construction_get_purchased_goods(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "purchased_goods: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_construction_type)
			{
				dcon::factory_type_id cont_1_val = container_1.factory_construction_get_type(obj);
				dcon::factory_type_id cont_2_val = container_2.factory_construction_get_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_construction_is_pop_project)
			{
				const auto& cont_1_val = container_1.factory_construction_get_is_pop_project(obj);
				const auto& cont_2_val = container_2.factory_construction_get_is_pop_project(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_pop_project: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_construction_is_upgrade)
			{
				const auto& cont_1_val = container_1.factory_construction_get_is_upgrade(obj);
				const auto& cont_2_val = container_2.factory_construction_get_is_upgrade(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_upgrade: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.factory_construction_refit_target)
			{
				dcon::factory_type_id cont_1_val = container_1.factory_construction_get_refit_target(obj);
				dcon::factory_type_id cont_2_val = container_2.factory_construction_get_refit_target(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "refit_target: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.overlord)
	{
		report += std::string("OVERLORD") + "\n";
		if(!compare_values(container_1.overlord_size(), container_2.overlord_size()))
		{
			std::string cont_1_size = std::to_string(container_1.overlord_size());
			std::string cont_2_size = std::to_string(container_2.overlord_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.overlord_size(), container_2.overlord_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::overlord_id obj{dcon::overlord_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.overlord_subject)
			{
				if(!compare_values(container_1.overlord_get_subject(obj), container_2.overlord_get_subject(obj)))
				{
					auto cont_1_val = std::to_string(container_1.overlord_get_subject(obj).value);
					auto cont_2_val = std::to_string(container_2.overlord_get_subject(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "subject: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.overlord_ruler)
			{
				if(!compare_values(container_1.overlord_get_ruler(obj), container_2.overlord_get_ruler(obj)))
				{
					auto cont_1_val = std::to_string(container_1.overlord_get_ruler(obj).value);
					auto cont_2_val = std::to_string(container_2.overlord_get_ruler(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "ruler: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.rebel_faction)
	{
		report += std::string("REBEL_FACTION") + "\n";
		if(!compare_values(container_1.rebel_faction_size(), container_2.rebel_faction_size()))
		{
			std::string cont_1_size = std::to_string(container_1.rebel_faction_size());
			std::string cont_2_size = std::to_string(container_2.rebel_faction_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.rebel_faction_size(), container_2.rebel_faction_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::rebel_faction_id obj{dcon::rebel_faction_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.rebel_faction_type)
			{
				dcon::rebel_type_id cont_1_val = container_1.rebel_faction_get_type(obj);
				dcon::rebel_type_id cont_2_val = container_2.rebel_faction_get_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_faction_defection_target)
			{
				dcon::national_identity_id cont_1_val = container_1.rebel_faction_get_defection_target(obj);
				dcon::national_identity_id cont_2_val = container_2.rebel_faction_get_defection_target(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "defection_target: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_faction_primary_culture)
			{
				dcon::culture_id cont_1_val = container_1.rebel_faction_get_primary_culture(obj);
				dcon::culture_id cont_2_val = container_2.rebel_faction_get_primary_culture(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "primary_culture: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_faction_primary_culture_group)
			{
				dcon::culture_group_id cont_1_val = container_1.rebel_faction_get_primary_culture_group(obj);
				dcon::culture_group_id cont_2_val = container_2.rebel_faction_get_primary_culture_group(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "primary_culture_group: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_faction_religion)
			{
				dcon::religion_id cont_1_val = container_1.rebel_faction_get_religion(obj);
				dcon::religion_id cont_2_val = container_2.rebel_faction_get_religion(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "religion: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_faction_possible_regiments)
			{
				const auto& cont_1_val = container_1.rebel_faction_get_possible_regiments(obj);
				const auto& cont_2_val = container_2.rebel_faction_get_possible_regiments(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "possible_regiments: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.rebel_faction_organization)
			{
				const auto& cont_1_val = container_1.rebel_faction_get_organization(obj);
				const auto& cont_2_val = container_2.rebel_faction_get_organization(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "organization: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.rebellion_within)
	{
		report += std::string("REBELLION_WITHIN") + "\n";
		if(!compare_values(container_1.rebellion_within_size(), container_2.rebellion_within_size()))
		{
			std::string cont_1_size = std::to_string(container_1.rebellion_within_size());
			std::string cont_2_size = std::to_string(container_2.rebellion_within_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.rebellion_within_size(), container_2.rebellion_within_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::rebellion_within_id obj{dcon::rebellion_within_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.rebellion_within_rebels)
			{
				if(!compare_values(container_1.rebellion_within_get_rebels(obj), container_2.rebellion_within_get_rebels(obj)))
				{
					auto cont_1_val = std::to_string(container_1.rebellion_within_get_rebels(obj).value);
					auto cont_2_val = std::to_string(container_2.rebellion_within_get_rebels(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "rebels: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.rebellion_within_ruler)
			{
				if(!compare_values(container_1.rebellion_within_get_ruler(obj), container_2.rebellion_within_get_ruler(obj)))
				{
					auto cont_1_val = std::to_string(container_1.rebellion_within_get_ruler(obj).value);
					auto cont_2_val = std::to_string(container_2.rebellion_within_get_ruler(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "ruler: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.movement)
	{
		report += std::string("MOVEMENT") + "\n";
		if(!compare_values(container_1.movement_size(), container_2.movement_size()))
		{
			std::string cont_1_size = std::to_string(container_1.movement_size());
			std::string cont_2_size = std::to_string(container_2.movement_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.movement_size(), container_2.movement_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::movement_id obj{dcon::movement_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.movement_associated_issue_option)
			{
				dcon::issue_option_id cont_1_val = container_1.movement_get_associated_issue_option(obj);
				dcon::issue_option_id cont_2_val = container_2.movement_get_associated_issue_option(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "associated_issue_option: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.movement_associated_independence)
			{
				dcon::national_identity_id cont_1_val = container_1.movement_get_associated_independence(obj);
				dcon::national_identity_id cont_2_val = container_2.movement_get_associated_independence(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "associated_independence: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.movement_pop_support)
			{
				const auto& cont_1_val = container_1.movement_get_pop_support(obj);
				const auto& cont_2_val = container_2.movement_get_pop_support(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "pop_support: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.movement_radicalism)
			{
				const auto& cont_1_val = container_1.movement_get_radicalism(obj);
				const auto& cont_2_val = container_2.movement_get_radicalism(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "radicalism: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.movement_transient_radicalism)
			{
				const auto& cont_1_val = container_1.movement_get_transient_radicalism(obj);
				const auto& cont_2_val = container_2.movement_get_transient_radicalism(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "transient_radicalism: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.movement_within)
	{
		report += std::string("MOVEMENT_WITHIN") + "\n";
		if(!compare_values(container_1.movement_within_size(), container_2.movement_within_size()))
		{
			std::string cont_1_size = std::to_string(container_1.movement_within_size());
			std::string cont_2_size = std::to_string(container_2.movement_within_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.movement_within_size(), container_2.movement_within_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::movement_within_id obj{dcon::movement_within_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.movement_within_movement)
			{
				if(!compare_values(container_1.movement_within_get_movement(obj), container_2.movement_within_get_movement(obj)))
				{
					auto cont_1_val = std::to_string(container_1.movement_within_get_movement(obj).value);
					auto cont_2_val = std::to_string(container_2.movement_within_get_movement(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "movement: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.movement_within_nation)
			{
				if(!compare_values(container_1.movement_within_get_nation(obj), container_2.movement_within_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.movement_within_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.movement_within_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.pop_movement_membership)
	{
		report += std::string("POP_MOVEMENT_MEMBERSHIP") + "\n";
		if(!compare_values(container_1.pop_movement_membership_size(), container_2.pop_movement_membership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.pop_movement_membership_size());
			std::string cont_2_size = std::to_string(container_2.pop_movement_membership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.pop_movement_membership_size(), container_2.pop_movement_membership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::pop_movement_membership_id obj{dcon::pop_movement_membership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.pop_movement_membership_pop)
			{
				if(!compare_values(container_1.pop_movement_membership_get_pop(obj), container_2.pop_movement_membership_get_pop(obj)))
				{
					auto cont_1_val = std::to_string(container_1.pop_movement_membership_get_pop(obj).value);
					auto cont_2_val = std::to_string(container_2.pop_movement_membership_get_pop(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "pop: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.pop_movement_membership_movement)
			{
				if(!compare_values(container_1.pop_movement_membership_get_movement(obj), container_2.pop_movement_membership_get_movement(obj)))
				{
					auto cont_1_val = std::to_string(container_1.pop_movement_membership_get_movement(obj).value);
					auto cont_2_val = std::to_string(container_2.pop_movement_membership_get_movement(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "movement: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.pop_rebellion_membership)
	{
		report += std::string("POP_REBELLION_MEMBERSHIP") + "\n";
		if(!compare_values(container_1.pop_rebellion_membership_size(), container_2.pop_rebellion_membership_size()))
		{
			std::string cont_1_size = std::to_string(container_1.pop_rebellion_membership_size());
			std::string cont_2_size = std::to_string(container_2.pop_rebellion_membership_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.pop_rebellion_membership_size(), container_2.pop_rebellion_membership_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::pop_rebellion_membership_id obj{dcon::pop_rebellion_membership_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.pop_rebellion_membership_pop)
			{
				if(!compare_values(container_1.pop_rebellion_membership_get_pop(obj), container_2.pop_rebellion_membership_get_pop(obj)))
				{
					auto cont_1_val = std::to_string(container_1.pop_rebellion_membership_get_pop(obj).value);
					auto cont_2_val = std::to_string(container_2.pop_rebellion_membership_get_pop(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "pop: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.pop_rebellion_membership_rebel_faction)
			{
				if(!compare_values(container_1.pop_rebellion_membership_get_rebel_faction(obj), container_2.pop_rebellion_membership_get_rebel_faction(obj)))
				{
					auto cont_1_val = std::to_string(container_1.pop_rebellion_membership_get_rebel_faction(obj).value);
					auto cont_2_val = std::to_string(container_2.pop_rebellion_membership_get_rebel_faction(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "rebel_faction: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.pop)
	{
		report += std::string("POP") + "\n";
		if(!compare_values(container_1.pop_size(), container_2.pop_size()))
		{
			std::string cont_1_size = std::to_string(container_1.pop_size());
			std::string cont_2_size = std::to_string(container_2.pop_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.pop_size(), container_2.pop_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::pop_id obj{dcon::pop_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.pop_poptype)
			{
				dcon::pop_type_id cont_1_val = container_1.pop_get_poptype(obj);
				dcon::pop_type_id cont_2_val = container_2.pop_get_poptype(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "poptype: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_religion)
			{
				dcon::religion_id cont_1_val = container_1.pop_get_religion(obj);
				dcon::religion_id cont_2_val = container_2.pop_get_religion(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "religion: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_culture)
			{
				dcon::culture_id cont_1_val = container_1.pop_get_culture(obj);
				dcon::culture_id cont_2_val = container_2.pop_get_culture(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "culture: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_size)
			{
				const auto& cont_1_val = container_1.pop_get_size(obj);
				const auto& cont_2_val = container_2.pop_get_size(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "size: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_savings)
			{
				const auto& cont_1_val = container_1.pop_get_savings(obj);
				const auto& cont_2_val = container_2.pop_get_savings(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "savings: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_uconsciousness)
			{
				const auto& cont_1_val = container_1.pop_get_uconsciousness(obj);
				const auto& cont_2_val = container_2.pop_get_uconsciousness(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "uconsciousness: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_umilitancy)
			{
				const auto& cont_1_val = container_1.pop_get_umilitancy(obj);
				const auto& cont_2_val = container_2.pop_get_umilitancy(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "umilitancy: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_uliteracy)
			{
				const auto& cont_1_val = container_1.pop_get_uliteracy(obj);
				const auto& cont_2_val = container_2.pop_get_uliteracy(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "uliteracy: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_uemployment)
			{
				const auto& cont_1_val = container_1.pop_get_uemployment(obj);
				const auto& cont_2_val = container_2.pop_get_uemployment(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "uemployment: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_satisfaction)
			{
				const auto& cont_1_val = container_1.pop_get_satisfaction(obj);
				const auto& cont_2_val = container_2.pop_get_satisfaction(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "satisfaction: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_upolitical_reform_desire)
			{
				const auto& cont_1_val = container_1.pop_get_upolitical_reform_desire(obj);
				const auto& cont_2_val = container_2.pop_get_upolitical_reform_desire(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "upolitical_reform_desire: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_usocial_reform_desire)
			{
				const auto& cont_1_val = container_1.pop_get_usocial_reform_desire(obj);
				const auto& cont_2_val = container_2.pop_get_usocial_reform_desire(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "usocial_reform_desire: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_udemographics)
			{
				if(!compare_values(container_1.pop_get_udemographics_size(), container_2.pop_get_udemographics_size()))
				{
					std::string cont_1_size = std::to_string(container_1.pop_get_udemographics_size());
					std::string cont_2_size = std::to_string(container_2.pop_get_udemographics_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: udemographics, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.pop_get_udemographics_size(), container_2.pop_get_udemographics_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::pop_demographics_key arr_index{dcon::pop_demographics_key::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.pop_get_udemographics(obj, arr_index);
					const auto& cont_2_arr_val = container_2.pop_get_udemographics(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "udemographics, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.pop_dominant_ideology)
			{
				dcon::ideology_id cont_1_val = container_1.pop_get_dominant_ideology(obj);
				dcon::ideology_id cont_2_val = container_2.pop_get_dominant_ideology(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_ideology: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_dominant_issue_option)
			{
				dcon::issue_option_id cont_1_val = container_1.pop_get_dominant_issue_option(obj);
				dcon::issue_option_id cont_2_val = container_2.pop_get_dominant_issue_option(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "dominant_issue_option: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.pop_is_primary_or_accepted_culture)
			{
				const auto& cont_1_val = container_1.pop_get_is_primary_or_accepted_culture(obj);
				const auto& cont_2_val = container_2.pop_get_is_primary_or_accepted_culture(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_primary_or_accepted_culture: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.pop_location)
	{
		report += std::string("POP_LOCATION") + "\n";
		if(!compare_values(container_1.pop_location_size(), container_2.pop_location_size()))
		{
			std::string cont_1_size = std::to_string(container_1.pop_location_size());
			std::string cont_2_size = std::to_string(container_2.pop_location_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.pop_location_size(), container_2.pop_location_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::pop_location_id obj{dcon::pop_location_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.pop_location_pop)
			{
				if(!compare_values(container_1.pop_location_get_pop(obj), container_2.pop_location_get_pop(obj)))
				{
					auto cont_1_val = std::to_string(container_1.pop_location_get_pop(obj).value);
					auto cont_2_val = std::to_string(container_2.pop_location_get_pop(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "pop: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.pop_location_province)
			{
				if(!compare_values(container_1.pop_location_get_province(obj), container_2.pop_location_get_province(obj)))
				{
					auto cont_1_val = std::to_string(container_1.pop_location_get_province(obj).value);
					auto cont_2_val = std::to_string(container_2.pop_location_get_province(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "province: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.national_event)
	{
		report += std::string("NATIONAL_EVENT") + "\n";
		if(!compare_values(container_1.national_event_size(), container_2.national_event_size()))
		{
			std::string cont_1_size = std::to_string(container_1.national_event_size());
			std::string cont_2_size = std::to_string(container_2.national_event_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.national_event_size(), container_2.national_event_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::national_event_id obj{dcon::national_event_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.national_event_name)
			{
				dcon::text_key cont_1_val = container_1.national_event_get_name(obj);
				dcon::text_key cont_2_val = container_2.national_event_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_event_description)
			{
				dcon::text_key cont_1_val = container_1.national_event_get_description(obj);
				dcon::text_key cont_2_val = container_2.national_event_get_description(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "description: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_event_is_major)
			{
				const auto& cont_1_val = container_1.national_event_get_is_major(obj);
				const auto& cont_2_val = container_2.national_event_get_is_major(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_major: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_event_image)
			{
				dcon::gfx_object_id cont_1_val = container_1.national_event_get_image(obj);
				dcon::gfx_object_id cont_2_val = container_2.national_event_get_image(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "image: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_event_immediate_effect)
			{
				dcon::effect_key cont_1_val = container_1.national_event_get_immediate_effect(obj);
				dcon::effect_key cont_2_val = container_2.national_event_get_immediate_effect(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "immediate_effect: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_event_options)
			{
				const auto& vec_1 = container_1.national_event_get_options(obj);
				const auto& vec_2 = container_2.national_event_get_options(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: options, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "options, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.national_event_auto_choice)
			{
				const auto& cont_1_val = container_1.national_event_get_auto_choice(obj);
				const auto& cont_2_val = container_2.national_event_get_auto_choice(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "auto_choice: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_event_allow_multiple_instances)
			{
				const auto& cont_1_val = container_1.national_event_get_allow_multiple_instances(obj);
				const auto& cont_2_val = container_2.national_event_get_allow_multiple_instances(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "allow_multiple_instances: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.provincial_event)
	{
		report += std::string("PROVINCIAL_EVENT") + "\n";
		if(!compare_values(container_1.provincial_event_size(), container_2.provincial_event_size()))
		{
			std::string cont_1_size = std::to_string(container_1.provincial_event_size());
			std::string cont_2_size = std::to_string(container_2.provincial_event_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.provincial_event_size(), container_2.provincial_event_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::provincial_event_id obj{dcon::provincial_event_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.provincial_event_name)
			{
				dcon::text_key cont_1_val = container_1.provincial_event_get_name(obj);
				dcon::text_key cont_2_val = container_2.provincial_event_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.provincial_event_description)
			{
				dcon::text_key cont_1_val = container_1.provincial_event_get_description(obj);
				dcon::text_key cont_2_val = container_2.provincial_event_get_description(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "description: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.provincial_event_immediate_effect)
			{
				dcon::effect_key cont_1_val = container_1.provincial_event_get_immediate_effect(obj);
				dcon::effect_key cont_2_val = container_2.provincial_event_get_immediate_effect(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "immediate_effect: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.provincial_event_options)
			{
				const auto& vec_1 = container_1.provincial_event_get_options(obj);
				const auto& vec_2 = container_2.provincial_event_get_options(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: options, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "options, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.provincial_event_auto_choice)
			{
				const auto& cont_1_val = container_1.provincial_event_get_auto_choice(obj);
				const auto& cont_2_val = container_2.provincial_event_get_auto_choice(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "auto_choice: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.free_national_event)
	{
		report += std::string("FREE_NATIONAL_EVENT") + "\n";
		if(!compare_values(container_1.free_national_event_size(), container_2.free_national_event_size()))
		{
			std::string cont_1_size = std::to_string(container_1.free_national_event_size());
			std::string cont_2_size = std::to_string(container_2.free_national_event_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.free_national_event_size(), container_2.free_national_event_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::free_national_event_id obj{dcon::free_national_event_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.free_national_event_name)
			{
				dcon::text_key cont_1_val = container_1.free_national_event_get_name(obj);
				dcon::text_key cont_2_val = container_2.free_national_event_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_national_event_description)
			{
				dcon::text_key cont_1_val = container_1.free_national_event_get_description(obj);
				dcon::text_key cont_2_val = container_2.free_national_event_get_description(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "description: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_national_event_only_once)
			{
				const auto& cont_1_val = container_1.free_national_event_get_only_once(obj);
				const auto& cont_2_val = container_2.free_national_event_get_only_once(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "only_once: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_national_event_has_been_triggered)
			{
				const auto& cont_1_val = container_1.free_national_event_get_has_been_triggered(obj);
				const auto& cont_2_val = container_2.free_national_event_get_has_been_triggered(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "has_been_triggered: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_national_event_is_major)
			{
				const auto& cont_1_val = container_1.free_national_event_get_is_major(obj);
				const auto& cont_2_val = container_2.free_national_event_get_is_major(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_major: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_national_event_image)
			{
				dcon::gfx_object_id cont_1_val = container_1.free_national_event_get_image(obj);
				dcon::gfx_object_id cont_2_val = container_2.free_national_event_get_image(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "image: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_national_event_trigger)
			{
				dcon::trigger_key cont_1_val = container_1.free_national_event_get_trigger(obj);
				dcon::trigger_key cont_2_val = container_2.free_national_event_get_trigger(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "trigger: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_national_event_mtth)
			{
				dcon::value_modifier_key cont_1_val = container_1.free_national_event_get_mtth(obj);
				dcon::value_modifier_key cont_2_val = container_2.free_national_event_get_mtth(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "mtth: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_national_event_immediate_effect)
			{
				dcon::effect_key cont_1_val = container_1.free_national_event_get_immediate_effect(obj);
				dcon::effect_key cont_2_val = container_2.free_national_event_get_immediate_effect(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "immediate_effect: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_national_event_options)
			{
				const auto& vec_1 = container_1.free_national_event_get_options(obj);
				const auto& vec_2 = container_2.free_national_event_get_options(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: options, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "options, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.free_national_event_legacy_id)
			{
				const auto& cont_1_val = container_1.free_national_event_get_legacy_id(obj);
				const auto& cont_2_val = container_2.free_national_event_get_legacy_id(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "legacy_id: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_national_event_auto_choice)
			{
				const auto& cont_1_val = container_1.free_national_event_get_auto_choice(obj);
				const auto& cont_2_val = container_2.free_national_event_get_auto_choice(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "auto_choice: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.free_provincial_event)
	{
		report += std::string("FREE_PROVINCIAL_EVENT") + "\n";
		if(!compare_values(container_1.free_provincial_event_size(), container_2.free_provincial_event_size()))
		{
			std::string cont_1_size = std::to_string(container_1.free_provincial_event_size());
			std::string cont_2_size = std::to_string(container_2.free_provincial_event_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.free_provincial_event_size(), container_2.free_provincial_event_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::free_provincial_event_id obj{dcon::free_provincial_event_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.free_provincial_event_name)
			{
				dcon::text_key cont_1_val = container_1.free_provincial_event_get_name(obj);
				dcon::text_key cont_2_val = container_2.free_provincial_event_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_provincial_event_description)
			{
				dcon::text_key cont_1_val = container_1.free_provincial_event_get_description(obj);
				dcon::text_key cont_2_val = container_2.free_provincial_event_get_description(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "description: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_provincial_event_only_once)
			{
				const auto& cont_1_val = container_1.free_provincial_event_get_only_once(obj);
				const auto& cont_2_val = container_2.free_provincial_event_get_only_once(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "only_once: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_provincial_event_has_been_triggered)
			{
				const auto& cont_1_val = container_1.free_provincial_event_get_has_been_triggered(obj);
				const auto& cont_2_val = container_2.free_provincial_event_get_has_been_triggered(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "has_been_triggered: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_provincial_event_trigger)
			{
				dcon::trigger_key cont_1_val = container_1.free_provincial_event_get_trigger(obj);
				dcon::trigger_key cont_2_val = container_2.free_provincial_event_get_trigger(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "trigger: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_provincial_event_mtth)
			{
				dcon::value_modifier_key cont_1_val = container_1.free_provincial_event_get_mtth(obj);
				dcon::value_modifier_key cont_2_val = container_2.free_provincial_event_get_mtth(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "mtth: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_provincial_event_immediate_effect)
			{
				dcon::effect_key cont_1_val = container_1.free_provincial_event_get_immediate_effect(obj);
				dcon::effect_key cont_2_val = container_2.free_provincial_event_get_immediate_effect(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "immediate_effect: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.free_provincial_event_options)
			{
				const auto& vec_1 = container_1.free_provincial_event_get_options(obj);
				const auto& vec_2 = container_2.free_provincial_event_get_options(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: options, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "options, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.free_provincial_event_auto_choice)
			{
				const auto& cont_1_val = container_1.free_provincial_event_get_auto_choice(obj);
				const auto& cont_2_val = container_2.free_provincial_event_get_auto_choice(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "auto_choice: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.national_focus)
	{
		report += std::string("NATIONAL_FOCUS") + "\n";
		if(!compare_values(container_1.national_focus_size(), container_2.national_focus_size()))
		{
			std::string cont_1_size = std::to_string(container_1.national_focus_size());
			std::string cont_2_size = std::to_string(container_2.national_focus_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.national_focus_size(), container_2.national_focus_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::national_focus_id obj{dcon::national_focus_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.national_focus_name)
			{
				dcon::text_key cont_1_val = container_1.national_focus_get_name(obj);
				dcon::text_key cont_2_val = container_2.national_focus_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_focus_icon)
			{
				const auto& cont_1_val = container_1.national_focus_get_icon(obj);
				const auto& cont_2_val = container_2.national_focus_get_icon(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "icon: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_focus_type)
			{
				const auto& cont_1_val = container_1.national_focus_get_type(obj);
				const auto& cont_2_val = container_2.national_focus_get_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_focus_loyalty_value)
			{
				const auto& cont_1_val = container_1.national_focus_get_loyalty_value(obj);
				const auto& cont_2_val = container_2.national_focus_get_loyalty_value(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "loyalty_value: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_focus_ideology)
			{
				dcon::ideology_id cont_1_val = container_1.national_focus_get_ideology(obj);
				dcon::ideology_id cont_2_val = container_2.national_focus_get_ideology(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ideology: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_focus_limit)
			{
				dcon::trigger_key cont_1_val = container_1.national_focus_get_limit(obj);
				dcon::trigger_key cont_2_val = container_2.national_focus_get_limit(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "limit: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_focus_promotion_type)
			{
				dcon::pop_type_id cont_1_val = container_1.national_focus_get_promotion_type(obj);
				dcon::pop_type_id cont_2_val = container_2.national_focus_get_promotion_type(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "promotion_type: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_focus_promotion_amount)
			{
				const auto& cont_1_val = container_1.national_focus_get_promotion_amount(obj);
				const auto& cont_2_val = container_2.national_focus_get_promotion_amount(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "promotion_amount: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_focus_railroads)
			{
				const auto& cont_1_val = container_1.national_focus_get_railroads(obj);
				const auto& cont_2_val = container_2.national_focus_get_railroads(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "railroads: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.national_focus_production_focus)
			{
				if(!compare_values(container_1.national_focus_get_production_focus_size(), container_2.national_focus_get_production_focus_size()))
				{
					std::string cont_1_size = std::to_string(container_1.national_focus_get_production_focus_size());
					std::string cont_2_size = std::to_string(container_2.national_focus_get_production_focus_size()); 
					report += "\t" + std::string("Size mismatch in dcon array property: production_focus, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(container_1.national_focus_get_production_focus_size(), container_2.national_focus_get_production_focus_size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(j)};
					const auto& cont_1_arr_val = container_1.national_focus_get_production_focus(obj, arr_index);
					const auto& cont_2_arr_val = container_2.national_focus_get_production_focus(obj, arr_index);
					if(!compare_values(cont_1_arr_val, cont_2_arr_val))
					{
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "production_focus, array index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.national_focus_modifier)
			{
				dcon::modifier_id cont_1_val = container_1.national_focus_get_modifier(obj);
				dcon::modifier_id cont_2_val = container_2.national_focus_get_modifier(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "modifier: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.stored_trigger)
	{
		report += std::string("STORED_TRIGGER") + "\n";
		if(!compare_values(container_1.stored_trigger_size(), container_2.stored_trigger_size()))
		{
			std::string cont_1_size = std::to_string(container_1.stored_trigger_size());
			std::string cont_2_size = std::to_string(container_2.stored_trigger_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.stored_trigger_size(), container_2.stored_trigger_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::stored_trigger_id obj{dcon::stored_trigger_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.stored_trigger_name)
			{
				dcon::text_key cont_1_val = container_1.stored_trigger_get_name(obj);
				dcon::text_key cont_2_val = container_2.stored_trigger_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.stored_trigger_function)
			{
				dcon::trigger_key cont_1_val = container_1.stored_trigger_get_function(obj);
				dcon::trigger_key cont_2_val = container_2.stored_trigger_get_function(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "function: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.gamerule)
	{
		report += std::string("GAMERULE") + "\n";
		if(!compare_values(container_1.gamerule_size(), container_2.gamerule_size()))
		{
			std::string cont_1_size = std::to_string(container_1.gamerule_size());
			std::string cont_2_size = std::to_string(container_2.gamerule_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.gamerule_size(), container_2.gamerule_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::gamerule_id obj{dcon::gamerule_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.gamerule_name)
			{
				dcon::text_key cont_1_val = container_1.gamerule_get_name(obj);
				dcon::text_key cont_2_val = container_2.gamerule_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.gamerule_tooltip_explain)
			{
				dcon::text_key cont_1_val = container_1.gamerule_get_tooltip_explain(obj);
				dcon::text_key cont_2_val = container_2.gamerule_get_tooltip_explain(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "tooltip_explain: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.gamerule_default_setting)
			{
				const auto& cont_1_val = container_1.gamerule_get_default_setting(obj);
				const auto& cont_2_val = container_2.gamerule_get_default_setting(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "default_setting: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.gamerule_options)
			{
				const auto& vec_1 = container_1.gamerule_get_options(obj);
				const auto& vec_2 = container_2.gamerule_get_options(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: options, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "options, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.gamerule_settings_count)
			{
				const auto& cont_1_val = container_1.gamerule_get_settings_count(obj);
				const auto& cont_2_val = container_2.gamerule_get_settings_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "settings_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.gamerule_current_setting)
			{
				const auto& cont_1_val = container_1.gamerule_get_current_setting(obj);
				const auto& cont_2_val = container_2.gamerule_get_current_setting(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "current_setting: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.decision)
	{
		report += std::string("DECISION") + "\n";
		if(!compare_values(container_1.decision_size(), container_2.decision_size()))
		{
			std::string cont_1_size = std::to_string(container_1.decision_size());
			std::string cont_2_size = std::to_string(container_2.decision_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.decision_size(), container_2.decision_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::decision_id obj{dcon::decision_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.decision_name)
			{
				dcon::text_key cont_1_val = container_1.decision_get_name(obj);
				dcon::text_key cont_2_val = container_2.decision_get_name(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "name: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.decision_description)
			{
				dcon::text_key cont_1_val = container_1.decision_get_description(obj);
				dcon::text_key cont_2_val = container_2.decision_get_description(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "description: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.decision_image)
			{
				dcon::gfx_object_id cont_1_val = container_1.decision_get_image(obj);
				dcon::gfx_object_id cont_2_val = container_2.decision_get_image(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "image: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.decision_potential)
			{
				dcon::trigger_key cont_1_val = container_1.decision_get_potential(obj);
				dcon::trigger_key cont_2_val = container_2.decision_get_potential(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "potential: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.decision_allow)
			{
				dcon::trigger_key cont_1_val = container_1.decision_get_allow(obj);
				dcon::trigger_key cont_2_val = container_2.decision_get_allow(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "allow: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.decision_effect)
			{
				dcon::effect_key cont_1_val = container_1.decision_get_effect(obj);
				dcon::effect_key cont_2_val = container_2.decision_get_effect(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "effect: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.decision_ai_will_do)
			{
				dcon::value_modifier_key cont_1_val = container_1.decision_get_ai_will_do(obj);
				dcon::value_modifier_key cont_2_val = container_2.decision_get_ai_will_do(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "ai_will_do: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.decision_hide_notification)
			{
				const auto& cont_1_val = container_1.decision_get_hide_notification(obj);
				const auto& cont_2_val = container_2.decision_get_hide_notification(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "hide_notification: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.locale)
	{
		report += std::string("LOCALE") + "\n";
		if(!compare_values(container_1.locale_size(), container_2.locale_size()))
		{
			std::string cont_1_size = std::to_string(container_1.locale_size());
			std::string cont_2_size = std::to_string(container_2.locale_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.locale_size(), container_2.locale_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::locale_id obj{dcon::locale_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.locale_native_rtl)
			{
				const auto& cont_1_val = container_1.locale_get_native_rtl(obj);
				const auto& cont_2_val = container_2.locale_get_native_rtl(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "native_rtl: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.locale_prevent_letterspace)
			{
				const auto& cont_1_val = container_1.locale_get_prevent_letterspace(obj);
				const auto& cont_2_val = container_2.locale_get_prevent_letterspace(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "prevent_letterspace: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.locale_display_name)
			{
				auto vec_1 = container_1.locale_get_display_name(obj);
				auto vec_2 = container_2.locale_get_display_name(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: display_name, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "display_name, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.locale_locale_name)
			{
				auto vec_1 = container_1.locale_get_locale_name(obj);
				auto vec_2 = container_2.locale_get_locale_name(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: locale_name, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "locale_name, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.locale_fallback)
			{
				auto vec_1 = container_1.locale_get_fallback(obj);
				auto vec_2 = container_2.locale_get_fallback(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: fallback, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "fallback, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.locale_resolved_language)
			{
				const auto& cont_1_val = container_1.locale_get_resolved_language(obj);
				const auto& cont_2_val = container_2.locale_get_resolved_language(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "resolved_language: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.locale_hb_script)
			{
				const auto& cont_1_val = container_1.locale_get_hb_script(obj);
				const auto& cont_2_val = container_2.locale_get_hb_script(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "hb_script: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.locale_resolved_body_font)
			{
				const auto& cont_1_val = container_1.locale_get_resolved_body_font(obj);
				const auto& cont_2_val = container_2.locale_get_resolved_body_font(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "resolved_body_font: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.locale_resolved_header_font)
			{
				const auto& cont_1_val = container_1.locale_get_resolved_header_font(obj);
				const auto& cont_2_val = container_2.locale_get_resolved_header_font(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "resolved_header_font: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.locale_resolved_map_font)
			{
				const auto& cont_1_val = container_1.locale_get_resolved_map_font(obj);
				const auto& cont_2_val = container_2.locale_get_resolved_map_font(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "resolved_map_font: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.locale_body_font)
			{
				auto vec_1 = container_1.locale_get_body_font(obj);
				auto vec_2 = container_2.locale_get_body_font(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: body_font, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "body_font, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.locale_header_font)
			{
				auto vec_1 = container_1.locale_get_header_font(obj);
				auto vec_2 = container_2.locale_get_header_font(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: header_font, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "header_font, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.locale_map_font)
			{
				auto vec_1 = container_1.locale_get_map_font(obj);
				auto vec_2 = container_2.locale_get_map_font(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: map_font, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "map_font, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.locale_body_font_features)
			{
				auto vec_1 = container_1.locale_get_body_font_features(obj);
				auto vec_2 = container_2.locale_get_body_font_features(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: body_font_features, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "body_font_features, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.locale_header_font_features)
			{
				auto vec_1 = container_1.locale_get_header_font_features(obj);
				auto vec_2 = container_2.locale_get_header_font_features(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: header_font_features, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "header_font_features, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.locale_map_font_features)
			{
				auto vec_1 = container_1.locale_get_map_font_features(obj);
				auto vec_2 = container_2.locale_get_map_font_features(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: map_font_features, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "map_font_features, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
		}
	}
	if(record.mp_player)
	{
		report += std::string("MP_PLAYER") + "\n";
		if(!compare_values(container_1.mp_player_size(), container_2.mp_player_size()))
		{
			std::string cont_1_size = std::to_string(container_1.mp_player_size());
			std::string cont_2_size = std::to_string(container_2.mp_player_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.mp_player_size(), container_2.mp_player_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::mp_player_id obj{dcon::mp_player_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.mp_player_nickname)
			{
				const auto& cont_1_val = container_1.mp_player_get_nickname(obj);
				const auto& cont_2_val = container_2.mp_player_get_nickname(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "nickname: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.mp_player_password_salt)
			{
				const auto& vec_1 = container_1.mp_player_get_password_salt(obj);
				const auto& vec_2 = container_2.mp_player_get_password_salt(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: password_salt, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "password_salt, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.mp_player_password_hash)
			{
				const auto& vec_1 = container_1.mp_player_get_password_hash(obj);
				const auto& vec_2 = container_2.mp_player_get_password_hash(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: password_hash, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "password_hash, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.mp_player_fully_loaded)
			{
				const auto& cont_1_val = container_1.mp_player_get_fully_loaded(obj);
				const auto& cont_2_val = container_2.mp_player_get_fully_loaded(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "fully_loaded: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.mp_player_is_oos)
			{
				const auto& cont_1_val = container_1.mp_player_get_is_oos(obj);
				const auto& cont_2_val = container_2.mp_player_get_is_oos(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "is_oos: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.player_nation)
	{
		report += std::string("PLAYER_NATION") + "\n";
		if(!compare_values(container_1.player_nation_size(), container_2.player_nation_size()))
		{
			std::string cont_1_size = std::to_string(container_1.player_nation_size());
			std::string cont_2_size = std::to_string(container_2.player_nation_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.player_nation_size(), container_2.player_nation_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::player_nation_id obj{dcon::player_nation_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.player_nation_nation)
			{
				if(!compare_values(container_1.player_nation_get_nation(obj), container_2.player_nation_get_nation(obj)))
				{
					auto cont_1_val = std::to_string(container_1.player_nation_get_nation(obj).value);
					auto cont_2_val = std::to_string(container_2.player_nation_get_nation(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "nation: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.player_nation_mp_player)
			{
				if(!compare_values(container_1.player_nation_get_mp_player(obj), container_2.player_nation_get_mp_player(obj)))
				{
					auto cont_1_val = std::to_string(container_1.player_nation_get_mp_player(obj).value);
					auto cont_2_val = std::to_string(container_2.player_nation_get_mp_player(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "mp_player: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	if(record.client)
	{
		report += std::string("CLIENT") + "\n";
		if(!compare_values(container_1.client_size(), container_2.client_size()))
		{
			std::string cont_1_size = std::to_string(container_1.client_size());
			std::string cont_2_size = std::to_string(container_2.client_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.client_size(), container_2.client_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::client_id obj{dcon::client_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.client_socket_fd)
			{
				const auto& cont_1_val = container_1.client_get_socket_fd(obj);
				const auto& cont_2_val = container_2.client_get_socket_fd(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "socket_fd: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_address)
			{
				const auto& cont_1_val = container_1.client_get_address(obj);
				const auto& cont_2_val = container_2.client_get_address(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "address: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_hshake_buffer)
			{
				const auto& cont_1_val = container_1.client_get_hshake_buffer(obj);
				const auto& cont_2_val = container_2.client_get_hshake_buffer(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "hshake_buffer: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_recv_count)
			{
				const auto& cont_1_val = container_1.client_get_recv_count(obj);
				const auto& cont_2_val = container_2.client_get_recv_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "recv_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_total_sent_bytes)
			{
				const auto& cont_1_val = container_1.client_get_total_sent_bytes(obj);
				const auto& cont_2_val = container_2.client_get_total_sent_bytes(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "total_sent_bytes: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_handshake)
			{
				const auto& cont_1_val = container_1.client_get_handshake(obj);
				const auto& cont_2_val = container_2.client_get_handshake(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "handshake: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_receive_buffer)
			{
				const auto& vec_1 = container_1.client_get_receive_buffer(obj);
				const auto& vec_2 = container_2.client_get_receive_buffer(obj);
				if(!compare_values(vec_1.size(), vec_2.size()))
				{
					std::string cont_1_size = std::to_string(vec_1.size());
					std::string cont_2_size = std::to_string(vec_2.size());
					report += "\t" + std::string("Size mismatch in vector property: receive_buffer, 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
				}
				uint32_t min_arr_size = uint32_t(std::min(vec_1.size(), vec_2.size()));
				for(uint32_t j = 0;j < min_arr_size;j++)
				{
					if(!compare_values(vec_1[j], vec_2[j]))
					{
						const auto& cont_1_arr_val = vec_1[j];
						const auto& cont_2_arr_val = vec_2[j];
						std::string cont_1_arr_str = get_string(cont_1_arr_val);
						std::string cont_2_arr_str = get_string(cont_2_arr_val);
						report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "receive_buffer, vector index: " + std::to_string(j) + ": " + cont_1_arr_str + ", " + cont_2_arr_str) + "\n";
					}
				}
			}
			if(record.client_receiving_payload_flag)
			{
				const auto& cont_1_val = container_1.client_get_receiving_payload_flag(obj);
				const auto& cont_2_val = container_2.client_get_receiving_payload_flag(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "receiving_payload_flag: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_recv_buffer_size_used)
			{
				const auto& cont_1_val = container_1.client_get_recv_buffer_size_used(obj);
				const auto& cont_2_val = container_2.client_get_recv_buffer_size_used(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "recv_buffer_size_used: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_recv_buffer_bytes_read)
			{
				const auto& cont_1_val = container_1.client_get_recv_buffer_bytes_read(obj);
				const auto& cont_2_val = container_2.client_get_recv_buffer_bytes_read(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "recv_buffer_bytes_read: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_client_state)
			{
				const auto& cont_1_val = container_1.client_get_client_state(obj);
				const auto& cont_2_val = container_2.client_get_client_state(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "client_state: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_shutdown_time)
			{
				const auto& cont_1_val = container_1.client_get_shutdown_time(obj);
				const auto& cont_2_val = container_2.client_get_shutdown_time(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "shutdown_time: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_last_seen)
			{
				const auto& cont_1_val = container_1.client_get_last_seen(obj);
				const auto& cont_2_val = container_2.client_get_last_seen(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "last_seen: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_sending_payload)
			{
				const auto& cont_1_val = container_1.client_get_sending_payload(obj);
				const auto& cont_2_val = container_2.client_get_sending_payload(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "sending_payload: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
			if(record.client_command_send_count)
			{
				const auto& cont_1_val = container_1.client_get_command_send_count(obj);
				const auto& cont_2_val = container_2.client_get_command_send_count(obj);
				if(!compare_values(cont_1_val, cont_2_val))
				{
					std::string cont_1_str = get_string(cont_1_val);
					std::string cont_2_str = get_string(cont_2_val);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " property: " + "command_send_count: " + cont_1_str + ", " + cont_2_str) + "\n";
				}
			}
		}
	}
	if(record.player_client)
	{
		report += std::string("PLAYER_CLIENT") + "\n";
		if(!compare_values(container_1.player_client_size(), container_2.player_client_size()))
		{
			std::string cont_1_size = std::to_string(container_1.player_client_size());
			std::string cont_2_size = std::to_string(container_2.player_client_size());
			report += "\t" + std::string("Size mismatch in object: 1st size: " + cont_1_size + " 2nd size: " + cont_2_size) + "\n";
		}
		uint32_t size = std::min(container_1.player_client_size(), container_2.player_client_size());
		for(uint32_t i = 0; i < size;i++)
		{
			dcon::player_client_id obj{dcon::player_client_id::value_base_t(i)};
			auto obj_id = obj.value;
			if(record.player_client_client)
			{
				if(!compare_values(container_1.player_client_get_client(obj), container_2.player_client_get_client(obj)))
				{
					auto cont_1_val = std::to_string(container_1.player_client_get_client(obj).value);
					auto cont_2_val = std::to_string(container_2.player_client_get_client(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "client: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
			if(record.player_client_mp_player)
			{
				if(!compare_values(container_1.player_client_get_mp_player(obj), container_2.player_client_get_mp_player(obj)))
				{
					auto cont_1_val = std::to_string(container_1.player_client_get_mp_player(obj).value);
					auto cont_2_val = std::to_string(container_2.player_client_get_mp_player(obj).value);
					report += "\t" + std::string("ID: " + std::to_string(obj_id) + " relation: " + "mp_player: " + cont_1_val + ", " + cont_2_val) + "\n";
				}
			}
		}
	}
	return report;
}
void reset_data(dcon::data_container& container_1, const dcon::load_record& record){
	if(!record.government_flag)
	{
		container_1.government_flag_resize(0);
	}
	else
	{
		if(!record.government_flag_filename)
		{
			for(auto obj : container_1.in_government_flag)
			{
				obj.set_filename(text_key{});
			}
		}
	}
	if(!record.national_identity)
	{
		container_1.national_identity_resize(0);
	}
	else
	{
		if(!record.national_identity_color)
		{
			for(auto obj : container_1.in_national_identity)
			{
				obj.set_color(uint32_t{});
			}
		}
		if(!record.national_identity_name)
		{
			for(auto obj : container_1.in_national_identity)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.national_identity_adjective)
		{
			for(auto obj : container_1.in_national_identity)
			{
				obj.set_adjective(text_key{});
			}
		}
		if(!record.national_identity_identifying_int)
		{
			for(auto obj : container_1.in_national_identity)
			{
				obj.set_identifying_int(uint32_t{});
			}
		}
		if(!record.national_identity_unit_names_first)
		{
			for(auto obj : container_1.in_national_identity)
			{
				for(size_t i = 0;i<container_1.national_identity_get_unit_names_first_size();i++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(i)};
					obj.set_unit_names_first(arr_index, unit_name_id{});
				}
			}
		}
		if(!record.national_identity_unit_names_count)
		{
			for(auto obj : container_1.in_national_identity)
			{
				for(size_t i = 0;i<container_1.national_identity_get_unit_names_count_size();i++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(i)};
					obj.set_unit_names_count(arr_index, uint8_t{});
				}
			}
		}
		if(!record.national_identity_political_party_first)
		{
			for(auto obj : container_1.in_national_identity)
			{
				obj.set_political_party_first(political_party_id{});
			}
		}
		if(!record.national_identity_political_party_count)
		{
			for(auto obj : container_1.in_national_identity)
			{
				obj.set_political_party_count(uint8_t{});
			}
		}
		if(!record.national_identity_government_flag_type)
		{
			for(auto obj : container_1.in_national_identity)
			{
				for(size_t i = 0;i<container_1.national_identity_get_government_flag_type_size();i++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(i)};
					obj.set_government_flag_type(arr_index, government_flag_id{});
				}
			}
		}
		if(!record.national_identity_government_name)
		{
			for(auto obj : container_1.in_national_identity)
			{
				for(size_t i = 0;i<container_1.national_identity_get_government_name_size();i++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(i)};
					obj.set_government_name(arr_index, text_key{});
				}
			}
		}
		if(!record.national_identity_government_adjective)
		{
			for(auto obj : container_1.in_national_identity)
			{
				for(size_t i = 0;i<container_1.national_identity_get_government_adjective_size();i++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(i)};
					obj.set_government_adjective(arr_index, text_key{});
				}
			}
		}
		if(!record.national_identity_government_ruler_name)
		{
			for(auto obj : container_1.in_national_identity)
			{
				for(size_t i = 0;i<container_1.national_identity_get_government_ruler_name_size();i++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(i)};
					obj.set_government_ruler_name(arr_index, text_key{});
				}
			}
		}
		if(!record.national_identity_government_color)
		{
			for(auto obj : container_1.in_national_identity)
			{
				for(size_t i = 0;i<container_1.national_identity_get_government_color_size();i++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(i)};
					obj.set_government_color(arr_index, uint32_t{});
				}
			}
		}
		if(!record.national_identity_primary_culture)
		{
			for(auto obj : container_1.in_national_identity)
			{
				obj.set_primary_culture(culture_id{});
			}
		}
		if(!record.national_identity_religion)
		{
			for(auto obj : container_1.in_national_identity)
			{
				obj.set_religion(religion_id{});
			}
		}
		if(!record.national_identity_capital)
		{
			for(auto obj : container_1.in_national_identity)
			{
				obj.set_capital(province_id{});
			}
		}
		if(!record.national_identity_is_not_releasable)
		{
			for(auto obj : container_1.in_national_identity)
			{
				obj.set_is_not_releasable(bool{});
			}
		}
	}
	if(!record.political_party)
	{
		container_1.political_party_resize(0);
	}
	else
	{
		if(!record.political_party_name)
		{
			for(auto obj : container_1.in_political_party)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.political_party_start_date)
		{
			for(auto obj : container_1.in_political_party)
			{
				obj.set_start_date(sys::date{});
			}
		}
		if(!record.political_party_end_date)
		{
			for(auto obj : container_1.in_political_party)
			{
				obj.set_end_date(sys::date{});
			}
		}
		if(!record.political_party_ideology)
		{
			for(auto obj : container_1.in_political_party)
			{
				obj.set_ideology(ideology_id{});
			}
		}
		if(!record.political_party_party_issues)
		{
			for(auto obj : container_1.in_political_party)
			{
				for(size_t i = 0;i<container_1.political_party_get_party_issues_size();i++)
				{
					dcon::issue_id arr_index{dcon::issue_id::value_base_t(i)};
					obj.set_party_issues(arr_index, issue_option_id{});
				}
			}
		}
		if(!record.political_party_trigger)
		{
			for(auto obj : container_1.in_political_party)
			{
				obj.set_trigger(dcon::trigger_key{});
			}
		}
	}
	if(!record.leader_images)
	{
		container_1.leader_images_resize(0);
	}
	else
	{
		if(!record.leader_images_admirals)
		{
			for(auto obj : container_1.in_leader_images)
			{
				obj.get_admirals().clear();
			}
		}
		if(!record.leader_images_generals)
		{
			for(auto obj : container_1.in_leader_images)
			{
				obj.get_generals().clear();
			}
		}
	}
	if(!record.religion)
	{
		container_1.religion_resize(0);
	}
	else
	{
		if(!record.religion_name)
		{
			for(auto obj : container_1.in_religion)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.religion_color)
		{
			for(auto obj : container_1.in_religion)
			{
				obj.set_color(uint32_t{});
			}
		}
		if(!record.religion_icon)
		{
			for(auto obj : container_1.in_religion)
			{
				obj.set_icon(uint8_t{});
			}
		}
		if(!record.religion_is_pagan)
		{
			for(auto obj : container_1.in_religion)
			{
				obj.set_is_pagan(bool{});
			}
		}
		if(!record.religion_nation_modifier)
		{
			for(auto obj : container_1.in_religion)
			{
				obj.set_nation_modifier(modifier_id{});
			}
		}
	}
	if(!record.culture_group)
	{
		container_1.culture_group_resize(0);
	}
	else
	{
		if(!record.culture_group_name)
		{
			for(auto obj : container_1.in_culture_group)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.culture_group_is_overseas)
		{
			for(auto obj : container_1.in_culture_group)
			{
				obj.set_is_overseas(bool{});
			}
		}
		if(!record.culture_group_leader)
		{
			for(auto obj : container_1.in_culture_group)
			{
				obj.set_leader(leader_images_id{});
			}
		}
	}
	if(!record.culture)
	{
		container_1.culture_resize(0);
	}
	else
	{
		if(!record.culture_name)
		{
			for(auto obj : container_1.in_culture)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.culture_color)
		{
			for(auto obj : container_1.in_culture)
			{
				obj.set_color(uint32_t{});
			}
		}
		if(!record.culture_radicalism)
		{
			for(auto obj : container_1.in_culture)
			{
				obj.set_radicalism(int8_t{});
			}
		}
		if(!record.culture_first_names)
		{
			for(auto obj : container_1.in_culture)
			{
				obj.get_first_names().clear();
			}
		}
		if(!record.culture_last_names)
		{
			for(auto obj : container_1.in_culture)
			{
				obj.get_last_names().clear();
			}
		}
	}
	if(!record.culture_group_membership)
	{
		container_1.culture_group_membership_resize(0);
	}
	else
	{
	}
	if(!record.cultural_union_of)
	{
		container_1.cultural_union_of_resize(0);
	}
	else
	{
	}
	if(!record.commodity)
	{
		container_1.commodity_resize(0);
	}
	else
	{
		if(!record.commodity_name)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.commodity_color)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_color(uint32_t{});
			}
		}
		if(!record.commodity_cost)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_cost(float{});
			}
		}
		if(!record.commodity_median_price)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_median_price(float{});
			}
		}
		if(!record.commodity_actually_exists_in_nature)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_actually_exists_in_nature(bool{});
			}
		}
		if(!record.commodity_commodity_group)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_commodity_group(uint8_t{});
			}
		}
		if(!record.commodity_is_available_from_start)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_is_available_from_start(bool{});
			}
		}
		if(!record.commodity_is_local)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_is_local(bool{});
			}
		}
		if(!record.commodity_money_rgo)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_money_rgo(bool{});
			}
		}
		if(!record.commodity_is_mine)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_is_mine(bool{});
			}
		}
		if(!record.commodity_overseas_penalty)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_overseas_penalty(bool{});
			}
		}
		if(!record.commodity_rgo_amount)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_rgo_amount(float{});
			}
		}
		if(!record.commodity_rgo_workforce)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_rgo_workforce(int32_t{});
			}
		}
		if(!record.commodity_rgo_efficiency_inputs)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_rgo_efficiency_inputs(economy::commodity_set{});
			}
		}
		if(!record.commodity_rgo_efficiency_inputs_are_defined_in_content)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_rgo_efficiency_inputs_are_defined_in_content(bool{});
			}
		}
		if(!record.commodity_artisan_inputs)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_artisan_inputs(economy::commodity_set{});
			}
		}
		if(!record.commodity_artisan_output_amount)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_artisan_output_amount(float{});
			}
		}
		if(!record.commodity_icon)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_icon(uint8_t{});
			}
		}
		if(!record.commodity_producer_payout_fraction)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_producer_payout_fraction(float{});
			}
		}
		if(!record.commodity_price_record)
		{
			for(auto obj : container_1.in_commodity)
			{
				for(size_t i = 0;i<container_1.commodity_get_price_record_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_price_record(arr_index, float{});
				}
			}
		}
		if(!record.commodity_is_life_need)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_is_life_need(bool{});
			}
		}
		if(!record.commodity_is_everyday_need)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_is_everyday_need(bool{});
			}
		}
		if(!record.commodity_is_luxury_need)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_is_luxury_need(bool{});
			}
		}
		if(!record.commodity_uses_potentials)
		{
			for(auto obj : container_1.in_commodity)
			{
				obj.set_uses_potentials(bool{});
			}
		}
	}
	if(!record.modifier)
	{
		container_1.modifier_resize(0);
	}
	else
	{
		if(!record.modifier_name)
		{
			for(auto obj : container_1.in_modifier)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.modifier_desc)
		{
			for(auto obj : container_1.in_modifier)
			{
				obj.set_desc(text_key{});
			}
		}
		if(!record.modifier_province_values)
		{
			for(auto obj : container_1.in_modifier)
			{
				obj.set_province_values(sys::provincial_modifier_definition{});
			}
		}
		if(!record.modifier_national_values)
		{
			for(auto obj : container_1.in_modifier)
			{
				obj.set_national_values(sys::national_modifier_definition{});
			}
		}
		if(!record.modifier_icon)
		{
			for(auto obj : container_1.in_modifier)
			{
				obj.set_icon(uint8_t{});
			}
		}
	}
	if(!record.factory_type)
	{
		container_1.factory_type_resize(0);
	}
	else
	{
		if(!record.factory_type_name)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.factory_type_description)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_description(text_key{});
			}
		}
		if(!record.factory_type_construction_costs)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_construction_costs(economy::commodity_set{});
			}
		}
		if(!record.factory_type_construction_time)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_construction_time(int16_t{});
			}
		}
		if(!record.factory_type_is_available_from_start)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_is_available_from_start(bool{});
			}
		}
		if(!record.factory_type_is_coastal)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_is_coastal(bool{});
			}
		}
		if(!record.factory_type_inputs)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_inputs(economy::commodity_set{});
			}
		}
		if(!record.factory_type_efficiency_inputs)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_efficiency_inputs(economy::small_commodity_set{});
			}
		}
		if(!record.factory_type_base_workforce)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_base_workforce(int32_t{});
			}
		}
		if(!record.factory_type_output)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_output(commodity_id{});
			}
		}
		if(!record.factory_type_output_amount)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_output_amount(float{});
			}
		}
		if(!record.factory_type_factory_bonuses)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_factory_bonuses(std::array<economy::production_type_bonus,economy::max_production_type_bonuses>{});
			}
		}
		if(!record.factory_type_can_be_built_in_colonies)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_can_be_built_in_colonies(bool{});
			}
		}
		if(!record.factory_type_factory_tier)
		{
			for(auto obj : container_1.in_factory_type)
			{
				obj.set_factory_tier(uint8_t{});
			}
		}
	}
	if(!record.ideology_group)
	{
		container_1.ideology_group_resize(0);
	}
	else
	{
		if(!record.ideology_group_name)
		{
			for(auto obj : container_1.in_ideology_group)
			{
				obj.set_name(text_key{});
			}
		}
	}
	if(!record.ideology)
	{
		container_1.ideology_resize(0);
	}
	else
	{
		if(!record.ideology_name)
		{
			for(auto obj : container_1.in_ideology)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.ideology_color)
		{
			for(auto obj : container_1.in_ideology)
			{
				obj.set_color(uint32_t{});
			}
		}
		if(!record.ideology_is_civilized_only)
		{
			for(auto obj : container_1.in_ideology)
			{
				obj.set_is_civilized_only(bool{});
			}
		}
		if(!record.ideology_activation_date)
		{
			for(auto obj : container_1.in_ideology)
			{
				obj.set_activation_date(sys::date{});
			}
		}
		if(!record.ideology_add_political_reform)
		{
			for(auto obj : container_1.in_ideology)
			{
				obj.set_add_political_reform(value_modifier_key{});
			}
		}
		if(!record.ideology_remove_political_reform)
		{
			for(auto obj : container_1.in_ideology)
			{
				obj.set_remove_political_reform(value_modifier_key{});
			}
		}
		if(!record.ideology_add_social_reform)
		{
			for(auto obj : container_1.in_ideology)
			{
				obj.set_add_social_reform(value_modifier_key{});
			}
		}
		if(!record.ideology_remove_social_reform)
		{
			for(auto obj : container_1.in_ideology)
			{
				obj.set_remove_social_reform(value_modifier_key{});
			}
		}
		if(!record.ideology_add_military_reform)
		{
			for(auto obj : container_1.in_ideology)
			{
				obj.set_add_military_reform(value_modifier_key{});
			}
		}
		if(!record.ideology_add_economic_reform)
		{
			for(auto obj : container_1.in_ideology)
			{
				obj.set_add_economic_reform(value_modifier_key{});
			}
		}
		if(!record.ideology_enabled)
		{
			for(auto obj : container_1.in_ideology)
			{
				obj.set_enabled(bool{});
			}
		}
	}
	if(!record.ideology_group_membership)
	{
		container_1.ideology_group_membership_resize(0);
	}
	else
	{
	}
	if(!record.issue)
	{
		container_1.issue_resize(0);
	}
	else
	{
		if(!record.issue_name)
		{
			for(auto obj : container_1.in_issue)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.issue_desc)
		{
			for(auto obj : container_1.in_issue)
			{
				obj.set_desc(text_key{});
			}
		}
		if(!record.issue_options)
		{
			for(auto obj : container_1.in_issue)
			{
				obj.set_options(std::array<dcon::issue_option_id,culture::max_issue_options>{});
			}
		}
		if(!record.issue_is_next_step_only)
		{
			for(auto obj : container_1.in_issue)
			{
				obj.set_is_next_step_only(bool{});
			}
		}
		if(!record.issue_is_administrative)
		{
			for(auto obj : container_1.in_issue)
			{
				obj.set_is_administrative(bool{});
			}
		}
		if(!record.issue_issue_type)
		{
			for(auto obj : container_1.in_issue)
			{
				obj.set_issue_type(uint8_t{});
			}
		}
	}
	if(!record.issue_option)
	{
		container_1.issue_option_resize(0);
	}
	else
	{
		if(!record.issue_option_name)
		{
			for(auto obj : container_1.in_issue_option)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.issue_option_desc)
		{
			for(auto obj : container_1.in_issue_option)
			{
				obj.set_desc(text_key{});
			}
		}
		if(!record.issue_option_movement_name)
		{
			for(auto obj : container_1.in_issue_option)
			{
				obj.set_movement_name(text_key{});
			}
		}
		if(!record.issue_option_rules)
		{
			for(auto obj : container_1.in_issue_option)
			{
				obj.set_rules(uint32_t{});
			}
		}
		if(!record.issue_option_modifier)
		{
			for(auto obj : container_1.in_issue_option)
			{
				obj.set_modifier(modifier_id{});
			}
		}
		if(!record.issue_option_war_exhaustion_effect)
		{
			for(auto obj : container_1.in_issue_option)
			{
				obj.set_war_exhaustion_effect(float{});
			}
		}
		if(!record.issue_option_administrative_multiplier)
		{
			for(auto obj : container_1.in_issue_option)
			{
				obj.set_administrative_multiplier(float{});
			}
		}
		if(!record.issue_option_allow)
		{
			for(auto obj : container_1.in_issue_option)
			{
				obj.set_allow(trigger_key{});
			}
		}
		if(!record.issue_option_on_execute_trigger)
		{
			for(auto obj : container_1.in_issue_option)
			{
				obj.set_on_execute_trigger(trigger_key{});
			}
		}
		if(!record.issue_option_on_execute_effect)
		{
			for(auto obj : container_1.in_issue_option)
			{
				obj.set_on_execute_effect(effect_key{});
			}
		}
		if(!record.issue_option_parent_issue)
		{
			for(auto obj : container_1.in_issue_option)
			{
				obj.set_parent_issue(issue_id{});
			}
		}
		if(!record.issue_option_support_modifiers)
		{
			for(auto obj : container_1.in_issue_option)
			{
				for(size_t i = 0;i<container_1.issue_option_get_support_modifiers_size();i++)
				{
					dcon::issue_option_id arr_index{dcon::issue_option_id::value_base_t(i)};
					obj.set_support_modifiers(arr_index, value_modifier_key{});
				}
			}
		}
	}
	if(!record.reform)
	{
		container_1.reform_resize(0);
	}
	else
	{
		if(!record.reform_name)
		{
			for(auto obj : container_1.in_reform)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.reform_desc)
		{
			for(auto obj : container_1.in_reform)
			{
				obj.set_desc(text_key{});
			}
		}
		if(!record.reform_options)
		{
			for(auto obj : container_1.in_reform)
			{
				obj.set_options(std::array<dcon::reform_option_id,culture::max_issue_options>{});
			}
		}
		if(!record.reform_is_next_step_only)
		{
			for(auto obj : container_1.in_reform)
			{
				obj.set_is_next_step_only(bool{});
			}
		}
		if(!record.reform_reform_type)
		{
			for(auto obj : container_1.in_reform)
			{
				obj.set_reform_type(uint8_t{});
			}
		}
	}
	if(!record.reform_option)
	{
		container_1.reform_option_resize(0);
	}
	else
	{
		if(!record.reform_option_name)
		{
			for(auto obj : container_1.in_reform_option)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.reform_option_desc)
		{
			for(auto obj : container_1.in_reform_option)
			{
				obj.set_desc(text_key{});
			}
		}
		if(!record.reform_option_rules)
		{
			for(auto obj : container_1.in_reform_option)
			{
				obj.set_rules(uint32_t{});
			}
		}
		if(!record.reform_option_modifier)
		{
			for(auto obj : container_1.in_reform_option)
			{
				obj.set_modifier(modifier_id{});
			}
		}
		if(!record.reform_option_technology_cost)
		{
			for(auto obj : container_1.in_reform_option)
			{
				obj.set_technology_cost(int32_t{});
			}
		}
		if(!record.reform_option_war_exhaustion_effect)
		{
			for(auto obj : container_1.in_reform_option)
			{
				obj.set_war_exhaustion_effect(float{});
			}
		}
		if(!record.reform_option_allow)
		{
			for(auto obj : container_1.in_reform_option)
			{
				obj.set_allow(trigger_key{});
			}
		}
		if(!record.reform_option_on_execute_trigger)
		{
			for(auto obj : container_1.in_reform_option)
			{
				obj.set_on_execute_trigger(trigger_key{});
			}
		}
		if(!record.reform_option_on_execute_effect)
		{
			for(auto obj : container_1.in_reform_option)
			{
				obj.set_on_execute_effect(effect_key{});
			}
		}
		if(!record.reform_option_parent_reform)
		{
			for(auto obj : container_1.in_reform_option)
			{
				obj.set_parent_reform(reform_id{});
			}
		}
	}
	if(!record.cb_type)
	{
		container_1.cb_type_resize(0);
	}
	else
	{
		if(!record.cb_type_name)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.cb_type_short_desc)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_short_desc(text_key{});
			}
		}
		if(!record.cb_type_shortest_desc)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_shortest_desc(text_key{});
			}
		}
		if(!record.cb_type_long_desc)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_long_desc(text_key{});
			}
		}
		if(!record.cb_type_war_name)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_war_name(text_key{});
			}
		}
		if(!record.cb_type_type_bits)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_type_bits(uint32_t{});
			}
		}
		if(!record.cb_type_months)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_months(uint8_t{});
			}
		}
		if(!record.cb_type_truce_months)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_truce_months(uint8_t{});
			}
		}
		if(!record.cb_type_sprite_index)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_sprite_index(uint8_t{});
			}
		}
		if(!record.cb_type_allowed_states)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_allowed_states(trigger_key{});
			}
		}
		if(!record.cb_type_allowed_states_in_crisis)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_allowed_states_in_crisis(trigger_key{});
			}
		}
		if(!record.cb_type_allowed_substate_regions)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_allowed_substate_regions(trigger_key{});
			}
		}
		if(!record.cb_type_allowed_countries)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_allowed_countries(trigger_key{});
			}
		}
		if(!record.cb_type_can_use)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_can_use(trigger_key{});
			}
		}
		if(!record.cb_type_on_add)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_on_add(effect_key{});
			}
		}
		if(!record.cb_type_on_po_accepted)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_on_po_accepted(effect_key{});
			}
		}
		if(!record.cb_type_badboy_factor)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_badboy_factor(float{});
			}
		}
		if(!record.cb_type_prestige_factor)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_prestige_factor(float{});
			}
		}
		if(!record.cb_type_peace_cost_factor)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_peace_cost_factor(float{});
			}
		}
		if(!record.cb_type_penalty_factor)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_penalty_factor(float{});
			}
		}
		if(!record.cb_type_break_truce_prestige_factor)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_break_truce_prestige_factor(float{});
			}
		}
		if(!record.cb_type_break_truce_infamy_factor)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_break_truce_infamy_factor(float{});
			}
		}
		if(!record.cb_type_break_truce_militancy_factor)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_break_truce_militancy_factor(float{});
			}
		}
		if(!record.cb_type_good_relation_prestige_factor)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_good_relation_prestige_factor(float{});
			}
		}
		if(!record.cb_type_good_relation_infamy_factor)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_good_relation_infamy_factor(float{});
			}
		}
		if(!record.cb_type_good_relation_militancy_factor)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_good_relation_militancy_factor(float{});
			}
		}
		if(!record.cb_type_construction_speed)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_construction_speed(float{});
			}
		}
		if(!record.cb_type_tws_battle_factor)
		{
			for(auto obj : container_1.in_cb_type)
			{
				obj.set_tws_battle_factor(float{});
			}
		}
	}
	if(!record.leader_trait)
	{
		container_1.leader_trait_resize(0);
	}
	else
	{
		if(!record.leader_trait_name)
		{
			for(auto obj : container_1.in_leader_trait)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.leader_trait_organisation)
		{
			for(auto obj : container_1.in_leader_trait)
			{
				obj.set_organisation(float{});
			}
		}
		if(!record.leader_trait_morale)
		{
			for(auto obj : container_1.in_leader_trait)
			{
				obj.set_morale(float{});
			}
		}
		if(!record.leader_trait_attack)
		{
			for(auto obj : container_1.in_leader_trait)
			{
				obj.set_attack(float{});
			}
		}
		if(!record.leader_trait_defense)
		{
			for(auto obj : container_1.in_leader_trait)
			{
				obj.set_defense(float{});
			}
		}
		if(!record.leader_trait_reconnaissance)
		{
			for(auto obj : container_1.in_leader_trait)
			{
				obj.set_reconnaissance(float{});
			}
		}
		if(!record.leader_trait_speed)
		{
			for(auto obj : container_1.in_leader_trait)
			{
				obj.set_speed(float{});
			}
		}
		if(!record.leader_trait_experience)
		{
			for(auto obj : container_1.in_leader_trait)
			{
				obj.set_experience(float{});
			}
		}
		if(!record.leader_trait_reliability)
		{
			for(auto obj : container_1.in_leader_trait)
			{
				obj.set_reliability(float{});
			}
		}
	}
	if(!record.pop_type)
	{
		container_1.pop_type_resize(0);
	}
	else
	{
		if(!record.pop_type_name)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.pop_type_sprite)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_sprite(uint8_t{});
			}
		}
		if(!record.pop_type_color)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_color(uint32_t{});
			}
		}
		if(!record.pop_type_strata)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_strata(uint8_t{});
			}
		}
		if(!record.pop_type_state_capital_only)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_state_capital_only(bool{});
			}
		}
		if(!record.pop_type_voting_forbidden)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_voting_forbidden(bool{});
			}
		}
		if(!record.pop_type_is_paid_rgo_worker)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_is_paid_rgo_worker(bool{});
			}
		}
		if(!record.pop_type_everyday_needs_income_type)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_everyday_needs_income_type(uint8_t{});
			}
		}
		if(!record.pop_type_luxury_needs_income_type)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_luxury_needs_income_type(uint8_t{});
			}
		}
		if(!record.pop_type_life_needs_income_type)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_life_needs_income_type(uint8_t{});
			}
		}
		if(!record.pop_type_research_optimum)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_research_optimum(float{});
			}
		}
		if(!record.pop_type_research_points)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_research_points(float{});
			}
		}
		if(!record.pop_type_has_unemployment)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_has_unemployment(bool{});
			}
		}
		if(!record.pop_type_migration_target)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_migration_target(value_modifier_key{});
			}
		}
		if(!record.pop_type_migration_target_fn)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_migration_target_fn(uint64_t{});
			}
		}
		if(!record.pop_type_country_migration_target)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_country_migration_target(value_modifier_key{});
			}
		}
		if(!record.pop_type_country_migration_target_fn)
		{
			for(auto obj : container_1.in_pop_type)
			{
				obj.set_country_migration_target_fn(uint64_t{});
			}
		}
		if(!record.pop_type_issues)
		{
			for(auto obj : container_1.in_pop_type)
			{
				for(size_t i = 0;i<container_1.pop_type_get_issues_size();i++)
				{
					dcon::issue_option_id arr_index{dcon::issue_option_id::value_base_t(i)};
					obj.set_issues(arr_index, value_modifier_key{});
				}
			}
		}
		if(!record.pop_type_issues_fns)
		{
			for(auto obj : container_1.in_pop_type)
			{
				for(size_t i = 0;i<container_1.pop_type_get_issues_fns_size();i++)
				{
					dcon::issue_option_id arr_index{dcon::issue_option_id::value_base_t(i)};
					obj.set_issues_fns(arr_index, uint64_t{});
				}
			}
		}
		if(!record.pop_type_ideology)
		{
			for(auto obj : container_1.in_pop_type)
			{
				for(size_t i = 0;i<container_1.pop_type_get_ideology_size();i++)
				{
					dcon::ideology_id arr_index{dcon::ideology_id::value_base_t(i)};
					obj.set_ideology(arr_index, value_modifier_key{});
				}
			}
		}
		if(!record.pop_type_ideology_fns)
		{
			for(auto obj : container_1.in_pop_type)
			{
				for(size_t i = 0;i<container_1.pop_type_get_ideology_fns_size();i++)
				{
					dcon::ideology_id arr_index{dcon::ideology_id::value_base_t(i)};
					obj.set_ideology_fns(arr_index, uint64_t{});
				}
			}
		}
		if(!record.pop_type_promotion)
		{
			for(auto obj : container_1.in_pop_type)
			{
				for(size_t i = 0;i<container_1.pop_type_get_promotion_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_promotion(arr_index, value_modifier_key{});
				}
			}
		}
		if(!record.pop_type_promotion_fns)
		{
			for(auto obj : container_1.in_pop_type)
			{
				for(size_t i = 0;i<container_1.pop_type_get_promotion_fns_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_promotion_fns(arr_index, uint64_t{});
				}
			}
		}
		if(!record.pop_type_life_needs)
		{
			for(auto obj : container_1.in_pop_type)
			{
				for(size_t i = 0;i<container_1.pop_type_get_life_needs_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_life_needs(arr_index, float{});
				}
			}
		}
		if(!record.pop_type_everyday_needs)
		{
			for(auto obj : container_1.in_pop_type)
			{
				for(size_t i = 0;i<container_1.pop_type_get_everyday_needs_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_everyday_needs(arr_index, float{});
				}
			}
		}
		if(!record.pop_type_luxury_needs)
		{
			for(auto obj : container_1.in_pop_type)
			{
				for(size_t i = 0;i<container_1.pop_type_get_luxury_needs_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_luxury_needs(arr_index, float{});
				}
			}
		}
	}
	if(!record.rebel_type)
	{
		container_1.rebel_type_resize(0);
	}
	else
	{
		if(!record.rebel_type_name)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.rebel_type_title)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_title(text_key{});
			}
		}
		if(!record.rebel_type_description)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_description(text_key{});
			}
		}
		if(!record.rebel_type_army_name)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_army_name(text_key{});
			}
		}
		if(!record.rebel_type_icon)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_icon(uint8_t{});
			}
		}
		if(!record.rebel_type_break_alliance_on_win)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_break_alliance_on_win(bool{});
			}
		}
		if(!record.rebel_type_area)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_area(uint8_t{});
			}
		}
		if(!record.rebel_type_defection)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_defection(uint8_t{});
			}
		}
		if(!record.rebel_type_independence)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_independence(uint8_t{});
			}
		}
		if(!record.rebel_type_ideology)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_ideology(ideology_id{});
			}
		}
		if(!record.rebel_type_occupation_multiplier)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_occupation_multiplier(float{});
			}
		}
		if(!record.rebel_type_defect_delay)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_defect_delay(uint8_t{});
			}
		}
		if(!record.rebel_type_culture_restriction)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_culture_restriction(bool{});
			}
		}
		if(!record.rebel_type_ideology_restriction)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_ideology_restriction(bool{});
			}
		}
		if(!record.rebel_type_culture_group_restriction)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_culture_group_restriction(bool{});
			}
		}
		if(!record.rebel_type_will_rise)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_will_rise(value_modifier_key{});
			}
		}
		if(!record.rebel_type_spawn_chance)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_spawn_chance(value_modifier_key{});
			}
		}
		if(!record.rebel_type_movement_evaluation)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_movement_evaluation(value_modifier_key{});
			}
		}
		if(!record.rebel_type_siege_won_trigger)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_siege_won_trigger(trigger_key{});
			}
		}
		if(!record.rebel_type_siege_won_effect)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_siege_won_effect(effect_key{});
			}
		}
		if(!record.rebel_type_demands_enforced_trigger)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_demands_enforced_trigger(trigger_key{});
			}
		}
		if(!record.rebel_type_demands_enforced_effect)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				obj.set_demands_enforced_effect(effect_key{});
			}
		}
		if(!record.rebel_type_government_change)
		{
			for(auto obj : container_1.in_rebel_type)
			{
				for(size_t i = 0;i<container_1.rebel_type_get_government_change_size();i++)
				{
					dcon::government_type_id arr_index{dcon::government_type_id::value_base_t(i)};
					obj.set_government_change(arr_index, government_type_id{});
				}
			}
		}
	}
	if(!record.government_type)
	{
		container_1.government_type_resize(0);
	}
	else
	{
		if(!record.government_type_name)
		{
			for(auto obj : container_1.in_government_type)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.government_type_desc)
		{
			for(auto obj : container_1.in_government_type)
			{
				obj.set_desc(text_key{});
			}
		}
		if(!record.government_type_ruler_name)
		{
			for(auto obj : container_1.in_government_type)
			{
				obj.set_ruler_name(text_key{});
			}
		}
		if(!record.government_type_ideologies_allowed)
		{
			for(auto obj : container_1.in_government_type)
			{
				obj.set_ideologies_allowed(uint64_t{});
			}
		}
		if(!record.government_type_has_elections)
		{
			for(auto obj : container_1.in_government_type)
			{
				obj.set_has_elections(bool{});
			}
		}
		if(!record.government_type_can_appoint_ruling_party)
		{
			for(auto obj : container_1.in_government_type)
			{
				obj.set_can_appoint_ruling_party(bool{});
			}
		}
		if(!record.government_type_duration)
		{
			for(auto obj : container_1.in_government_type)
			{
				obj.set_duration(int8_t{});
			}
		}
		if(!record.government_type_flag)
		{
			for(auto obj : container_1.in_government_type)
			{
				obj.set_flag(government_flag_id{});
			}
		}
	}
	if(!record.province)
	{
		container_1.province_resize(0);
	}
	else
	{
		if(!record.province_provid)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_provid(uint32_t{});
			}
		}
		if(!record.province_name)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.province_continent)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_continent(modifier_id{});
			}
		}
		if(!record.province_climate)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_climate(modifier_id{});
			}
		}
		if(!record.province_terrain)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_terrain(modifier_id{});
			}
		}
		if(!record.province_life_rating)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_life_rating(uint8_t{});
			}
		}
		if(!record.province_rgo)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_rgo(commodity_id{});
			}
		}
		if(!record.province_building_level)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_building_level_size();i++)
				{
					auto arr_index = uint8_t(i);
					obj.set_building_level(arr_index, uint8_t{});
				}
			}
		}
		if(!record.province_is_slave)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_is_slave(bool{});
			}
		}
		if(!record.province_naval_rally_point)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_naval_rally_point(bool{});
			}
		}
		if(!record.province_land_rally_point)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_land_rally_point(bool{});
			}
		}
		if(!record.province_is_colonial)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_is_colonial(bool{});
			}
		}
		if(!record.province_has_major_river)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_has_major_river(bool{});
			}
		}
		if(!record.province_has_minor_river)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_has_minor_river(bool{});
			}
		}
		if(!record.province_crime)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_crime(crime_id{});
			}
		}
		if(!record.province_mid_point)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_mid_point(glm::vec2{});
			}
		}
		if(!record.province_mid_point_b)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_mid_point_b(glm::vec3{});
			}
		}
		if(!record.province_port_to)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_port_to(province_id{});
			}
		}
		if(!record.province_party_loyalty)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_party_loyalty_size();i++)
				{
					dcon::ideology_id arr_index{dcon::ideology_id::value_base_t(i)};
					obj.set_party_loyalty(arr_index, float{});
				}
			}
		}
		if(!record.province_modifier_values)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_modifier_values_size();i++)
				{
					dcon::provincial_modifier_value arr_index{dcon::provincial_modifier_value::value_base_t(i)};
					obj.set_modifier_values(arr_index, float{});
				}
			}
		}
		if(!record.province_current_modifiers)
		{
			for(auto obj : container_1.in_province)
			{
				obj.get_current_modifiers().clear();
			}
		}
		if(!record.province_nationalism)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_nationalism(float{});
			}
		}
		if(!record.province_connected_region_id)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_connected_region_id(uint16_t{});
			}
		}
		if(!record.province_connected_coast_id)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_connected_coast_id(uint16_t{});
			}
		}
		if(!record.province_state_membership)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_state_membership(state_instance_id{});
			}
		}
		if(!record.province_is_coast)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_is_coast(bool{});
			}
		}
		if(!record.province_demographics)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_demographics_size();i++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(i)};
					obj.set_demographics(arr_index, float{});
				}
			}
		}
		if(!record.province_demographics_alt)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_demographics_alt_size();i++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(i)};
					obj.set_demographics_alt(arr_index, float{});
				}
			}
		}
		if(!record.province_dominant_culture)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_dominant_culture(culture_id{});
			}
		}
		if(!record.province_dominant_accepted_culture)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_dominant_accepted_culture(culture_id{});
			}
		}
		if(!record.province_dominant_religion)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_dominant_religion(religion_id{});
			}
		}
		if(!record.province_dominant_ideology)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_dominant_ideology(ideology_id{});
			}
		}
		if(!record.province_dominant_issue_option)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_dominant_issue_option(issue_option_id{});
			}
		}
		if(!record.province_last_control_change)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_last_control_change(sys::date{});
			}
		}
		if(!record.province_last_immigration)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_last_immigration(sys::date{});
			}
		}
		if(!record.province_is_owner_core)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_is_owner_core(bool{});
			}
		}
		if(!record.province_rgo_base_size)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_rgo_base_size(float{});
			}
		}
		if(!record.province_rgo_was_set_during_scenario_creation)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_rgo_was_set_during_scenario_creation(bool{});
			}
		}
		if(!record.province_rgo_size)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_rgo_size_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_rgo_size(arr_index, float{});
				}
			}
		}
		if(!record.province_rgo_max_size)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_rgo_max_size_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_rgo_max_size(arr_index, float{});
				}
			}
		}
		if(!record.province_rgo_potential)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_rgo_potential_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_rgo_potential(arr_index, float{});
				}
			}
		}
		if(!record.province_rgo_efficiency)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_rgo_efficiency_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_rgo_efficiency(arr_index, float{});
				}
			}
		}
		if(!record.province_rgo_max_efficiency)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_rgo_max_efficiency_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_rgo_max_efficiency(arr_index, float{});
				}
			}
		}
		if(!record.province_rgo_base_efficiency)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_rgo_base_efficiency_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_rgo_base_efficiency(arr_index, float{});
				}
			}
		}
		if(!record.province_rgo_target_employment)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_rgo_target_employment_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_rgo_target_employment(arr_index, float{});
				}
			}
		}
		if(!record.province_rgo_output)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_rgo_output_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_rgo_output(arr_index, float{});
				}
			}
		}
		if(!record.province_rgo_output_per_worker)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_rgo_output_per_worker_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_rgo_output_per_worker(arr_index, float{});
				}
			}
		}
		if(!record.province_factory_limit_was_set_during_scenario_creation)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_factory_limit_was_set_during_scenario_creation(bool{});
			}
		}
		if(!record.province_factory_max_size)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_factory_max_size_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_factory_max_size(arr_index, float{});
				}
			}
		}
		if(!record.province_rgo_profit)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_rgo_profit(float{});
			}
		}
		if(!record.province_artisan_score)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_artisan_score_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_artisan_score(arr_index, float{});
				}
			}
		}
		if(!record.province_artisan_actual_production)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_artisan_actual_production_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_artisan_actual_production(arr_index, float{});
				}
			}
		}
		if(!record.province_artisan_profit)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_artisan_profit(float{});
			}
		}
		if(!record.province_artisan_bank)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_artisan_bank(float{});
			}
		}
		if(!record.province_rgo_bank)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_rgo_bank(float{});
			}
		}
		if(!record.province_factory_bank)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_factory_bank(float{});
			}
		}
		if(!record.province_subsistence_score)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_subsistence_score(float{});
			}
		}
		if(!record.province_landowners_share)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_landowners_share(float{});
			}
		}
		if(!record.province_capitalists_share)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_capitalists_share(float{});
			}
		}
		if(!record.province_subsistence_employment)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_subsistence_employment(float{});
			}
		}
		if(!record.province_tax_base_poor)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_tax_base_poor(float{});
			}
		}
		if(!record.province_tax_base_middle)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_tax_base_middle(float{});
			}
		}
		if(!record.province_tax_base_rich)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_tax_base_rich(float{});
			}
		}
		if(!record.province_daily_net_migration)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_daily_net_migration(float{});
			}
		}
		if(!record.province_daily_net_immigration)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_daily_net_immigration(float{});
			}
		}
		if(!record.province_siege_progress)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_siege_progress(float{});
			}
		}
		if(!record.province_is_blockaded)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_is_blockaded(bool{});
			}
		}
		if(!record.province_former_controller)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_former_controller(dcon::nation_id{});
			}
		}
		if(!record.province_former_rebel_controller)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_former_rebel_controller(dcon::rebel_faction_id{});
			}
		}
		if(!record.province_advanced_province_building_national_size)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_advanced_province_building_national_size_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_advanced_province_building_national_size(arr_index, float{});
				}
			}
		}
		if(!record.province_advanced_province_building_max_national_size)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_advanced_province_building_max_national_size_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_advanced_province_building_max_national_size(arr_index, float{});
				}
			}
		}
		if(!record.province_advanced_province_building_private_size)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_advanced_province_building_private_size_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_advanced_province_building_private_size(arr_index, float{});
				}
			}
		}
		if(!record.province_advanced_province_building_private_savings)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_advanced_province_building_private_savings_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_advanced_province_building_private_savings(arr_index, float{});
				}
			}
		}
		if(!record.province_advanced_province_building_max_private_size)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_advanced_province_building_max_private_size_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_advanced_province_building_max_private_size(arr_index, float{});
				}
			}
		}
		if(!record.province_advanced_province_building_private_output)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_advanced_province_building_private_output_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_advanced_province_building_private_output(arr_index, float{});
				}
			}
		}
		if(!record.province_service_price)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_service_price_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_service_price(arr_index, float{});
				}
			}
		}
		if(!record.province_service_supply_private)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_service_supply_private_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_service_supply_private(arr_index, float{});
				}
			}
		}
		if(!record.province_service_supply_public)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_service_supply_public_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_service_supply_public(arr_index, float{});
				}
			}
		}
		if(!record.province_service_demand_allowed_public_supply)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_service_demand_allowed_public_supply_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_service_demand_allowed_public_supply(arr_index, float{});
				}
			}
		}
		if(!record.province_service_demand_forbidden_public_supply)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_service_demand_forbidden_public_supply_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_service_demand_forbidden_public_supply(arr_index, float{});
				}
			}
		}
		if(!record.province_service_satisfaction)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_service_satisfaction_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_service_satisfaction(arr_index, float{});
				}
			}
		}
		if(!record.province_service_satisfaction_for_free)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_service_satisfaction_for_free_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_service_satisfaction_for_free(arr_index, float{});
				}
			}
		}
		if(!record.province_service_sold)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_service_sold_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_service_sold(arr_index, float{});
				}
			}
		}
		if(!record.province_labor_price)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_labor_price_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_labor_price(arr_index, float{});
				}
			}
		}
		if(!record.province_labor_supply)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_labor_supply_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_labor_supply(arr_index, float{});
				}
			}
		}
		if(!record.province_labor_demand)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_labor_demand_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_labor_demand(arr_index, float{});
				}
			}
		}
		if(!record.province_labor_demand_satisfaction)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_labor_demand_satisfaction_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_labor_demand_satisfaction(arr_index, float{});
				}
			}
		}
		if(!record.province_labor_supply_sold)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_labor_supply_sold_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_labor_supply_sold(arr_index, float{});
				}
			}
		}
		if(!record.province_administration_employment_target)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_administration_employment_target(float{});
			}
		}
		if(!record.province_pop_labor_distribution)
		{
			for(auto obj : container_1.in_province)
			{
				for(size_t i = 0;i<container_1.province_get_pop_labor_distribution_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_pop_labor_distribution(arr_index, float{});
				}
			}
		}
		if(!record.province_control_scale)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_control_scale(float{});
			}
		}
		if(!record.province_control_ratio)
		{
			for(auto obj : container_1.in_province)
			{
				obj.set_control_ratio(float{});
			}
		}
	}
	if(!record.province_adjacency)
	{
		container_1.province_adjacency_resize(0);
	}
	else
	{
		if(!record.province_adjacency_distance)
		{
			for(auto obj : container_1.in_province_adjacency)
			{
				obj.set_distance(float{});
			}
		}
		if(!record.province_adjacency_distance_km)
		{
			for(auto obj : container_1.in_province_adjacency)
			{
				obj.set_distance_km(float{});
			}
		}
		if(!record.province_adjacency_canal_or_blockade_province)
		{
			for(auto obj : container_1.in_province_adjacency)
			{
				obj.set_canal_or_blockade_province(dcon::province_id{});
			}
		}
		if(!record.province_adjacency_type)
		{
			for(auto obj : container_1.in_province_adjacency)
			{
				obj.set_type(uint8_t{});
			}
		}
	}
	if(!record.nation_adjacency)
	{
		container_1.nation_adjacency_resize(0);
	}
	else
	{
	}
	if(!record.regiment)
	{
		container_1.regiment_resize(0);
	}
	else
	{
		if(!record.regiment_name)
		{
			for(auto obj : container_1.in_regiment)
			{
				obj.set_name(unit_name_id{});
			}
		}
		if(!record.regiment_type)
		{
			for(auto obj : container_1.in_regiment)
			{
				obj.set_type(unit_type_id{});
			}
		}
		if(!record.regiment_strength)
		{
			for(auto obj : container_1.in_regiment)
			{
				obj.set_strength(float{});
			}
		}
		if(!record.regiment_pending_combat_damage)
		{
			for(auto obj : container_1.in_regiment)
			{
				obj.set_pending_combat_damage(float{});
			}
		}
		if(!record.regiment_pending_attrition_damage)
		{
			for(auto obj : container_1.in_regiment)
			{
				obj.set_pending_attrition_damage(float{});
			}
		}
		if(!record.regiment_org)
		{
			for(auto obj : container_1.in_regiment)
			{
				obj.set_org(float{});
			}
		}
		if(!record.regiment_experience)
		{
			for(auto obj : container_1.in_regiment)
			{
				obj.set_experience(float{});
			}
		}
	}
	if(!record.automated_army_group)
	{
		container_1.automated_army_group_resize(0);
	}
	else
	{
		if(!record.automated_army_group_owner)
		{
			for(auto obj : container_1.in_automated_army_group)
			{
				obj.set_owner(nation_id{});
			}
		}
		if(!record.automated_army_group_hq)
		{
			for(auto obj : container_1.in_automated_army_group)
			{
				obj.set_hq(province_id{});
			}
		}
		if(!record.automated_army_group_provinces_defend)
		{
			for(auto obj : container_1.in_automated_army_group)
			{
				obj.get_provinces_defend().clear();
			}
		}
		if(!record.automated_army_group_provinces_enforce_control)
		{
			for(auto obj : container_1.in_automated_army_group)
			{
				obj.get_provinces_enforce_control().clear();
			}
		}
		if(!record.automated_army_group_provinces_ferry_origin)
		{
			for(auto obj : container_1.in_automated_army_group)
			{
				obj.get_provinces_ferry_origin().clear();
			}
		}
	}
	if(!record.automated_army_group_membership_regiment)
	{
		container_1.automated_army_group_membership_regiment_resize(0);
	}
	else
	{
	}
	if(!record.automated_army_group_membership_navy)
	{
		container_1.automated_army_group_membership_navy_resize(0);
	}
	else
	{
	}
	if(!record.regiment_automation_data)
	{
		container_1.regiment_automation_data_resize(0);
	}
	else
	{
		if(!record.regiment_automation_data_status)
		{
			for(auto obj : container_1.in_regiment_automation_data)
			{
				obj.set_status(sys::army_group_regiment_status{});
			}
		}
		if(!record.regiment_automation_data_task)
		{
			for(auto obj : container_1.in_regiment_automation_data)
			{
				obj.set_task(sys::army_group_regiment_task{});
			}
		}
		if(!record.regiment_automation_data_await_command_execution_flag)
		{
			for(auto obj : container_1.in_regiment_automation_data)
			{
				obj.set_await_command_execution_flag(bool{});
			}
		}
		if(!record.regiment_automation_data_target)
		{
			for(auto obj : container_1.in_regiment_automation_data)
			{
				obj.set_target(province_id{});
			}
		}
		if(!record.regiment_automation_data_ferry_target)
		{
			for(auto obj : container_1.in_regiment_automation_data)
			{
				obj.set_ferry_target(province_id{});
			}
		}
		if(!record.regiment_automation_data_ferry_origin)
		{
			for(auto obj : container_1.in_regiment_automation_data)
			{
				obj.set_ferry_origin(province_id{});
			}
		}
	}
	if(!record.automation)
	{
		container_1.automation_resize(0);
	}
	else
	{
	}
	if(!record.ship)
	{
		container_1.ship_resize(0);
	}
	else
	{
		if(!record.ship_name)
		{
			for(auto obj : container_1.in_ship)
			{
				obj.set_name(unit_name_id{});
			}
		}
		if(!record.ship_type)
		{
			for(auto obj : container_1.in_ship)
			{
				obj.set_type(unit_type_id{});
			}
		}
		if(!record.ship_strength)
		{
			for(auto obj : container_1.in_ship)
			{
				obj.set_strength(float{});
			}
		}
		if(!record.ship_org)
		{
			for(auto obj : container_1.in_ship)
			{
				obj.set_org(float{});
			}
		}
		if(!record.ship_experience)
		{
			for(auto obj : container_1.in_ship)
			{
				obj.set_experience(float{});
			}
		}
	}
	if(!record.army)
	{
		container_1.army_resize(0);
	}
	else
	{
		if(!record.army_name)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_name(unit_name_id{});
			}
		}
		if(!record.army_black_flag)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_black_flag(bool{});
			}
		}
		if(!record.army_is_retreating)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_is_retreating(bool{});
			}
		}
		if(!record.army_is_rebel_hunter)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_is_rebel_hunter(bool{});
			}
		}
		if(!record.army_moving_to_merge)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_moving_to_merge(bool{});
			}
		}
		if(!record.army_special_order)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_special_order(uint8_t{});
			}
		}
		if(!record.army_dig_in)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_dig_in(uint8_t{});
			}
		}
		if(!record.army_path)
		{
			for(auto obj : container_1.in_army)
			{
				obj.get_path().clear();
			}
		}
		if(!record.army_arrival_time)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_arrival_time(sys::date{});
			}
		}
		if(!record.army_unused_travel_days)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_unused_travel_days(float{});
			}
		}
		if(!record.army_ai_activity)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_ai_activity(uint8_t{});
			}
		}
		if(!record.army_ai_province)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_ai_province(province_id{});
			}
		}
		if(!record.army_is_ai_controlled)
		{
			for(auto obj : container_1.in_army)
			{
				obj.set_is_ai_controlled(bool{});
			}
		}
	}
	if(!record.army_pursuit)
	{
		container_1.army_pursuit_resize(0);
	}
	else
	{
	}
	if(!record.navy)
	{
		container_1.navy_resize(0);
	}
	else
	{
		if(!record.navy_name)
		{
			for(auto obj : container_1.in_navy)
			{
				obj.set_name(unit_name_id{});
			}
		}
		if(!record.navy_path)
		{
			for(auto obj : container_1.in_navy)
			{
				obj.get_path().clear();
			}
		}
		if(!record.navy_arrival_time)
		{
			for(auto obj : container_1.in_navy)
			{
				obj.set_arrival_time(sys::date{});
			}
		}
		if(!record.navy_unused_travel_days)
		{
			for(auto obj : container_1.in_navy)
			{
				obj.set_unused_travel_days(float{});
			}
		}
		if(!record.navy_months_outside_naval_range)
		{
			for(auto obj : container_1.in_navy)
			{
				obj.set_months_outside_naval_range(uint8_t{});
			}
		}
		if(!record.navy_is_retreating)
		{
			for(auto obj : container_1.in_navy)
			{
				obj.set_is_retreating(bool{});
			}
		}
		if(!record.navy_moving_to_merge)
		{
			for(auto obj : container_1.in_navy)
			{
				obj.set_moving_to_merge(bool{});
			}
		}
		if(!record.navy_ai_activity)
		{
			for(auto obj : container_1.in_navy)
			{
				obj.set_ai_activity(uint8_t{});
			}
		}
	}
	if(!record.army_transport)
	{
		container_1.army_transport_resize(0);
	}
	else
	{
	}
	if(!record.army_control)
	{
		container_1.army_control_resize(0);
	}
	else
	{
	}
	if(!record.army_rebel_control)
	{
		container_1.army_rebel_control_resize(0);
	}
	else
	{
	}
	if(!record.army_location)
	{
		container_1.army_location_resize(0);
	}
	else
	{
	}
	if(!record.army_membership)
	{
		container_1.army_membership_resize(0);
	}
	else
	{
	}
	if(!record.regiment_source)
	{
		container_1.regiment_source_resize(0);
	}
	else
	{
	}
	if(!record.navy_control)
	{
		container_1.navy_control_resize(0);
	}
	else
	{
	}
	if(!record.navy_location)
	{
		container_1.navy_location_resize(0);
	}
	else
	{
	}
	if(!record.navy_membership)
	{
		container_1.navy_membership_resize(0);
	}
	else
	{
	}
	if(!record.naval_battle)
	{
		container_1.naval_battle_resize(0);
	}
	else
	{
		if(!record.naval_battle_start_date)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_start_date(sys::date{});
			}
		}
		if(!record.naval_battle_war_attacker_is_attacker)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_war_attacker_is_attacker(bool{});
			}
		}
		if(!record.naval_battle_dice_rolls)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_dice_rolls(uint8_t{});
			}
		}
		if(!record.naval_battle_attacker_big_ships)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_attacker_big_ships(uint16_t{});
			}
		}
		if(!record.naval_battle_attacker_small_ships)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_attacker_small_ships(uint16_t{});
			}
		}
		if(!record.naval_battle_attacker_transport_ships)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_attacker_transport_ships(uint16_t{});
			}
		}
		if(!record.naval_battle_attacker_big_ships_lost)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_attacker_big_ships_lost(uint16_t{});
			}
		}
		if(!record.naval_battle_attacker_small_ships_lost)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_attacker_small_ships_lost(uint16_t{});
			}
		}
		if(!record.naval_battle_attacker_transport_ships_lost)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_attacker_transport_ships_lost(uint16_t{});
			}
		}
		if(!record.naval_battle_defender_big_ships)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_defender_big_ships(uint16_t{});
			}
		}
		if(!record.naval_battle_defender_small_ships)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_defender_small_ships(uint16_t{});
			}
		}
		if(!record.naval_battle_defender_transport_ships)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_defender_transport_ships(uint16_t{});
			}
		}
		if(!record.naval_battle_defender_big_ships_lost)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_defender_big_ships_lost(uint16_t{});
			}
		}
		if(!record.naval_battle_defender_small_ships_lost)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_defender_small_ships_lost(uint16_t{});
			}
		}
		if(!record.naval_battle_defender_transport_ships_lost)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_defender_transport_ships_lost(uint16_t{});
			}
		}
		if(!record.naval_battle_attacker_loss_value)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_attacker_loss_value(float{});
			}
		}
		if(!record.naval_battle_defender_loss_value)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_defender_loss_value(float{});
			}
		}
		if(!record.naval_battle_avg_distance_from_center_line)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.set_avg_distance_from_center_line(float{});
			}
		}
		if(!record.naval_battle_slots)
		{
			for(auto obj : container_1.in_naval_battle)
			{
				obj.get_slots().clear();
			}
		}
	}
	if(!record.naval_battle_location)
	{
		container_1.naval_battle_location_resize(0);
	}
	else
	{
	}
	if(!record.naval_battle_in_war)
	{
		container_1.naval_battle_in_war_resize(0);
	}
	else
	{
	}
	if(!record.navy_battle_participation)
	{
		container_1.navy_battle_participation_resize(0);
	}
	else
	{
	}
	if(!record.attacking_admiral)
	{
		container_1.attacking_admiral_resize(0);
	}
	else
	{
	}
	if(!record.defending_admiral)
	{
		container_1.defending_admiral_resize(0);
	}
	else
	{
	}
	if(!record.land_battle)
	{
		container_1.land_battle_resize(0);
	}
	else
	{
		if(!record.land_battle_start_date)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_start_date(sys::date{});
			}
		}
		if(!record.land_battle_war_attacker_is_attacker)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_war_attacker_is_attacker(bool{});
			}
		}
		if(!record.land_battle_dice_rolls)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_dice_rolls(uint8_t{});
			}
		}
		if(!record.land_battle_combat_width)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_combat_width(uint8_t{});
			}
		}
		if(!record.land_battle_attacker_infantry)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_attacker_infantry(float{});
			}
		}
		if(!record.land_battle_attacker_cav)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_attacker_cav(float{});
			}
		}
		if(!record.land_battle_attacker_support)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_attacker_support(float{});
			}
		}
		if(!record.land_battle_attacker_infantry_lost)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_attacker_infantry_lost(float{});
			}
		}
		if(!record.land_battle_attacker_cav_lost)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_attacker_cav_lost(float{});
			}
		}
		if(!record.land_battle_attacker_support_lost)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_attacker_support_lost(float{});
			}
		}
		if(!record.land_battle_defender_infantry)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_defender_infantry(float{});
			}
		}
		if(!record.land_battle_defender_cav)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_defender_cav(float{});
			}
		}
		if(!record.land_battle_defender_support)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_defender_support(float{});
			}
		}
		if(!record.land_battle_defender_infantry_lost)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_defender_infantry_lost(float{});
			}
		}
		if(!record.land_battle_defender_cav_lost)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_defender_cav_lost(float{});
			}
		}
		if(!record.land_battle_defender_support_lost)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_defender_support_lost(float{});
			}
		}
		if(!record.land_battle_attacker_back_line)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_attacker_back_line(std::array<military::battle_regiment,military::max_combat_width>{});
			}
		}
		if(!record.land_battle_attacker_front_line)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_attacker_front_line(std::array<military::battle_regiment,military::max_combat_width>{});
			}
		}
		if(!record.land_battle_defender_back_line)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_defender_back_line(std::array<military::battle_regiment,military::max_combat_width>{});
			}
		}
		if(!record.land_battle_defender_front_line)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_defender_front_line(std::array<military::battle_regiment,military::max_combat_width>{});
			}
		}
		if(!record.land_battle_reserves)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.get_reserves().clear();
			}
		}
		if(!record.land_battle_defender_casualties)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_defender_casualties(float{});
			}
		}
		if(!record.land_battle_attacker_casualties)
		{
			for(auto obj : container_1.in_land_battle)
			{
				obj.set_attacker_casualties(float{});
			}
		}
	}
	if(!record.land_battle_location)
	{
		container_1.land_battle_location_resize(0);
	}
	else
	{
	}
	if(!record.land_battle_in_war)
	{
		container_1.land_battle_in_war_resize(0);
	}
	else
	{
	}
	if(!record.army_battle_participation)
	{
		container_1.army_battle_participation_resize(0);
	}
	else
	{
	}
	if(!record.attacking_general)
	{
		container_1.attacking_general_resize(0);
	}
	else
	{
	}
	if(!record.defending_general)
	{
		container_1.defending_general_resize(0);
	}
	else
	{
	}
	if(!record.leader)
	{
		container_1.leader_resize(0);
	}
	else
	{
		if(!record.leader_name)
		{
			for(auto obj : container_1.in_leader)
			{
				obj.set_name(unit_name_id{});
			}
		}
		if(!record.leader_personality)
		{
			for(auto obj : container_1.in_leader)
			{
				obj.set_personality(leader_trait_id{});
			}
		}
		if(!record.leader_background)
		{
			for(auto obj : container_1.in_leader)
			{
				obj.set_background(leader_trait_id{});
			}
		}
		if(!record.leader_since)
		{
			for(auto obj : container_1.in_leader)
			{
				obj.set_since(sys::date{});
			}
		}
		if(!record.leader_prestige)
		{
			for(auto obj : container_1.in_leader)
			{
				obj.set_prestige(float{});
			}
		}
		if(!record.leader_is_admiral)
		{
			for(auto obj : container_1.in_leader)
			{
				obj.set_is_admiral(bool{});
			}
		}
	}
	if(!record.army_leadership)
	{
		container_1.army_leadership_resize(0);
	}
	else
	{
	}
	if(!record.navy_leadership)
	{
		container_1.navy_leadership_resize(0);
	}
	else
	{
	}
	if(!record.leader_loyalty)
	{
		container_1.leader_loyalty_resize(0);
	}
	else
	{
	}
	if(!record.war)
	{
		container_1.war_resize(0);
	}
	else
	{
		if(!record.war_primary_attacker)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_primary_attacker(nation_id{});
			}
		}
		if(!record.war_primary_defender)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_primary_defender(nation_id{});
			}
		}
		if(!record.war_start_date)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_start_date(sys::date{});
			}
		}
		if(!record.war_name)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.war_over_state)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_over_state(state_definition_id{});
			}
		}
		if(!record.war_original_target)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_original_target(nation_id{});
			}
		}
		if(!record.war_original_attacker)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_original_attacker(nation_id{});
			}
		}
		if(!record.war_over_tag)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_over_tag(national_identity_id{});
			}
		}
		if(!record.war_is_great)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_is_great(bool{});
			}
		}
		if(!record.war_is_crisis_war)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_is_crisis_war(bool{});
			}
		}
		if(!record.war_number_of_battles)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_number_of_battles(uint16_t{});
			}
		}
		if(!record.war_attacker_battle_score)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_attacker_battle_score(float{});
			}
		}
		if(!record.war_defender_battle_score)
		{
			for(auto obj : container_1.in_war)
			{
				obj.set_defender_battle_score(float{});
			}
		}
	}
	if(!record.peace_offer)
	{
		container_1.peace_offer_resize(0);
	}
	else
	{
		if(!record.peace_offer_target)
		{
			for(auto obj : container_1.in_peace_offer)
			{
				obj.set_target(nation_id{});
			}
		}
		if(!record.peace_offer_is_concession)
		{
			for(auto obj : container_1.in_peace_offer)
			{
				obj.set_is_concession(bool{});
			}
		}
		if(!record.peace_offer_is_crisis_offer)
		{
			for(auto obj : container_1.in_peace_offer)
			{
				obj.set_is_crisis_offer(bool{});
			}
		}
	}
	if(!record.pending_peace_offer)
	{
		container_1.pending_peace_offer_resize(0);
	}
	else
	{
	}
	if(!record.war_settlement)
	{
		container_1.war_settlement_resize(0);
	}
	else
	{
	}
	if(!record.wargoal)
	{
		container_1.wargoal_resize(0);
	}
	else
	{
		if(!record.wargoal_added_by)
		{
			for(auto obj : container_1.in_wargoal)
			{
				obj.set_added_by(nation_id{});
			}
		}
		if(!record.wargoal_target_nation)
		{
			for(auto obj : container_1.in_wargoal)
			{
				obj.set_target_nation(nation_id{});
			}
		}
		if(!record.wargoal_type)
		{
			for(auto obj : container_1.in_wargoal)
			{
				obj.set_type(cb_type_id{});
			}
		}
		if(!record.wargoal_associated_tag)
		{
			for(auto obj : container_1.in_wargoal)
			{
				obj.set_associated_tag(national_identity_id{});
			}
		}
		if(!record.wargoal_secondary_nation)
		{
			for(auto obj : container_1.in_wargoal)
			{
				obj.set_secondary_nation(nation_id{});
			}
		}
		if(!record.wargoal_associated_state)
		{
			for(auto obj : container_1.in_wargoal)
			{
				obj.set_associated_state(state_definition_id{});
			}
		}
		if(!record.wargoal_ticking_war_score)
		{
			for(auto obj : container_1.in_wargoal)
			{
				obj.set_ticking_war_score(float{});
			}
		}
	}
	if(!record.war_participant)
	{
		container_1.war_participant_resize(0);
	}
	else
	{
		if(!record.war_participant_is_attacker)
		{
			for(auto obj : container_1.in_war_participant)
			{
				obj.set_is_attacker(bool{});
			}
		}
	}
	if(!record.wargoals_attached)
	{
		container_1.wargoals_attached_resize(0);
	}
	else
	{
	}
	if(!record.peace_offer_item)
	{
		container_1.peace_offer_item_resize(0);
	}
	else
	{
	}
	if(!record.state_definition)
	{
		container_1.state_definition_resize(0);
	}
	else
	{
		if(!record.state_definition_name)
		{
			for(auto obj : container_1.in_state_definition)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.state_definition_colonization_temperature)
		{
			for(auto obj : container_1.in_state_definition)
			{
				obj.set_colonization_temperature(float{});
			}
		}
		if(!record.state_definition_colonization_stage)
		{
			for(auto obj : container_1.in_state_definition)
			{
				obj.set_colonization_stage(uint8_t{});
			}
		}
	}
	if(!record.administration)
	{
		container_1.administration_resize(0);
	}
	else
	{
		if(!record.administration_capital)
		{
			for(auto obj : container_1.in_administration)
			{
				obj.set_capital(province_id{});
			}
		}
		if(!record.administration_desired_size)
		{
			for(auto obj : container_1.in_administration)
			{
				obj.set_desired_size(float{});
			}
		}
		if(!record.administration_weight)
		{
			for(auto obj : container_1.in_administration)
			{
				obj.set_weight(float{});
			}
		}
	}
	if(!record.nation_administration)
	{
		container_1.nation_administration_resize(0);
	}
	else
	{
	}
	if(!record.state_instance)
	{
		container_1.state_instance_resize(0);
	}
	else
	{
		if(!record.state_instance_definition)
		{
			for(auto obj : container_1.in_state_instance)
			{
				obj.set_definition(state_definition_id{});
			}
		}
		if(!record.state_instance_flashpoint_tag)
		{
			for(auto obj : container_1.in_state_instance)
			{
				obj.set_flashpoint_tag(national_identity_id{});
			}
		}
		if(!record.state_instance_flashpoint_tension)
		{
			for(auto obj : container_1.in_state_instance)
			{
				obj.set_flashpoint_tension(float{});
			}
		}
		if(!record.state_instance_capital)
		{
			for(auto obj : container_1.in_state_instance)
			{
				obj.set_capital(province_id{});
			}
		}
		if(!record.state_instance_owner_focus)
		{
			for(auto obj : container_1.in_state_instance)
			{
				obj.set_owner_focus(national_focus_id{});
			}
		}
		if(!record.state_instance_demographics)
		{
			for(auto obj : container_1.in_state_instance)
			{
				for(size_t i = 0;i<container_1.state_instance_get_demographics_size();i++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(i)};
					obj.set_demographics(arr_index, float{});
				}
			}
		}
		if(!record.state_instance_demographics_alt)
		{
			for(auto obj : container_1.in_state_instance)
			{
				for(size_t i = 0;i<container_1.state_instance_get_demographics_alt_size();i++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(i)};
					obj.set_demographics_alt(arr_index, float{});
				}
			}
		}
		if(!record.state_instance_dominant_culture)
		{
			for(auto obj : container_1.in_state_instance)
			{
				obj.set_dominant_culture(culture_id{});
			}
		}
		if(!record.state_instance_dominant_religion)
		{
			for(auto obj : container_1.in_state_instance)
			{
				obj.set_dominant_religion(religion_id{});
			}
		}
		if(!record.state_instance_dominant_ideology)
		{
			for(auto obj : container_1.in_state_instance)
			{
				obj.set_dominant_ideology(ideology_id{});
			}
		}
		if(!record.state_instance_dominant_issue_option)
		{
			for(auto obj : container_1.in_state_instance)
			{
				obj.set_dominant_issue_option(issue_option_id{});
			}
		}
		if(!record.state_instance_naval_base_is_taken)
		{
			for(auto obj : container_1.in_state_instance)
			{
				obj.set_naval_base_is_taken(bool{});
			}
		}
		if(!record.state_instance_production_directive)
		{
			for(auto obj : container_1.in_state_instance)
			{
				for(size_t i = 0;i<container_1.state_instance_get_production_directive_size();i++)
				{
					dcon::production_directive_id arr_index{dcon::production_directive_id::value_base_t(i)};
					obj.set_production_directive(arr_index, bool{});
				}
			}
		}
	}
	if(!record.colonization)
	{
		container_1.colonization_resize(0);
	}
	else
	{
		if(!record.colonization_last_investment)
		{
			for(auto obj : container_1.in_colonization)
			{
				obj.set_last_investment(sys::date{});
			}
		}
		if(!record.colonization_points_invested)
		{
			for(auto obj : container_1.in_colonization)
			{
				obj.set_points_invested(uint16_t{});
			}
		}
		if(!record.colonization_level)
		{
			for(auto obj : container_1.in_colonization)
			{
				obj.set_level(uint8_t{});
			}
		}
	}
	if(!record.state_ownership)
	{
		container_1.state_ownership_resize(0);
	}
	else
	{
	}
	if(!record.flashpoint_focus)
	{
		container_1.flashpoint_focus_resize(0);
	}
	else
	{
	}
	if(!record.abstract_state_membership)
	{
		container_1.abstract_state_membership_resize(0);
	}
	else
	{
		if(!record.abstract_state_membership_priority)
		{
			for(auto obj : container_1.in_abstract_state_membership)
			{
				obj.set_priority(int16_t{});
			}
		}
	}
	if(!record.region)
	{
		container_1.region_resize(0);
	}
	else
	{
		if(!record.region_name)
		{
			for(auto obj : container_1.in_region)
			{
				obj.set_name(text_key{});
			}
		}
	}
	if(!record.region_membership)
	{
		container_1.region_membership_resize(0);
	}
	else
	{
	}
	if(!record.core)
	{
		container_1.core_resize(0);
	}
	else
	{
	}
	if(!record.identity_holder)
	{
		container_1.identity_holder_resize(0);
	}
	else
	{
	}
	if(!record.technology)
	{
		container_1.technology_resize(0);
	}
	else
	{
		if(!record.technology_name)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.technology_desc)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_desc(text_key{});
			}
		}
		if(!record.technology_modifier)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_modifier(modifier_id{});
			}
		}
		if(!record.technology_plurality)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_plurality(float{});
			}
		}
		if(!record.technology_image)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_image(dcon::gfx_object_id{});
			}
		}
		if(!record.technology_folder_index)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_folder_index(uint8_t{});
			}
		}
		if(!record.technology_year)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_year(int16_t{});
			}
		}
		if(!record.technology_ai_chance)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_ai_chance(value_modifier_key{});
			}
		}
		if(!record.technology_ai_weight)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_ai_weight(float{});
			}
		}
		if(!record.technology_cost)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_cost(int32_t{});
			}
		}
		if(!record.technology_leadership_cost)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_leadership_cost(int32_t{});
			}
		}
		if(!record.technology_colonial_points)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.set_colonial_points(int16_t{});
			}
		}
		if(!record.technology_increase_building)
		{
			for(auto obj : container_1.in_technology)
			{
				for(size_t i = 0;i<container_1.technology_get_increase_building_size();i++)
				{
					auto arr_index = economy::province_building_type(i);
					obj.set_increase_building(arr_index, bool{});
				}
			}
		}
		if(!record.technology_activate_unit)
		{
			for(auto obj : container_1.in_technology)
			{
				for(size_t i = 0;i<container_1.technology_get_activate_unit_size();i++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(i)};
					obj.set_activate_unit(arr_index, bool{});
				}
			}
		}
		if(!record.technology_activate_building)
		{
			for(auto obj : container_1.in_technology)
			{
				for(size_t i = 0;i<container_1.technology_get_activate_building_size();i++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(i)};
					obj.set_activate_building(arr_index, bool{});
				}
			}
		}
		if(!record.technology_rgo_goods_output)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.get_rgo_goods_output().clear();
			}
		}
		if(!record.technology_factory_goods_output)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.get_factory_goods_output().clear();
			}
		}
		if(!record.technology_rgo_size)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.get_rgo_size().clear();
			}
		}
		if(!record.technology_modified_units)
		{
			for(auto obj : container_1.in_technology)
			{
				obj.get_modified_units().clear();
			}
		}
	}
	if(!record.invention)
	{
		container_1.invention_resize(0);
	}
	else
	{
		if(!record.invention_name)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.invention_desc)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.set_desc(text_key{});
			}
		}
		if(!record.invention_technology_type)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.set_technology_type(uint8_t{});
			}
		}
		if(!record.invention_colonial_points)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.set_colonial_points(int16_t{});
			}
		}
		if(!record.invention_increase_building)
		{
			for(auto obj : container_1.in_invention)
			{
				for(size_t i = 0;i<container_1.invention_get_increase_building_size();i++)
				{
					auto arr_index = economy::province_building_type(i);
					obj.set_increase_building(arr_index, bool{});
				}
			}
		}
		if(!record.invention_modifier)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.set_modifier(modifier_id{});
			}
		}
		if(!record.invention_chance)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.set_chance(value_modifier_key{});
			}
		}
		if(!record.invention_limit)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.set_limit(trigger_key{});
			}
		}
		if(!record.invention_enable_gas_attack)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.set_enable_gas_attack(bool{});
			}
		}
		if(!record.invention_enable_gas_defense)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.set_enable_gas_defense(bool{});
			}
		}
		if(!record.invention_shared_prestige)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.set_shared_prestige(float{});
			}
		}
		if(!record.invention_plurality)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.set_plurality(float{});
			}
		}
		if(!record.invention_activate_unit)
		{
			for(auto obj : container_1.in_invention)
			{
				for(size_t i = 0;i<container_1.invention_get_activate_unit_size();i++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(i)};
					obj.set_activate_unit(arr_index, bool{});
				}
			}
		}
		if(!record.invention_activate_crime)
		{
			for(auto obj : container_1.in_invention)
			{
				for(size_t i = 0;i<container_1.invention_get_activate_crime_size();i++)
				{
					dcon::crime_id arr_index{dcon::crime_id::value_base_t(i)};
					obj.set_activate_crime(arr_index, bool{});
				}
			}
		}
		if(!record.invention_activate_building)
		{
			for(auto obj : container_1.in_invention)
			{
				for(size_t i = 0;i<container_1.invention_get_activate_building_size();i++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(i)};
					obj.set_activate_building(arr_index, bool{});
				}
			}
		}
		if(!record.invention_rgo_goods_output)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.get_rgo_goods_output().clear();
			}
		}
		if(!record.invention_rgo_size)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.get_rgo_size().clear();
			}
		}
		if(!record.invention_factory_goods_output)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.get_factory_goods_output().clear();
			}
		}
		if(!record.invention_factory_goods_throughput)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.get_factory_goods_throughput().clear();
			}
		}
		if(!record.invention_modified_units)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.get_modified_units().clear();
			}
		}
		if(!record.invention_rebel_org)
		{
			for(auto obj : container_1.in_invention)
			{
				obj.get_rebel_org().clear();
			}
		}
	}
	if(!record.nation)
	{
		container_1.nation_resize(0);
	}
	else
	{
		if(!record.nation_color)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_color(uint32_t{});
			}
		}
		if(!record.nation_masquerade_identity)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_masquerade_identity(national_identity_id{});
			}
		}
		if(!record.nation_primary_culture)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_primary_culture(culture_id{});
			}
		}
		if(!record.nation_accepted_cultures)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_accepted_cultures_size();i++)
				{
					dcon::culture_id arr_index{dcon::culture_id::value_base_t(i)};
					obj.set_accepted_cultures(arr_index, bool{});
				}
			}
		}
		if(!record.nation_religion)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_religion(religion_id{});
			}
		}
		if(!record.nation_capital)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_capital(province_id{});
			}
		}
		if(!record.nation_is_civilized)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_is_civilized(bool{});
			}
		}
		if(!record.nation_marked_for_gc)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_marked_for_gc(bool{});
			}
		}
		if(!record.nation_is_great_power)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_is_great_power(bool{});
			}
		}
		if(!record.nation_national_value)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_national_value(modifier_id{});
			}
		}
		if(!record.nation_tech_school)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_tech_school(modifier_id{});
			}
		}
		if(!record.nation_government_type)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_government_type(government_type_id{});
			}
		}
		if(!record.nation_plurality)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_plurality(float{});
			}
		}
		if(!record.nation_prestige)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_prestige(float{});
			}
		}
		if(!record.nation_infamy)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_infamy(float{});
			}
		}
		if(!record.nation_revanchism)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_revanchism(float{});
			}
		}
		if(!record.nation_permanent_colonial_points)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_permanent_colonial_points(int16_t{});
			}
		}
		if(!record.nation_active_technologies)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_active_technologies_size();i++)
				{
					dcon::technology_id arr_index{dcon::technology_id::value_base_t(i)};
					obj.set_active_technologies(arr_index, bool{});
				}
			}
		}
		if(!record.nation_active_inventions)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_active_inventions_size();i++)
				{
					dcon::invention_id arr_index{dcon::invention_id::value_base_t(i)};
					obj.set_active_inventions(arr_index, bool{});
				}
			}
		}
		if(!record.nation_ruling_party)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_ruling_party(political_party_id{});
			}
		}
		if(!record.nation_ruling_party_last_appointed)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_ruling_party_last_appointed(sys::date{});
			}
		}
		if(!record.nation_issues)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_issues_size();i++)
				{
					dcon::issue_id arr_index{dcon::issue_id::value_base_t(i)};
					obj.set_issues(arr_index, issue_option_id{});
				}
			}
		}
		if(!record.nation_reforms)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_reforms_size();i++)
				{
					dcon::reform_id arr_index{dcon::reform_id::value_base_t(i)};
					obj.set_reforms(arr_index, reform_option_id{});
				}
			}
		}
		if(!record.nation_last_issue_or_reform_change)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_last_issue_or_reform_change(sys::date{});
			}
		}
		if(!record.nation_combined_issue_rules)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_combined_issue_rules(uint32_t{});
			}
		}
		if(!record.nation_upper_house)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_upper_house_size();i++)
				{
					dcon::ideology_id arr_index{dcon::ideology_id::value_base_t(i)};
					obj.set_upper_house(arr_index, float{});
				}
			}
		}
		if(!record.nation_is_substate)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_is_substate(bool{});
			}
		}
		if(!record.nation_flag_variables)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_flag_variables_size();i++)
				{
					dcon::national_flag_id arr_index{dcon::national_flag_id::value_base_t(i)};
					obj.set_flag_variables(arr_index, bool{});
				}
			}
		}
		if(!record.nation_variables)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_variables_size();i++)
				{
					dcon::national_variable_id arr_index{dcon::national_variable_id::value_base_t(i)};
					obj.set_variables(arr_index, float{});
				}
			}
		}
		if(!record.nation_modifier_values)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_modifier_values_size();i++)
				{
					dcon::national_modifier_value arr_index{dcon::national_modifier_value::value_base_t(i)};
					obj.set_modifier_values(arr_index, float{});
				}
			}
		}
		if(!record.nation_rgo_goods_output)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_rgo_goods_output_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_rgo_goods_output(arr_index, float{});
				}
			}
		}
		if(!record.nation_factory_goods_output)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_factory_goods_output_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_factory_goods_output(arr_index, float{});
				}
			}
		}
		if(!record.nation_rgo_size)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_rgo_size_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_rgo_size(arr_index, float{});
				}
			}
		}
		if(!record.nation_factory_goods_throughput)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_factory_goods_throughput_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_factory_goods_throughput(arr_index, float{});
				}
			}
		}
		if(!record.nation_rebel_org_modifier)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_rebel_org_modifier_size();i++)
				{
					dcon::rebel_type_id arr_index{dcon::rebel_type_id::value_base_t(i)};
					obj.set_rebel_org_modifier(arr_index, float{});
				}
			}
		}
		if(!record.nation_unit_stats)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_unit_stats_size();i++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(i)};
					obj.set_unit_stats(arr_index, sys::unit_variable_stats{});
				}
			}
		}
		if(!record.nation_active_unit)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_active_unit_size();i++)
				{
					dcon::unit_type_id arr_index{dcon::unit_type_id::value_base_t(i)};
					obj.set_active_unit(arr_index, bool{});
				}
			}
		}
		if(!record.nation_active_crime)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_active_crime_size();i++)
				{
					dcon::crime_id arr_index{dcon::crime_id::value_base_t(i)};
					obj.set_active_crime(arr_index, bool{});
				}
			}
		}
		if(!record.nation_active_building)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_active_building_size();i++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(i)};
					obj.set_active_building(arr_index, bool{});
				}
			}
		}
		if(!record.nation_unlocked_commodities)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_unlocked_commodities_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_unlocked_commodities(arr_index, bool{});
				}
			}
		}
		if(!record.nation_factory_type_experience)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_factory_type_experience_size();i++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(i)};
					obj.set_factory_type_experience(arr_index, float{});
				}
			}
		}
		if(!record.nation_factory_type_experience_priority_national)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_factory_type_experience_priority_national_size();i++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(i)};
					obj.set_factory_type_experience_priority_national(arr_index, float{});
				}
			}
		}
		if(!record.nation_factory_type_experience_priority_private)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_factory_type_experience_priority_private_size();i++)
				{
					dcon::factory_type_id arr_index{dcon::factory_type_id::value_base_t(i)};
					obj.set_factory_type_experience_priority_private(arr_index, float{});
				}
			}
		}
		if(!record.nation_has_gas_attack)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_has_gas_attack(bool{});
			}
		}
		if(!record.nation_has_gas_defense)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_has_gas_defense(bool{});
			}
		}
		if(!record.nation_max_building_level)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_max_building_level_size();i++)
				{
					auto arr_index = uint8_t(i);
					obj.set_max_building_level(arr_index, uint8_t{});
				}
			}
		}
		if(!record.nation_current_modifiers)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.get_current_modifiers().clear();
			}
		}
		if(!record.nation_in_sphere_of)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_in_sphere_of(nation_id{});
			}
		}
		if(!record.nation_rank)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_rank(uint16_t{});
			}
		}
		if(!record.nation_industrial_rank)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_industrial_rank(uint16_t{});
			}
		}
		if(!record.nation_military_rank)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_military_rank(uint16_t{});
			}
		}
		if(!record.nation_prestige_rank)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_prestige_rank(uint16_t{});
			}
		}
		if(!record.nation_demographics)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_demographics_size();i++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(i)};
					obj.set_demographics(arr_index, float{});
				}
			}
		}
		if(!record.nation_demographics_alt)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_demographics_alt_size();i++)
				{
					dcon::demographics_key arr_index{dcon::demographics_key::value_base_t(i)};
					obj.set_demographics_alt(arr_index, float{});
				}
			}
		}
		if(!record.nation_war_exhaustion)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_war_exhaustion(float{});
			}
		}
		if(!record.nation_is_at_war)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_is_at_war(bool{});
			}
		}
		if(!record.nation_is_mobilized)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_is_mobilized(bool{});
			}
		}
		if(!record.nation_mobilization_remaining)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_mobilization_remaining(uint16_t{});
			}
		}
		if(!record.nation_mobilization_schedule)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.get_mobilization_schedule().clear();
			}
		}
		if(!record.nation_is_bankrupt)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_is_bankrupt(bool{});
			}
		}
		if(!record.nation_last_war_loss)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_last_war_loss(sys::date{});
			}
		}
		if(!record.nation_election_ends)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_election_ends(sys::date{});
			}
		}
		if(!record.nation_disarmed_until)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_disarmed_until(sys::date{});
			}
		}
		if(!record.nation_reparations_until)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_reparations_until(sys::date{});
			}
		}
		if(!record.nation_education_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_education_spending(int8_t{});
			}
		}
		if(!record.nation_military_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_military_spending(int8_t{});
			}
		}
		if(!record.nation_administrative_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_administrative_spending(int8_t{});
			}
		}
		if(!record.nation_administration_employment_target_in_capital)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_administration_employment_target_in_capital(float{});
			}
		}
		if(!record.nation_social_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_social_spending(int8_t{});
			}
		}
		if(!record.nation_domestic_investment_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_domestic_investment_spending(int8_t{});
			}
		}
		if(!record.nation_overseas_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_overseas_spending(int8_t{});
			}
		}
		if(!record.nation_land_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_land_spending(int8_t{});
			}
		}
		if(!record.nation_naval_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_naval_spending(int8_t{});
			}
		}
		if(!record.nation_construction_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_construction_spending(int8_t{});
			}
		}
		if(!record.nation_land_reinforcement_buffer)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_land_reinforcement_buffer(float{});
			}
		}
		if(!record.nation_naval_reinforcement_buffer)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_naval_reinforcement_buffer(float{});
			}
		}
		if(!record.nation_effective_land_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_effective_land_spending(float{});
			}
		}
		if(!record.nation_effective_naval_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_effective_naval_spending(float{});
			}
		}
		if(!record.nation_effective_construction_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_effective_construction_spending(float{});
			}
		}
		if(!record.nation_maximum_military_costs)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_maximum_military_costs(float{});
			}
		}
		if(!record.nation_subsidy_token_price)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_subsidy_token_price(float{});
			}
		}
		if(!record.nation_subsidy_token_total)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_subsidy_token_total(float{});
			}
		}
		if(!record.nation_subsidies_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_subsidies_spending(int8_t{});
			}
		}
		if(!record.nation_spending_level)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_spending_level(float{});
			}
		}
		if(!record.nation_last_base_budget)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_last_base_budget(float{});
			}
		}
		if(!record.nation_private_investment)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_private_investment(float{});
			}
		}
		if(!record.nation_private_investment_effective_fraction)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_private_investment_effective_fraction(float{});
			}
		}
		if(!record.nation_total_rich_income)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_total_rich_income(float{});
			}
		}
		if(!record.nation_total_middle_income)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_total_middle_income(float{});
			}
		}
		if(!record.nation_total_poor_income)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_total_poor_income(float{});
			}
		}
		if(!record.nation_poor_tax)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_poor_tax(int8_t{});
			}
		}
		if(!record.nation_middle_tax)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_middle_tax(int8_t{});
			}
		}
		if(!record.nation_rich_tax)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_rich_tax(int8_t{});
			}
		}
		if(!record.nation_tariffs_import)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_tariffs_import(int8_t{});
			}
		}
		if(!record.nation_tariffs_export)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_tariffs_export(int8_t{});
			}
		}
		if(!record.nation_last_treasury)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_last_treasury(float{});
			}
		}
		if(!record.nation_industrial_score)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_industrial_score(uint16_t{});
			}
		}
		if(!record.nation_military_score)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_military_score(uint16_t{});
			}
		}
		if(!record.nation_central_blockaded)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_central_blockaded(uint16_t{});
			}
		}
		if(!record.nation_central_rebel_controlled)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_central_rebel_controlled(uint16_t{});
			}
		}
		if(!record.nation_owned_province_count)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_owned_province_count(uint16_t{});
			}
		}
		if(!record.nation_owned_state_count)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_owned_state_count(uint16_t{});
			}
		}
		if(!record.nation_central_province_count)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_central_province_count(uint16_t{});
			}
		}
		if(!record.nation_rebel_controlled_count)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_rebel_controlled_count(uint16_t{});
			}
		}
		if(!record.nation_occupied_count)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_occupied_count(uint16_t{});
			}
		}
		if(!record.nation_central_ports)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_central_ports(uint16_t{});
			}
		}
		if(!record.nation_total_ports)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_total_ports(uint16_t{});
			}
		}
		if(!record.nation_central_crime_count)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_central_crime_count(uint16_t{});
			}
		}
		if(!record.nation_allies_count)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_allies_count(uint16_t{});
			}
		}
		if(!record.nation_vassals_count)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_vassals_count(uint16_t{});
			}
		}
		if(!record.nation_substates_count)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_substates_count(uint16_t{});
			}
		}
		if(!record.nation_gdp)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_gdp(float{});
			}
		}
		if(!record.nation_gdp_record)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_gdp_record_size();i++)
				{
					auto arr_index = int32_t(i);
					obj.set_gdp_record(arr_index, float{});
				}
			}
		}
		if(!record.nation_stockpiles)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_stockpiles_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_stockpiles(arr_index, float{});
				}
			}
		}
		if(!record.nation_national_bank)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_national_bank(float{});
			}
		}
		if(!record.nation_local_loan)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_local_loan(float{});
			}
		}
		if(!record.nation_stockpile_targets)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_stockpile_targets_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_stockpile_targets(arr_index, float{});
				}
			}
		}
		if(!record.nation_drawing_on_stockpiles)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_drawing_on_stockpiles_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_drawing_on_stockpiles(arr_index, bool{});
				}
			}
		}
		if(!record.nation_overseas_penalty)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_overseas_penalty(float{});
			}
		}
		if(!record.nation_is_player_controlled)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_is_player_controlled(bool{});
			}
		}
		if(!record.nation_is_debt_spending)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_is_debt_spending(bool{});
			}
		}
		if(!record.nation_bankrupt_until)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_bankrupt_until(sys::date{});
			}
		}
		if(!record.nation_is_colonial_nation)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_is_colonial_nation(bool{});
			}
		}
		if(!record.nation_dominant_culture)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_dominant_culture(culture_id{});
			}
		}
		if(!record.nation_dominant_religion)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_dominant_religion(religion_id{});
			}
		}
		if(!record.nation_dominant_ideology)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_dominant_ideology(ideology_id{});
			}
		}
		if(!record.nation_dominant_issue_option)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_dominant_issue_option(issue_option_id{});
			}
		}
		if(!record.nation_constructing_cb_target)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_constructing_cb_target(nation_id{});
			}
		}
		if(!record.nation_constructing_cb_target_state)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_constructing_cb_target_state(state_definition_id{});
			}
		}
		if(!record.nation_constructing_cb_progress)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_constructing_cb_progress(float{});
			}
		}
		if(!record.nation_constructing_cb_type)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_constructing_cb_type(cb_type_id{});
			}
		}
		if(!record.nation_constructing_cb_is_discovered)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_constructing_cb_is_discovered(bool{});
			}
		}
		if(!record.nation_available_cbs)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.get_available_cbs().clear();
			}
		}
		if(!record.nation_non_colonial_population)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_non_colonial_population(float{});
			}
		}
		if(!record.nation_non_colonial_bureaucrats)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_non_colonial_bureaucrats(float{});
			}
		}
		if(!record.nation_administrative_efficiency)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_administrative_efficiency(float{});
			}
		}
		if(!record.nation_research_points)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_research_points(float{});
			}
		}
		if(!record.nation_current_research)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_current_research(technology_id{});
			}
		}
		if(!record.nation_active_regiments)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_active_regiments(uint16_t{});
			}
		}
		if(!record.nation_recruitable_regiments)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_recruitable_regiments(uint16_t{});
			}
		}
		if(!record.nation_overlord_commanding_units)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_overlord_commanding_units(bool{});
			}
		}
		if(!record.nation_averge_land_unit_score)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_averge_land_unit_score(float{});
			}
		}
		if(!record.nation_capital_ship_score)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_capital_ship_score(float{});
			}
		}
		if(!record.nation_suppression_points)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_suppression_points(float{});
			}
		}
		if(!record.nation_diplomatic_points)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_diplomatic_points(float{});
			}
		}
		if(!record.nation_leadership_points)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_leadership_points(float{});
			}
		}
		if(!record.nation_naval_supply_points)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_naval_supply_points(uint16_t{});
			}
		}
		if(!record.nation_used_naval_supply_points)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_used_naval_supply_points(uint16_t{});
			}
		}
		if(!record.nation_has_flash_point_state)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_has_flash_point_state(bool{});
			}
		}
		if(!record.nation_is_target_of_some_cb)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_is_target_of_some_cb(bool{});
			}
		}
		if(!record.nation_is_interesting)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_is_interesting(bool{});
			}
		}
		if(!record.nation_ai_is_threatened)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_ai_is_threatened(bool{});
			}
		}
		if(!record.nation_ai_rival)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_ai_rival(nation_id{});
			}
		}
		if(!record.nation_ai_home_port)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_ai_home_port(province_id{});
			}
		}
		if(!record.nation_mobilized_is_ai_controlled)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_mobilized_is_ai_controlled(bool{});
			}
		}
		if(!record.nation_ai_strategy)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_ai_strategy(int{});
			}
		}
		if(!record.nation_utility_tag)
		{
			for(auto obj : container_1.in_nation)
			{
				obj.set_utility_tag(bool{});
			}
		}
		if(!record.nation_production_directive)
		{
			for(auto obj : container_1.in_nation)
			{
				for(size_t i = 0;i<container_1.nation_get_production_directive_size();i++)
				{
					dcon::production_directive_id arr_index{dcon::production_directive_id::value_base_t(i)};
					obj.set_production_directive(arr_index, bool{});
				}
			}
		}
	}
	if(!record.market)
	{
		container_1.market_resize(0);
	}
	else
	{
		if(!record.market_gdp)
		{
			for(auto obj : container_1.in_market)
			{
				obj.set_gdp(float{});
			}
		}
		if(!record.market_income_scale)
		{
			for(auto obj : container_1.in_market)
			{
				obj.set_income_scale(float{});
			}
		}
		if(!record.market_supply)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_supply_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_supply(arr_index, float{});
				}
			}
		}
		if(!record.market_demand)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_demand_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_demand(arr_index, float{});
				}
			}
		}
		if(!record.market_intermediate_demand)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_intermediate_demand_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_intermediate_demand(arr_index, float{});
				}
			}
		}
		if(!record.market_consumption)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_consumption_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_consumption(arr_index, float{});
				}
			}
		}
		if(!record.market_stockpile)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_stockpile_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_stockpile(arr_index, float{});
				}
			}
		}
		if(!record.market_wealth)
		{
			for(auto obj : container_1.in_market)
			{
				obj.set_wealth(float{});
			}
		}
		if(!record.market_price)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_price_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_price(arr_index, float{});
				}
			}
		}
		if(!record.market_army_demand)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_army_demand_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_army_demand(arr_index, float{});
				}
			}
		}
		if(!record.market_navy_demand)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_navy_demand_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_navy_demand(arr_index, float{});
				}
			}
		}
		if(!record.market_construction_demand)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_construction_demand_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_construction_demand(arr_index, float{});
				}
			}
		}
		if(!record.market_private_construction_demand)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_private_construction_demand_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_private_construction_demand(arr_index, float{});
				}
			}
		}
		if(!record.market_aggregated_demand_history)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_aggregated_demand_history_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_aggregated_demand_history(arr_index, float{});
				}
			}
		}
		if(!record.market_aggregated_supply_history)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_aggregated_supply_history_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_aggregated_supply_history(arr_index, float{});
				}
			}
		}
		if(!record.market_expected_probability_to_buy)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_expected_probability_to_buy_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_expected_probability_to_buy(arr_index, float{});
				}
			}
		}
		if(!record.market_actual_probability_to_buy)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_actual_probability_to_buy_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_actual_probability_to_buy(arr_index, float{});
				}
			}
		}
		if(!record.market_expected_probability_to_sell)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_expected_probability_to_sell_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_expected_probability_to_sell(arr_index, float{});
				}
			}
		}
		if(!record.market_actual_probability_to_sell)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_actual_probability_to_sell_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_actual_probability_to_sell(arr_index, float{});
				}
			}
		}
		if(!record.market_life_needs_costs)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_life_needs_costs_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_life_needs_costs(arr_index, float{});
				}
			}
		}
		if(!record.market_everyday_needs_costs)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_everyday_needs_costs_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_everyday_needs_costs(arr_index, float{});
				}
			}
		}
		if(!record.market_luxury_needs_costs)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_luxury_needs_costs_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_luxury_needs_costs(arr_index, float{});
				}
			}
		}
		if(!record.market_life_needs_scale)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_life_needs_scale_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_life_needs_scale(arr_index, float{});
				}
			}
		}
		if(!record.market_everyday_needs_scale)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_everyday_needs_scale_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_everyday_needs_scale(arr_index, float{});
				}
			}
		}
		if(!record.market_luxury_needs_scale)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_luxury_needs_scale_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_luxury_needs_scale(arr_index, float{});
				}
			}
		}
		if(!record.market_satisfied_ratio_of_max_life_needs)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_satisfied_ratio_of_max_life_needs_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_satisfied_ratio_of_max_life_needs(arr_index, float{});
				}
			}
		}
		if(!record.market_satisfied_ratio_of_max_everyday_needs)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_satisfied_ratio_of_max_everyday_needs_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_satisfied_ratio_of_max_everyday_needs(arr_index, float{});
				}
			}
		}
		if(!record.market_satisfied_ratio_of_max_luxury_needs)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_satisfied_ratio_of_max_luxury_needs_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_satisfied_ratio_of_max_luxury_needs(arr_index, float{});
				}
			}
		}
		if(!record.market_satisfied_ratio_of_demanded_life_needs)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_satisfied_ratio_of_demanded_life_needs_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_satisfied_ratio_of_demanded_life_needs(arr_index, float{});
				}
			}
		}
		if(!record.market_satisfied_ratio_of_demanded_everyday_needs)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_satisfied_ratio_of_demanded_everyday_needs_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_satisfied_ratio_of_demanded_everyday_needs(arr_index, float{});
				}
			}
		}
		if(!record.market_satisfied_ratio_of_demanded_luxury_needs)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_satisfied_ratio_of_demanded_luxury_needs_size();i++)
				{
					dcon::pop_type_id arr_index{dcon::pop_type_id::value_base_t(i)};
					obj.set_satisfied_ratio_of_demanded_luxury_needs(arr_index, float{});
				}
			}
		}
		if(!record.market_life_needs_weights)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_life_needs_weights_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_life_needs_weights(arr_index, float{});
				}
			}
		}
		if(!record.market_everyday_needs_weights)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_everyday_needs_weights_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_everyday_needs_weights(arr_index, float{});
				}
			}
		}
		if(!record.market_luxury_needs_weights)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_luxury_needs_weights_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_luxury_needs_weights(arr_index, float{});
				}
			}
		}
		if(!record.market_import)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_import_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_import(arr_index, float{});
				}
			}
		}
		if(!record.market_export)
		{
			for(auto obj : container_1.in_market)
			{
				for(size_t i = 0;i<container_1.market_get_export_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_export(arr_index, float{});
				}
			}
		}
		if(!record.market_tariff_collected)
		{
			for(auto obj : container_1.in_market)
			{
				obj.set_tariff_collected(float{});
			}
		}
		if(!record.market_max_throughput)
		{
			for(auto obj : container_1.in_market)
			{
				obj.set_max_throughput(float{});
			}
		}
	}
	if(!record.local_market)
	{
		container_1.local_market_resize(0);
	}
	else
	{
	}
	if(!record.trade_route)
	{
		container_1.trade_route_resize(0);
	}
	else
	{
		if(!record.trade_route_distance)
		{
			for(auto obj : container_1.in_trade_route)
			{
				obj.set_distance(float{});
			}
		}
		if(!record.trade_route_sea_distance)
		{
			for(auto obj : container_1.in_trade_route)
			{
				obj.set_sea_distance(float{});
			}
		}
		if(!record.trade_route_land_distance)
		{
			for(auto obj : container_1.in_trade_route)
			{
				obj.set_land_distance(float{});
			}
		}
		if(!record.trade_route_is_sea_route)
		{
			for(auto obj : container_1.in_trade_route)
			{
				obj.set_is_sea_route(bool{});
			}
		}
		if(!record.trade_route_is_land_route)
		{
			for(auto obj : container_1.in_trade_route)
			{
				obj.set_is_land_route(bool{});
			}
		}
		if(!record.trade_route_is_trade_forbidden)
		{
			for(auto obj : container_1.in_trade_route)
			{
				obj.set_is_trade_forbidden(bool{});
			}
		}
		if(!record.trade_route_is_tariff_applied_0)
		{
			for(auto obj : container_1.in_trade_route)
			{
				obj.set_is_tariff_applied_0(bool{});
			}
		}
		if(!record.trade_route_is_tariff_applied_1)
		{
			for(auto obj : container_1.in_trade_route)
			{
				obj.set_is_tariff_applied_1(bool{});
			}
		}
		if(!record.trade_route_volume)
		{
			for(auto obj : container_1.in_trade_route)
			{
				for(size_t i = 0;i<container_1.trade_route_get_volume_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_volume(arr_index, float{});
				}
			}
		}
		if(!record.trade_route_stabilization_volume)
		{
			for(auto obj : container_1.in_trade_route)
			{
				for(size_t i = 0;i<container_1.trade_route_get_stabilization_volume_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_stabilization_volume(arr_index, float{});
				}
			}
		}
	}
	if(!record.diplomatic_relation)
	{
		container_1.diplomatic_relation_resize(0);
	}
	else
	{
		if(!record.diplomatic_relation_value)
		{
			for(auto obj : container_1.in_diplomatic_relation)
			{
				obj.set_value(float{});
			}
		}
		if(!record.diplomatic_relation_are_allied)
		{
			for(auto obj : container_1.in_diplomatic_relation)
			{
				obj.set_are_allied(bool{});
			}
		}
		if(!record.diplomatic_relation_truce_until)
		{
			for(auto obj : container_1.in_diplomatic_relation)
			{
				obj.set_truce_until(sys::date{});
			}
		}
	}
	if(!record.unilateral_relationship)
	{
		container_1.unilateral_relationship_resize(0);
	}
	else
	{
		if(!record.unilateral_relationship_foreign_investment)
		{
			for(auto obj : container_1.in_unilateral_relationship)
			{
				obj.set_foreign_investment(float{});
			}
		}
		if(!record.unilateral_relationship_owns_debt_of)
		{
			for(auto obj : container_1.in_unilateral_relationship)
			{
				obj.set_owns_debt_of(float{});
			}
		}
		if(!record.unilateral_relationship_military_access)
		{
			for(auto obj : container_1.in_unilateral_relationship)
			{
				obj.set_military_access(bool{});
			}
		}
		if(!record.unilateral_relationship_war_subsidies)
		{
			for(auto obj : container_1.in_unilateral_relationship)
			{
				obj.set_war_subsidies(bool{});
			}
		}
		if(!record.unilateral_relationship_reparations)
		{
			for(auto obj : container_1.in_unilateral_relationship)
			{
				obj.set_reparations(bool{});
			}
		}
		if(!record.unilateral_relationship_interested_in_alliance)
		{
			for(auto obj : container_1.in_unilateral_relationship)
			{
				obj.set_interested_in_alliance(bool{});
			}
		}
		if(!record.unilateral_relationship_no_tariffs_until)
		{
			for(auto obj : container_1.in_unilateral_relationship)
			{
				obj.set_no_tariffs_until(sys::date{});
			}
		}
		if(!record.unilateral_relationship_embargo)
		{
			for(auto obj : container_1.in_unilateral_relationship)
			{
				obj.set_embargo(bool{});
			}
		}
	}
	if(!record.gp_relationship)
	{
		container_1.gp_relationship_resize(0);
	}
	else
	{
		if(!record.gp_relationship_influence)
		{
			for(auto obj : container_1.in_gp_relationship)
			{
				obj.set_influence(float{});
			}
		}
		if(!record.gp_relationship_status)
		{
			for(auto obj : container_1.in_gp_relationship)
			{
				obj.set_status(uint8_t{});
			}
		}
		if(!record.gp_relationship_penalty_expires_date)
		{
			for(auto obj : container_1.in_gp_relationship)
			{
				obj.set_penalty_expires_date(sys::date{});
			}
		}
	}
	if(!record.factory)
	{
		container_1.factory_resize(0);
	}
	else
	{
		if(!record.factory_building_type)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_building_type(factory_type_id{});
			}
		}
		if(!record.factory_priority_low)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_priority_low(bool{});
			}
		}
		if(!record.factory_priority_high)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_priority_high(bool{});
			}
		}
		if(!record.factory_subsidized)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_subsidized(bool{});
			}
		}
		if(!record.factory_unprofitable)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_unprofitable(bool{});
			}
		}
		if(!record.factory_size)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_size(float{});
			}
		}
		if(!record.factory_unqualified_employment)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_unqualified_employment(float{});
			}
		}
		if(!record.factory_primary_employment)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_primary_employment(float{});
			}
		}
		if(!record.factory_secondary_employment)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_secondary_employment(float{});
			}
		}
		if(!record.factory_efficiency_level)
		{
			for(auto obj : container_1.in_factory)
			{
				for(size_t i = 0;i<container_1.factory_get_efficiency_level_size();i++)
				{
					auto arr_index = uint8_t(i);
					obj.set_efficiency_level(arr_index, float{});
				}
			}
		}
		if(!record.factory_technology_scale)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_technology_scale(float{});
			}
		}
		if(!record.factory_profit)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_profit(float{});
			}
		}
		if(!record.factory_triggered_modifiers)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_triggered_modifiers(float{});
			}
		}
		if(!record.factory_output)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_output(float{});
			}
		}
		if(!record.factory_output_per_worker)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_output_per_worker(float{});
			}
		}
		if(!record.factory_input_cost)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_input_cost(float{});
			}
		}
		if(!record.factory_input_cost_per_worker)
		{
			for(auto obj : container_1.in_factory)
			{
				obj.set_input_cost_per_worker(float{});
			}
		}
	}
	if(!record.factory_location)
	{
		container_1.factory_location_resize(0);
	}
	else
	{
	}
	if(!record.province_ownership)
	{
		container_1.province_ownership_resize(0);
	}
	else
	{
	}
	if(!record.province_control)
	{
		container_1.province_control_resize(0);
	}
	else
	{
	}
	if(!record.province_rebel_control)
	{
		container_1.province_rebel_control_resize(0);
	}
	else
	{
	}
	if(!record.province_land_construction)
	{
		container_1.province_land_construction_resize(0);
	}
	else
	{
		if(!record.province_land_construction_purchased_goods)
		{
			for(auto obj : container_1.in_province_land_construction)
			{
				obj.set_purchased_goods(economy::commodity_set{});
			}
		}
		if(!record.province_land_construction_type)
		{
			for(auto obj : container_1.in_province_land_construction)
			{
				obj.set_type(unit_type_id{});
			}
		}
		if(!record.province_land_construction_template_province)
		{
			for(auto obj : container_1.in_province_land_construction)
			{
				obj.set_template_province(province_id{});
			}
		}
		if(!record.province_land_construction_start_date)
		{
			for(auto obj : container_1.in_province_land_construction)
			{
				obj.set_start_date(sys::date{});
			}
		}
	}
	if(!record.province_naval_construction)
	{
		container_1.province_naval_construction_resize(0);
	}
	else
	{
		if(!record.province_naval_construction_purchased_goods)
		{
			for(auto obj : container_1.in_province_naval_construction)
			{
				obj.set_purchased_goods(economy::commodity_set{});
			}
		}
		if(!record.province_naval_construction_type)
		{
			for(auto obj : container_1.in_province_naval_construction)
			{
				obj.set_type(unit_type_id{});
			}
		}
		if(!record.province_naval_construction_template_province)
		{
			for(auto obj : container_1.in_province_naval_construction)
			{
				obj.set_template_province(province_id{});
			}
		}
		if(!record.province_naval_construction_start_date)
		{
			for(auto obj : container_1.in_province_naval_construction)
			{
				obj.set_start_date(sys::date{});
			}
		}
	}
	if(!record.province_building_construction)
	{
		container_1.province_building_construction_resize(0);
	}
	else
	{
		if(!record.province_building_construction_purchased_goods)
		{
			for(auto obj : container_1.in_province_building_construction)
			{
				obj.set_purchased_goods(economy::commodity_set{});
			}
		}
		if(!record.province_building_construction_type)
		{
			for(auto obj : container_1.in_province_building_construction)
			{
				obj.set_type(uint8_t{});
			}
		}
		if(!record.province_building_construction_is_pop_project)
		{
			for(auto obj : container_1.in_province_building_construction)
			{
				obj.set_is_pop_project(bool{});
			}
		}
	}
	if(!record.factory_construction)
	{
		container_1.factory_construction_resize(0);
	}
	else
	{
		if(!record.factory_construction_purchased_goods)
		{
			for(auto obj : container_1.in_factory_construction)
			{
				obj.set_purchased_goods(economy::commodity_set{});
			}
		}
		if(!record.factory_construction_type)
		{
			for(auto obj : container_1.in_factory_construction)
			{
				obj.set_type(factory_type_id{});
			}
		}
		if(!record.factory_construction_is_pop_project)
		{
			for(auto obj : container_1.in_factory_construction)
			{
				obj.set_is_pop_project(bool{});
			}
		}
		if(!record.factory_construction_is_upgrade)
		{
			for(auto obj : container_1.in_factory_construction)
			{
				obj.set_is_upgrade(bool{});
			}
		}
		if(!record.factory_construction_refit_target)
		{
			for(auto obj : container_1.in_factory_construction)
			{
				obj.set_refit_target(factory_type_id{});
			}
		}
	}
	if(!record.overlord)
	{
		container_1.overlord_resize(0);
	}
	else
	{
	}
	if(!record.rebel_faction)
	{
		container_1.rebel_faction_resize(0);
	}
	else
	{
		if(!record.rebel_faction_type)
		{
			for(auto obj : container_1.in_rebel_faction)
			{
				obj.set_type(rebel_type_id{});
			}
		}
		if(!record.rebel_faction_defection_target)
		{
			for(auto obj : container_1.in_rebel_faction)
			{
				obj.set_defection_target(national_identity_id{});
			}
		}
		if(!record.rebel_faction_primary_culture)
		{
			for(auto obj : container_1.in_rebel_faction)
			{
				obj.set_primary_culture(culture_id{});
			}
		}
		if(!record.rebel_faction_primary_culture_group)
		{
			for(auto obj : container_1.in_rebel_faction)
			{
				obj.set_primary_culture_group(culture_group_id{});
			}
		}
		if(!record.rebel_faction_religion)
		{
			for(auto obj : container_1.in_rebel_faction)
			{
				obj.set_religion(religion_id{});
			}
		}
		if(!record.rebel_faction_possible_regiments)
		{
			for(auto obj : container_1.in_rebel_faction)
			{
				obj.set_possible_regiments(int32_t{});
			}
		}
		if(!record.rebel_faction_organization)
		{
			for(auto obj : container_1.in_rebel_faction)
			{
				obj.set_organization(float{});
			}
		}
	}
	if(!record.rebellion_within)
	{
		container_1.rebellion_within_resize(0);
	}
	else
	{
	}
	if(!record.movement)
	{
		container_1.movement_resize(0);
	}
	else
	{
		if(!record.movement_associated_issue_option)
		{
			for(auto obj : container_1.in_movement)
			{
				obj.set_associated_issue_option(issue_option_id{});
			}
		}
		if(!record.movement_associated_independence)
		{
			for(auto obj : container_1.in_movement)
			{
				obj.set_associated_independence(national_identity_id{});
			}
		}
		if(!record.movement_pop_support)
		{
			for(auto obj : container_1.in_movement)
			{
				obj.set_pop_support(float{});
			}
		}
		if(!record.movement_radicalism)
		{
			for(auto obj : container_1.in_movement)
			{
				obj.set_radicalism(float{});
			}
		}
		if(!record.movement_transient_radicalism)
		{
			for(auto obj : container_1.in_movement)
			{
				obj.set_transient_radicalism(float{});
			}
		}
	}
	if(!record.movement_within)
	{
		container_1.movement_within_resize(0);
	}
	else
	{
	}
	if(!record.pop_movement_membership)
	{
		container_1.pop_movement_membership_resize(0);
	}
	else
	{
	}
	if(!record.pop_rebellion_membership)
	{
		container_1.pop_rebellion_membership_resize(0);
	}
	else
	{
	}
	if(!record.pop)
	{
		container_1.pop_resize(0);
	}
	else
	{
		if(!record.pop_poptype)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_poptype(pop_type_id{});
			}
		}
		if(!record.pop_religion)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_religion(religion_id{});
			}
		}
		if(!record.pop_culture)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_culture(culture_id{});
			}
		}
		if(!record.pop_size)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_size(float{});
			}
		}
		if(!record.pop_savings)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_savings(float{});
			}
		}
		if(!record.pop_uconsciousness)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_uconsciousness(uint16_t{});
			}
		}
		if(!record.pop_umilitancy)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_umilitancy(uint16_t{});
			}
		}
		if(!record.pop_uliteracy)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_uliteracy(uint16_t{});
			}
		}
		if(!record.pop_uemployment)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_uemployment(uint8_t{});
			}
		}
		if(!record.pop_satisfaction)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_satisfaction(float{});
			}
		}
		if(!record.pop_upolitical_reform_desire)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_upolitical_reform_desire(uint8_t{});
			}
		}
		if(!record.pop_usocial_reform_desire)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_usocial_reform_desire(uint8_t{});
			}
		}
		if(!record.pop_udemographics)
		{
			for(auto obj : container_1.in_pop)
			{
				for(size_t i = 0;i<container_1.pop_get_udemographics_size();i++)
				{
					dcon::pop_demographics_key arr_index{dcon::pop_demographics_key::value_base_t(i)};
					obj.set_udemographics(arr_index, uint8_t{});
				}
			}
		}
		if(!record.pop_dominant_ideology)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_dominant_ideology(ideology_id{});
			}
		}
		if(!record.pop_dominant_issue_option)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_dominant_issue_option(issue_option_id{});
			}
		}
		if(!record.pop_is_primary_or_accepted_culture)
		{
			for(auto obj : container_1.in_pop)
			{
				obj.set_is_primary_or_accepted_culture(bool{});
			}
		}
	}
	if(!record.pop_location)
	{
		container_1.pop_location_resize(0);
	}
	else
	{
	}
	if(!record.national_event)
	{
		container_1.national_event_resize(0);
	}
	else
	{
		if(!record.national_event_name)
		{
			for(auto obj : container_1.in_national_event)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.national_event_description)
		{
			for(auto obj : container_1.in_national_event)
			{
				obj.set_description(text_key{});
			}
		}
		if(!record.national_event_is_major)
		{
			for(auto obj : container_1.in_national_event)
			{
				obj.set_is_major(bool{});
			}
		}
		if(!record.national_event_image)
		{
			for(auto obj : container_1.in_national_event)
			{
				obj.set_image(dcon::gfx_object_id{});
			}
		}
		if(!record.national_event_immediate_effect)
		{
			for(auto obj : container_1.in_national_event)
			{
				obj.set_immediate_effect(effect_key{});
			}
		}
		if(!record.national_event_options)
		{
			for(auto obj : container_1.in_national_event)
			{
				obj.set_options(std::array<sys::event_option,sys::max_event_options>{});
			}
		}
		if(!record.national_event_auto_choice)
		{
			for(auto obj : container_1.in_national_event)
			{
				obj.set_auto_choice(uint8_t{});
			}
		}
		if(!record.national_event_allow_multiple_instances)
		{
			for(auto obj : container_1.in_national_event)
			{
				obj.set_allow_multiple_instances(bool{});
			}
		}
	}
	if(!record.provincial_event)
	{
		container_1.provincial_event_resize(0);
	}
	else
	{
		if(!record.provincial_event_name)
		{
			for(auto obj : container_1.in_provincial_event)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.provincial_event_description)
		{
			for(auto obj : container_1.in_provincial_event)
			{
				obj.set_description(text_key{});
			}
		}
		if(!record.provincial_event_immediate_effect)
		{
			for(auto obj : container_1.in_provincial_event)
			{
				obj.set_immediate_effect(effect_key{});
			}
		}
		if(!record.provincial_event_options)
		{
			for(auto obj : container_1.in_provincial_event)
			{
				obj.set_options(std::array<sys::event_option,sys::max_event_options>{});
			}
		}
		if(!record.provincial_event_auto_choice)
		{
			for(auto obj : container_1.in_provincial_event)
			{
				obj.set_auto_choice(uint8_t{});
			}
		}
	}
	if(!record.free_national_event)
	{
		container_1.free_national_event_resize(0);
	}
	else
	{
		if(!record.free_national_event_name)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.free_national_event_description)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_description(text_key{});
			}
		}
		if(!record.free_national_event_only_once)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_only_once(bool{});
			}
		}
		if(!record.free_national_event_has_been_triggered)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_has_been_triggered(bool{});
			}
		}
		if(!record.free_national_event_is_major)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_is_major(bool{});
			}
		}
		if(!record.free_national_event_image)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_image(dcon::gfx_object_id{});
			}
		}
		if(!record.free_national_event_trigger)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_trigger(trigger_key{});
			}
		}
		if(!record.free_national_event_mtth)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_mtth(value_modifier_key{});
			}
		}
		if(!record.free_national_event_immediate_effect)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_immediate_effect(effect_key{});
			}
		}
		if(!record.free_national_event_options)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_options(std::array<sys::event_option,sys::max_event_options>{});
			}
		}
		if(!record.free_national_event_legacy_id)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_legacy_id(uint32_t{});
			}
		}
		if(!record.free_national_event_auto_choice)
		{
			for(auto obj : container_1.in_free_national_event)
			{
				obj.set_auto_choice(uint8_t{});
			}
		}
	}
	if(!record.free_provincial_event)
	{
		container_1.free_provincial_event_resize(0);
	}
	else
	{
		if(!record.free_provincial_event_name)
		{
			for(auto obj : container_1.in_free_provincial_event)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.free_provincial_event_description)
		{
			for(auto obj : container_1.in_free_provincial_event)
			{
				obj.set_description(text_key{});
			}
		}
		if(!record.free_provincial_event_only_once)
		{
			for(auto obj : container_1.in_free_provincial_event)
			{
				obj.set_only_once(bool{});
			}
		}
		if(!record.free_provincial_event_has_been_triggered)
		{
			for(auto obj : container_1.in_free_provincial_event)
			{
				obj.set_has_been_triggered(bool{});
			}
		}
		if(!record.free_provincial_event_trigger)
		{
			for(auto obj : container_1.in_free_provincial_event)
			{
				obj.set_trigger(trigger_key{});
			}
		}
		if(!record.free_provincial_event_mtth)
		{
			for(auto obj : container_1.in_free_provincial_event)
			{
				obj.set_mtth(value_modifier_key{});
			}
		}
		if(!record.free_provincial_event_immediate_effect)
		{
			for(auto obj : container_1.in_free_provincial_event)
			{
				obj.set_immediate_effect(effect_key{});
			}
		}
		if(!record.free_provincial_event_options)
		{
			for(auto obj : container_1.in_free_provincial_event)
			{
				obj.set_options(std::array<sys::event_option,sys::max_event_options>{});
			}
		}
		if(!record.free_provincial_event_auto_choice)
		{
			for(auto obj : container_1.in_free_provincial_event)
			{
				obj.set_auto_choice(uint8_t{});
			}
		}
	}
	if(!record.national_focus)
	{
		container_1.national_focus_resize(0);
	}
	else
	{
		if(!record.national_focus_name)
		{
			for(auto obj : container_1.in_national_focus)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.national_focus_icon)
		{
			for(auto obj : container_1.in_national_focus)
			{
				obj.set_icon(uint8_t{});
			}
		}
		if(!record.national_focus_type)
		{
			for(auto obj : container_1.in_national_focus)
			{
				obj.set_type(uint8_t{});
			}
		}
		if(!record.national_focus_loyalty_value)
		{
			for(auto obj : container_1.in_national_focus)
			{
				obj.set_loyalty_value(float{});
			}
		}
		if(!record.national_focus_ideology)
		{
			for(auto obj : container_1.in_national_focus)
			{
				obj.set_ideology(ideology_id{});
			}
		}
		if(!record.national_focus_limit)
		{
			for(auto obj : container_1.in_national_focus)
			{
				obj.set_limit(trigger_key{});
			}
		}
		if(!record.national_focus_promotion_type)
		{
			for(auto obj : container_1.in_national_focus)
			{
				obj.set_promotion_type(pop_type_id{});
			}
		}
		if(!record.national_focus_promotion_amount)
		{
			for(auto obj : container_1.in_national_focus)
			{
				obj.set_promotion_amount(float{});
			}
		}
		if(!record.national_focus_railroads)
		{
			for(auto obj : container_1.in_national_focus)
			{
				obj.set_railroads(float{});
			}
		}
		if(!record.national_focus_production_focus)
		{
			for(auto obj : container_1.in_national_focus)
			{
				for(size_t i = 0;i<container_1.national_focus_get_production_focus_size();i++)
				{
					dcon::commodity_id arr_index{dcon::commodity_id::value_base_t(i)};
					obj.set_production_focus(arr_index, float{});
				}
			}
		}
		if(!record.national_focus_modifier)
		{
			for(auto obj : container_1.in_national_focus)
			{
				obj.set_modifier(modifier_id{});
			}
		}
	}
	if(!record.stored_trigger)
	{
		container_1.stored_trigger_resize(0);
	}
	else
	{
		if(!record.stored_trigger_name)
		{
			for(auto obj : container_1.in_stored_trigger)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.stored_trigger_function)
		{
			for(auto obj : container_1.in_stored_trigger)
			{
				obj.set_function(trigger_key{});
			}
		}
	}
	if(!record.gamerule)
	{
		container_1.gamerule_resize(0);
	}
	else
	{
		if(!record.gamerule_name)
		{
			for(auto obj : container_1.in_gamerule)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.gamerule_tooltip_explain)
		{
			for(auto obj : container_1.in_gamerule)
			{
				obj.set_tooltip_explain(text_key{});
			}
		}
		if(!record.gamerule_default_setting)
		{
			for(auto obj : container_1.in_gamerule)
			{
				obj.set_default_setting(uint8_t{});
			}
		}
		if(!record.gamerule_options)
		{
			for(auto obj : container_1.in_gamerule)
			{
				obj.set_options(std::array<sys::gamerule_option,sys::max_gamerule_settings>{});
			}
		}
		if(!record.gamerule_settings_count)
		{
			for(auto obj : container_1.in_gamerule)
			{
				obj.set_settings_count(uint8_t{});
			}
		}
		if(!record.gamerule_current_setting)
		{
			for(auto obj : container_1.in_gamerule)
			{
				obj.set_current_setting(uint8_t{});
			}
		}
	}
	if(!record.decision)
	{
		container_1.decision_resize(0);
	}
	else
	{
		if(!record.decision_name)
		{
			for(auto obj : container_1.in_decision)
			{
				obj.set_name(text_key{});
			}
		}
		if(!record.decision_description)
		{
			for(auto obj : container_1.in_decision)
			{
				obj.set_description(text_key{});
			}
		}
		if(!record.decision_image)
		{
			for(auto obj : container_1.in_decision)
			{
				obj.set_image(dcon::gfx_object_id{});
			}
		}
		if(!record.decision_potential)
		{
			for(auto obj : container_1.in_decision)
			{
				obj.set_potential(trigger_key{});
			}
		}
		if(!record.decision_allow)
		{
			for(auto obj : container_1.in_decision)
			{
				obj.set_allow(trigger_key{});
			}
		}
		if(!record.decision_effect)
		{
			for(auto obj : container_1.in_decision)
			{
				obj.set_effect(effect_key{});
			}
		}
		if(!record.decision_ai_will_do)
		{
			for(auto obj : container_1.in_decision)
			{
				obj.set_ai_will_do(value_modifier_key{});
			}
		}
		if(!record.decision_hide_notification)
		{
			for(auto obj : container_1.in_decision)
			{
				obj.set_hide_notification(bool{});
			}
		}
	}
	if(!record.locale)
	{
		container_1.locale_resize(0);
	}
	else
	{
		if(!record.locale_native_rtl)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.set_native_rtl(bool{});
			}
		}
		if(!record.locale_prevent_letterspace)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.set_prevent_letterspace(bool{});
			}
		}
		if(!record.locale_display_name)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.get_display_name().clear();
			}
		}
		if(!record.locale_locale_name)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.get_locale_name().clear();
			}
		}
		if(!record.locale_fallback)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.get_fallback().clear();
			}
		}
		if(!record.locale_resolved_language)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.set_resolved_language(hb_language_t{});
			}
		}
		if(!record.locale_hb_script)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.set_hb_script(uint32_t{});
			}
		}
		if(!record.locale_resolved_body_font)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.set_resolved_body_font(uint16_t{});
			}
		}
		if(!record.locale_resolved_header_font)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.set_resolved_header_font(uint16_t{});
			}
		}
		if(!record.locale_resolved_map_font)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.set_resolved_map_font(uint16_t{});
			}
		}
		if(!record.locale_body_font)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.get_body_font().clear();
			}
		}
		if(!record.locale_header_font)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.get_header_font().clear();
			}
		}
		if(!record.locale_map_font)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.get_map_font().clear();
			}
		}
		if(!record.locale_body_font_features)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.get_body_font_features().clear();
			}
		}
		if(!record.locale_header_font_features)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.get_header_font_features().clear();
			}
		}
		if(!record.locale_map_font_features)
		{
			for(auto obj : container_1.in_locale)
			{
				obj.get_map_font_features().clear();
			}
		}
	}
	if(!record.mp_player)
	{
		container_1.mp_player_resize(0);
	}
	else
	{
		if(!record.mp_player_nickname)
		{
			for(auto obj : container_1.in_mp_player)
			{
				obj.set_nickname(sys::player_name{});
			}
		}
		if(!record.mp_player_password_salt)
		{
			for(auto obj : container_1.in_mp_player)
			{
				obj.set_password_salt(std::array<uint8_t,24>{});
			}
		}
		if(!record.mp_player_password_hash)
		{
			for(auto obj : container_1.in_mp_player)
			{
				obj.set_password_hash(std::array<uint8_t,64>{});
			}
		}
		if(!record.mp_player_fully_loaded)
		{
			for(auto obj : container_1.in_mp_player)
			{
				obj.set_fully_loaded(bool{});
			}
		}
		if(!record.mp_player_is_oos)
		{
			for(auto obj : container_1.in_mp_player)
			{
				obj.set_is_oos(bool{});
			}
		}
	}
	if(!record.player_nation)
	{
		container_1.player_nation_resize(0);
	}
	else
	{
	}
	if(!record.client)
	{
		container_1.client_resize(0);
	}
	else
	{
		if(!record.client_socket_fd)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_socket_fd(network::socket_t{});
			}
		}
		if(!record.client_address)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_address(sockaddr_storage{});
			}
		}
		if(!record.client_hshake_buffer)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_hshake_buffer(network::client_handshake_data{});
			}
		}
		if(!record.client_recv_count)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_recv_count(size_t{});
			}
		}
		if(!record.client_total_sent_bytes)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_total_sent_bytes(size_t{});
			}
		}
		if(!record.client_handshake)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_handshake(bool{});
			}
		}
		if(!record.client_receive_buffer)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_receive_buffer(std::array<uint8_t,network::RECV_BUFFER_SIZE>{});
			}
		}
		if(!record.client_receiving_payload_flag)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_receiving_payload_flag(fixed_bool_t{});
			}
		}
		if(!record.client_recv_buffer_size_used)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_recv_buffer_size_used(int{});
			}
		}
		if(!record.client_recv_buffer_bytes_read)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_recv_buffer_bytes_read(int{});
			}
		}
		if(!record.client_client_state)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_client_state(network::client_state{});
			}
		}
		if(!record.client_shutdown_time)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_shutdown_time(time_t{});
			}
		}
		if(!record.client_last_seen)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_last_seen(sys::date{});
			}
		}
		if(!record.client_sending_payload)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_sending_payload(uint8_t{});
			}
		}
		if(!record.client_command_send_count)
		{
			for(auto obj : container_1.in_client)
			{
				obj.set_command_send_count(uint32_t{});
			}
		}
	}
	if(!record.player_client)
	{
		container_1.player_client_resize(0);
	}
	else
	{
	}
}
}
