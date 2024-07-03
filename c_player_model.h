#pragma once
#include "imports.hpp"

class c_player_model
{
public:
	declare_member ( bool, visible, Classes::PlayerModel::visible );
	declare_member ( int, skinType, Classes::PlayerModel::skinType );
	declare_member ( geo::vec3_t, position, Classes::PlayerModel::position );
	declare_member ( bool, isLocalPlayer, Classes::PlayerModel::isLocalPlayer );
	declare_member ( geo::vec3_t, newVelocity, Classes::PlayerModel::newVelocity );
	declare_member ( bool, IsNpck__BackingField, Classes::PlayerModel::IsNpck__BackingField );
public:
	declare_member ( c_skinset_collection*, MaleSkin, Classes::PlayerModel::MaleSkin );
	declare_member ( c_skinset_collection*, FemaleSkin, Classes::PlayerModel::FemaleSkin );
public:
};