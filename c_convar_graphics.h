#pragma once
#include "imports.hpp"

class c_convar_graphics
{
public:
	declare_member ( float, graphicsFov, 0x18 );
public:
	static auto instance ( ) -> c_convar_graphics*
	{
		return driver.read_chain<c_convar_graphics*> ( driver.game_assembly, { Vars::m_ConVar_Graphics_c, 0xB8 } );
	}
};