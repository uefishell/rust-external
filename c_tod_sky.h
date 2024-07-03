#pragma once
#include "imports.hpp"

class c_tod_sky
{
public:
	declare_member ( c_tod_components*, Components, 0xA8 );
public:
	static auto instance ( ) -> c_tod_sky*
	{
		return driver.read_chain<c_tod_sky*> ( driver.game_assembly, { Vars::m_TodSky_c, 0xB8, 0x0, 0x10, 0x20 } );
	}
};