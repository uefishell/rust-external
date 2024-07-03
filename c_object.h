#pragma once
#include "imports.hpp"

class c_object : public c_base_player
{
public:
	declare_member ( c_object_class*, object_class, 0x30 );
public:
	auto get_instance ( ) -> c_base_player*
	{
		return driver.read<c_base_player*> ( reinterpret_cast< std::uintptr_t >( this ) + 0x28 );
	}
};