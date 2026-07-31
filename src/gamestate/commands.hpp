#pragma once
#include "dcon_generated_ids.hpp"
#include "common_types.hpp"
#include "events.hpp"
#include "diplomatic_messages_containers.hpp"
#include "constants_dcon.hpp"
#include "constants.hpp"
#include "container_types.hpp"
#include "commands_containers.hpp"
#include "military_constants.hpp"
#include "network_containers.hpp"


namespace command {

enum class command_type : uint8_t {
	invalid = 0,
	change_nat_focus = 1,
	start_research = 2,
	make_leader = 3,
	begin_province_building_construction = 4,
	increase_relations = 5,
	decrease_relations = 6,
	begin_factory_building_construction = 7,
	begin_naval_unit_construction = 8,
	cancel_naval_unit_construction = 9,
	change_factory_settings = 10,
	delete_factory = 11,
	make_vassal = 12,
	release_and_play_nation = 13,
	war_subsidies = 14,
	cancel_war_subsidies = 15,
	change_budget = 16,
	start_election = 17,
	change_influence_priority = 18,
	discredit_advisors = 19,
	expel_advisors = 20,
	ban_embassy = 21,
	increase_opinion = 22,
	decrease_opinion = 23,
	add_to_sphere = 24,
	remove_from_sphere = 25,
	upgrade_colony_to_state = 26,
		invest_in_colony = 27,
		abandon_colony = 28,
		finish_colonization = 29,
		intervene_in_war = 30,
		suppress_movement = 31,
		civilize_nation = 32,
		appoint_ruling_party = 33,
		change_issue_option = 34,
		change_reform_option = 35,
		become_interested_in_crisis = 36,
		take_sides_in_crisis = 37,
		begin_land_unit_construction = 38,
		cancel_land_unit_construction = 39,
		change_stockpile_settings = 40,
		take_decision = 41,
		make_n_event_choice = 42,
		make_f_n_event_choice = 43,
		make_p_event_choice = 44,
		make_f_p_event_choice = 45,
		fabricate_cb = 46,
		cancel_cb_fabrication = 47,
		ask_for_military_access = 48,
		ask_for_alliance = 49,
		call_to_arms = 50,
		respond_to_diplomatic_message = 51,
		cancel_military_access = 52,
		cancel_alliance = 53,
		cancel_given_military_access = 54,
		declare_war = 55,
		add_war_goal = 56,
		start_peace_offer = 58,
		add_peace_offer_term = 59,
		send_peace_offer = 60,
		move_army = 61,
		move_navy = 62,
		embark_army = 63,
		merge_armies = 64,
		merge_navies = 65,
		split_army = 66,
		split_navy = 67,
		delete_army = 68,
		delete_navy = 69,
		naval_retreat = 72,
		land_retreat = 73,
		start_crisis_peace_offer = 74,
		invite_to_crisis = 75,
		add_wargoal_to_crisis_offer = 76,
		send_crisis_peace_offer = 77,
		change_admiral = 78,
		change_general = 79,
		toggle_mobilization = 80,
		give_military_access = 81,
		set_rally_point = 82,
		save_game = 83,
		cancel_factory_building_construction = 84,
		disband_undermanned = 85,
		toggle_hunt_rebels = 88,
		toggle_select_province = 89,
		toggle_immigrator_province = 90,
		state_transfer = 91,
		release_subject = 92,
		enable_debt = 93,
		move_capital = 94,
		toggle_unit_ai_control = 95,
		toggle_mobilized_is_ai_controlled = 96,
		toggle_interested_in_alliance = 97,
		pbutton_script = 98,
		nbutton_script = 99,
		set_factory_type_priority = 100,
		crisis_add_wargoal = 101,
		change_land_unit_type = 102,
		take_province = 103,
		grant_province = 104,
		ask_for_free_trade_agreement = 105,
		switch_embargo_status = 106,
		revoke_trade_rights = 107,
		toggle_local_administration = 108,
		stop_army_movement = 109,
		stop_navy_movement = 110,
		command_units = 111,
		give_back_units = 112,
		change_game_rule_setting = 113,
		toggle_production_directive = 114,
		load_saved_game = 115,
		change_naval_unit_type = 116,


		// network
		notify_player_timeout = 233,// Sent to every client in the lobby to notify a client has timed out. Is also sent to the timed-out client socket, incase they get can receive it.
		notify_oos_gamestate = 234, // sent from Client to Host, with the clients OOS gamestate for the host to compare, and generate report from. NOT SAFE for use to untrusted clients as there is no safety in seralizing the binary blob which the client sends.
		notify_mp_data = 235, // notify client that MP data (not save) is here and should be loaded. MP data is data which needs to be sent to the client from host, but dosent make sense to store in the save (eg. player data and which nations are on ai)
		resync_lobby = 236,
		notify_player_ban = 237,
		notify_player_kick = 238,
		notify_player_picks_nation = 239,
		notify_player_joins = 240,
		notify_player_leaves = 241,
		notify_player_oos = 242,
		notify_save_loaded = 243,
		notify_start_game = 244, // for synchronized "start game"
		notify_stop_game = 245, // "go back to lobby"
		notify_pause_game = 246, // visual aid mostly
		notify_reload = 247,
		advance_tick = 248,
		chat_message = 249,
		network_inactivity_ping = 250,
		notify_player_fully_loaded = 251, // client sends this to the host to notify that they are fully loaded in, and host transmits it to all clients
		notify_player_is_loading = 252, // host sends this to all clients to notify that a specific client has begun loading
		change_ai_nation_state = 253, // host sends this to new clients to inform them of no-ai nations, which arent players. 

	// console cheats
	network_populate = 254,
	console_command = 255,
};
struct load_save_game_data {
	bool is_new_game;
	uint8_t filename_length;
	const char* filename() const {
		return reinterpret_cast<const char*>(&filename_length + 1);
	}
};

struct pbutton_data {
	dcon::gui_def_id button;
	dcon::province_id id;
};
struct nbutton_data {
	dcon::gui_def_id button;
	dcon::nation_id id;
};

struct national_focus_data {
	dcon::state_instance_id target_state;
	dcon::national_focus_id focus;
};

struct start_research_data {
	dcon::technology_id tech;
};

struct make_leader_data {
	bool is_general;
};

struct save_game_data {
	bool and_quit;
	uint8_t filename_len;
	const char* filename() const {
		return reinterpret_cast<const char*>(&filename_len + 1);
	}
};

struct province_building_data {
	dcon::province_id location;
	economy::province_building_type type;
};

struct factory_building_data {
	dcon::province_id location;
	dcon::factory_type_id type;
	bool is_upgrade;
	dcon::factory_type_id refit_target;
};

struct diplo_action_data {
	dcon::nation_id target;
};

struct naval_unit_construction_data {
	dcon::province_id location;
	dcon::unit_type_id type;
	dcon::province_id template_province;
};

struct rally_point_data {
	dcon::province_id location;
	bool naval = false;
	bool enable = false;
};

struct land_unit_construction_data {
	dcon::province_id location;
	dcon::culture_id pop_culture;
	dcon::unit_type_id type;
	dcon::province_id template_province;
};

struct factory_data {
	dcon::factory_id id;
	uint8_t priority;
	bool subsidize;
};

struct tag_target_data {
	dcon::national_identity_id ident;
};

struct influence_action_data {
	dcon::nation_id influence_target;
	dcon::nation_id gp_target;
};

struct influence_priority_data {
	dcon::nation_id influence_target;
	uint8_t priority;
};

struct generic_location_data {
	dcon::province_id prov;
};

struct generic_state_definition_data {
	dcon::state_definition_id state_def;
};

struct cheat_location_data {
	dcon::province_id prov;
	dcon::nation_id n;
};

struct movement_data {
	dcon::issue_option_id iopt;
	dcon::national_identity_id tag;
};

struct political_party_data {
	dcon::political_party_id p;
};

struct reform_selection_data {
	dcon::reform_option_id r;
};

struct issue_selection_data {
	dcon::issue_option_id r;
};

struct budget_settings_data {
	int8_t education_spending;
	int8_t military_spending;
	int8_t administrative_spending;
	int8_t social_spending;
	int8_t land_spending;
	int8_t naval_spending;
	int8_t construction_spending;
	int8_t poor_tax;
	int8_t middle_tax;
	int8_t rich_tax;
	int8_t tariffs_import;
	int8_t tariffs_export;
	int8_t domestic_investment;
	int8_t overseas;
	int8_t subsidies;
};

struct war_target_data {
	dcon::war_id war;
	bool for_attacker;
};

struct crisis_join_data {
	bool join_attackers;
};

struct stockpile_settings_data {
	float amount;
	dcon::commodity_id c;
	bool draw_on_stockpiles;
};

struct decision_data {
	dcon::decision_id d;
};

struct message_data {
	dcon::nation_id from;
	diplomatic_message::type type;
	bool accept;
};

struct state_transfer_data {
	dcon::nation_id target;
	dcon::state_definition_id state;
};

struct call_to_arms_data {
	dcon::nation_id target;
	dcon::war_id war;
	bool automatic_call = false;
};

struct cb_fabrication_data {
	dcon::nation_id target;
	dcon::cb_type_id type;
	dcon::state_definition_id target_state;
};

struct new_war_data {
	dcon::nation_id target;
	dcon::state_definition_id cb_state;
	dcon::national_identity_id cb_tag;
	dcon::nation_id cb_secondary_nation;
	dcon::cb_type_id primary_cb;
	bool call_attacker_allies;
	bool run_conference;
};

struct new_war_goal_data {
	dcon::nation_id target;
	dcon::state_definition_id cb_state;
	dcon::national_identity_id cb_tag;
	dcon::nation_id cb_secondary_nation;
	dcon::war_id war;
	dcon::cb_type_id cb_type;
};

struct crisis_invitation_data {
	dcon::nation_id invited;
	dcon::nation_id target;
	dcon::state_definition_id cb_state;
	dcon::national_identity_id cb_tag;
	dcon::nation_id cb_secondary_nation;
	dcon::cb_type_id cb_type;
};

struct new_offer_data {
	dcon::nation_id target;
	dcon::war_id war;
	bool is_concession;
};
struct offer_wargoal_data {
	dcon::wargoal_id wg;
};

struct army_movement_data {
	dcon::army_id a;
	dcon::province_id dest;
	bool reset;
	military::special_army_order special_order;
};

struct split_army_data {
	fixed_bool_t select_both_armies; // if true will select both the existing and the new army as player. If false selects only the new army
	dcon::army_id army;
	uint16_t regiment_count;
	const dcon::regiment_id* regiments() const {
		return reinterpret_cast<const dcon::regiment_id*>(this + 1);
	}
};

struct split_navy_data {
	fixed_bool_t select_both_navies; // if true will select both the existing and the new navy as player. If false selects only the new navy
	dcon::navy_id navy;
	uint16_t ship_count;
	const dcon::ship_id* ships() const {
		return reinterpret_cast<const dcon::ship_id*>(this + 1);
	}
};

struct navy_movement_data {
	dcon::navy_id n;
	dcon::province_id dest;
	bool reset;
};

struct merge_army_data {
	dcon::army_id a;
	dcon::army_id b;
};

struct merge_navy_data {
	dcon::navy_id a;
	dcon::navy_id b;
};

struct new_general_data {
	dcon::army_id a;
	dcon::leader_id l;
};

struct new_admiral_data {
	dcon::navy_id a;
	dcon::leader_id l;
};

struct retreat_from_naval_battle_data {
	dcon::navy_id navy;
	dcon::province_id dest;
};

struct land_battle_data {
	dcon::army_id army;
	dcon::province_id dest;
	military::retreat_type retreat_type;
};

constexpr inline size_t num_packed_units = 10;

struct split_regiments_data {
	dcon::regiment_id regs[num_packed_units];
};
struct split_ships_data {
	dcon::ship_id ships[num_packed_units];
};

struct change_land_unit_type_data {
	dcon::unit_type_id new_type;
	uint16_t unit_count;
	const dcon::regiment_id* regiments() const {
		return reinterpret_cast<const dcon::regiment_id*>(this + 1);
	}

};

struct change_naval_unit_type_data {
	dcon::unit_type_id new_type;
	uint16_t unit_count;
	const dcon::ship_id* ships() const {
		return reinterpret_cast<const dcon::ship_id*>(this + 1);
	}

};

struct cheat_data {
	float value;
};
struct cheat_data_int {
	int32_t value;
};
struct cheat_event_data {
	int32_t value;
	dcon::nation_id as;
};

struct cheat_invention_data_t {
	dcon::invention_id invention;
};

struct set_factory_priority_data {
	dcon::factory_type_id factory;
	float value;
};

struct chat_message_data {
	network::chat_message_targets targets;
	uint16_t msg_len = 0;
	const char* body() const {
		return reinterpret_cast<const char*>(this + 1);
	}
};

struct nation_pick_data {
	dcon::nation_id target;
};

struct advance_tick_data {
	sys::checksum_key checksum;
	int32_t speed;
	sys::date date;
};

struct notify_joins_data {
	sys::player_password_raw player_password;
	sys::player_name player_name;
	dcon::nation_id player_nation;
	bool needs_loading;
	dcon::client_id client_id;
};
struct notify_save_loaded_data {
	sys::checksum_key checksum;
	dcon::nation_id target;
	uint32_t length;
	const uint8_t* save_data() const {
		return reinterpret_cast<const uint8_t*>(&length + 1);
	}

};
struct notify_reload_data {
	sys::checksum_key checksum;
};
struct notify_leaves_data {
	bool make_ai;
};
//struct notify_player_fully_loaded_data {
//	sys::player_name name;
//};
//struct notify_player_is_loading_data {
//	dcon::mp_player_id loading_player;
//};
struct notify_player_ban_data {
	bool make_ai;
};
struct notify_player_kick_data {
	bool make_ai;
};
struct notify_player_timeout_data {
	bool make_ai;
};
struct notify_oos_gamestate_data {
	uint32_t size;
	const uint8_t* gamestate_data() const {
		return reinterpret_cast<const uint8_t*>(&size + 1);
	}
};
//struct notify_player_oos_data {
//	uint32_t size;
//	uint8_t* variable_data() {
//		return reinterpret_cast<uint8_t*>(&size + 1);
//	}
//
//
//};
struct change_ai_nation_state_data {
	bool no_ai;
};

struct stop_army_movement_data {
	dcon::army_id army;
};

struct stop_navy_movement_data {
	dcon::navy_id navy;
};

struct command_units_data {
	dcon::nation_id target;
};
struct change_gamerule_setting_data {
	dcon::gamerule_id gamerule;
	uint8_t setting;
};

struct notify_mp_data_data {
	uint32_t data_len = 0;
	const uint8_t* mp_data() const {
		return reinterpret_cast<const uint8_t*>(&data_len + 1);
	}
};
struct production_directive_data {
	dcon::state_instance_id for_state;
	dcon::production_directive_id id;
};




// 判断游戏状态不同步通知是否为主机接收命令
bool notify_oos_gamestate_is_host_receive_command(const sys::state& state);


// 存档加载通知的执行前广播修改
void pre_execution_broadcast_modifications_notify_save_loaded(sys::state& state, command_data& command);
// 多人游戏数据通知的执行前广播修改
void pre_execution_broadcast_modifications_notify_mp_data(sys::state& state, command_data& command);


struct command_handler {
	// 这些用于command_type_handlers中需要简单true/false的情况
	static bool false_is_host_broadcast_command(const sys::state& state) {
		return false;
	}
	static bool true_is_host_broadcast_command(const sys::state& state) {
		return true;
	}
	static bool false_is_host_receive_command(const sys::state& state) {
		return false;
	}
	static bool true_is_host_receive_command(const sys::state& state) {
		return true;
	}

	
	uint32_t min_payload_size = 0;
	uint32_t max_payload_size = 0;
	bool (*is_host_receive_command)(const sys::state& state) = nullptr; // This function is run to determine if the command type is a valid command for the host to receive from clients. Should NOT be nullptr, it is only defaulted to it to satisfy constexpr requirements
	bool (*is_host_broadcast_command)(const sys::state& state) = nullptr; // This function is run to determine if the command type should be broadcasted by the host to clients after execution. Should NOT be nullptr, it is only defaulted to it to satisfy constexpr requirements
	void (*pre_execution_broadcast_modifications)(sys::state& state, command_data& command) = nullptr; // If not a nullptr, this function is will be run before the *host* executes the command and broadcasts it. This will always be executed if not a nullptr. Eg used for loading save data into the command before it is broadcast to clients 

};

constexpr uint32_t max_mp_state_size = 500000000; // max 500 MB for the entire MP state
constexpr uint32_t max_save_size = 32000000; // max 32 MB for entire save
constexpr uint32_t max_mp_data_size = 5000000; // max 5 MB for mp data
constexpr uint32_t max_regiment_count = 1000; // theoretical max regiments to be able to be sent in a single command
constexpr uint32_t max_ship_count = 1000; // theoretical max ships to be able to be sent in a single commnad

// 定义每个命令的最大和最小大小，以及某些函数的处理程序
constexpr enum_array<command_type, command_handler> command_type_handlers = {
	{command_type::change_nat_focus, command_handler{sizeof(command::national_focus_data), sizeof(command::national_focus_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command  } },
	{command_type::start_research, command_handler{ sizeof(command::start_research_data), sizeof(command::start_research_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::make_leader, command_handler{ sizeof(command::make_leader_data), sizeof(command::make_leader_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::begin_province_building_construction, command_handler{ sizeof(command::province_building_data), sizeof(command::province_building_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::increase_relations, command_handler{ sizeof(command::diplo_action_data),  sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::decrease_relations, command_handler{ sizeof(command::diplo_action_data),  sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::begin_factory_building_construction, command_handler{ sizeof(command::factory_building_data), sizeof(command::factory_building_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::begin_naval_unit_construction, command_handler{ sizeof(command::naval_unit_construction_data), sizeof(command::naval_unit_construction_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::cancel_naval_unit_construction, command_handler{ sizeof(command::naval_unit_construction_data), sizeof(command::naval_unit_construction_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::change_factory_settings, command_handler{ sizeof(command::factory_data), sizeof(command::factory_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::delete_factory, command_handler{ sizeof(command::factory_data), sizeof(command::factory_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::make_vassal, command_handler{ sizeof(command::tag_target_data), sizeof(command::tag_target_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::release_and_play_nation, command_handler{ sizeof(command::tag_target_data), sizeof(command::tag_target_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::war_subsidies, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::cancel_war_subsidies, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::change_budget, command_handler{ sizeof(command::budget_settings_data), sizeof(command::budget_settings_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::start_election, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::change_influence_priority, command_handler{ sizeof(command::influence_priority_data), sizeof(command::influence_priority_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::discredit_advisors, command_handler{ sizeof(command::influence_action_data), sizeof(command::influence_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::expel_advisors, command_handler{ sizeof(command::influence_action_data), sizeof(command::influence_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::ban_embassy, command_handler{ sizeof(command::influence_action_data), sizeof(command::influence_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::increase_opinion, command_handler{ sizeof(command::influence_action_data), sizeof(command::influence_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::decrease_opinion, command_handler{ sizeof(command::influence_action_data), sizeof(command::influence_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::add_to_sphere, command_handler{ sizeof(command::influence_action_data), sizeof(command::influence_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::remove_from_sphere, command_handler{ sizeof(command::influence_action_data), sizeof(command::influence_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::upgrade_colony_to_state, command_handler{ sizeof(command::generic_location_data), sizeof(command::generic_location_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::invest_in_colony, command_handler{ sizeof(command::generic_location_data), sizeof(command::generic_location_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::abandon_colony, command_handler{ sizeof(command::generic_location_data), sizeof(command::generic_location_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::finish_colonization, command_handler{sizeof(command::generic_state_definition_data),  sizeof(command::generic_state_definition_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::intervene_in_war, command_handler{sizeof(command::war_target_data),  sizeof(command::war_target_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::suppress_movement, command_handler{ sizeof(command::movement_data), sizeof(command::movement_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::civilize_nation, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::appoint_ruling_party, command_handler{ sizeof(command::political_party_data), sizeof(command::political_party_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::change_issue_option, command_handler{ sizeof(command::issue_selection_data), sizeof(command::issue_selection_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::change_reform_option, command_handler{ sizeof(command::reform_selection_data), sizeof(command::reform_selection_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::become_interested_in_crisis, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::take_sides_in_crisis, command_handler{ sizeof(command::crisis_join_data), sizeof(command::crisis_join_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::begin_land_unit_construction, command_handler{ sizeof(command::land_unit_construction_data), sizeof(command::land_unit_construction_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::cancel_land_unit_construction, command_handler{ sizeof(command::land_unit_construction_data), sizeof(command::land_unit_construction_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::change_stockpile_settings, command_handler{ sizeof(command::stockpile_settings_data), sizeof(command::stockpile_settings_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::take_decision, command_handler{ sizeof(command::decision_data), sizeof(command::decision_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::make_n_event_choice, command_handler{ sizeof(command::pending_human_n_event_data), sizeof(command::pending_human_n_event_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::make_f_n_event_choice, command_handler{ sizeof(command::pending_human_f_n_event_data), sizeof(command::pending_human_f_n_event_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::make_p_event_choice, command_handler{sizeof(command::pending_human_p_event_data),  sizeof(command::pending_human_p_event_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::make_f_p_event_choice, command_handler{ sizeof(command::pending_human_f_p_event_data), sizeof(command::pending_human_f_p_event_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::fabricate_cb, command_handler{ sizeof(command::cb_fabrication_data), sizeof(command::cb_fabrication_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::cancel_cb_fabrication, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::ask_for_military_access, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::ask_for_alliance, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::call_to_arms, command_handler{ sizeof(command::call_to_arms_data), sizeof(command::call_to_arms_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::respond_to_diplomatic_message, command_handler{ sizeof(command::message_data), sizeof(command::message_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::cancel_military_access, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::cancel_alliance, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::cancel_given_military_access, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::declare_war, command_handler{ sizeof(command::new_war_data), sizeof(command::new_war_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::add_war_goal, command_handler{ sizeof(command::new_war_goal_data), sizeof(command::new_war_goal_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::start_peace_offer, command_handler{ sizeof(command::new_offer_data), sizeof(command::new_offer_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::add_peace_offer_term, command_handler{ sizeof(command::offer_wargoal_data), sizeof(command::offer_wargoal_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::send_peace_offer, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::move_army, command_handler{ sizeof(command::army_movement_data), sizeof(command::army_movement_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::move_navy, command_handler{ sizeof(command::navy_movement_data), sizeof(command::navy_movement_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::embark_army, command_handler{ sizeof(command::army_movement_data), sizeof(command::army_movement_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::merge_armies, command_handler{ sizeof(command::merge_army_data), sizeof(command::merge_army_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::merge_navies, command_handler{ sizeof(command::merge_navy_data), sizeof(command::merge_navy_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::split_army, command_handler{ sizeof(command::split_army_data), sizeof(command::split_army_data) + (max_regiment_count * sizeof(dcon::regiment_id)), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::split_navy, command_handler{ sizeof(command::split_navy_data), sizeof(command::split_navy_data) + (max_ship_count * sizeof(dcon::ship_id)), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::delete_army, command_handler{ sizeof(command::army_movement_data), sizeof(command::army_movement_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::delete_navy, command_handler{ sizeof(command::navy_movement_data), sizeof(command::navy_movement_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::naval_retreat, command_handler{ sizeof(command::retreat_from_naval_battle_data), sizeof(command::retreat_from_naval_battle_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::land_retreat, command_handler{ sizeof(command::land_battle_data), sizeof(command::land_battle_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::start_crisis_peace_offer, command_handler{ sizeof(command::new_offer_data), sizeof(command::new_offer_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::invite_to_crisis, command_handler{ sizeof(command::crisis_invitation_data), sizeof(command::crisis_invitation_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::add_wargoal_to_crisis_offer, command_handler{ sizeof(command::crisis_invitation_data), sizeof(command::crisis_invitation_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::send_crisis_peace_offer, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::change_admiral, command_handler{ sizeof(command::new_admiral_data), sizeof(command::new_admiral_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::change_general, command_handler{ sizeof(command::new_general_data), sizeof(command::new_general_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::toggle_mobilization, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::give_military_access, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::set_rally_point, command_handler{ sizeof(command::rally_point_data), sizeof(command::rally_point_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::save_game, command_handler{ sizeof(command::save_game_data), sizeof(command::save_game_data), &command_handler::false_is_host_receive_command, &command_handler::false_is_host_broadcast_command } },
	{command_type::cancel_factory_building_construction, command_handler{ sizeof(command::factory_building_data), sizeof(command::factory_building_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::disband_undermanned, command_handler{ sizeof(command::army_movement_data), sizeof(command::army_movement_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::toggle_hunt_rebels, command_handler{ sizeof(command::army_movement_data), sizeof(command::army_movement_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::toggle_select_province, command_handler{ sizeof(command::generic_location_data), sizeof(command::generic_location_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::toggle_immigrator_province, command_handler{ sizeof(command::generic_location_data), sizeof(command::generic_location_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::state_transfer, command_handler{ sizeof(command::state_transfer_data), sizeof(command::state_transfer_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::release_subject, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::enable_debt, command_handler{ sizeof(command::make_leader_data), sizeof(command::make_leader_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::move_capital, command_handler{ sizeof(command::generic_location_data), sizeof(command::generic_location_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::toggle_unit_ai_control, command_handler{ sizeof(command::army_movement_data), sizeof(command::army_movement_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::toggle_mobilized_is_ai_controlled, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::toggle_interested_in_alliance, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::pbutton_script, command_handler{ sizeof(command::pbutton_data), sizeof(command::pbutton_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::nbutton_script, command_handler{ sizeof(command::nbutton_data), sizeof(command::nbutton_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{command_type::set_factory_type_priority, command_handler{ sizeof(command::set_factory_priority_data), sizeof(command::set_factory_priority_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::crisis_add_wargoal, command_handler{ sizeof(command::new_war_goal_data), sizeof(command::new_war_goal_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::change_land_unit_type, command_handler{ sizeof(command::change_land_unit_type_data), sizeof(command::change_land_unit_type_data) + (max_regiment_count * sizeof(dcon::regiment_id)), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::change_naval_unit_type, command_handler{ sizeof(command::change_naval_unit_type_data), sizeof(command::change_naval_unit_type_data) + (max_ship_count * sizeof(dcon::ship_id)), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::take_province, command_handler{ sizeof(command::generic_location_data), sizeof(command::generic_location_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::grant_province, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::ask_for_free_trade_agreement, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::switch_embargo_status, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::revoke_trade_rights, command_handler{ sizeof(command::diplo_action_data), sizeof(command::diplo_action_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::toggle_local_administration, command_handler{ sizeof(command::generic_location_data), sizeof(command::generic_location_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::stop_army_movement, command_handler{ sizeof(command::stop_army_movement_data), sizeof(command::stop_army_movement_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::stop_navy_movement, command_handler{ sizeof(command::stop_navy_movement_data), sizeof(command::stop_navy_movement_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::command_units, command_handler{ sizeof(command::command_units_data), sizeof(command::command_units_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::give_back_units, command_handler{ sizeof(command::command_units_data), sizeof(command::command_units_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::change_game_rule_setting, command_handler{ sizeof(command::change_gamerule_setting_data), sizeof(command::change_gamerule_setting_data), &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::toggle_production_directive, command_handler{ sizeof(command::production_directive_data), sizeof(command::production_directive_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::load_saved_game, command_handler{sizeof(command::load_save_game_data), sizeof(command::load_save_game_data) + FILENAME_MAX, &command_handler::false_is_host_receive_command, &command_handler::false_is_host_broadcast_command } },
	// network
	{ command_type::notify_oos_gamestate, command_handler{ sizeof(command::notify_oos_gamestate_data), sizeof(command::notify_oos_gamestate_data) + max_mp_state_size, &notify_oos_gamestate_is_host_receive_command, &command_handler::false_is_host_broadcast_command   } },
	{ command_type::notify_player_ban, command_handler{ sizeof(command::notify_player_ban_data), sizeof(command::notify_player_ban_data), &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::notify_player_kick, command_handler{ sizeof(command::notify_player_kick_data), sizeof(command::notify_player_kick_data), &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::notify_player_picks_nation, command_handler{ sizeof(command::nation_pick_data), sizeof(command::nation_pick_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::notify_player_joins, command_handler{ sizeof(command::notify_joins_data), sizeof(command::notify_joins_data), &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::notify_player_leaves, command_handler{ sizeof(command::notify_leaves_data), sizeof(command::notify_leaves_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::notify_player_oos, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::notify_save_loaded, command_handler{ sizeof(command::notify_save_loaded_data), sizeof(command::notify_save_loaded_data) + max_save_size, &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command, &pre_execution_broadcast_modifications_notify_save_loaded } },
	{ command_type::notify_start_game, command_handler{ 0, 0, &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::notify_stop_game, command_handler{ 0, 0, &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::notify_pause_game, command_handler{ 0, 0, &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::notify_reload, command_handler{ sizeof(command::notify_reload_data), sizeof(command::notify_reload_data), &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::advance_tick, command_handler{ sizeof(command::advance_tick_data), sizeof(command::advance_tick_data), &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::chat_message, command_handler{ sizeof(command::chat_message_data), sizeof(command::chat_message_data) + ui::max_chat_message_len, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::network_inactivity_ping, command_handler{ sizeof(command::advance_tick_data), sizeof(command::advance_tick_data), &command_handler::true_is_host_receive_command, &command_handler::false_is_host_broadcast_command } },
	{ command_type::notify_player_fully_loaded, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::notify_player_is_loading, command_handler{ 0, 0, &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::change_ai_nation_state, command_handler{ sizeof(command::change_ai_nation_state_data), sizeof(command::change_ai_nation_state_data), &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::network_populate, command_handler{ 0, 0, &command_handler::true_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
	{ command_type::console_command, command_handler{ 0, 0, &command_handler::false_is_host_receive_command, &command_handler::false_is_host_broadcast_command } },
	{ command_type::resync_lobby, command_handler{ 0, 0 , &command_handler::false_is_host_receive_command, &command_handler::false_is_host_broadcast_command } },
	{ command_type::notify_mp_data, command_handler{ sizeof(notify_mp_data_data), sizeof(notify_mp_data_data) + max_mp_data_size, &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command, &pre_execution_broadcast_modifications_notify_mp_data } },
	{ command_type::notify_player_timeout, command_handler{ sizeof(notify_player_timeout_data), sizeof(notify_player_timeout_data), &command_handler::false_is_host_receive_command, &command_handler::true_is_host_broadcast_command } },
};


// 判断主机是否应该广播命令或仅自身执行
bool is_host_broadcast_command(const sys::state& state, const command_data& command);

// 保存游戏
void save_game(sys::state& state, dcon::nation_id source, bool and_quit, const std::string& filename = "");

// 设置集结点
void set_rally_point(sys::state& state, dcon::nation_id source, dcon::province_id location, bool naval, bool enable);

// 判断是否为控制台命令
bool is_console_command(command_type t);

// 设置国家焦点
void set_national_focus(sys::state& state, dcon::nation_id source, dcon::state_instance_id target_state, dcon::national_focus_id focus);
// 判断是否可以设置国家焦点
bool can_set_national_focus(sys::state& state, dcon::nation_id source, dcon::state_instance_id target_state, dcon::national_focus_id focus);

// 开始研究
void start_research(sys::state& state, dcon::nation_id source, dcon::technology_id tech);
// 判断是否可以开始研究
bool can_start_research(sys::state& state, dcon::nation_id source, dcon::technology_id tech);

// 创建领袖
void make_leader(sys::state& state, dcon::nation_id source, bool general);
// 判断是否可以创建领袖
bool can_make_leader(sys::state& state, dcon::nation_id source, bool general);

// 设置工厂类型优先级
void set_factory_type_priority(sys::state& state, dcon::nation_id source, dcon::factory_type_id ftid, float value);
// 判断是否可以设置工厂类型优先级
bool can_set_factory_type_priority(sys::state& state, dcon::nation_id source, dcon::factory_type_id ftid, float value);

// 降低关系
void decrease_relations(sys::state& state, dcon::nation_id source, dcon::nation_id target);
// 判断是否可以降低关系
bool can_decrease_relations(sys::state& state, dcon::nation_id source, dcon::nation_id target);

// 开始省份建筑建造
void begin_province_building_construction(sys::state& state, dcon::nation_id source, dcon::province_id p, economy::province_building_type type);
// 判断是否可以开始省份建筑建造
bool can_begin_province_building_construction(sys::state& state, dcon::nation_id source, dcon::province_id p, economy::province_building_type type);

// 开始工厂建造
void begin_factory_building_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::factory_type_id type, bool is_upgrade, dcon::factory_type_id refit_target = dcon::factory_type_id{});
// 判断是否可以开始工厂建造
bool can_begin_factory_building_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::factory_type_id type, bool is_upgrade, dcon::factory_type_id refit_target = dcon::factory_type_id{});

// 取消工厂建造
void cancel_factory_building_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::factory_type_id type);
// 判断是否可以取消工厂建造
bool can_cancel_factory_building_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::factory_type_id type);

// 开始海军单位建造
void start_naval_unit_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::unit_type_id type, dcon::province_id template_province = dcon::province_id{});
// 判断是否可以开始海军单位建造
bool can_start_naval_unit_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::unit_type_id type, dcon::province_id template_province = dcon::province_id{});
// 执行开始海军单位建造
void execute_start_naval_unit_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::unit_type_id type, dcon::province_id template_province = dcon::province_id{});

// 开始陆军单位建造
void start_land_unit_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::culture_id soldier_culture, dcon::unit_type_id type, dcon::province_id template_province = dcon::province_id{});

template <bool VALIDATE>
// 判断是否可以开始陆军单位建造
bool can_start_land_unit_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::culture_id soldier_culture, dcon::unit_type_id type, dcon::province_id template_province = dcon::province_id{});

// 执行开始陆军单位建造
void execute_start_land_unit_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::culture_id soldier_culture, dcon::unit_type_id type, dcon::province_id template_province = dcon::province_id{});

// 取消海军单位建造
void cancel_naval_unit_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::unit_type_id type);
// 判断是否可以取消海军单位建造
bool can_cancel_naval_unit_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::unit_type_id type);

// 取消陆军单位建造
void cancel_land_unit_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::culture_id soldier_culture, dcon::unit_type_id type);
// 判断是否可以取消陆军单位建造
bool can_cancel_land_unit_construction(sys::state& state, dcon::nation_id source, dcon::province_id location, dcon::culture_id soldier_culture, dcon::unit_type_id type);

// 删除工厂
void delete_factory(sys::state& state, dcon::nation_id source, dcon::factory_id f);
// 判断是否可以删除工厂
bool can_delete_factory(sys::state& state, dcon::nation_id source, dcon::factory_id f);

// 修改工厂设置
void change_factory_settings(sys::state& state, dcon::nation_id source, dcon::factory_id f, uint8_t priority, bool subsidized);
// 判断是否可以修改工厂设置
bool can_change_factory_settings(sys::state& state, dcon::nation_id source, dcon::factory_id f, uint8_t priority, bool subsidized);

// 建立附庸国
void make_vassal(sys::state& state, dcon::nation_id source, dcon::national_identity_id t);
// 判断是否可以建立附庸国
bool can_make_vassal(sys::state& state, dcon::nation_id source, dcon::national_identity_id t);

// 释放并扮演
void release_and_play_as(sys::state& state, dcon::nation_id source, dcon::national_identity_id t);
// 判断是否可以释放并扮演
bool can_release_and_play_as(sys::state& state, dcon::nation_id source, dcon::national_identity_id t, dcon::mp_player_id player);

// 给予战争补贴
void give_war_subsidies(sys::state& state, dcon::nation_id source, dcon::nation_id target);
// 判断是否可以给予战争补贴
bool can_give_war_subsidies(sys::state& state, dcon::nation_id source, dcon::nation_id target);

// 取消战争补贴
void cancel_war_subsidies(sys::state& state, dcon::nation_id source, dcon::nation_id target);
// 判断是否可以取消战争补贴
bool can_cancel_war_subsidies(sys::state& state, dcon::nation_id source, dcon::nation_id target);

// 提升关系
void increase_relations(sys::state& state, dcon::nation_id source, dcon::nation_id target);
// 判断是否可以提升关系
bool can_increase_relations(sys::state& state, dcon::nation_id source, dcon::nation_id target);

// 创建空的预算设置
inline budget_settings_data make_empty_budget_settings() {
	return budget_settings_data{
		.education_spending = int8_t(-127),
		.military_spending = int8_t(-127),
		.administrative_spending = int8_t(-127),
		.social_spending = int8_t(-127),
		.land_spending = int8_t(-127),
		.naval_spending = int8_t(-127),
		.construction_spending = int8_t(-127),
		.poor_tax = int8_t(-127),
		.middle_tax = int8_t(-127),
		.rich_tax = int8_t(-127),
		.tariffs_import = int8_t(-127),
		.tariffs_export = int8_t(-127),
		.domestic_investment = int8_t(-127),
		.overseas = int8_t(-127),
		.subsidies = int8_t(-127)
	};
}
// 发送新的预算设置时，将任何值保留为int8_t(-127)将导致该值被忽略，保持设置不变
// 您可以使用上面的函数轻松创建一个不会更改任何值的设置结构体实例
// 另外，考虑到未来的网络性能，不要在滑块移动时发送此命令；仅在以下情况发送：
// 玩家停止拖动滑块时（在拖动的情况下），或者甚至仅在窗口关闭/一天过去时
// 窗口打开时，如果您认为我们可以侥幸逃脱的话。无论如何，我们希望尽量减少命令的发送次数
// 每次与预算交互的平均发送次数。
void change_budget_settings(sys::state& state, dcon::nation_id source, budget_settings_data const& values);
// 判断是否可以修改预算设置
inline bool can_change_budget_settings(sys::state& state, dcon::nation_id source, budget_settings_data const& values);

// 开始选举
void start_election(sys::state& state, dcon::nation_id source);
// 判断是否可以开始选举
bool can_start_election(sys::state& state, dcon::nation_id source);

// 修改影响优先级
void change_influence_priority(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, uint8_t priority);
// 判断是否可以修改影响优先级
bool can_change_influence_priority(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, uint8_t priority);

// 败坏顾问名誉
void discredit_advisors(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);
// 判断是否可以败坏顾问名誉
bool can_discredit_advisors(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);

// 驱逐顾问
void expel_advisors(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);
// 判断是否可以驱逐顾问
bool can_expel_advisors(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);

// 禁止大使馆
void ban_embassy(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);
// 判断是否可以禁止大使馆
bool can_ban_embassy(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);

// 提升好感度
void increase_opinion(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target);
// 判断是否可以提升好感度
bool can_increase_opinion(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target);
// 执行提升好感度
void execute_increase_opinion(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target);

// 降低好感度
void decrease_opinion(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);
// 判断是否可以降低好感度
bool can_decrease_opinion(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);
// 执行降低好感度
void execute_decrease_opinion(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);

// 加入势力范围
void add_to_sphere(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target);
// 判断是否可以加入势力范围
bool can_add_to_sphere(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target);
// 执行加入势力范围
void execute_add_to_sphere(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target);

// 移出势力范围
void remove_from_sphere(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);
// 判断是否可以移出势力范围
bool can_remove_from_sphere(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);
// 执行移出势力范围
void execute_remove_from_sphere(sys::state& state, dcon::nation_id source, dcon::nation_id influence_target, dcon::nation_id affected_gp);

// 将殖民地升级为州
void upgrade_colony_to_state(sys::state& state, dcon::nation_id source, dcon::state_instance_id si);
// 判断是否可以将殖民地升级为州
bool can_upgrade_colony_to_state(sys::state& state, dcon::nation_id source, dcon::state_instance_id si);

// 投资殖民地
void invest_in_colony(sys::state& state, dcon::nation_id source, dcon::province_id p);
// 判断是否可以投资殖民地
bool can_invest_in_colony(sys::state& state, dcon::nation_id source, dcon::province_id p);

// 放弃殖民地
void abandon_colony(sys::state& state, dcon::nation_id source, dcon::province_id p);
// 判断是否可以放弃殖民地
bool can_abandon_colony(sys::state& state, dcon::nation_id source, dcon::province_id p);

// 完成殖民化
void finish_colonization(sys::state& state, dcon::nation_id source, dcon::state_definition_id d);
// 判断是否可以完成殖民化
bool can_finish_colonization(sys::state& state, dcon::nation_id source, dcon::state_definition_id d);

// 介入战争
void intervene_in_war(sys::state& state, dcon::nation_id source, dcon::war_id w, bool for_attacker);
// 判断是否可以介入战争
bool can_intervene_in_war(sys::state& state, dcon::nation_id source, dcon::war_id w, bool for_attacker);
// 执行介入战争
void execute_intervene_in_war(sys::state& state, dcon::nation_id source, dcon::war_id w, bool for_attacker);

// 镇压运动
void suppress_movement(sys::state& state, dcon::nation_id source, dcon::movement_id m);
// 判断是否可以镇压运动
bool can_suppress_movement(sys::state& state, dcon::nation_id source, dcon::movement_id m);

// 开化国家
void civilize_nation(sys::state& state, dcon::nation_id source);
// 判断是否可以开化国家
bool can_civilize_nation(sys::state& state, dcon::nation_id source);
// 执行开化国家
void execute_civilize_nation(sys::state& state, dcon::nation_id source);

// 任命执政党
void appoint_ruling_party(sys::state& state, dcon::nation_id source, dcon::political_party_id p);
// 判断是否可以任命执政党
bool can_appoint_ruling_party(sys::state& state, dcon::nation_id source, dcon::political_party_id p);
// 执行任命执政党
void execute_appoint_ruling_party(sys::state& state, dcon::nation_id source, dcon::political_party_id p);

// 颁布改革
void enact_reform(sys::state& state, dcon::nation_id source, dcon::reform_option_id r);
// 判断是否可以颁布改革
bool can_enact_reform(sys::state& state, dcon::nation_id source, dcon::reform_option_id r);

// 颁布议题
void enact_issue(sys::state& state, dcon::nation_id source, dcon::issue_option_id i);
// 判断是否可以颁布议题
bool can_enact_issue(sys::state& state, dcon::nation_id source, dcon::issue_option_id i);

// 对危机产生兴趣
void become_interested_in_crisis(sys::state& state, dcon::nation_id source);
// 判断是否可以对危机产生兴趣
bool can_become_interested_in_crisis(sys::state& state, dcon::nation_id source);

// 在危机中选边站
void take_sides_in_crisis(sys::state& state, dcon::nation_id source, bool join_attacker);
// 判断是否可以在危机中选边站
bool can_take_sides_in_crisis(sys::state& state, dcon::nation_id source, bool join_attacker);

// 修改储备设置
void change_stockpile_settings(sys::state& state, dcon::nation_id source, dcon::commodity_id c, float target_amount, bool draw_on_stockpiles);
// 判断是否可以修改储备设置
bool can_change_stockpile_settings(sys::state& state, dcon::nation_id source, dcon::commodity_id c, float target_amount, bool draw_on_stockpiles);

// 通过决议
void take_decision(sys::state& state, dcon::nation_id source, dcon::decision_id d);
// 判断是否可以通过决议
bool can_take_decision(sys::state& state, dcon::nation_id source, dcon::decision_id d);
// 执行通过决议
void execute_take_decision(sys::state& state, dcon::nation_id source, dcon::decision_id d);

// 做出事件选择
void make_event_choice(sys::state& state, event::pending_human_n_event const& e, uint8_t option_id);
// 做出事件选择
void make_event_choice(sys::state& state, event::pending_human_f_n_event const& e, uint8_t option_id);
// 做出事件选择
void make_event_choice(sys::state& state, event::pending_human_p_event const& e, uint8_t option_id);
// 做出事件选择
void make_event_choice(sys::state& state, event::pending_human_f_p_event const& e, uint8_t option_id);

// 伪造战争借口
void fabricate_cb(sys::state& state, dcon::nation_id source, dcon::nation_id target, dcon::cb_type_id type, dcon::state_definition_id target_state = dcon::state_definition_id{});
// 判断是否可以伪造战争借口
bool can_fabricate_cb(sys::state& state, dcon::nation_id source, dcon::nation_id target, dcon::cb_type_id type, dcon::state_definition_id target_state = dcon::state_definition_id{});

// 取消战争借口伪造
void cancel_cb_fabrication(sys::state& state, dcon::nation_id source);
// 判断是否可以取消战争借口伪造
bool can_cancel_cb_fabrication(sys::state& state, dcon::nation_id source);

// 请求军事通行权
void ask_for_military_access(sys::state& state, dcon::nation_id asker, dcon::nation_id target);
// 判断是否可以请求通行权
bool can_ask_for_access(sys::state& state, dcon::nation_id asker, dcon::nation_id target, bool ignore_cost = false);

// 给予军事通行权
void give_military_access(sys::state& state, dcon::nation_id asker, dcon::nation_id target);
// 判断是否可以给予军事通行权
bool can_give_military_access(sys::state& state, dcon::nation_id asker, dcon::nation_id target, bool ignore_cost = false);

// 请求同盟
void ask_for_alliance(sys::state& state, dcon::nation_id asker, dcon::nation_id target);
// 判断是否可以请求同盟
bool can_ask_for_alliance(sys::state& state, dcon::nation_id asker, dcon::nation_id target, bool ignore_cost = false);
// 执行请求同盟
void execute_ask_for_alliance(sys::state& state, dcon::nation_id asker, dcon::nation_id target);

// 切换对同盟的兴趣状态
void toggle_interested_in_alliance(sys::state& state, dcon::nation_id asker, dcon::nation_id target);
// 判断是否可以切换对同盟的兴趣状态
bool can_toggle_interested_in_alliance(sys::state& state, dcon::nation_id asker, dcon::nation_id target);

// 请求自由贸易协定
void ask_for_free_trade_agreement(sys::state& state, dcon::nation_id asker, dcon::nation_id target);
// 判断是否可以请求自由贸易协定
bool can_ask_for_free_trade_agreement(sys::state& state, dcon::nation_id asker, dcon::nation_id target, bool ignore_cost = false);

// 切换禁运状态
void switch_embargo_status(sys::state& state, dcon::nation_id asker, dcon::nation_id target);
// 判断是否可以切换禁运状态
bool can_switch_embargo_status(sys::state& state, dcon::nation_id asker, dcon::nation_id target, bool ignore_cost = false);
// AI直接使用此函数
void execute_switch_embargo_status(sys::state& state, dcon::nation_id asker, dcon::nation_id target);

// 撤销贸易权
void revoke_trade_rights(sys::state& state, dcon::nation_id source, dcon::nation_id target);
// 判断是否可以撤销贸易权
bool can_revoke_trade_rights(sys::state& state, dcon::nation_id source, dcon::nation_id target, bool ignore_cost = false);

// 判断是否可以归还单位
bool can_give_back_units(sys::state& state, dcon::nation_id asker, dcon::nation_id target);
// 归还单位
void give_back_units(sys::state& state, dcon::nation_id asker, dcon::nation_id target);

// 判断是否可以指挥单位
bool can_command_units(sys::state& state, dcon::nation_id asker, dcon::nation_id target);
// 指挥单位
void command_units(sys::state& state, dcon::nation_id asker, dcon::nation_id target);

// 号召武装
void call_to_arms(sys::state& state, dcon::nation_id asker, dcon::nation_id target, dcon::war_id w, bool automatic_call = false);
// 执行号召武装
void execute_call_to_arms(sys::state& state, dcon::nation_id asker, dcon::nation_id target, dcon::war_id w, bool automatic_call);
// 判断是否可以号召武装
bool can_call_to_arms(sys::state& state, dcon::nation_id asker, dcon::nation_id target, dcon::war_id w, bool ignore_cost = false, bool automatic_call = false);

// 回应外交消息
void respond_to_diplomatic_message(sys::state& state, dcon::nation_id source, dcon::nation_id from, diplomatic_message::type type, bool accept);

// 取消军事通行权
void cancel_military_access(sys::state& state, dcon::nation_id source, dcon::nation_id target);
// 判断是否可以取消军事通行权
bool can_cancel_military_access(sys::state& state, dcon::nation_id source, dcon::nation_id target, bool ignore_cost = false);

// 取消同盟
void cancel_alliance(sys::state& state, dcon::nation_id source, dcon::nation_id target);
// 判断是否可以取消同盟
bool can_cancel_alliance(sys::state& state, dcon::nation_id source, dcon::nation_id target, bool ignore_cost = false);
// 执行取消同盟
void execute_cancel_alliance(sys::state& state, dcon::nation_id source, dcon::nation_id target);

// 取消已给予的军事通行权
void cancel_given_military_access(sys::state& state, dcon::nation_id source, dcon::nation_id target); // this is for cancelling the access someone has with you
// 判断是否可以取消已给予的军事通行权
bool can_cancel_given_military_access(sys::state& state, dcon::nation_id source, dcon::nation_id target, bool ignore_cost = false);

// 宣战
void declare_war(sys::state& state, dcon::nation_id source, dcon::nation_id target, dcon::cb_type_id primary_cb, dcon::state_definition_id cb_state, dcon::national_identity_id cb_tag, dcon::nation_id cb_secondary_nation, bool call_attacker_allies, bool run_conference);
template<bool VALIDATE>
// 判断是否可以宣战
bool can_declare_war(sys::state& state, dcon::nation_id source, dcon::nation_id target, dcon::cb_type_id primary_cb, dcon::state_definition_id cb_state, dcon::national_identity_id cb_tag, dcon::nation_id cb_secondary_nation);
// 执行宣战
void execute_declare_war(sys::state& state, dcon::nation_id source, dcon::nation_id target, dcon::cb_type_id primary_cb, dcon::state_definition_id cb_state, dcon::national_identity_id cb_tag, dcon::nation_id cb_secondary_nation, bool call_attacker_allies, bool run_conference);

// 添加战争目标
void add_war_goal(sys::state& state, dcon::nation_id source, dcon::war_id w, dcon::nation_id target, dcon::cb_type_id primary_cb, dcon::state_definition_id cb_state, dcon::national_identity_id cb_tag, dcon::nation_id cb_secondary_nation);
// 判断是否可以添加战争目标
bool can_add_war_goal(sys::state& state, dcon::nation_id source, dcon::war_id w, dcon::nation_id target, dcon::cb_type_id primary_cb, dcon::state_definition_id cb_state, dcon::national_identity_id cb_tag, dcon::nation_id cb_secondary_nation);

// 停止陆军移动
void stop_army_movement(sys::state& state, dcon::nation_id source, dcon::army_id army);
// 判断是否可以停止陆军移动
bool can_stop_army_movement(sys::state& state, dcon::nation_id source, dcon::army_id army);

// 停止海军移动
void stop_navy_movement(sys::state& state, dcon::nation_id source, dcon::navy_id navy);
// 判断是否可以停止海军移动
bool can_stop_navy_movement(sys::state& state, dcon::nation_id source, dcon::navy_id navy);

// 注意：发送无效的省份ID将停止陆军或海军的移动；
//     否则，如果有当前目的地，路径将被追加到其后
// 因此，如果您想将单位从当前位置移动到新位置，
//     首先停止其当前移动，然后作为第二个命令发送新目的地
// 另外：如果无法找到路径，则返回空向量
void move_army(sys::state& state, dcon::nation_id source, dcon::army_id a, dcon::province_id dest, bool reset, military::special_army_order order = military::special_army_order::none);
// 计算陆军路径
std::vector<dcon::province_id> calculate_army_path(sys::state& state, dcon::nation_id source, dcon::army_id a, dcon::province_id last_province, dcon::province_id dest);

// 判断是否可以移动陆军
std::vector<dcon::province_id> can_move_army(sys::state& state, dcon::nation_id source, dcon::army_id a, dcon::province_id dest, bool reset = true);
// 执行移动陆军
void execute_move_army(sys::state& state, dcon::nation_id source, dcon::army_id a, dcon::province_id dest, bool reset, military::special_army_order special_order);

// 移动海军
void move_navy(sys::state& state, dcon::nation_id source, dcon::navy_id n, dcon::province_id dest, bool reset);
// 计算海军路径
std::vector<dcon::province_id> calculate_navy_path(sys::state & state, dcon::nation_id source, dcon::navy_id n, dcon::province_id last_province, dcon::province_id dest);
// 判断是否可以移动海军
std::vector<dcon::province_id> can_move_navy(sys::state& state, dcon::nation_id source, dcon::navy_id n, dcon::province_id dest, bool reset = true);


// 包装函数：检查给定的陆军是否可以移动到指定目的地，或者如果目的省份等于当前陆军位置则停止移动
// 此函数中的移动始终是非Shift点击行为，即旧路径将被清除，新路径将覆盖它。
bool can_retreat_move_or_stop_army(sys::state& state, dcon::nation_id source, dcon::army_id a, dcon::province_id dest);

// 包装函数：检查给定的海军是否可以移动到指定目的地，或者如果目的省份等于当前海军位置则停止移动
// 此函数中的移动始终是非Shift点击行为，即旧路径将被清除，新路径将覆盖它。
bool can_move_retreat_or_stop_navy(sys::state& state, dcon::nation_id source, dcon::navy_id n, dcon::province_id dest);

// 包装函数：如果陆军位置等于目的地，则向队列添加停止移动命令，否则添加移动命令
// 此函数中的移动始终是非Shift点击行为，即旧路径将被清除，新路径将覆盖它。
void move_retreat_or_stop_army(sys::state& state, dcon::nation_id source, dcon::army_id a, dcon::province_id dest, military::special_army_order order);

// 包装函数：如果海军位置等于目的地，则向队列添加停止移动命令，否则添加移动命令
// 此函数中的移动始终是非Shift点击行为，即旧路径将被清除，新路径将覆盖它。
void move_retreat_or_stop_navy(sys::state& state, dcon::nation_id source, dcon::navy_id n, dcon::province_id dest);

// 执行移动海军
void execute_move_navy(sys::state& state, dcon::nation_id source, dcon::navy_id n, dcon::province_id dest, bool reset);


// 此命令用于在运输船停靠在港口时让陆军上下运输船
// 如果陆军已经登船，它将下船；如果没有登船，它将登船
// 让陆军登上/离开近海的船只的方法是将陆军移动到海洋/陆地格子。
void embark_army(sys::state& state, dcon::nation_id source, dcon::army_id a);
// 判断是否可以让陆军登船
bool can_embark_army(sys::state& state, dcon::nation_id source, dcon::army_id a);

// 合并陆军
void merge_armies(sys::state& state, dcon::nation_id source, dcon::army_id a, dcon::army_id b);
// 判断是否可以合并陆军
bool can_merge_armies(sys::state& state, dcon::nation_id source, dcon::army_id a, dcon::army_id b);

// 合并海军
void merge_navies(sys::state& state, dcon::nation_id source, dcon::navy_id a, dcon::navy_id b);
// 判断是否可以合并海军
bool can_merge_navies(sys::state& state, dcon::nation_id source, dcon::navy_id a, dcon::navy_id b);
// 执行合并海军
void execute_merge_navies(sys::state& state, dcon::nation_id source, dcon::navy_id a, dcon::navy_id b);

// 拆分陆军
void split_army(sys::state& state, dcon::nation_id source, dcon::army_id a, std::span<const dcon::regiment_id> regiments_to_split, fixed_bool_t select_both_armies = false);

// 解散人员不足的团
void disband_undermanned_regiments(sys::state& state, dcon::nation_id source, dcon::army_id a);
// 判断是否可以解散人员不足的团
bool can_disband_undermanned_regiments(sys::state& state, dcon::nation_id source, dcon::army_id a);

// 拆分海军
void split_navy(sys::state& state, dcon::nation_id source, dcon::navy_id a, std::span<const dcon::ship_id> ships_to_split, fixed_bool_t select_both_armies = false);

// 更改陆军单位类型
void change_land_unit_type(sys::state& state, dcon::nation_id source, std::span<const dcon::regiment_id> regiments, dcon::unit_type_id new_type);
// 判断是否可以更改陆军单位类型
bool can_change_land_unit_type(sys::state& state, dcon::nation_id source, command_data& command);
// 执行更改陆军单位类型
void execute_change_land_unit_type(sys::state& state, dcon::nation_id source, std::span<const dcon::regiment_id> regiments, dcon::unit_type_id new_type);

// 更改海军单位类型
void change_naval_unit_type(sys::state& state, dcon::nation_id source, std::span<const dcon::ship_id> ships, dcon::unit_type_id new_type);


// 切换清剿叛军状态
void toggle_rebel_hunting(sys::state& state, dcon::nation_id source, dcon::army_id a);
// 切换单位AI控制状态
void toggle_unit_ai_control(sys::state& state, dcon::nation_id source, dcon::army_id a);
// 切换动员单位是否由AI控制
void toggle_mobilized_is_ai_controlled(sys::state& state, dcon::nation_id source);

// 删除陆军
void delete_army(sys::state& state, dcon::nation_id source, dcon::army_id a);
// 判断是否可以删除陆军
bool can_delete_army(sys::state& state, dcon::nation_id source, dcon::army_id a);

// 删除海军
void delete_navy(sys::state& state, dcon::nation_id source, dcon::navy_id a);
// 判断是否可以删除海军
bool can_delete_navy(sys::state& state, dcon::nation_id source, dcon::navy_id a);


// 从海战中撤退
void retreat_from_naval_battle(sys::state& state, dcon::nation_id source, dcon::navy_id navy, dcon::province_id dest = dcon::province_id{ });
// 判断是否可以从海战中撤退
std::vector<dcon::province_id> can_retreat_from_naval_battle(sys::state& state, dcon::nation_id source, dcon::navy_id navy, military::retreat_type retreat_type, dcon::province_id dest = dcon::province_id{ });

// 从陆战中撤退
void retreat_from_land_battle(sys::state& state, dcon::nation_id source, dcon::army_id army, military::retreat_type retreat_type, dcon::province_id dest = dcon::province_id{ });
// 判断是否可以从陆战中撤退
std::vector<dcon::province_id> can_retreat_from_land_battle(sys::state& state, dcon::nation_id source, dcon::army_id army, military::retreat_type retreat_type, dcon::province_id dest = dcon::province_id{ });

// 更换将军
void change_general(sys::state& state, dcon::nation_id source, dcon::army_id a, dcon::leader_id l);
// 判断是否可以更换将军
bool can_change_general(sys::state& state, dcon::nation_id source, dcon::army_id a, dcon::leader_id l);

// 更换海军上将
void change_admiral(sys::state& state, dcon::nation_id source, dcon::navy_id a, dcon::leader_id l);
// 判断是否可以更换海军上将
bool can_change_admiral(sys::state& state, dcon::nation_id source, dcon::navy_id a, dcon::leader_id l);

// 邀请加入危机
void invite_to_crisis(sys::state& state, dcon::nation_id source, dcon::nation_id invitation_to, dcon::nation_id target, dcon::cb_type_id primary_cb, dcon::state_definition_id cb_state, dcon::national_identity_id cb_tag, dcon::nation_id cb_secondary_nation);
// 判断是否可以邀请加入危机
bool can_invite_to_crisis(sys::state& state, dcon::nation_id source, dcon::nation_id invitation_to, dcon::nation_id target, dcon::cb_type_id primary_cb, dcon::state_definition_id cb_state, dcon::national_identity_id cb_tag, dcon::nation_id cb_secondary_nation);

// 判断危机中是否可以添加战争目标
bool crisis_can_add_wargoal(sys::state& state, dcon::nation_id source, sys::full_wg wg);
// 将添加战争目标加入危机队列
void queue_crisis_add_wargoal(sys::state& state, dcon::nation_id source, sys::full_wg wg);
// 执行危机添加战争目标
void execute_crisis_add_wargoal(sys::state& state, dcon::nation_id source, new_war_goal_data const& data);

// 切换动员状态
void toggle_mobilization(sys::state& state, dcon::nation_id source);

// 启用债务
void enable_debt(sys::state& state, dcon::nation_id source, bool debt_is_enabled);

// 迁都
void move_capital(sys::state& state, dcon::nation_id source, dcon::province_id p);
// 判断是否可以迁都
bool can_move_capital(sys::state& state, dcon::nation_id source, dcon::province_id p);

// 切换地方行政状态
void toggle_local_administration(sys::state& state, dcon::nation_id source, dcon::province_id p);
// 判断是否可以切换地方行政状态
bool can_toggle_local_administration(sys::state& state, dcon::nation_id source, dcon::province_id p);

// 占领省份
void take_province(sys::state& state, dcon::nation_id source, dcon::province_id prov);
// 判断是否可以占领省份
bool can_take_province(sys::state& state, dcon::nation_id source, dcon::province_id p);
// 执行占领省份
void execute_take_province(sys::state& state, dcon::nation_id source, dcon::province_id p);

// 使用省份按钮
void use_province_button(sys::state& state, dcon::nation_id source, dcon::gui_def_id d, dcon::province_id p);
// 判断是否可以使用省份按钮
bool can_use_province_button(sys::state& state, dcon::nation_id source, dcon::gui_def_id d, dcon::province_id p);

// 使用国家按钮
void use_nation_button(sys::state& state, dcon::nation_id source, dcon::gui_def_id d, dcon::nation_id n);
// 判断是否可以使用国家按钮
bool can_use_nation_button(sys::state& state, dcon::nation_id source, dcon::gui_def_id d, dcon::nation_id n);

// 切换生产指令
void toggle_production_directive(sys::state& state, dcon::nation_id source, dcon::state_instance_id for_state, dcon::production_directive_id directive);
// 执行切换生产指令
void execute_toggle_production_directive(sys::state& state, dcon::nation_id source, dcon::state_instance_id for_state, dcon::production_directive_id directive);

/*
PEACE OFFER COMMANDS:

IMPORTANT:
Even though these are separate commands, they should be sent as a single sequence with no intermediate other commands:
send start_peace_offer then repeat add_to_peace_offer to populate it, and then send_peace_offer to finish the process
DO NOT attempt to issue these commands as the player constructs the offer in the ui
Note that crisis offers are constructed in basically the same way. You cannot have a normal peace offer under construction / in
flight while constructing / offering a crisis peace offer
*/

void start_peace_offer(sys::state& state, dcon::nation_id source, dcon::nation_id target, dcon::war_id war, bool is_concession);
// 判断是否可以开始和平提议
bool can_start_peace_offer(sys::state& state, dcon::nation_id source, dcon::nation_id target, dcon::war_id war, bool is_concession);
// 执行开始和平提议
void execute_start_peace_offer(sys::state& state, dcon::nation_id source, dcon::nation_id target, dcon::war_id war, bool is_concession);

// 添加到和平提议
void add_to_peace_offer(sys::state& state, dcon::nation_id source, dcon::wargoal_id goal);
// 判断是否可以添加到和平提议
bool can_add_to_peace_offer(sys::state& state, dcon::nation_id source, dcon::wargoal_id goal);
// 执行添加到和平提议
void execute_add_to_peace_offer(sys::state& state, dcon::nation_id source, dcon::wargoal_id goal);

// 发送和平提议
void send_peace_offer(sys::state& state, dcon::nation_id source);
// 判断是否可以发送和平提议
bool can_send_peace_offer(sys::state& state, dcon::nation_id source);
// 执行发送和平提议
void execute_send_peace_offer(sys::state& state, dcon::nation_id source);

// 危机和平提议命令

void start_crisis_peace_offer(sys::state& state, dcon::nation_id source, bool is_concession);
template <bool VALIDATE>
// 判断是否可以开始危机和平提议
bool can_start_crisis_peace_offer(sys::state& state, dcon::nation_id source, bool is_concession);
// 执行开始危机和平提议
void execute_start_crisis_peace_offer(sys::state& state, dcon::nation_id source, bool is_concession);

// 添加到危机和平提议
void add_to_crisis_peace_offer(sys::state& state, dcon::nation_id source, dcon::nation_id wargoal_from, dcon::nation_id target, dcon::cb_type_id primary_cb, dcon::state_definition_id cb_state, dcon::national_identity_id cb_tag, dcon::nation_id cb_secondary_nation);
template <bool VALIDATE>
// 判断是否可以添加到危机和平提议
bool can_add_to_crisis_peace_offer(sys::state& state, dcon::nation_id source, dcon::nation_id wargoal_from, dcon::nation_id target, dcon::cb_type_id primary_cb, dcon::state_definition_id cb_state, dcon::national_identity_id cb_tag, dcon::nation_id cb_secondary_nation);

// 发送危机和平提议
void send_crisis_peace_offer(sys::state& state, dcon::nation_id source);
// 判断是否可以发送危机和平提议
bool can_send_crisis_peace_offer(sys::state& state, dcon::nation_id source);
// 执行发送危机和平提议
void execute_send_crisis_peace_offer(sys::state& state, dcon::nation_id source);

// 切换省份选择状态
void toggle_select_province(sys::state& state, dcon::nation_id source, dcon::province_id p);
// 判断是否可以切换省份选择状态
bool can_toggle_select_province(sys::state& state, dcon::nation_id source, dcon::province_id p);

// 切换移民目标省份状态
void toggle_immigrator_province(sys::state& state, dcon::nation_id source, dcon::province_id prov);
// 判断是否可以切换移民目标省份状态
bool can_toggle_immigrator_province(sys::state& state, dcon::nation_id source, dcon::province_id prov);

// 发布聊天消息
void post_chat_message(sys::state& state, ui::chat_message& m);
// 创建并发布消息
void create_and_post_message(sys::state& state, dcon::mp_player_id sender, std::string_view body, const network::chat_message_targets& targets);
// 聊天消息
void chat_message(sys::state& state, const network::chat_message_targets& targets, std::string_view body, bool send_to_all = false);
// 判断是否可以发送聊天消息
bool can_chat_message(sys::state& state, command_data& command);

// 修改游戏规则设置
void change_gamerule_setting(sys::state& state, dcon::nation_id source, dcon::gamerule_id gamerule, uint8_t new_setting);
// 判断是否可以修改游戏规则设置
bool can_change_gamerule_setting(sys::state& state, dcon::nation_id source, dcon::gamerule_id gamerule, uint8_t new_setting);

// 释放附属国
void release_subject(sys::state& state, dcon::nation_id source, dcon::nation_id target);
// 判断是否可以释放附属国
bool can_release_subject(sys::state& state, dcon::nation_id source, dcon::nation_id target);

// 州转让
void state_transfer(sys::state& state, dcon::nation_id asker, dcon::nation_id target, dcon::state_definition_id sid);
// 判断是否可以州转让
bool can_state_transfer(sys::state& state, dcon::nation_id asker, dcon::nation_id target, dcon::state_definition_id sid);

// 通知游戏状态不同步
void notify_oos_gamestate(sys::state& state, dcon::nation_id source);

// 推进游戏帧
void advance_tick(sys::state& state, dcon::nation_id source);
// 通知玩家被封禁
void notify_player_ban(sys::state& state, dcon::nation_id source, bool make_ai, dcon::mp_player_id banned_player);
// 判断是否可以通知玩家被封禁
bool can_notify_player_ban(sys::state& state, dcon::nation_id source, dcon::mp_player_id banned_player);
// 通知玩家被踢出
void notify_player_kick(sys::state& state, dcon::nation_id source, bool make_ai, dcon::mp_player_id kicked_player);
// 判断是否可以通知玩家被踢出
bool can_notify_player_kick(sys::state& state, dcon::nation_id source, dcon::mp_player_id kicked_player);
// 通知玩家加入
void notify_player_joins(sys::state& state, dcon::client_id client, const sys::player_name& name, bool needs_loading, dcon::nation_id player_nation, network::selector_arg arg, bool host_execute, network::selector_function client_selector);
// 判断是否可以通知玩家加入
bool can_notify_player_joins(sys::state& state, dcon::nation_id source, const sys::player_name& name, const sys::player_password_raw& password, bool needs_loading, dcon::nation_id player_nation);
// 通知玩家离开
void notify_player_leaves(sys::state& state, dcon::nation_id source, bool make_ai, dcon::mp_player_id leaving_player);
// 判断是否可以通知玩家离开
bool can_notify_player_leaves(sys::state& state, dcon::nation_id source, bool make_ai, dcon::mp_player_id leaving_player);
// 通知玩家选择国家
void notify_player_picks_nation(sys::state& state, dcon::nation_id source, dcon::nation_id target);
// 判断是否可以通知玩家选择国家
bool can_notify_player_picks_nation(sys::state& state, dcon::nation_id source, dcon::nation_id target, dcon::mp_player_id player);
// 执行通知玩家选择国家
void execute_notify_player_picks_nation(sys::state& state, dcon::nation_id source, dcon::nation_id target, dcon::mp_player_id player);
// 通知玩家不同步
void notify_player_oos(sys::state& state, dcon::nation_id source);
// 通知存档已加载
void notify_save_loaded(sys::state& state, network::selector_arg arg, bool host_execute, network::selector_function client_selector);
// 通知重新加载
void notify_reload(sys::state& state, network::selector_arg arg, bool host_execute, network::selector_function client_selector);
// 判断是否可以通知开始游戏
bool can_notify_start_game(sys::state& state, dcon::nation_id source);
// 通知开始游戏
void notify_start_game(sys::state& state, network::selector_arg arg, bool host_execute, network::selector_function client_selector);
// 通知开始游戏
void notify_start_game(sys::state& state);
// 通知玩家正在加载
void notify_player_is_loading(sys::state& state, dcon::mp_player_id loading_player);
// 执行通知玩家正在加载
void execute_notify_player_is_loading(sys::state& state, dcon::mp_player_id loading_player);
// 通知玩家加载完成
void notify_player_fully_loaded(sys::state& state, dcon::nation_id source);
// 判断是否可以通知停止游戏
bool can_notify_stop_game(sys::state& state, dcon::nation_id source);
// 通知停止游戏
void notify_stop_game(sys::state& state, dcon::nation_id source);
// 通知暂停游戏
void notify_pause_game(sys::state& state, dcon::nation_id source);
// 重新同步大厅
void resync_lobby(sys::state& state, dcon::nation_id source);

// 通知多人游戏数据
void notify_mp_data(sys::state& state, const network::selector_arg arg, bool host_execute, const network::selector_function client_selector);

// 加载存档游戏
void load_save_game(sys::state& state, const std::string& filename, bool is_new_game);

// 通知玩家超时
void notify_player_timeout(sys::state& state, dcon::nation_id source, bool make_ai, dcon::mp_player_id disconnected_player);
// 判断是否可以通知玩家超时
bool can_notify_player_timeout(sys::state& state, dcon::nation_id source, bool make_ai, dcon::mp_player_id disconnected_player);

// 执行通知玩家加入
dcon::mp_player_id execute_notify_player_joins(sys::state& state, dcon::client_id client, const sys::player_name& name, const sys::player_password_raw& password, bool needs_loading, dcon::nation_id player_nation);

// 执行命令，无论玩家是否被允许
void execute_command(sys::state& state, command_data& c);
// 仅在玩家被允许时执行命令，如果允许则返回true，否则返回false
bool try_execute_command(sys::state& state, command_data& c);
// 执行待处理命令
void execute_pending_commands(sys::state& state);
// 判断是否可执行命令
bool can_perform_command(sys::state& state, command_data& c);
// 如果命令类型可以被主机从客户端接收则返回true，否则返回false
bool is_host_receive_command(command_type type, const sys::state& state);


// 通知控制台命令
void notify_console_command(sys::state& state);
// 网络不活动心跳检测
void network_inactivity_ping(sys::state& state, dcon::nation_id source, sys::date date);
// 执行网络不活动心跳检测
void execute_network_inactivity_ping(sys::state& state, dcon::nation_id source, sys::date date, dcon::mp_player_id player);




} // namespace command

