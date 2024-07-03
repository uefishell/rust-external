#pragma once
#include "imports.hpp"

class c_weapon_bob
{
public:
	auto set_bobanim ( float n ) -> void
	{
		driver.write<float> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::ViewmodelBob::bobSpeedRun, n );
		driver.write<float> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::ViewmodelBob::bobSpeedWalk, n );
		driver.write<float> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::ViewmodelBob::bobAmountRun, n );
		driver.write<float> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::ViewmodelBob::bobAmountWalk, n );
		driver.write<float> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::ViewmodelBob::leftOffsetRun, n );
	}
};