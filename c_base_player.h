#pragma once
#include "imports.hpp"

class c_base_player : public c_base_combat_entity
{
public:
	declare_member ( std::uint32_t, userID, Classes::BasePlayer::userID );
	declare_member ( std::uint32_t, currentTeam, Classes::BasePlayer::currentTeam );
	declare_member ( float, lastSentTickTime, Classes::BasePlayer::lastSentTickTime );
	declare_member ( std::uint32_t, clActiveItem, Classes::BasePlayer::clActiveItem );
	declare_member ( float, clientTickInterval, Classes::BasePlayer::clientTickInterval );
	declare_member ( bool, needsClothesRebuild, Classes::BasePlayer::needsClothesRebuild );
	declare_member ( systems::c_string*, _displayName, Classes::BasePlayer::_displayName );
public:
	declare_member ( c_player_eyes*, eyes, Classes::BasePlayer::eyes );
	declare_member ( c_player_belt*, Belt, Classes::BasePlayer::Belt );
	declare_member ( c_player_input*, input, Classes::BasePlayer::input );
	declare_member ( c_base_mountable*, mounted, Classes::BasePlayer::mounted );
	declare_member ( c_base_movement*, movement, Classes::BasePlayer::movement );
	declare_member ( c_model_state*, modelState, Classes::BasePlayer::modelState );
	declare_member ( c_base_collision*, collision, Classes::BasePlayer::collision );
	declare_member ( c_player_inventory*, inventory, Classes::BasePlayer::inventory );
	declare_member ( c_player_model*, playerModel, Classes::BasePlayer::playerModel );
	declare_member ( c_player_tick*, lastSentTick, Classes::BasePlayer::lastSentTick );
	declare_member ( c_rigid_body*, playerRigidbody, Classes::BasePlayer::playerRigidbody );
	declare_member ( systems::player_flags, playerFlags, Classes::BasePlayer::playerFlags );
	declare_member ( c_capsule_collider*, playerCollider, Classes::BasePlayer::playerCollider );
public:
	auto has_flag ( systems::player_flags player_flag ) -> bool
	{
		return ( std::uint32_t ) this->playerFlags ( ) & ( std::uint32_t ) player_flag;
	}

	auto is_teammate ( c_base_player* local ) -> bool
	{
		auto local_team = local->currentTeam ( );
		auto player_team = this->currentTeam ( );
		bool team = ( local_team == player_team && local_team && player_team );
		return team;
	}

	auto is_dead ( ) -> bool
	{
		if ( this->lifestate ( ) == systems::lifestate::alive ) return false;
		else return true;
	}

	auto is_valid ( c_base_player* local_player ) -> bool
	{
		auto health = this->_health ( );
		auto player_model = this->playerModel ( );

		if ( this->is_dead ( ) ) return false;
		if ( this == local_player ) return false;
		if ( health > 350.00f || health < 0.08f ) return false;
		if ( player_model->IsNpck__BackingField ( ) ) return false;
		if ( this->has_flag ( systems::player_flags::sleeping ) ) return false;
		if ( player_model->position ( ).is_empty ( ) ) return false;
		return true;
	}
public:
	auto get_bone_transform ( systems::player_bones bone_id ) -> c_transform*
	{
		auto player_model = driver.read<std::uintptr_t> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::BaseEntity::model );
		auto bone_transforms = driver.read<std::uintptr_t> ( player_model + 0x48 );
		auto transform = driver.read<c_transform*> ( bone_transforms + ( 0x20 + ( ( int ) bone_id * 0x8 ) ) );
		return transform;
	}

	auto get_projectile ( ) -> c_projectile*
	{
		auto active_uid = this->clActiveItem( );
		if ( !active_uid ) return nullptr;

		for ( std::uint32_t i = 0; i < 6; i++ )
		{
			auto projectile = driver.read_chain<c_projectile*> ( reinterpret_cast< std::uintptr_t > ( this ), { Classes::BasePlayer::inventory, 0x28, 0x40, 0x10, 0x20 + ( i * 0x8 ) } );
			if ( !projectile ) continue;

			if ( active_uid == projectile->uid ( ) ) return projectile;
		}
		return nullptr;
	}

	static auto instance ( ) -> c_base_player*
	{
		return driver.read_chain<c_base_player*> ( driver.game_assembly, { Vars::m_LocalPlayer_c, 0xB8, 0x0, 0x10, 0x28 } );
	}
};