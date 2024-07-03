#pragma once
#include "imports.hpp"

class c_base_movement
{
public:
	declare_member ( bool, flying, Classes::PlayerWalkMovement::flying );
	declare_member ( bool, jumping, Classes::PlayerWalkMovement::jumping );
	declare_member ( bool, grounded, Classes::PlayerWalkMovement::grounded );
	declare_member ( bool, swimming, Classes::PlayerWalkMovement::swimming );
	declare_member ( float, landTime, Classes::PlayerWalkMovement::landTime );
	declare_member ( float, jumpTime, Classes::PlayerWalkMovement::jumpTime );
	declare_member ( float, groundTime, Classes::PlayerWalkMovement::groundTime );
	declare_member ( float, maxVelocity, Classes::PlayerWalkMovement::maxVelocity );
	declare_member ( std::uintptr_t, capsule, Classes::PlayerWalkMovement::capsule );
	declare_member ( float, capsuleHeight, Classes::PlayerWalkMovement::capsuleHeight );
	declare_member ( float, capsuleCenter, Classes::PlayerWalkMovement::capsuleCenter );
	declare_member ( float, groundAngleNew, Classes::PlayerWalkMovement::groundAngleNew );
	declare_member ( bool, Duckingk__BackingField, Classes::BaseMovement::Duckingk__BackingField );
	declare_member ( float, Runningk__BackingField, Classes::BaseMovement::Runningk__BackingField );
	declare_member ( float, capsuleHeightDucked, Classes::PlayerWalkMovement::capsuleHeightDucked );
	declare_member ( float, capsuleCenterDucked, Classes::PlayerWalkMovement::capsuleCenterDucked );
	declare_member ( geo::vec3_t, TargetMovementk__BackingField, Classes::BaseMovement::TargetMovementk__BackingField );
public:

};