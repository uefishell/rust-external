#pragma once
#include "imports.hpp"

class c_skin_set
{
public:
	declare_member ( std::uintptr_t, head_material, Classes::SkinSet::HeadMaterial );
	declare_member ( std::uintptr_t, body_material, Classes::SkinSet::BodyMaterial );
	declare_member ( std::uintptr_t, eye_material, Classes::SkinSet::EyeMaterial );
};