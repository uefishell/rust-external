#pragma once
#include "imports.hpp"

class c_item_list
{
public:
    declare_member ( int, size, 0x18 );

    auto get_item ( int id ) -> c_item*
    {
        auto items_list = driver.read< std::uintptr_t > ( reinterpret_cast< std::uintptr_t >( this ) + 0x10 );

        return driver.read< c_item* > ( items_list + 0x20 + ( id * 0x8 ) );
    }
};