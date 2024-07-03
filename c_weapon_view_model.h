#pragma once
#include "imports.hpp"

class c_weapon_view_model
{
public:
	declare_member ( c_weapon_bob*, get_bob, Classes::BaseViewModel::bob );
	declare_member ( c_weapon_sway*, get_sway, Classes::BaseViewModel::sway );
	declare_member ( c_weapon_lower*, get_lower, Classes::BaseViewModel::lower );
	declare_member ( c_weapon_punch*, get_punch, Classes::BaseViewModel::punch );
	declare_member ( std::uintptr_t, animator, Classes::BaseViewModel::animator );
};