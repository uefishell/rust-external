#pragma once
#include "imports.hpp"

class c_base_combat_entity : public c_base_entity
{
public:
	declare_member ( float, _health, Classes::BaseCombatEntity::_health );
	declare_member ( float, deathTime, Classes::BaseCombatEntity::deathTime );
	declare_member ( float, _maxHealth, Classes::BaseCombatEntity::_maxHealth );
	declare_member ( float, startHealth, Classes::BaseCombatEntity::startHealth );
public:
	declare_member ( systems::lifestate, lifestate, Classes::BaseCombatEntity::lifestate );
};