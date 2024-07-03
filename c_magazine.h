#pragma once
#include "imports.hpp"

class c_magazine
{
public:
	declare_member ( c_ammo_definition*, ammo, 0x20 );
public:
	declare_member ( int, capacity, 0x18 );
	declare_member ( int, contents, 0x1C );

	auto shortname ( ) -> systems::c_string*
	{
		return driver.read_chain<systems::c_string*> ( reinterpret_cast< std::uintptr_t >( this ), { 0x10 , 0x20 } );
	}
};