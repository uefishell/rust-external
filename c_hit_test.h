#pragma once
#include "imports.hpp"

class c_hit_test
{
public:
	declare_member ( bool, DidHit, Classes::HitTest::DidHit );
	declare_member ( c_base_entity*, HitEntity, Classes::HitTest::HitEntity );
};