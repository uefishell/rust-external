#pragma once
#include "imports.hpp"

namespace systems
{
	struct gaysex
	{
		geo::vec3_t uno;
		geo::vec3_t dos;
		std::chrono::steady_clock::time_point pornhub;
	};

	std::vector< gaysex> tracers;

	struct unity_str
	{
		char buffer[ 128 ];
	};

	class c_string
	{
	public:
		auto buffer ( ) -> std::wstring
		{
			if ( !this ) return std::wstring ( );
			auto local = reinterpret_cast< std::uintptr_t >( this );
			wchar_t buffer[ 65 ];
			driver.read ( ( local + 0x14 ), ( std::uint8_t* ) &buffer, 64 );
			buffer[ 64 ] = '\0';
			return std::wstring ( buffer );
		}
	};

	template <typename t>
	class c_list
	{
	public:
		auto size ( ) -> std::uint32_t
		{
			return driver.read<std::uint32_t> ( reinterpret_cast< std::uintptr_t >( this ) + 0x10 );
		}

		auto get ( std::uint32_t idx ) -> t
		{
			return driver.read_chain<t> ( reinterpret_cast< std::uintptr_t >( this ), { 0x18, 0x20ull + ( idx * 0x08ull ) } );
		}
	};

	template <typename t>
	class c_array
	{
	public:
		auto size ( ) -> std::uint32_t
		{
			return driver.read<std::uint32_t> ( reinterpret_cast< std::uintptr_t >( this ) + 0x18 );
		}

		auto get ( std::uint32_t idx ) -> t
		{
			return driver.read<t> ( reinterpret_cast< std::uintptr_t >( this ) + 0x20ull + ( idx * 0x8ull ) );
		}
	};

	class c_color
	{
	public:
		float r, g, b, a;

		c_color ( float _r, float _g, float _b, float _a )
		{

			r = _r;
			g = _g;
			b = _b;
			a = _a;

		}

		c_color ( uint32_t color )
		{
			this->a = ( color >> 24 ) & 0xff;
			this->r = ( color >> 16 ) & 0xff;
			this->g = ( color >> 8 ) & 0xff;
			this->b = ( color & 0xff );
		}

		static c_color from_hsb ( float flHue, float flSaturation, float flBrightness )
		{
			const float h = std::fmodf ( flHue, 1.0f ) / ( 60.0f / 360.0f );
			const int i = static_cast< int >( h );
			const float f = h - static_cast< float >( i );
			const float p = flBrightness * ( 1.0f - flSaturation );
			const float q = flBrightness * ( 1.0f - flSaturation * f );
			const float t = flBrightness * ( 1.0f - flSaturation * ( 1.0f - f ) );

			float r = 0.0f, g = 0.0f, b = 0.0f;

			switch ( i )
			{
			case 0:
				r = flBrightness, g = t, b = p;
				break;
			case 1:
				r = q, g = flBrightness, b = p;
				break;
			case 2:
				r = p, g = flBrightness, b = t;
				break;
			case 3:
				r = p, g = q, b = flBrightness;
				break;
			case 4:
				r = t, g = p, b = flBrightness;
				break;
			case 5:
			default:
				r = flBrightness, g = p, b = q;
				break;
			}

			return c_color ( r, g, b, 255 );
		}

		void random_color ( int iTick )
		{
			this->r = sin ( 3.f * iTick + 0.f ) * 127 + 128;
			this->g = sin ( 3.f * iTick + 0.f ) * 127 + 128;
			this->b = sin ( 3.f * iTick + 0.f ) * 127 + 128;
		}
	};

	enum class lifestate : std::uint32_t
	{
		alive = 0,
		dead = 1,
	};

	enum class category : std::uint32_t
	{
		shirt = 0,
		jacket = 1,
		hat = 2,
		mask = 3,
		footwear = 4,
		pants = 5,
		weapon = 6,
		misc = 7,
		deployable = 9,
		gloves = 10,
	};

	enum class model_flags : std::uint32_t
	{
		ducked = 1,
		jumped = 2,
		on_ground = 4,
		sleeping = 8,
		sprinting = 16,
		on_ladder = 32,
		flying = 64,
		aiming = 128,
		prone = 256,
		mounted = 512,
		relaxed = 1024,
		on_phone = 2048,
		crawling = 4096,
		head_look = 16384
	};

	enum class player_flags : std::uint32_t
	{
		unused1 = 1,
		unused2 = 2,
		isadmin = 4,
		receivingsnapshot = 8,
		sleeping = 16,
		spectating = 32,
		wounded = 64,
		isdeveloper = 128,
		connected = 256,
		thirdpersonviewmode = 1024,
		eyesviewmode = 2048,
		chatmute = 4096,
		nosprint = 8192,
		aiming = 16384,
		displaysash = 32768,
		relaxed = 65536,
		safezone = 131072,
		serverfall = 262144,
		incapacitated = 524288,
		workbench1 = 1048576,
		workbench2 = 2097152,
		workbench3 = 4194304,
	};

	enum class layer : std::uint32_t
	{
		none = 0,
		transparentfx = 1,
		ignore_raycast = 2,
		reserved1 = 3,
		water = 4,
		ui = 5,
		reserved2 = 6,
		reserved3 = 7,
		deployed = 8,
		ragdoll = 9,
		invisible = 10,
		ai = 11,
		player_movement = 12,
		vehicle_detailed = 13,
		game_trace = 14,
		vehicle_world = 15,
		world = 16,
		player_server = 17,
		trigger = 18,
		player_model_rendering = 19,
		physics_projectile = 20,
		construction = 21,
		construction_socket = 22,
		terrain = 23,
		transparent = 24,
		clutter = 25,
		debris = 26,
		vehicle_large = 27,
		prevent_movement = 28,
		prevent_building = 29,
		tree = 30,
		unused2 = 31,
	};

	enum class player_bones : std::uint32_t
	{
		pelvis = 1,
		l_hip = 2,
		l_knee = 3,
		l_foot = 4,
		l_toe = 5,
		l_ankle = 6,
		penis = 7,
		genitalcensor = 8,
		genitalcensor_lod0 = 9,
		inner_lod0 = 10,
		genitalcensor_lod1 = 11,
		genitalcensor_lod2 = 12,
		r_hip = 13,
		r_knee = 14,
		r_foot = 15,
		r_toe = 16,
		r_ankle = 17,
		spine1 = 18,
		spine1_scale = 19,
		spine2 = 20,
		spine3 = 21,
		spine4 = 22,
		l_clavicle = 23,
		l_upperarm = 24,
		l_forearm = 25,
		l_hand = 26,
		l_index1 = 27,
		l_index2 = 28,
		l_index3 = 29,
		l_little1 = 30,
		l_little2 = 31,
		l_little3 = 32,
		l_middle1 = 33,
		l_middle2 = 34,
		l_middle3 = 35,
		l_prop = 36,
		l_ring1 = 37,
		l_ring2 = 38,
		l_ring3 = 39,
		l_thumb1 = 40,
		l_thumb2 = 41,
		l_thumb3 = 42,
		iktarget_righthand_min = 43,
		iktarget_righthand_max = 44,
		l_ulna = 45,
		neck = 46,
		head = 47,
		jaw = 48,
		eye_transform = 49,
		l_eye = 50,
		l_eyelid = 51,
		r_eye = 52,
		r_eyelid = 53,
		r_clavicle = 54,
		r_upperarm = 55,
		r_forearm = 56,
		r_hand = 57,
		r_index1 = 58,
		r_index2 = 59,
		r_index3 = 60,
		r_little1 = 61,
		r_little2 = 62,
		r_little3 = 63,
		r_middle1 = 64,
		r_middle2 = 65,
		r_middle3 = 66,
		r_prop = 67,
		r_ring1 = 68,
		r_ring2 = 69,
		r_ring3 = 70,
		r_thumb1 = 71,
		r_thumb2 = 72,
		r_thumb3 = 73,
		iktarget_lefthand_min = 74,
		iktarget_lefthand_max = 75,
		r_ulna = 76,
		l_breast = 77,
		r_breast = 78,
		boobcensor = 79,
		breastcensor_lod0 = 80,
		breastcensor_lod1 = 81,
		breastcensor_lod2 = 82,
		collision = 83,
		displacement = 84
	};
}