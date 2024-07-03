#pragma once
#include "imports.hpp"

class c_base_entity : public c_model
{
public:
	auto get_client_entities ( ) -> systems::c_list<std::uintptr_t>*
	{
		return driver.read_chain< systems::c_list<std::uintptr_t>*> ( reinterpret_cast< std::uintptr_t >( this ), { 0x10, 0x10, 0x28 } );
	}
};