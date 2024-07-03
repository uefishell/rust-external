#pragma once
#include "imports.hpp"

class c_weapon_sway
{
public:
	auto set_swayanim ( float n ) -> void
	{
		driver.write<float> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::ViewmodelSway::positionalSwaySpeed, n );
		driver.write<float> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::ViewmodelSway::rotationSwayAmount, n );
	}
};