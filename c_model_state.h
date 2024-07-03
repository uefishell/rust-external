#pragma once
#include "imports.hpp"

class c_model_state
{
public:
	declare_member ( float, waterLevel, 0x10 );
public:
	declare_member ( systems::model_flags, flags, 0x20 );
public:
	auto has_flag ( systems::model_flags model_flag ) -> bool
	{
		return ( std::uint32_t ) this->flags ( ) & ( std::uint32_t ) model_flag;
	}
};