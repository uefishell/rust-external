#pragma once
#include <math.h>
#include <algorithm>
#define m_pi 3.141592653589793238462643383279502884197169399375105820974944f
#define m_pi_half 1.57079632679489661923f
#define rad_to_deg(x) ((float)(x) * (float)(180.f / m_pi_half))
#define power_max(n) (n)*(n)

namespace geo
{
	class vec2_t
	{
	public:
		float x, y;

		vec2_t() { x = y = 0.00f; }

		vec2_t(float x, float y) { this->x = x; this->y = y; }

		auto operator+(const geo::vec2_t& input) -> geo::vec2_t { return geo::vec2_t{ x + input.x, y + input.y }; }

		auto operator-(const geo::vec2_t& input) -> geo::vec2_t { return geo::vec2_t{ x - input.x, y - input.y }; }

		auto operator==(const geo::vec2_t& input) -> bool { return x == input.x && y == input.y; }

		auto operator>(const geo::vec2_t& input) -> bool { return x > input.x && y > input.y; }

		auto operator<(const geo::vec2_t& input) -> bool { return x < input.x && y < input.y; }

		auto operator-=(const geo::vec2_t& v) -> geo::vec2_t { x -= v.x; y -= v.y; return *this; }

		auto operator/(const geo::vec2_t& input) -> geo::vec2_t { return geo::vec2_t{ x / input.x, y / input.y }; }

		auto operator*(const geo::vec2_t& input) -> geo::vec2_t { return geo::vec2_t{ x* input.x, y* input.y }; }

		auto operator+=(const geo::vec2_t& v) -> geo::vec2_t { x += v.x; y += v.y; return *this; }

		auto operator+(float input) -> geo::vec2_t { return geo::vec2_t{ x + input, y + input }; }

		auto operator-(float input) -> geo::vec2_t { return geo::vec2_t{ x - input, y - input }; }

		auto operator/(float input) -> geo::vec2_t { return geo::vec2_t{ x / input, y / input }; }

		auto operator/=(float input) -> geo::vec2_t { x /= input; y /= input; return *this; }

		auto operator*=(float input) -> geo::vec2_t { x *= input; y *= input; return *this; }

		auto operator*(float input) -> geo::vec2_t { return geo::vec2_t{ x* input, y* input }; }

		auto is_empty() -> bool
		{
			if (this->x == 0.00f || this->y == 0.00f) return true;
			else return false;
		}

		auto dot(geo::vec2_t input) -> float
		{
			return (x * input.x) + (y * input.y);
		}

		auto length_sqr() -> float
		{
			return (x * x) + (y * y);
		}

		auto length() -> float
		{
			return (float)sqrt(length_sqr());
		}

		auto distance(geo::vec2_t input) -> float
		{
			return (*this - input).length();
		}

		auto normalized() -> geo::vec2_t
		{
			auto length = sqrt((x * x) + (y * y));
			return { this->x / length , this->y / length };
		}

		auto clamped() -> geo::vec2_t
		{
			auto angles = *this;

			if (angles.x < -180.00f)
				angles.x += 360.00f;
			if (angles.x > 180.00f)
				angles.x -= 360.00f;

			if (angles.y < -180.00f)
				angles.y += 360.00f;
			if (angles.y > 180.00f)
				angles.y -= 360.00f;

			if (angles.x > 89.00f && angles.x <= 180.00f)
				angles.x = 89.00f;

			return angles;
		}

		auto clear() -> void
		{
			this->x = 0.00f;
			this->y = 0.00f;
		}
	};

	class vec3_t
	{
	public:
		float x, y, z;

		vec3_t() { x = y = z = 0.00f; }

		vec3_t(float x, float y, float z) { this->x = x; this->y = y; this->z = z; }

		auto operator+(const geo::vec3_t& input) -> geo::vec3_t { return geo::vec3_t{ x + input.x, y + input.y, z + input.z }; }

		auto operator-(const geo::vec3_t& input) -> geo::vec3_t { return geo::vec3_t{ x - input.x, y - input.y, z - input.z }; }

		auto operator==(const geo::vec3_t& input) -> bool { return x == input.x && y == input.y && z == input.z; }

		auto operator==(geo::vec3_t input) -> bool { return x == input.x && y == input.y && z == input.z; }

		auto operator>(const geo::vec3_t& input) -> bool { return x > input.x && y > input.y && z > input.z; }

		auto operator<(const geo::vec3_t& input) -> bool { return x < input.x && y < input.y && z < input.z; }

		auto operator-=(const geo::vec3_t& v) -> geo::vec3_t { x -= v.x; y -= v.y; z -= v.z; return *this; }

		auto operator/(const geo::vec3_t& input) -> geo::vec3_t { return geo::vec3_t{ x / input.x, y / input.y, z / input.z }; }

		auto operator*(const geo::vec3_t& input) -> geo::vec3_t { return geo::vec3_t{ x* input.x, y* input.y, z* input.z }; }

		auto operator+=(const geo::vec3_t& v) -> geo::vec3_t { x += v.x; y += v.y; z += v.z; return *this; }

		auto operator+(float input) -> geo::vec3_t { return geo::vec3_t{ x + input, y + input, z + input }; }

		auto operator-(float input) -> geo::vec3_t { return geo::vec3_t{ x - input, y - input, z - input }; }

		auto operator/(float input) -> geo::vec3_t { return geo::vec3_t{ x / input, y / input, z / input }; }

		auto operator/=(float input) -> geo::vec3_t { x /= input; y /= input; z /= input; return *this; }

		auto operator*=(float input) -> geo::vec3_t { x *= input; y *= input; z *= input; return *this; }

		auto operator*(float input) -> geo::vec3_t { return geo::vec3_t{ x* input, y* input, z* input }; }

		static auto zero() -> geo::vec3_t
		{
			return geo::vec3_t(0.00f, 0.00f, 0.00f);
		}

		static auto get_right() -> geo::vec3_t
		{
			return geo::vec3_t(1.00f, 0.00f, 0.00f);
		}

		static auto get_left() -> geo::vec3_t
		{
			return geo::vec3_t(-1.00f, 0.00f, 0.00f);
		}

		static auto get_forward() -> geo::vec3_t
		{
			return geo::vec3_t(0.00f, 0.00f, 1.00f);
		}

		static auto get_backward() -> geo::vec3_t
		{
			return geo::vec3_t(0.00f, 0.00f, -1.00f);
		}

		static auto get_up() -> geo::vec3_t
		{
			return geo::vec3_t(0.00f, 1.00f, 0.00f);
		}

		static auto get_down() -> geo::vec3_t
		{
			return geo::vec3_t(0.00f, -1.00f, 0.00f);
		}

		auto is_empty() -> bool
		{
			if (this->x == 0.00f || this->y == 0.00f || this->z == 0.00f) return true;
			else return false;
		}

		auto dot(geo::vec3_t input) -> float
		{
			return (x * input.x) + (y * input.y) + (z * input.z);
		}

		auto length_sqr() -> float
		{
			return (x * x) + (y * y) + (z * z);
		}

		auto length() -> float
		{
			return (float)sqrt(length_sqr());
		}

		auto distance(geo::vec3_t input) -> float
		{
			return (*this - input).length();
		}

		auto normalized() -> geo::vec3_t
		{
			auto length = sqrt((x * x) + (y * y) + (z * z));
			return { this->x / length , this->y / length, this->z / length };
		}

		auto clear() -> void
		{
			this->x = 0.00f;
			this->y = 0.00f;
			this->z = 0.00f;
		}

	};

	class vec4_t
	{
	public:
		float x, y, z, w;

		vec4_t() { x = y = z = w = 0.00f; }

		vec4_t(float x, float y, float z, float w) { this->x = x; this->y = y; this->z = z; this->w = w; }

		auto operator+(const geo::vec4_t& input) -> geo::vec4_t { return geo::vec4_t{ x + input.x, y + input.y, z + input.z, w + input.w }; }

		auto operator-(const geo::vec4_t& input) -> geo::vec4_t { return geo::vec4_t{ x - input.x, y - input.y, z - input.z, w - input.w }; }

		auto operator==(const geo::vec4_t& input) -> bool { return x == input.x && y == input.y && z == input.z && w == input.w; }

		auto operator>(const geo::vec4_t& input) -> bool { return x > input.x && y > input.y && z > input.z && w > input.w; }

		auto operator<(const geo::vec4_t& input) -> bool { return x < input.x && y < input.y && z < input.z && w < input.w; }

		auto operator-=(const geo::vec4_t& v) -> geo::vec4_t { x -= v.x; y -= v.y; z -= v.z; w -= v.w; return *this; }

		auto operator/(const geo::vec4_t& input) -> geo::vec4_t { return geo::vec4_t{ x / input.x, y / input.y, z / input.z, w / input.w }; }

		auto operator*(const geo::vec4_t& input) -> geo::vec4_t { return geo::vec4_t{ x* input.x, y* input.y, z* input.z, w* input.w }; }

		auto operator+=(const geo::vec4_t& v) -> geo::vec4_t { x += v.x; y += v.y; z += v.z; w += v.w; return *this; }

		auto operator+(float input) -> geo::vec4_t { return geo::vec4_t{ x + input, y + input, z + input, w + input}; }

		auto operator-(float input) -> geo::vec4_t { return geo::vec4_t{ x - input, y - input, z - input, w - input }; }

		auto operator/(float input) -> geo::vec4_t { return geo::vec4_t{ x / input, y / input, z / input, w / input }; }

		auto operator/=(float input) -> geo::vec4_t { x /= input; y /= input; z /= input; w /= input; return *this; }

		auto operator*=(float input) -> geo::vec4_t { x *= input; y *= input; z *= input; w *= input; return *this; }

		auto operator*(float input) -> geo::vec4_t { return geo::vec4_t{ x* input, y* input, z* input, w* input }; }

		auto is_empty() -> bool
		{
			if (this->x == 0.00f || this->y == 0.00f || this->z == 0.00f || this->w == 0.00f) return true;
			else return false;
		}

		auto dot(geo::vec4_t input) -> float
		{
			return (x * input.x) + (y * input.y) + (z * input.z) + (w * input.w);
		}

		auto length_sqr() -> float
		{
			return (x * x) + (y * y) + (z * z) + (w * w);
		}

		auto length() -> float
		{
			return (float)sqrt(length_sqr());
		}

		auto distance(geo::vec4_t input) -> float
		{
			return (*this - input).length();
		}

		auto normalized() -> geo::vec4_t
		{
			auto length = sqrt((x * x) + (y * y) + (z * z) + (w * w));
			return { this->x / length , this->y / length, this->z / length, this->w / length };
		}

		auto clear() -> void
		{
			this->x = 0.f;
			this->y = 0.f;
			this->z = 0.f;
			this->w = 0.f;
		}
		geo::vec3_t Multiply(CONST geo::vec3_t& Point)
		{
			float num = x * 2.00f;
			float num2 = y * 2.00f;
			float num3 = z * 2.00f;
			float num4 = x * num;
			float num5 = y * num2;
			float num6 = z * num3;
			float num7 = x * num2;
			float num8 = x * num3;
			float num9 = y * num3;
			float num10 = w * num;
			float num11 = w * num2;
			float num12 = w * num3;
			geo::vec3_t result;
			result.x = (1.00f - (num5 + num6)) * Point.x +
				(num7 - num12) * Point.y + (num8 + num11) * Point.z;
			result.y = (num7 + num12) * Point.x +
				(1.00f - (num4 + num6)) * Point.y +
				(num9 - num10) * Point.z;
			result.z = (num8 - num11) * Point.x + (num9 + num10) * Point.y +
				(1.00f - (num4 + num5)) * Point.z;
			return result;
		}
	};

	class c_reload_bar
	{
	public:
		float m_reload_time = 0.f;
		float m_reload_duration = 0.f;
	}; inline c_reload_bar reload_indicator;

	class c_tracers
	{
	public:
		geo::vec3_t bullet_pos;
		geo::vec3_t local_pos;
		std::chrono::time_point<std::chrono::steady_clock> shot_at;
	}; inline std::vector<c_tracers> bullet_tracer;

	auto to_quaternion(geo::vec2_t euler) -> geo::vec4_t
	{
		auto to_radians = [&](float degree) -> double
		{
			return (degree * (m_pi / 180.f));
		};

		float heading = to_radians(euler.x);
		float attitude = to_radians(euler.y);
		float bank = to_radians(0);

		float c1 = std::cos(heading / 2);
		float s1 = std::sin(heading / 2);
		float c2 = std::cos(attitude / 2);
		float s2 = std::sin(attitude / 2);
		float c3 = std::cos(bank / 2);
		float s3 = std::sin(bank / 2);

		float c1c2 = c1 * c2;
		float s1s2 = s1 * s2;
		auto quat = geo::vec4_t(c1c2 * s3 + s1s2 * c3, s1 * c2 * c3 + c1 * s2 * s3, c1 * s2 * c3 - s1 * c2 * s3, c1c2 * c3 - s1s2 * s3);

		return { quat.y, quat.z, (quat.x * -1), quat.w };
	}

	auto quaternion_multi(const geo::vec3_t point, geo::vec4_t* quat) -> geo::vec3_t
	{
		float num = quat->x * 2.f;
		float num2 = quat->y * 2.f;
		float num3 = quat->z * 2.f;
		float num4 = quat->x * num;
		float num5 = quat->y * num2;
		float num6 = quat->z * num3;
		float num7 = quat->x * num2;
		float num8 = quat->x * num3;
		float num9 = quat->y * num3;
		float num10 = quat->w * num;
		float num11 = quat->w * num2;
		float num12 = quat->w * num3;
		geo::vec3_t result{};
		result.x = (1.f - (num5 + num6)) * point.x + (num7 - num12) * point.y + (num8 + num11) * point.z;
		result.y = (num7 + num12) * point.x + (1.f - (num4 + num6)) * point.y + (num9 - num10) * point.z;
		result.z = (num8 - num11) * point.x + (num9 + num10) * point.y + (1.f - (num4 + num5)) * point.z;
		return result;
	}

	auto calc_3d_dist(const geo::vec3_t& Src, const geo::vec3_t& Dst) -> float
	{
		return sqrt(power_max((Src.x - Dst.x)) + power_max((Src.y - Dst.y)) + power_max((Src.z - Dst.z)));
	}

	auto calculate_angle(geo::vec3_t src, geo::vec3_t dst) -> geo::vec2_t
	{
		auto direction = src - dst;

		return
		{
			(std::asinf(direction.y / direction.length()) * 57.295779513082321600f),
			(-std::atan2f(direction.x, -direction.z) * 57.295779513082321600f)
		};
	}

	auto calc_3d_dist_vec2(geo::vec3_t src, geo::vec3_t dst) -> geo::vec2_t
	{
		geo::vec3_t dir = src - dst;
		return geo::vec2_t{ rad_to_deg(asin(dir.y / dir.length())), rad_to_deg(-atan2(dir.x, -dir.z)) };
	}

	auto magnitude_2d(const geo::vec3_t& v) -> float
	{
		return std::sqrt(v.x * v.x + v.y * v.y);
	}

	auto normalize(geo::vec2_t angles) -> geo::vec2_t
	{
		if (angles.x < -89) angles.x = -89;
		else if (angles.x > 89) angles.x = 89;
		if (angles.y < -360) angles.y += 360;
		else if (angles.y > 360) angles.y -= 360;

		return angles;
	}
}