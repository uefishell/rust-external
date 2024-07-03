#pragma once
#include "imports.hpp"

class c_weapon_punch
{
public:
	auto set_punchanim ( float n ) -> void
	{
		driver.write<float> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::ViewmodelPunch::punchDuration, n );
		driver.write<float> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::ViewmodelPunch::punchMagnitude, n );
	}
};