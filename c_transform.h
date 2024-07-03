#pragma once
#include "imports.hpp"

struct transform_access_read_only_t
{
	std::uint64_t transform_data{};
};

struct transform_data_t
{
	std::uint64_t transform_array{};
	std::uint64_t transform_indices{};
};

struct matrix34_t
{
	geo::vec4_t vec0{};
	geo::vec4_t vec1{};
	geo::vec4_t vec2{};
};

class c_transform
{
public:
	auto get_position ( ) -> geo::vec3_t
	{
		std::uintptr_t transform = driver.read<std::uintptr_t> ( reinterpret_cast< std::uintptr_t >( this ) + 0x10 );

		__m128 result{};

		const __m128 mulVec0 = { -2.000, 2.000, -2.000, 0.000 };
		const __m128 mulVec1 = { 2.000, -2.000, -2.000, 0.000 };
		const __m128 mulVec2 = { -2.000, -2.000, 2.000, 0.000 };

		transform_access_read_only_t transform_access_read_only = driver.read<transform_access_read_only_t> ( transform + 0x38 );
		unsigned int index = driver.read<unsigned int> ( transform + 0x40 );
		transform_data_t transform_data = driver.read<transform_data_t> ( transform_access_read_only.transform_data + 0x18 );

		if ( transform_data.transform_array && transform_data.transform_indices )
		{
			result = driver.read<__m128> ( transform_data.transform_array + 0x30 * index );
			int transform_index = driver.read<int> ( transform_data.transform_indices + 0x4 * index );
			int safe = 0;
			while ( transform_index >= 0 && safe++ < 200 )
			{
				matrix34_t matrix = driver.read<matrix34_t> ( transform_data.transform_array + 0x30 * transform_index );

				__m128 xxxx = _mm_castsi128_ps ( _mm_shuffle_epi32 ( *( __m128i* )( &matrix.vec1 ), 0x00 ) );	// xxxx
				__m128 yyyy = _mm_castsi128_ps ( _mm_shuffle_epi32 ( *( __m128i* )( &matrix.vec1 ), 0x55 ) );	// yyyy
				__m128 zwxy = _mm_castsi128_ps ( _mm_shuffle_epi32 ( *( __m128i* )( &matrix.vec1 ), 0x8E ) );	// zwxy
				__m128 wzyw = _mm_castsi128_ps ( _mm_shuffle_epi32 ( *( __m128i* )( &matrix.vec1 ), 0xDB ) );	// wzyw
				__m128 zzzz = _mm_castsi128_ps ( _mm_shuffle_epi32 ( *( __m128i* )( &matrix.vec1 ), 0xAA ) );	// zzzz
				__m128 yxwy = _mm_castsi128_ps ( _mm_shuffle_epi32 ( *( __m128i* )( &matrix.vec1 ), 0x71 ) );	// yxwy
				__m128 tmp7 = _mm_mul_ps ( *( __m128* )( &matrix.vec2 ), result );

				result = _mm_add_ps ( _mm_add_ps (
					_mm_add_ps (
						_mm_mul_ps (
							_mm_sub_ps (
								_mm_mul_ps ( _mm_mul_ps ( xxxx, mulVec1 ), zwxy ),
								_mm_mul_ps ( _mm_mul_ps ( yyyy, mulVec2 ), wzyw ) ),
							_mm_castsi128_ps ( _mm_shuffle_epi32 ( _mm_castps_si128 ( tmp7 ), 0xAA ) ) ),
						_mm_mul_ps (
							_mm_sub_ps (
								_mm_mul_ps ( _mm_mul_ps ( zzzz, mulVec2 ), wzyw ),
								_mm_mul_ps ( _mm_mul_ps ( xxxx, mulVec0 ), yxwy ) ),
							_mm_castsi128_ps ( _mm_shuffle_epi32 ( _mm_castps_si128 ( tmp7 ), 0x55 ) ) ) ),
					_mm_add_ps (
						_mm_mul_ps (
							_mm_sub_ps (
								_mm_mul_ps ( _mm_mul_ps ( yyyy, mulVec0 ), yxwy ),
								_mm_mul_ps ( _mm_mul_ps ( zzzz, mulVec1 ), zwxy ) ),
							_mm_castsi128_ps ( _mm_shuffle_epi32 ( _mm_castps_si128 ( tmp7 ), 0x00 ) ) ),
						tmp7 ) ), *( __m128* )( &matrix.vec0 ) );

				transform_index = driver.read<int> ( transform_data.transform_indices + 0x4 * transform_index );
			}
		}

		return geo::vec3_t ( result.m128_f32[ 0 ], result.m128_f32[ 1 ], result.m128_f32[ 2 ] );
	}
};