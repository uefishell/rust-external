#pragma once
#include "imports.hpp"

class c_held_item
{
public:
	declare_member ( float, arrowBack, Classes::BowWeapon::arrowBack );
	declare_member ( float, aimSway, Classes::BaseProjectile::aimSway );
	declare_member ( float, aimCone, Classes::BaseProjectile::aimCone );
	declare_member ( bool, attackReady, Classes::BowWeapon::attackReady );
	declare_member ( bool, automatic, Classes::BaseProjectile::automatic );
	declare_member ( float, strikes, Classes::FlintStrikeWeapon::strikes );
	declare_member ( float, repeatDelay, Classes::AttackEntity::repeatDelay );
	declare_member ( float, hipAimCone, Classes::BaseProjectile::hipAimCone );
	declare_member ( float, reloadTime, Classes::BaseProjectile::reloadTime );
	declare_member ( bool, isReloading, Classes::BaseProjectile::isReloading );
	declare_member ( int, currentBurst, Classes::BaseProjectile::currentBurst );
	declare_member ( float, aimSwaySpeed, Classes::BaseProjectile::aimSwaySpeed );
	declare_member ( bool, isBurstWeapon, Classes::BaseProjectile::isBurstWeapon );
	declare_member ( float, stancePenalty, Classes::BaseProjectile::stancePenalty );
	declare_member ( float, aimconePenalty, Classes::BaseProjectile::aimconePenalty );
	declare_member ( float, hipAimConeScale, Classes::BaseProjectile::hipAimConeScale );
	declare_member ( float, hipAimConeOffset, Classes::BaseProjectile::hipAimConeOffset );
	declare_member ( float, successFraction, Classes::FlintStrikeWeapon::successFraction );
	declare_member ( float, aimConePenaltyMax, Classes::BaseProjectile::aimConePenaltyMax );
	declare_member ( float, sightAimConeScale, Classes::BaseProjectile::sightAimConeScale );
	declare_member ( bool, canChangeFireModes, Classes::BaseProjectile::canChangeFireModes );
	declare_member ( float, sightAimConeOffset, Classes::BaseProjectile::sightAimConeOffset );
	declare_member ( float, stancePenaltyScale, Classes::BaseProjectile::stancePenaltyScale );
	declare_member ( float, stringBonusDamage, Classes::CompoundBowWeapon::stringBonusDamage );
	declare_member ( bool, _didSparkThisFrame, Classes::FlintStrikeWeapon::_didSparkThisFrame );
	declare_member ( float, aimconePenaltyPerShot, Classes::BaseProjectile::aimconePenaltyPerShot );
	declare_member ( float, stringHoldDurationMax, Classes::CompoundBowWeapon::stringHoldDurationMax );
	declare_member ( float, movementPenaltyRampUpTime, Classes::CompoundBowWeapon::movementPenaltyRampUpTime );
public:
	declare_member ( c_view_model*, viewModel, Classes::HeldEntity::viewModel );
	declare_member ( c_recoil_properties*, recoil, Classes::BaseProjectile::recoil );
	declare_member ( c_magazine*, primaryMagazine, Classes::BaseProjectile::primaryMagazine );
public:
	auto created_projectiles ( void ( *each )( std::uintptr_t ) ) -> void
	{
		const auto list = driver.read<std::uintptr_t> ( reinterpret_cast< std::uintptr_t >( this ) + Classes::BaseProjectile::createdProjectiles );
		if ( !list ) return;

		const auto key = driver.read<std::uintptr_t> ( list + 0x10 );
		if ( !key ) return;

		const auto size = driver.read<int> ( list + 0x18 );
		if ( !size ) return;

		for ( int i = 0; i < size; ++i )
		{
			const auto projectile = driver.read<std::uintptr_t> ( key + 0x20 + ( i * 0x8 ) );
			if ( !projectile ) continue;

			each ( projectile );
		}
	}
};