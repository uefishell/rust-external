#pragma once
#include "imports.hpp"

class c_recoil_properties
{
public:
	declare_member ( float, recoilYawMin, Classes::RecoilProperties::recoilYawMin );
	declare_member ( float, recoilYawMax, Classes::RecoilProperties::recoilYawMax );
	declare_member ( float, recoilPitchMin, Classes::RecoilProperties::recoilPitchMin );
	declare_member ( float, recoilPitchMax, Classes::RecoilProperties::recoilPitchMax );
public:
	declare_member ( c_recoil_properties*, newRecoilOverride, Classes::RecoilProperties::newRecoilOverride );
public:
};