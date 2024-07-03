#pragma once
#include "imports.hpp"

class c_convar_client
{
public:
	declare_member ( float, camLerp, 0x30 );
	declare_member ( float, camSpeed, 0x3C );
	declare_member ( float, camLookSpeed, 0x44 );
public:
	static auto instance ( ) -> c_convar_client*
	{
		return driver.read_chain<c_convar_client*> ( driver.game_assembly, { Vars::m_ConVar_Client_c, 0xB8 } );
	}
};