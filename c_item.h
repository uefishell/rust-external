#pragma once
#include "imports.hpp"

class c_item
{
public:
    declare_member ( int, amount, 0x2C );

    declare_member ( int, uid, 0x20 );

    auto get_name ( ) -> std::string
    {
        auto item_info = driver.read<std::uintptr_t> ( reinterpret_cast< std::uintptr_t >( this ) + 0x18 ); // public ItemDefinition info; // 

        auto shortname = driver.read<std::uintptr_t> ( item_info + 0x20 ); // public string shortname; // 

        auto name = driver.read_wstring ( shortname + 0x14, 14 ); // rust string // 0x14

        auto output = std::string ( name.begin ( ), name.end ( ) );

        return output;
    }
};