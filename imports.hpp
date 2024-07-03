#pragma once
#include <vector>
#include <fstream>
#include <filesystem>
#include <map>
//imgui
#include "imgui.h"
#include "imgui_internal.h"
#include "imgui_impl_dx9.h"
#include "imgui_impl_win32.h"
//config - includes
#include "config.hpp"
//other
#include "math.hpp"
#include "estr.hpp"
#include "memory.hpp"
#include "offsets.hpp"
using namespace Offsets;
//mem driver(utils::globals::process_id);

//systems
#include "systems.hpp"

//il2cpp header
#define declare_member(type, name, shift)														\
	auto name ( ) -> type																		\
	{																							\
		return driver.read<type>( reinterpret_cast<std::uintptr_t>( this ) + shift );			\
	}																							\
																								\
	auto set_##name( type name ) -> void														\
	{																							\
		driver.write<type>( reinterpret_cast< std::uintptr_t >( this ) + shift, name );			\
	}	
//classes
#include "c_time.h"
#include "c_rigid_body.h"
#include "c_player_belt.h"
#include "c_capsule_collider.h"
#include "c_player_eyes.h"
#include "c_player_tick.h"
#include "c_base_mountable.h"
#include "c_model_state.h"
#include "c_base_collision.h"
#include "c_base_movement.h"
#include "c_input_message.h"
#include "c_input_state.h"
#include "c_player_input.h"
#include "c_skin_set.h"
#include "c_skinset_collection.h"
#include "c_player_model.h"
#include "c_convar_graphics.h"
#include "c_admin.h"
#include "c_convar_admin.h"
#include "c_convar_client.h"
#include "c_transform.h"
#include "c_model.h"
#include "c_base_entity.h"
#include "c_base_networkable.h"
#include "c_base_combat_entity.h"
#include "c_recoil_properties.h"
#include "c_item_definition.h"
#include "c_tod_scattering.h"
#include "c_tod_components.h"
#include "c_tod_sky.h"
#include "c_skin_type.h"
#include "c_groups.h"
#include "c_skinnable.h"
#include "c_ammo_definition.h"
#include "c_magazine.h"
#include "c_item_projectile_mod.h"
#include "c_weapon_bob.h"
#include "c_weapon_sway.h"
#include "c_weapon_punch.h"
#include "c_weapon_lower.h"
#include "c_weapon_view_model.h"
#include "c_view_model.h"
#include "c_held_item.h"
#include "c_item.h"
#include "c_item_list.h"
#include "c_item_container.h"
#include "c_player_inventory.h"
#include "c_hit_test.h"
#include "c_projectile.h"
#include "c_base_player.h"
#include "c_camera.h"
#include "c_object_class.h"
#include "c_object.h"
#include "c_unity.h"

//main
#include "drawing.hpp"
#include "entityloop.hpp"
#include "aimbot.hpp"
#include "localplayer.hpp"
#include "visuals.hpp"
#include "window.hpp"