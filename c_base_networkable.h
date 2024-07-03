#pragma once
#include "imports.hpp"

class c_base_networkable
{
public:
	static auto get_base_entity ( ) -> c_base_entity*
	{
		return driver.read_chain<c_base_entity*> ( driver.game_assembly, { Vars::m_BaseEntity_c, 0xB8 } );
	}
};