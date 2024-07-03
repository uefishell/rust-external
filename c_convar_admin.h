#pragma once
#include "imports.hpp"

class c_convar_admin : public c_admin
{
public:
	static auto instance ( ) -> c_convar_admin*
	{
		return driver.read_chain<c_convar_admin*> ( driver.game_assembly, { Vars::m_ConVar_Admin_c, 0xB8 } );
	}
};