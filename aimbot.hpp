#pragma once
#include "imports.hpp"

namespace aimbot
{
	namespace prediction
	{
		namespace definition
		{
			struct prediction_values
			{
				float ammovelocity = 300.0;
				float gravity = 1.0;
				float drag = 0.725;
			};

			enum ammo_id : int
			{
				//arrows
				arrow_wooden = 1,
				arrow_highvel = 2,
				arrow_bone = 3,
				arrow_fire = 4,

				//nailgun
				nailgun_nails = 9,

				//rifle_5.56
				rifle_normal = 5,
				rifle_highvel = 6,
				rifle_explo = 7,
				rifle_incen = 8,

				//pistol_9mm
				pistol_normal = 10,
				pistol_highvel = 11,
				pistol_incen = 12,

				//shotgun_12g
				shotgun_buck = 13,
				shotgun_handmade = 14,
				shotgun_incen = 15,
				shotgun_slug = 16,
			};
		}

		namespace stats
		{
			auto ammo_prediction(int ammo_id) -> definition::prediction_values
			{
				definition::prediction_values output;

				//arrows
				if (ammo_id == definition::ammo_id::arrow_wooden)
				{
					output.ammovelocity = 50.00f;
					output.drag = 0.005f;
					output.gravity = 0.75f;
				}
				else if (ammo_id == definition::ammo_id::arrow_highvel)
				{
					output.ammovelocity = 80.00f;
					output.drag = 0.005f;
					output.gravity = 0.50f;
				}
				else if (ammo_id == definition::ammo_id::arrow_bone)
				{
					output.ammovelocity = 45.00f;
					output.drag = 0.01f;
					output.gravity = 0.75f;
				}
				else if (ammo_id == definition::ammo_id::arrow_fire)
				{
					output.ammovelocity = 40.00f;
					output.drag = 0.01f;
					output.gravity = 1.00f;
				}

				//5.56
				if (ammo_id == definition::ammo_id::rifle_normal)
				{
					output.ammovelocity = 375.00f;
					output.drag = 0.60f;
					output.gravity = 1.00f;
				}
				else if (ammo_id == definition::ammo_id::rifle_highvel)
				{
					output.ammovelocity = 450.00f;
					output.drag = 0.60f;
					output.gravity = 1.00f;
				}
				else if (ammo_id == definition::ammo_id::rifle_explo)
				{
					output.ammovelocity = 225.00f;
					output.drag = 0.60f;
					output.gravity = 1.25f;
				}
				else if (ammo_id == definition::ammo_id::rifle_incen)
				{
					output.ammovelocity = 225.00f;
					output.drag = 0.60f;
					output.gravity = 1.00f;
				}

				//nails
				if (ammo_id == definition::ammo_id::nailgun_nails)
				{
					output.ammovelocity = 50.00f;
					output.drag = 0.005f;
					output.gravity = 0.75f;
				}

				//9mm
				if (ammo_id == definition::ammo_id::pistol_normal)
				{
					output.ammovelocity = 300.00f;
					output.drag = 0.70f;
					output.gravity = 1.00f;
				}
				else if (ammo_id == definition::ammo_id::pistol_highvel)
				{
					output.ammovelocity = 400.00f;
					output.drag = 0.70f;
					output.gravity = 1.00f;
				}
				else if (ammo_id == definition::ammo_id::pistol_incen)
				{
					output.ammovelocity = 225.00f;
					output.drag = 0.70f;
					output.gravity = 1.00f;
				}

				//12g
				if (ammo_id == definition::ammo_id::shotgun_buck)
				{
					output.ammovelocity = 225.00f;
					output.drag = 1.00f;
					output.gravity = 1.00f;
				}
				if (ammo_id == definition::ammo_id::shotgun_handmade)
				{
					output.ammovelocity = 100.00f;
					output.drag = 1.00f;
					output.gravity = 1.00f;
				}
				if (ammo_id == definition::ammo_id::shotgun_incen)
				{
					output.ammovelocity = 100.00f;
					output.drag = 1.00f;
					output.gravity = 1.00f;
				}
				else if (ammo_id == definition::ammo_id::shotgun_slug)
				{
					output.ammovelocity = 225.00f;
					output.drag = 0.60f;
					output.gravity = 1.00f;
				}

				return output;
			}

			auto ammo_type(int ammo_item_id) -> int
			{
				switch (ammo_item_id)
				{
				case -1211166256:
					return definition::ammo_id::rifle_normal;
					break;
				case 1712070256:
					return definition::ammo_id::rifle_highvel;
					break;
				case -1321651331:
					return definition::ammo_id::rifle_explo;
					break;
				case 605467368:
					return definition::ammo_id::rifle_incen;
					break;

				case 785728077:
					return definition::ammo_id::pistol_normal;
					break;
				case -1691396643:
					return definition::ammo_id::pistol_highvel;
					break;
				case 51984655:
					return definition::ammo_id::pistol_incen;
					break;

				case -2097376851:
					return definition::ammo_id::nailgun_nails;
					break;

				case -1234735557:
					return definition::ammo_id::arrow_wooden;
					break;
				case -1023065463:
					return definition::ammo_id::arrow_highvel;
					break;
				case 215754713:
					return definition::ammo_id::arrow_bone;
					break;
				case 14241751:
					return definition::ammo_id::arrow_fire;
					break;

				case 588596902:
					return definition::ammo_id::shotgun_handmade;
					break;
				case -1685290200:
					return definition::ammo_id::shotgun_buck;
					break;
				case -1036635990:
					return definition::ammo_id::shotgun_incen;
					break;
				case -727717969:
					return definition::ammo_id::shotgun_slug;
					break;
				}
			}
		}

		namespace helpers
		{
			struct
			{
				geo::vec3_t* velocities = new geo::vec3_t[32];
				int current_velocity_record = {};
				int current_velocity_index = {};
				geo::vec3_t velocity_angle = geo::vec3_t{ 0.f, 0.f, 0.f };
			} inline prediction_data;

			auto lerp(float default_val, float target, float alpha) -> float
			{
				return default_val + alpha * (target - default_val);
			}

			auto line_cirlce_intersection(geo::vec3_t center, float radius, geo::vec3_t raystart, geo::vec3_t rayend) -> bool
			{
				geo::vec2_t p(raystart.x, raystart.z);
				geo::vec2_t q(rayend.x, rayend.z);

				float a = q.y - p.y;
				float b = p.x - q.x;
				float c = (a * (p.x) + b * (p.y)) * -1.f;

				float x = center.x;
				float y = center.z;

				float c_x = (b * ((b * x) - (a * y)) - a * c) / (std::pow(a, 2) + std::pow(b, 2));
				float c_y = (a * ((-b * x) + (a * y)) - (b * c)) / (std::pow(a, 2) + std::pow(b, 2));

				geo::vec2_t closestpoint(c_x, c_y);

				float distance = p.distance(q);

				if (p.distance(closestpoint) > distance || q.distance(closestpoint) > distance)
					return false;

				if (radius > closestpoint.distance(geo::vec2_t(center.x, center.z)))
				{
					geo::vec2_t p(raystart.x, raystart.y);
					geo::vec2_t q(rayend.x, rayend.y);

					float a = q.y - p.y;
					float b = p.x - q.x;
					float c = (a * (p.x) + b * (p.y)) * -1.f;

					float x = center.x;
					float y = center.y;

					float c_x = (b * ((b * x) - (a * y)) - a * c) / (std::pow(a, 2) + std::pow(b, 2));
					float c_y = (a * ((-b * x) + (a * y)) - (b * c)) / (std::pow(a, 2) + std::pow(b, 2));

					geo::vec2_t closestpoint(c_x, c_y);
					if (radius > closestpoint.distance(geo::vec2_t(center.x, center.y))) return true;
					else return false;
				}

				return false;
			}

			auto get_lerp(geo::vec3_t center, geo::vec3_t firstposition, geo::vec3_t lastposition) -> float
			{
				geo::vec3_t center2d = center; geo::vec3_t first2d = firstposition; geo::vec3_t last2d = lastposition;
				center2d.y = 0.f; first2d.y = 0.f; last2d.y = 0.f;

				float distancefromfirst = (center2d - first2d).length();
				float distancefromlast = (center2d - last2d).length();

				float totaldistance = (last2d - first2d).length();

				if (totaldistance == 0)
					return 0.5;
				else
				{
					float percentfromfirst = distancefromfirst / totaldistance;
					float percentfromlast = distancefromlast / totaldistance;

					float lerpvalue = percentfromfirst / (percentfromfirst + percentfromlast);
					return lerpvalue;
				}
			}

			auto simulate_movement(c_base_player* ply) -> geo::vec3_t
			{
				int records = 32;

				auto velocity = ply->playerModel()->newVelocity();
				if (velocity.is_empty())
					velocity = velocity;

				if (ply->modelState()->has_flag(systems::model_flags::mounted))
					records = 62;

				if (velocity.is_empty())
				{
					prediction_data.current_velocity_record = 0;
					prediction_data.current_velocity_index = 0;
					prediction_data.velocity_angle = velocity;
				}
				else
				{
					prediction_data.velocities[prediction_data.current_velocity_index++] = velocity;
					if (prediction_data.current_velocity_index >= records)
						prediction_data.current_velocity_index = 0.0f;

					prediction_data.current_velocity_record++;
					if (prediction_data.current_velocity_record >= 0.0f)
						prediction_data.current_velocity_record = records;

					int current_records = prediction_data.current_velocity_record;

					geo::vec3_t velocity_sums{};
					for (int j = 0; j < current_records; j++)
						velocity_sums += prediction_data.velocities[j];

					prediction_data.velocity_angle = velocity_sums / (float)current_records;
				}

				return prediction_data.velocity_angle;
			}

			auto get_trajectory(geo::vec3_t target_pos, geo::vec3_t initial_pos, geo::vec3_t player_velocity, float velocity, float drag, float gravity_multi, float intial_distance) -> geo::vec3_t
			{
				bool sim_finished = false;
				static int maximumsims = 30;

				float pitch_offset = 0;
				geo::vec3_t target_position = target_pos;

				for (int i = 0; i < maximumsims; i++)
				{
					target_position.y += pitch_offset;

					geo::vec3_t angle = target_position - initial_pos;

					geo::vec3_t calc_velocity = angle.normalized() * velocity;

					geo::vec3_t proectile_pos = initial_pos;
					geo::vec3_t previous_pos = geo::vec3_t();

					const float step_size = 0.03125f;
					for (float projectiletime = 0.f; projectiletime < 8.f; projectiletime += step_size)
					{
						previous_pos = proectile_pos;
						proectile_pos = proectile_pos + (calc_velocity * step_size);

						calc_velocity.y -= 9.81f * gravity_multi * step_size;
						calc_velocity -= calc_velocity * drag * step_size;

						if (line_cirlce_intersection(target_pos, 0.025f, previous_pos, proectile_pos))
						{
							sim_finished = true;
							break;
						}
						else if (initial_pos.distance(target_pos) < initial_pos.distance(proectile_pos))
						{
							geo::vec3_t calculated_pos = geo::vec3_t(target_pos.x, lerp(proectile_pos.y, previous_pos.y, get_lerp(target_position, proectile_pos, previous_pos)), target_pos.z);
							pitch_offset = target_pos.y - calculated_pos.y;
							break;
						}
					}
					if (sim_finished)
						break;
				}
				auto time = (intial_distance / velocity);

				player_velocity.x *= 0.75f * time;
				player_velocity.y *= 0.75f * time;
				player_velocity.z *= 0.75f * time;

				target_position.x += player_velocity.x;
				target_position.y += player_velocity.y;
				target_position.z += player_velocity.z;

				if (rainy.player->modelState()->has_flag(systems::model_flags::ducked)) target_position.y -= 0.4725f;

				return target_position;
			}
		}
	}

	auto aimbot_loop() -> void
	{
		for (auto& player : rainy.player_list)
		{
			if (!rainy.camera || !rainy.player) continue;

			const auto ply = player.cache.player;
			if (!ply) continue;

			const auto distance = player.cache.distance;
			if (!distance) continue;

			const auto player_model = ply->playerModel();
			if (!player_model) continue;

			const auto eyes = rainy.player->eyes();
			if (!eyes) continue;
			if (player_model->IsNpck__BackingField()) continue; // npc check

			//if ( ply->has_flag ( systems::player_flags::wounded ) ) continue; // wounded check

			//if ( !player.cache.visible ) continue; // shitty visual check

			//if ( player.cache.teammate ) continue; // teammate check

			const auto projectile = rainy.player->get_projectile();
			if (!projectile) continue;

			const auto wide_name = projectile->shortname();
			if (wide_name.empty()) return;

			if (!utils::is_weapon(wide_name)) continue;

			const auto held = projectile->heldEntity();
			if (!held) continue;
			auto stats = prediction::stats::ammo_prediction(prediction::stats::ammo_type(held->primaryMagazine()->ammo()->ammo_id()));
			auto body_rot = eyes->bodyRotationk__BackingField();
			auto velocity_calculated = prediction::helpers::simulate_movement(ply);
			auto localplayerpos = rainy.player->get_bone_transform(systems::player_bones::eye_transform)->get_position() + geo::quaternion_multi(eyes->viewOffset(), &body_rot);
			if (config.Includes.Aimbot.selected_AimBone == 0 && config.Includes.Aimbot.Aimbot_Type[1])
			{
				auto aimbone = prediction::helpers::get_trajectory(ply->get_bone_transform(systems::player_bones::head)->get_position(), localplayerpos, velocity_calculated, stats.ammovelocity, stats.drag, stats.gravity, distance); // default sims 15
				if (aimbone.is_empty()) continue;
				auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
				if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
				auto player_input = rainy.player->input();
				if (rainy.camera->aim_fov(ply) < config.Includes.Aimbot.Fov_slifer)
				{

					if (config.Includes.Aimbot.selected_Aim == 1 && config.Includes.Aimbot.Aimbot_Type[2])
					{
						auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
						if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
						if (player_input)
						{
							if (GetAsyncKeyState(0x2)) player_input->set_bodyAngles(new_angles);
						}
					}

					if (config.Includes.Aimbot.selected_Aim == 2 && config.Includes.Aimbot.Aimbot_Type[3])
					{
						if (GetAsyncKeyState(0x1)) eyes->set_bodyRotationk__BackingField(to_quaternion(new_angles));
					}
				}
			}
			if (config.Includes.Aimbot.selected_AimBone == 2 && config.Includes.Aimbot.Aimbot_Type[2])
			{
				auto aimbone = prediction::helpers::get_trajectory(ply->get_bone_transform(systems::player_bones::l_hip)->get_position(), localplayerpos, velocity_calculated, stats.ammovelocity, stats.drag, stats.gravity, distance); // default sims 15
				if (aimbone.is_empty()) continue;
				auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
				if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
				auto player_input = rainy.player->input();
				if (rainy.camera->aim_fov(ply) < config.Includes.Aimbot.Fov_slifer)
				{
					if (config.Includes.Aimbot.selected_Aim == 1 && config.Includes.Aimbot.Aimbot_Type[2])
					{
						auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
						if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
						if (player_input)
						{
							if (GetAsyncKeyState(0x2)) player_input->set_bodyAngles(new_angles);
						}
					}

					if (config.Includes.Aimbot.selected_Aim == 2 && config.Includes.Aimbot.Aimbot_Type[3])
					{
						if (GetAsyncKeyState(0x1)) eyes->set_bodyRotationk__BackingField(to_quaternion(new_angles));
					}
				}
			}
			if (config.Includes.Aimbot.selected_AimBone == 3 && config.Includes.Aimbot.Aimbot_Type[3])
			{
				auto aimbone = prediction::helpers::get_trajectory(ply->get_bone_transform(systems::player_bones::r_hip)->get_position(), localplayerpos, velocity_calculated, stats.ammovelocity, stats.drag, stats.gravity, distance); // default sims 15
				if (aimbone.is_empty()) continue;
				auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
				if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
				auto player_input = rainy.player->input();
				if (rainy.camera->aim_fov(ply) < config.Includes.Aimbot.Fov_slifer)
				{
					if (config.Includes.Aimbot.selected_Aim == 1 && config.Includes.Aimbot.Aimbot_Type[2])
					{
						auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
						if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
						if (player_input)
						{
							if (GetAsyncKeyState(0x2)) player_input->set_bodyAngles(new_angles);
						}
					}

					if (config.Includes.Aimbot.selected_Aim == 2 && config.Includes.Aimbot.Aimbot_Type[3])
					{
						if (GetAsyncKeyState(0x1)) eyes->set_bodyRotationk__BackingField(to_quaternion(new_angles));
					}
				}
			}
			if (config.Includes.Aimbot.selected_AimBone == 4 && config.Includes.Aimbot.Aimbot_Type[4])
			{
				auto aimbone = prediction::helpers::get_trajectory(ply->get_bone_transform(systems::player_bones::l_knee)->get_position(), localplayerpos, velocity_calculated, stats.ammovelocity, stats.drag, stats.gravity, distance); // default sims 15
				if (aimbone.is_empty()) continue;
				auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
				if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
				auto player_input = rainy.player->input();
				if (rainy.camera->aim_fov(ply) < config.Includes.Aimbot.Fov_slifer)
				{
					if (config.Includes.Aimbot.selected_Aim == 1 && config.Includes.Aimbot.Aimbot_Type[2])
					{
						auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
						if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
						if (player_input)
						{
							if (GetAsyncKeyState(0x2)) player_input->set_bodyAngles(new_angles);
						}
					}

					if (config.Includes.Aimbot.selected_Aim == 2 && config.Includes.Aimbot.Aimbot_Type[3])
					{
						if (GetAsyncKeyState(0x1)) eyes->set_bodyRotationk__BackingField(to_quaternion(new_angles));
					}
				}
			}
			if (config.Includes.Aimbot.selected_AimBone == 5 && config.Includes.Aimbot.Aimbot_Type[5])
			{
				auto aimbone = prediction::helpers::get_trajectory(ply->get_bone_transform(systems::player_bones::r_knee)->get_position(), localplayerpos, velocity_calculated, stats.ammovelocity, stats.drag, stats.gravity, distance); // default sims 15
				if (aimbone.is_empty()) continue;
				auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
				if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
				auto player_input = rainy.player->input();
				if (rainy.camera->aim_fov(ply) < config.Includes.Aimbot.Fov_slifer)
				{
					if (config.Includes.Aimbot.selected_Aim == 1 && config.Includes.Aimbot.Aimbot_Type[2])
					{
						auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
						if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
						if (player_input)
						{
							if (GetAsyncKeyState(0x2)) player_input->set_bodyAngles(new_angles);
						}
					}

					if (config.Includes.Aimbot.selected_Aim == 2 && config.Includes.Aimbot.Aimbot_Type[3])
					{
						if (GetAsyncKeyState(0x1)) eyes->set_bodyRotationk__BackingField(to_quaternion(new_angles));
					}
				}
			}
			if (config.Includes.Aimbot.selected_AimBone == 1 && config.Includes.Aimbot.Aimbot_Type[6])
			{
				auto aimbone = prediction::helpers::get_trajectory(ply->get_bone_transform(systems::player_bones::pelvis)->get_position(), localplayerpos, velocity_calculated, stats.ammovelocity, stats.drag, stats.gravity, distance); // default sims 15
				if (aimbone.is_empty()) continue;
				auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
				if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
				auto player_input = rainy.player->input();
				if (rainy.camera->aim_fov(ply) < config.Includes.Aimbot.Fov_slifer)
				{
					if (config.Includes.Aimbot.selected_Aim == 1 && config.Includes.Aimbot.Aimbot_Type[2])
					{
						auto new_angles = geo::normalize(geo::calculate_angle(localplayerpos, aimbone));
						if (std::isnan(new_angles.x) && std::isnan(new_angles.y)) continue;
						if (player_input)
						{
							if (GetAsyncKeyState(0x2)) player_input->set_bodyAngles(new_angles);
						}
					}

					if (config.Includes.Aimbot.selected_Aim == 2 && config.Includes.Aimbot.Aimbot_Type[3])
					{
						if (GetAsyncKeyState(0x1)) eyes->set_bodyRotationk__BackingField(to_quaternion(new_angles));
					}
				}
			}
		}
	}
}