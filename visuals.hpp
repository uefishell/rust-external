#pragma once
#include "imports.hpp"

auto flyhack_bar() -> void
{
	const auto grounded = rainy.player->movement()->grounded(); // movement + grounded
	auto position = rainy.player->playerModel()->position();    // playermodel + position

	if (position.is_empty()) return; // looks like a error check... checks if players positon is valid?

	static auto start = geo::vec3_t(); // 0, 0, 0

	if (!grounded && start.is_empty()) // if flying + saved position is 0, 0, 0 then set start variable to our position
		start = position;
	else if (grounded)
	{
		start = geo::vec3_t(0.00f, 0.00f, 0.00f);
		config.Includes.Setiings.m_height = 0.00f;
		config.Includes.Setiings.m_direction = 0.00f;
	}
	else if (!start.is_empty()) // if variable start isnt empty
	{
		config.Includes.Setiings.m_height = position.y - start.y;
		config.Includes.Setiings.m_direction = geo::vec2_t(position.x, position.z).distance({ start.x, start.z });
	}
}

auto get_rust_installation() -> std::string
{
	LONG   lResult;
	HKEY   hKey;
	char   value[64];
	DWORD  value_length = 64;
	DWORD  dwType = REG_SZ;

	lResult = RegOpenKey(HKEY_LOCAL_MACHINE, TEXT(e("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Steam App 252490")), &hKey);
	RegQueryValueExA(hKey, e("InstallLocation"), NULL, &dwType, (LPBYTE)&value, &value_length);

	RegCloseKey(hKey);

	return value;
}

auto texture_bundle_path = get_rust_installation() + e("\\Bundles\\items\\");

class c_texture_cache
{
private:
	std::unordered_map<std::string, IDirect3DTexture9*> texture_cache{};

	auto create_texture(LPDIRECT3DDEVICE9 device, std::string name) -> IDirect3DTexture9*
	{
		auto image_path = texture_bundle_path + name; // todo: make path dynamic
		auto* tex = LPDIRECT3DTEXTURE9();

		if (D3DXCreateTextureFromFileA(device, image_path.c_str(), &tex) != D3D_OK)
			return nullptr;

		return tex;
	}
public:
	auto get_texture(std::string item_name) -> IDirect3DTexture9*
	{
		if (texture_cache.find(item_name) != texture_cache.end())
			return texture_cache[item_name];

		auto texture = create_texture(dx9::p_device, item_name + e(".png"));
		if (!texture)
			return nullptr;

		texture_cache.emplace(item_name, texture);
		return texture;
	}

}; inline c_texture_cache texture_cache;

namespace visuals
{
	auto black_color = geo::vec4_t{ 0, 0, 0, 255 };
	auto main_color = geo::vec4_t{ 0.00f, 160.00f, 255.00f, 255.00f };

	auto draw_loop() -> void
	{
		const auto gui = ImGui::GetBackgroundDrawList();
		geo::vec2_t size, bottom, top;
		const geo::vec2_t screen_center = { (float)config.Includes.Setiings.width / 2, (float)config.Includes.Setiings.height / 2 };

		if (config.Includes.Visual.fly_hack_bar)
		{
			flyhack_bar();
			config.Includes.Setiings.fly_height = config.Includes.Setiings.m_height * 52.f;
			config.Includes.Setiings.fly_direction = config.Includes.Setiings.m_direction * 52.f;
			if (config.Includes.Setiings.fly_height >= 255.f) config.Includes.Setiings.fly_height = 0.f;
			if (config.Includes.Setiings.fly_height <= 0.f) config.Includes.Setiings.fly_height = 0.f;
			if (config.Includes.Setiings.fly_direction >= 255.f) config.Includes.Setiings.fly_direction = 0.f;
			if (config.Includes.Setiings.fly_direction <= 0.f) config.Includes.Setiings.fly_direction = 0.f;

			if (config.Includes.Setiings.fly_height >= 1.f)
			{
				render::FilledRect(config.Includes.Setiings.width / 2.5, config.Includes.Setiings.height / 7.50, 250, 5, ImColor(56, 55, 55));
				render::FilledRect(config.Includes.Setiings.width / 2.5, config.Includes.Setiings.height / 7.50, config.Includes.Setiings.fly_height, 5, ImColor(0.00f, 160.00f, 255.00f, 255.00f));
			}

			if (config.Includes.Setiings.fly_direction >= 1.f)
			{
				render::FilledRect(config.Includes.Setiings.width / 2.5, config.Includes.Setiings.height / 8.00, 250, 5, ImColor(56, 55, 55));
				render::FilledRect(config.Includes.Setiings.width / 2.5, config.Includes.Setiings.height / 8.00, config.Includes.Setiings.fly_direction, 5, ImColor(0.00f, 160.00f, 255.00f, 255.00f));
			}
		}

		{// fov cercle
			gui->AddCircle({ screen_center.x, screen_center.y }, config.Includes.Aimbot.Fov_slifer, ImColor(255, 255, 255));
		}

		const auto projectile = rainy.player->get_projectile();
		if (projectile)
		{
			if (utils::is_weapon(projectile->shortname()))
			{
				const auto held = projectile->heldEntity();
				if (held)
				{
					if (config.Includes.Weapon.Bullet_Tracer)
					{	//draw bullet tracers
						geo::vec2_t hit_point_2d, local_player_2d;
						for (int i = 0; i < geo::bullet_tracer.size(); i++)
						{
							auto local_pos = geo::bullet_tracer.at(i).local_pos;
							auto bullet_pos = geo::bullet_tracer.at(i).bullet_pos;
							if (rainy.camera->world_to_screen(bullet_pos, &hit_point_2d)
								&& rainy.camera->world_to_screen(local_pos, &local_player_2d)
								&& std::chrono::duration_cast<std::chrono::seconds>(std::chrono::high_resolution_clock::now() - geo::bullet_tracer.at(i).shot_at) <= std::chrono::seconds(2))
							{
								if (local_pos.distance(bullet_pos) < 4.00f) continue;

								render::draw_line(hit_point_2d, local_player_2d, geo::vec4_t(0.00f, 160.00f, 255.00f, 255.00f), 1.50f);//0, 160, 255
							}
						}
					}

					{	//reload indicator
						if (held->isReloading() && geo::reload_indicator.m_reload_time > 0.00f && geo::reload_indicator.m_reload_duration > 0.00f)
						{
							const auto current = geo::reload_indicator.m_reload_duration - geo::reload_indicator.m_reload_time;
							const auto max = geo::reload_indicator.m_reload_duration;
							const auto color = render::quick::get_health_color(current / max);

							geo::vec2_t size = { 95.00f, 6.00f };
							geo::vec2_t position = { screen_center.x, screen_center.y + 16.00f };

							gui->AddRectFilled // background
							(
								{ position.x - (size.x / 2.00f), position.y },
								{ position.x - (size.x / 2.00f) + size.x, position.y + size.y + 1.00f },
								ImColor(0, 0, 0, (int)255.00f),
								0.00f
							);

							gui->AddRectFilled // colored
							(
								{ position.x - ((size.x - 1.00f) / 2.00f), position.y + 1.00f },
								{ position.x - ((size.x - 1.00f) / 2.00f) + utils::bound((current * (size.x - 2.00f) / max) + 1.00f, 0.00f, (size.x - 2.00f)), position.y + size.y },
								ImColor((int)color.x, (int)color.y, (int)color.z, (int)255.00f),
								0.00f
							);
							render::add_text({ screen_center.x - 3.00f, screen_center.y + 12.00f }, geo::vec4_t{ 255, 255, 255, 255 }, std::to_string(static_cast<std::int32_t>(geo::reload_indicator.m_reload_time / 1000.00f)));
						}
					}
				}
			}
		}

		for (auto& player : rainy.player_list)
		{
			if (!rainy.camera || !rainy.player) continue;

			auto ply = player.cache.player;
			if (!ply) continue;

			auto distance = player.cache.distance;
			if (!distance) continue;

			auto player_model = ply->playerModel();
			if (!player_model) continue;

			auto position = player_model->position();
			if (position.is_empty()) continue;

			if (!rainy.camera->world_to_screen({ position.x, position.y + 1.75f, position.z }, &top) || !rainy.camera->world_to_screen({ position.x, position.y - 0.25f, position.z }, &bottom)) continue;

			size = { (bottom.y - top.y) / (float)1.8f, bottom.y - top.y };
			if (size.is_empty()) continue;

			if (config.Includes.Visual.health_esp)
			{
				//healthesp
				const auto health = ply->_health();
				const auto max_health = float(ply->playerModel()->IsNpck__BackingField() ? 150.00f : 100.00f);
				const auto color = render::quick::get_health_color(health / max_health);

				gui->AddRectFilled({ bottom.x + size.y / 4.00f + 10.05f, top.y }, { bottom.x + size.y / 4.00f + 8.00f, bottom.y + 3.00f }, ImColor{ black_color.x, black_color.y, black_color.x, black_color.w });
				gui->AddRectFilled({ bottom.x + size.y / 4.00f + 10.00f, top.y + (size.y - (size.y * float(health / max_health))) }, { bottom.x + size.y / 4.00f + 8.00f, bottom.y + 3.00f }, ImColor((int)color.x, (int)color.y, (int)color.z, (int)255.00f));
			}
			//
			float text_padding = 0.00f;
			if (config.Includes.Visual.belt_esp)
			{
				if (ply->has_flag(systems::player_flags::wounded))
				{
					auto belt = ply->inventory()->get_belt()->item_list();
					if (!belt) continue;

					auto belt_size = belt->size();

					for (int i = 0; i < belt_size; i++)
					{
						auto weapon = belt->get_item(i);
						if (!weapon) continue;

						text_padding = 43.00f;

						auto texture = texture_cache.get_texture(weapon->get_name());

						constexpr float padding = 36.00f;

						if (weapon->uid() == ply->clActiveItem()) gui->AddRect({ top.x + (i * padding) - ((belt_size * padding) / 2.00f) - 1.00f, top.y - 46.00f }, { top.x + 40.00f + (i * padding) - ((belt_size * padding) / 2.00f) + 2.00f, top.y - 5.00f }, ImColor(0, 255, 0, 255));
						{
							gui->AddRectFilled({ top.x + (i * padding) - ((belt_size * padding) / 2.00f), top.y - 47.00f }, { top.x + 40.00f + (i * padding) - ((belt_size * padding) / 2.00f), top.y - 7.00f }, ImColor(158, 156, 152, 50));
							gui->AddImage(texture, { top.x + (i * padding) - ((belt_size * padding) / 2.00f), top.y - 47.00f }, { top.x + 40.00f + (i * padding) - ((belt_size * padding) / 2.00f), top.y - 7.00f });
						}
						render::add_text({ top.x + 1.00f + (i * padding) - ((belt_size * padding) / 2.00f), top.y - 17.00f }, geo::vec4_t{255.00f, 0.00f, 0.00f, 255.00f}, std::to_string(weapon->amount()) + "x");
					}
				}
				else
				{
					auto belt = ply->inventory()->get_belt()->item_list();
					if (!belt) continue;

					auto belt_size = belt->size();

					for (int i = 0; i < belt_size; i++)
					{
						auto weapon = belt->get_item(i);
						if (!weapon) continue;

						text_padding = 43.00f;

						auto texture = texture_cache.get_texture(weapon->get_name());

						constexpr float padding = 45.00f;

						if (weapon->uid() == ply->clActiveItem()) gui->AddRect({ top.x + (i * padding) - ((belt_size * padding) / 2.00f) - 1.00f, top.y - 46.00f }, { top.x + 40.00f + (i * padding) - ((belt_size * padding) / 2.00f) + 2.00f, top.y - 5.00f }, ImColor(146, 157, 223, 255));
						{
							gui->AddRectFilled({ top.x + (i * padding) - ((belt_size * padding) / 2.00f), top.y - 47.00f }, { top.x + 40.00f + (i * padding) - ((belt_size * padding) / 2.00f), top.y - 7.00f }, ImColor(158, 156, 152, 50));
							gui->AddImage(texture, { top.x + (i * padding) - ((belt_size * padding) / 2.00f), top.y - 47.00f }, { top.x + 40.00f + (i * padding) - ((belt_size * padding) / 2.00f), top.y - 7.00f });
						}
						render::add_text({ top.x + 1.00f + (i * padding) - ((belt_size * padding) / 2.00f), top.y - 17.00f }, geo::vec4_t{0.00f, 160.00f, 255.00f, 255.00f}, std::to_string(weapon->amount()) + "x");
					}
				}
			}

			if (config.Includes.Visual.name_esp)
			{
				if (ply->has_flag(systems::player_flags::wounded))
				{
					auto display_name = ply->_displayName()->buffer();
					auto name = std::string(display_name.begin(), display_name.end());
					if (name.empty()) continue;
					render::add_text({ top.x - (ImGui::CalcTextSize(name.c_str()).x / 2), top.y - 14 - text_padding }, geo::vec4_t(255.00f, 0.00f, 0.00f, 255.00f), name.c_str());
				}
				else
				{
					auto display_name = ply->_displayName()->buffer();
					auto name = std::string(display_name.begin(), display_name.end());
					if (name.empty()) continue;
					render::add_text({ top.x - (ImGui::CalcTextSize(name.c_str()).x / 2), top.y - 14 - text_padding }, main_color, name.c_str());
				}
			}

			if (config.Includes.Visual.distance_esp)
			{
				if (ply->has_flag(systems::player_flags::wounded))
				{
					auto distance_string = std::to_string((int)distance) + e("m");
					if (distance_string.empty()) continue;
					render::add_text({ top.x - (ImGui::CalcTextSize(distance_string.c_str()).x / 2), top.y - 24 - text_padding }, geo::vec4_t(255.00f, 0.00f, 0.00f, 255.00f), distance_string.c_str());
				}
				else
				{
					auto distance_string = std::to_string((int)distance) + e("m");
					if (distance_string.empty()) continue;
					render::add_text({ top.x - (ImGui::CalcTextSize(distance_string.c_str()).x / 2), top.y - 24 - text_padding }, main_color, distance_string.c_str());
				}
			}

			if (config.Includes.Visual.held_item_esp)
			{
				if (ply->has_flag(systems::player_flags::wounded))
				{
					auto buffer = ply->get_projectile()->shortname();
					auto weapon_string = std::string(buffer.begin(), buffer.end());
					if (weapon_string.empty()) continue;
					render::add_text({ bottom.x - (ImGui::CalcTextSize(weapon_string.c_str()).x / 2), bottom.y + 18 }, geo::vec4_t(255.00f, 0.00f, 0.00f, 255.00f), weapon_string.c_str());
				}
				else
				{
					auto buffer = ply->get_projectile()->shortname();
					auto weapon_string = std::string(buffer.begin(), buffer.end());
					if (weapon_string.empty()) continue;
					render::add_text({ bottom.x - (ImGui::CalcTextSize(weapon_string.c_str()).x / 2), bottom.y + 18 }, main_color, weapon_string.c_str());
				}
			}

			if (config.Includes.Visual.box_esp)
			{//box
				if (ply->has_flag(systems::player_flags::wounded))
				{

				}
				else
				{
					gui->AddRect({ top.x - size.y / 4.00f, top.y }, { bottom.x + size.y / 4.00f, bottom.y + 3.00f }, ImColor{ black_color.x, black_color.y, black_color.x, black_color.w }, 0.00f, 0, 2.00f);
					gui->AddRect({ top.x - size.y / 4.00f, top.y }, { bottom.x + size.y / 4.00f, bottom.y + 3.00f }, ImColor{ main_color.x, main_color.y, main_color.z, main_color.w });
				}
			}
			if (config.Includes.Visual.skelly_esp)
			{//skeleton
				if (ply->has_flag(systems::player_flags::wounded))
				{
					auto head = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::head)->get_position());
					if (head.is_empty()) continue;

					auto neck = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::neck)->get_position());
					if (neck.is_empty()) continue;

					auto r_clavicle = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_clavicle)->get_position());
					if (r_clavicle.is_empty()) continue;

					auto r_upperarm = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_upperarm)->get_position());
					if (r_upperarm.is_empty()) continue;

					auto r_hand = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_hand)->get_position());
					if (r_hand.is_empty()) continue;

					auto l_clavicle = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_clavicle)->get_position());
					if (l_clavicle.is_empty()) continue;

					auto l_upperarm = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_upperarm)->get_position());
					if (l_upperarm.is_empty()) continue;

					auto l_hand = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_hand)->get_position());
					if (l_hand.is_empty()) continue;

					auto spine = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::pelvis)->get_position() + geo::vec3_t{0.00f, 0.15f, 0.00f});
					if (spine.is_empty()) continue;

					auto r_hip = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_hip)->get_position());
					if (r_hip.is_empty()) continue;

					auto r_knee = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_knee)->get_position());
					if (r_knee.is_empty()) continue;

					auto r_foot = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_foot)->get_position());
					if (r_foot.is_empty()) continue;

					auto l_hip = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_hip)->get_position());
					if (l_hip.is_empty()) continue;

					auto l_knee = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_knee)->get_position());
					if (l_knee.is_empty()) continue;

					auto l_foot = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_foot)->get_position());
					if (l_foot.is_empty()) continue;

					render::draw_line(head, neck, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);

					render::draw_line(neck, r_clavicle, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);
					render::draw_line(r_clavicle, r_upperarm, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);
					render::draw_line(r_upperarm, r_hand, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);

					render::draw_line(neck, l_clavicle, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);
					render::draw_line(l_clavicle, l_upperarm, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);
					render::draw_line(l_upperarm, l_hand, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);

					render::draw_line(neck, spine, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);

					render::draw_line(spine, r_hip, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);
					render::draw_line(r_hip, r_knee, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);
					render::draw_line(r_knee, r_foot, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);

					render::draw_line(spine, l_hip, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);
					render::draw_line(l_hip, l_knee, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);
					render::draw_line(l_knee, l_foot, { 255.00f, 0.00f, 0.00f, 255.00f }, 2);
				}
				else
				{
					auto head = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::head)->get_position());
					if (head.is_empty()) continue;

					auto neck = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::neck)->get_position());
					if (neck.is_empty()) continue;

					auto r_clavicle = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_clavicle)->get_position());
					if (r_clavicle.is_empty()) continue;

					auto r_upperarm = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_upperarm)->get_position());
					if (r_upperarm.is_empty()) continue;

					auto r_hand = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_hand)->get_position());
					if (r_hand.is_empty()) continue;

					auto l_clavicle = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_clavicle)->get_position());
					if (l_clavicle.is_empty()) continue;

					auto l_upperarm = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_upperarm)->get_position());
					if (l_upperarm.is_empty()) continue;

					auto l_hand = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_hand)->get_position());
					if (l_hand.is_empty()) continue;

					auto spine = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::pelvis)->get_position() + geo::vec3_t{0.00f, 0.15f, 0.00f});
					if (spine.is_empty()) continue;

					auto r_hip = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_hip)->get_position());
					if (r_hip.is_empty()) continue;

					auto r_knee = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_knee)->get_position());
					if (r_knee.is_empty()) continue;

					auto r_foot = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::r_foot)->get_position());
					if (r_foot.is_empty()) continue;

					auto l_hip = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_hip)->get_position());
					if (l_hip.is_empty()) continue;

					auto l_knee = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_knee)->get_position());
					if (l_knee.is_empty()) continue;

					auto l_foot = rainy.camera->world_to_screen_point(ply->get_bone_transform(systems::player_bones::l_foot)->get_position());
					if (l_foot.is_empty()) continue;

					render::draw_line(head, neck, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);

					render::draw_line(neck, r_clavicle, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);
					render::draw_line(r_clavicle, r_upperarm, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);
					render::draw_line(r_upperarm, r_hand, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);

					render::draw_line(neck, l_clavicle, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);
					render::draw_line(l_clavicle, l_upperarm, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);
					render::draw_line(l_upperarm, l_hand, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);

					render::draw_line(neck, spine, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);

					render::draw_line(spine, r_hip, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);
					render::draw_line(r_hip, r_knee, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);
					render::draw_line(r_knee, r_foot, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);

					render::draw_line(spine, l_hip, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);
					render::draw_line(l_hip, l_knee, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);
					render::draw_line(l_knee, l_foot, { 0.00f, 160.00f, 255.00f, 255.00f }, 2);
				}
			}
			if (config.Includes.Visual.text_belt_esp)
			{
				if (rainy.camera->aim_fov(ply) < config.Includes.Aimbot.Fov_slifer)
				{
					DWORD  window_flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse;
					ImGui::SetNextWindowSize({ 230, 200 });
					ImGui::Begin("minimenu", 0, window_flags);
					{
						ImGui::SetCursorPosX(0);
						ImGui::BeginChild("mini-menu", { 230, 225 });
						{
							auto belt = ply->inventory()->get_belt()->item_list();
							if (!belt) continue;
							auto belt_size = belt->size();
							if (!belt_size) continue;
							for (int i = 0; i < belt_size; i++)
							{
								auto weapon = belt->get_item(i);
								if (!weapon) continue;
								auto texture = texture_cache.get_texture(weapon->get_name());
								constexpr float padding = 36.00f;
								if (weapon->uid() == ply->clActiveItem()) gui->AddRect({ top.x + (i * padding) - ((belt_size * padding) / 2.00f) - 1.00f, top.y - 46.00f }, { top.x + 40.00f + (i * padding) - ((belt_size * padding) / 2.00f) + 2.00f, top.y - 5.00f }, ImColor(0, 255, 0, 255));
								{
									ImGui::SameLine();
									ImGui::Image(texture, ImVec2(25, 25));
									ImGui::SameLine();
									ImGui::Spacing();
								}
							}
						}
						ImGui::EndChild();
					}
				}
			}
		}


		for (auto& prefablist : rainy.prefab_list)
		{
			auto pos = prefablist.cache.position;
			if (pos.is_empty()) continue;
			auto distance = prefablist.cache.distance;
			if (!distance) continue;
			auto name = prefablist.cache.name;

			if (!rainy.camera->world_to_screen({ pos.x, pos.y + 1.75f, pos.z }, &top) || !rainy.camera->world_to_screen({ pos.x, pos.y - 0.25f, pos.z }, &bottom)) continue;
			size = { (bottom.y - top.y) / (float)1.8f, bottom.y - top.y };
			if (size.is_empty()) continue;
			gui->AddText({ top.x - (ImGui::CalcTextSize(name.c_str()).x / 2), top.y - 16 }, ImColor(255, 255, 255), name.c_str());
		}
	}
}