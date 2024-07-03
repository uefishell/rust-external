#pragma once
#include "imports.hpp"

struct matrix_s
{
	union
	{
		struct
		{
			float _11, _12, _13, _14;
			float _21, _22, _23, _24;
			float _31, _32, _33, _34;
			float _41, _42, _43, _44;
		};
		float m[4][4];
	};
};

class c_camera
{
public:
	declare_member(matrix_s, projection_matrix, 0x2E4);
	declare_member(geo::vec3_t, position, 0x42C);

	static auto instance() -> c_camera*
	{
		return driver.read_chain<c_camera*>(driver.game_assembly, { Vars::m_MainCamera_c,  0xB8, 0x00, 0x10 });
	}

	auto aim_fov(c_base_player* ply) -> float
	{
		geo::vec2_t ScreenPos;
		if (!this->world_to_screen(ply->get_bone_transform(systems::player_bones::head)->get_position(), &ScreenPos)) return 1000.f;
		return calculate_2d_distance(geo::vec2_t(config.Includes.Setiings.width / 2, config.Includes.Setiings.height / 2), ScreenPos);
	}

	auto world_to_screen(geo::vec3_t world, geo::vec2_t* screen) -> bool
	{
		auto matrix = this->projection_matrix();
		auto trans_vec = geo::vec3_t(matrix._14, matrix._24, matrix._34);
		auto right_vec = geo::vec3_t(matrix._11, matrix._21, matrix._31);
		auto up_vec = geo::vec3_t(matrix._12, matrix._22, matrix._32);

		auto w = trans_vec.dot(world) + matrix._44;
		if (w < 0.5f)return false; //0.098f
		auto x = right_vec.dot(world) + matrix._41;
		auto y = up_vec.dot(world) + matrix._42;

		*screen =
		{
			((float)config.Includes.Setiings.width * 0.5f) * (1.f + x / w),
			((float)config.Includes.Setiings.height * 0.5f + 1) * (1.f - y / w)
		};
		return true;
	}

	auto world_to_screen_point(geo::vec3_t world) -> geo::vec2_t
	{
		auto matrix = this->projection_matrix();
		auto trans_vec = geo::vec3_t(matrix._14, matrix._24, matrix._34);
		auto right_vec = geo::vec3_t(matrix._11, matrix._21, matrix._31);
		auto up_vec = geo::vec3_t(matrix._12, matrix._22, matrix._32);

		auto w = trans_vec.dot(world) + matrix._44;
		if (w < 0.5f)return { 0.00f, 0.00f }; //0.098f
		auto x = right_vec.dot(world) + matrix._41;
		auto y = up_vec.dot(world) + matrix._42;
		geo::vec2_t screen;

		screen =
		{
			((float)config.Includes.Setiings.width * 0.5f) * (1.f + x / w),
			((float)config.Includes.Setiings.height * 0.5f + 1) * (1.f - y / w)
		};
		return screen;
	}
private:
	auto calculate_2d_distance(geo::vec2_t src, geo::vec2_t dst) -> float
	{
		return std::sqrt(std::powf(src.x - dst.x, 2) + std::powf(src.y - dst.y, 2));
	}
};