#pragma once
#include "imports.hpp"

class c_projectile
{
public:
	declare_member ( std::uint32_t, uid, Classes::Item::uid );
	declare_member ( float, thickness, Classes::Projectile::thickness );
public:
	declare_member ( c_hit_test*, hitTest, Classes::Projectile::hitTest );
	declare_member ( c_item_definition*, info, Classes::Item::info );
	declare_member ( c_held_item*, heldEntity, Classes::Item::heldEntity );
	declare_member ( c_item_projectile_mod*, mod, Classes::Projectile::mod );
public:
	auto shortname ( ) -> std::wstring
	{
		if ( !this || !this->heldEntity ( ) ) return L"none";
		else
		{
			auto info = driver.read<std::uintptr_t> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::Item::info );

			auto display_name = driver.read<std::uintptr_t> ( info + Classes::ItemDefinition::shortname );

			auto wide_name = driver.read_wstring ( display_name + 0x14, 14 );

			return wide_name;
		}
	}
};