#pragma once
#include "imports.hpp"

class c_weapon_lower
{
public:
	auto set_should_lower ( bool n ) -> void
	{
		driver.write<bool> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::ViewmodelLower::shouldLower, n );
	}
};