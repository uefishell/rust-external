#pragma once
#include "imports.hpp"

namespace features
{
	namespace held
	{

		auto recoil_values(float n1, float n2, float n3, float n4, c_recoil_properties* recoil) -> void
		{
			if (config.Includes.Weapon.no_recoil)
			{
				recoil->set_recoilYawMin(config.Includes.Weapon.x_recoli * n1); // replace 0.00f for yaw
				recoil->set_recoilYawMax(config.Includes.Weapon.x_recoli * n1); // replace 0.00f for yaw
				recoil->set_recoilPitchMin(config.Includes.Weapon.y_recoli * n3); // replace 0.00f for pitch
				recoil->set_recoilPitchMax(config.Includes.Weapon.y_recoli * n4); // replace 0.00f for pitch
			}
		}

		auto no_recoil(std::wstring itemname, c_recoil_properties* recoil, c_recoil_properties* new_recoil) -> void
		{
			if (itemname == e(L"pistol.nailgun"))  recoil_values(-1.f, 1.f, -3.f, -6.f, recoil);
			else if (itemname == e(L"pistol.python")) recoil_values(-2.f, 2.f, -15.f, -16.f, recoil);
			else if (itemname == e(L"pistol.revolver")) recoil_values(-1.f, 1.f, -3.f, -6.f, recoil);
			else if (itemname == e(L"shotgun.pump")) recoil_values(4.f, 8.f, -10.f, -14.f, recoil);
			else if (itemname == e(L"shotgun.double")) recoil_values(8.f, 15.f, -10.f, -15.f, recoil);
			else if (itemname == e(L"shotgun.spas12")) recoil_values(4.f, 8.f, -10.f, -14.f, recoil);
			else if (itemname == e(L"shotgun.waterpipe")) recoil_values(4.f, 8.f, -10.f, -14.f, recoil);
			else if (itemname == e(L"crossbow")) recoil_values(-3.f, 3.f, -3.f, -6.f, recoil);
			else if (itemname == e(L"rifle.l96")) recoil_values(-2.f, 2.f, -1.f, -1.5f, recoil);
			else if (itemname == e(L"rifle.bolt")) recoil_values(-4.f, 4.f, -2.f, -3.f, recoil);
			else if (itemname == e(L"rifle.bolt")) recoil_values(-4.f, 4.f, -2.f, -3.f, recoil);
			else if (itemname == e(L"pistol.prototype17")) recoil_values(-1.f, 1.f, -2.f, -2.5f, recoil);
			{
				if (itemname == e(L"rifle.ak")) recoil_values(1.5f, 2.5f, -2.5f, -3.5f, new_recoil);
				else if (itemname == e(L"rifle.ak.ice")) recoil_values(1.5f, 2.5f, -2.5f, -3.5f, new_recoil);
				else if (itemname == e(L"rifle.lr300")) recoil_values(-1.f, 1.f, -2.f, -3.f, new_recoil);
				else if (itemname == e(L"lmg.m249")) recoil_values(1.25f, 2.25f, -3.f, -4.f, new_recoil);
				else if (itemname == e(L"rifle.m39")) recoil_values(1.5f, 2.5f, -3.f, -4.f, new_recoil);
				else if (itemname == e(L"rifle.semiauto")) recoil_values(-0.5f, 0.5f, -2.f, -3.f, new_recoil);
				else if (itemname == e(L"hmlmg")) recoil_values(-1.25f, -2.5f, -3.f, -4.f, new_recoil);
				else if (itemname == e(L"smg.mp5")) recoil_values(-1.f, 1.f, -1.f, -3.f, new_recoil);
				else if (itemname == e(L"smg.thompson")) recoil_values(-1.f, 1.f, -1.5f, -2.f, new_recoil);
				else if (itemname == e(L"smg.2")) recoil_values(-1.f, 1.f, -1.5f, -2.f, new_recoil);
				else if (itemname == e(L"pistol.m92")) recoil_values(-1.f, 1.f, -2.f, -2.5f, new_recoil);
				else if (itemname == e(L"pistol.semiauto")) recoil_values(-1.f, 1.f, -7.f, -8.f, new_recoil);
			}
		}

		auto weapon_repeat_delay(std::wstring weapon_name) -> float
		{
			if (weapon_name == e(L"rifle.ak")) return 0.1333f;
			else if (weapon_name == e(L"rifle.ak.ice")) return 0.1333f;
			else if (weapon_name == e(L"smg.2")) return 0.10f;
			else if (weapon_name == e(L"rifle.lr300")) return 0.12f;
			else if (weapon_name == e(L"lmg.m249")) return 0.12f;
			else if (weapon_name == e(L"rifle.m39")) return 0.20f;
			else if (weapon_name == e(L"pistol.m92")) return 0.15f;
			else if (weapon_name == e(L"smg.mp5")) return 0.10f;
			else if (weapon_name == e(L"pistol.nailgun")) return 0.15f;
			else if (weapon_name == e(L"pistol.revolver")) return 0.175f;
			else if (weapon_name == e(L"pistol.semiauto")) return 0.15f;
			else if (weapon_name == e(L"rifle.semiauto")) return 0.175f;
			else if (weapon_name == e(L"smg.thompson")) return 0.13f;
			else if (weapon_name == e(L"pistol.python")) return 0.15f;
			else if (weapon_name == e(L"hmlmg")) return 0.13f;
			else if (weapon_name == e(L"pistol.prototype17")) return 0.09f;
		}
	}

	auto weapon_features() -> void
	{
		if (rainy.camera && rainy.player && rainy.player->has_flag(systems::player_flags::connected) && rainy.player->lifestate() == systems::lifestate::alive)
		{
			const auto projectile = rainy.player->get_projectile();
			if (!projectile) return;

			const auto wide_name = projectile->shortname();
			if (wide_name.empty()) return;

			if (!utils::is_weapon(projectile->shortname())) return;

			const auto held = projectile->heldEntity();
			if (!held) return;

			//weapon features

			if (config.Includes.Weapon.instantbow)
			{   //instant bow
				if (wide_name.find(e(L"bow.compound")) != std::wstring::npos)
				{
					held->set_stringHoldDurationMax(0.00f);
					held->set_stringBonusDamage(1000000.00f);
					held->set_movementPenaltyRampUpTime(1000000.00f);
				}
				else if (wide_name.find(e(L"bow.hunting")) != std::wstring::npos)
				{
					held->set_attackReady(true);
					held->set_arrowBack(1.00f);
				}
			}

			if (config.Includes.Weapon.insteoka)
			{	//instant eoka
				if (wide_name.find(e(L"eoka")) != std::wstring::npos)
				{
					held->set_strikes(1);
					held->set_successFraction(1.00f);
					held->set__didSparkThisFrame(true);
				}
			}

			if (true)
			{	// shoot in debug 
				if (GetAsyncKeyState(0x42) /*<<<<<put a custom bind here*/ && GetAsyncKeyState(VK_LBUTTON))
				{
					auto local_pos = rainy.player->playerModel()->position();

					auto camera_pos = rainy.camera->position();

					if (camera_pos > local_pos - geo::vec3_t(2.00f, 2.00f, 2.00f) && camera_pos < local_pos + geo::vec3_t(2.00f, 2.00f, 2.00f)) held->set_canChangeFireModes(false);
					else
					{
						held->set_currentBurst(1);
						held->set_isBurstWeapon(true);
					}
				}
				else
				{
					held->set_currentBurst(1);
					held->set_isBurstWeapon(false);
				}
			}

			if (true)
			{	//no recoil
				auto recoil = held->recoil();
				auto new_recoil = recoil->newRecoilOverride();
				if (recoil || new_recoil) held::no_recoil(wide_name, recoil, new_recoil);
			}

			if (true)
			{	//not lower when omnisprint
				if (wide_name.find(e(L"bow.compound")) == std::wstring::npos
					&& wide_name.find(e(L"bow.hunting")) == std::wstring::npos
					&& wide_name.find(e(L"crossbow")) == std::wstring::npos
					&& wide_name.find(e(L"pistol.eoka")) == std::wstring::npos)
				{
					auto view_model = held->viewModel();
					auto instance = view_model->instance();
					if (view_model && instance) instance->get_lower()->set_should_lower(false);
				}
			}
			if (config.Includes.Weapon.Shoot_fast)
			{	//fast shoot
				held->set_repeatDelay(0.05);
			}

			//if (true)
			//{	//bullet tracers
			//	static auto effect_network = driver.read_chain<std::uintptr_t>(driver.game_assembly, { Offsets::Vars::m_effectNetwork_c, 0xB8, 0x0 }); //effectnetwork_c

			//	if (effect_network)
			//	{
			//		auto temp_hit_point = driver.read<geo::vec3_t>(effect_network + 0x64); // class effect - worldpos

			//		if (!temp_hit_point.is_empty())
			//		{
			//			bool found = false;
			//			for (int i = 0; i < geo::bullet_tracer.size(); i++)
			//				if (geo::bullet_tracer.at(i).bullet_pos == temp_hit_point) found = true;

			//			if (!found)
			//				geo::bullet_tracer.push_back(geo::c_tracers{ temp_hit_point, rainy.player->get_bone_transform(systems::player_bones::head)->get_position() + rainy.player->eyes()->viewOffset(), std::chrono::high_resolution_clock::now() });
			//		}
			//	}
			//}

			if (config.Includes.Weapon.no_spread)
			{	//no spread guns and shotguns
				held->set_aimCone(config.Includes.Weapon.no_spread_slider);//-5.00f
				held->set_hipAimCone(config.Includes.Weapon.no_spread_slider);//-5.00f
				held->set_stancePenalty(0.00f);//0.00f
				held->set_aimconePenalty(0.00f);//0.00f
				held->set_aimConePenaltyMax(0.00f);//0.00f
				held->set_stancePenaltyScale(0.00f);//0.00f
				held->set_aimconePenaltyPerShot(0.00f);//0.00f

				auto projectile_mod = [](std::uintptr_t each) -> void
				{
					auto created = reinterpret_cast<c_projectile*>(each);
					auto projectile_mod = created->mod();
					if (projectile_mod)
					{
						projectile_mod->set_projectileSpread(0.00f);
						projectile_mod->set_projectileVelocitySpread(0.00f);
					}
				};

				held->created_projectiles(projectile_mod);
			}

			if ( true )
			{	//hitsound
				auto created_projectile = []( std::uintptr_t each ) -> void
				{
					auto created = reinterpret_cast< c_projectile* >( each );
					auto hit_test = created->hitTest ( );
					if ( hit_test )
					{
						if ( hit_test->DidHit ( ) && hit_test->HitEntity ( ) == entity_loop::list_player )
						{
							//do your hitsound here
						}
					}
				};
				held->created_projectiles ( created_projectile );
			}

			if (config.Includes.Weapon.Big_Bullet)
			{	//2.50m thickbullet
				auto thickness = [](std::uintptr_t each) -> void
				{
					auto created = reinterpret_cast<c_projectile*>(each);
					if (created)
					{
						created->set_thickness(2.50f);
					}
				};
				held->created_projectiles(thickness);
			}

			if (config.Includes.Weapon.auto_matic)
			{	//automatic
				held->set_automatic(true);
			}

			if (config.Includes.Weapon.no_sway)
			{	//nosway
				held->set_aimSway(config.Includes.Weapon.no_sway_slider);//0.00f
				held->set_aimSwaySpeed(config.Includes.Weapon.no_sway_slider);//0.00f
			}

			//if (config.Includes.Visual.reloadindicator)
			//{	//reload indicator
			//	static auto start = 0ll;
			//	if ( held->isReloading ( ) )
			//	{
			//		if ( !start ) start = std::chrono::duration_cast< std::chrono::milliseconds >( std::chrono::steady_clock::now ( ).time_since_epoch ( ) ).count ( );
			//		geo::reload_indicator.m_reload_duration = held->reloadTime ( ) * 1000.00f;
			//		geo::reload_indicator.m_reload_time = static_cast< std::int32_t >( start + held->reloadTime ( ) * 1000.00f ) - std::chrono::duration_cast< std::chrono::milliseconds >( std::chrono::steady_clock::now ( ).time_since_epoch ( ) ).count ( );
			//	}
			//	else
			//	{
			//		start = 0ll;
			//		geo::reload_indicator.m_reload_duration = 0.00f;
			//		geo::reload_indicator.m_reload_time = 0.00f;
			//	}
			//}
		}
	}

	auto movement_features() -> void
	{
		if (rainy.camera && rainy.player && rainy.player->has_flag(systems::player_flags::connected) && rainy.player->lifestate() == systems::lifestate::alive)
		{
			const auto base_movement = rainy.player->movement();
			if (!base_movement) return;

			const auto model_state = rainy.player->modelState();
			if (!model_state) return;

			const auto eyes = rainy.player->eyes();
			if (!eyes) return;

			//movement features

			if (true)
			{	//flyhack bool
				if (GetAsyncKeyState(0x85))
				{	//flyhack key - plz change
					model_state->set_waterLevel(1.10f); // 0.988f
					auto rotation = eyes->bodyRotationk__BackingField();
					auto target_movement = geo::vec3_t(0.00f, 0.039f, 0.00f);

					auto speed = 4.00f;
					if (GetAsyncKeyState(0x57)) target_movement = geo::quaternion_multi(geo::vec3_t::get_forward(), &rotation);
					if (GetAsyncKeyState(0x53)) target_movement = geo::quaternion_multi(geo::vec3_t::get_backward(), &rotation);
					if (GetAsyncKeyState(0x44)) target_movement = geo::quaternion_multi(geo::vec3_t::get_right(), &rotation);
					if (GetAsyncKeyState(0x41)) target_movement = geo::quaternion_multi(geo::vec3_t::get_left(), &rotation);

					if (GetAsyncKeyState(VK_SPACE)) target_movement.y = 1.00f;
					if (GetAsyncKeyState(VK_LCONTROL)) target_movement.y - 1.00f;
					if (GetAsyncKeyState(VK_SHIFT))
					{
						speed = 10.00f;
					}

					base_movement->set_capsuleCenter(-3000.00f);
					base_movement->set_capsuleHeight(-3000.00f);

					base_movement->set_TargetMovementk__BackingField(target_movement * speed);
				}
				else
				{
					base_movement->set_capsuleCenter(0.90f);
					base_movement->set_capsuleHeight(1.80f);
				}
			}

			//if (config.Includes.Movement.spiderman)
			//{	//spiderman
			//	base_movement->set_groundAngleNew ( 0.f );
			//}

			//if (config.Includes.Movement.infinitejump)
			//{	//infinite jump
			//	if ( GetAsyncKeyState ( VK_SPACE ) )
			//	{
			//		base_movement->set_jumpTime ( 0.51f );
			//		base_movement->set_landTime ( 0.3f );
			//		base_movement->set_groundTime ( 99999.f );
			//	}
			//}
			//if (config.Includes.Movement.holditemswhilemounted)
			//{	//hold items while mounted
			//	auto mounted = rainy.player->mounted ( );
			//	if ( mounted )
			//	{
			//		if ( model_state->has_flag ( systems::model_flags::mounted ) ) mounted->set_canWieldItems ( true );
			//	}
			//}
		}
	}

	auto misc_features() -> void
	{
		if (rainy.camera && rainy.player && rainy.player->has_flag(systems::player_flags::connected) && rainy.player->lifestate() == systems::lifestate::alive)
		{
			const auto base_movement = rainy.player->movement();
			if (!base_movement) return;

			const auto eyes = rainy.player->eyes();
			if (!eyes) return;

			//misc features

			if (GetAsyncKeyState(0x42))
			{	//longneck
				rainy.player->set_clientTickInterval(0.99f);
				if (GetAsyncKeyState(0x2))eyes->set_viewOffset(geo::vec3_t(0.00f, 1.50f, 0.00f)); // UP 
				else if (GetAsyncKeyState(90))eyes->set_viewOffset(geo::vec3_t(-8.50f, 0.00f, 0.00f)); // LEFT
				else if (GetAsyncKeyState(88))eyes->set_viewOffset(geo::vec3_t(8.50f, 0.00f, 0.00f)); // RIGHT
			}
			else rainy.player->set_clientTickInterval(0.05f);
		}
	}

	auto fast_features() -> void
	{
		if (rainy.camera && rainy.player && rainy.player->has_flag(systems::player_flags::connected) && rainy.player->lifestate() == systems::lifestate::alive)
		{
			const auto base_movement = rainy.player->movement();
			if (!base_movement) return;

			//omnisprint and or spinbot

			//if (config.Includes.Movement.omnisprint)
			//{	//omnisprint
			//	base_movement->set_Runningk__BackingField(1.00f);
			//}		
		}
	}
}