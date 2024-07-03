#pragma once
#include "imports.hpp"

class c_player_input
{
public:
	declare_member ( geo::vec2_t, bodyAngles, Classes::PlayerInput::bodyAngles );
public:
	declare_member ( c_input_state*, state, Classes::PlayerInput::state );
public:
};