#pragma once
#include "imports.hpp"

class c_skinnable
{
public:
	declare_member ( systems::category, Category, 0x58 );
	declare_member ( systems::c_array<c_groups*>*, Groups, 0x60 );
	declare_member ( systems::c_array<c_skinnable*>*, All, 0x0 );
public:
	static auto instance ( ) -> c_skinnable*
	{
		return driver.read_chain<c_skinnable*> ( driver.game_assembly, { Vars::m_Skinnable_c, 0xB8 } );
	}
};