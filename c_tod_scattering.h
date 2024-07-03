#pragma once
#include "imports.hpp"

class c_tod_scattering
{
public:
	declare_member ( std::uintptr_t, scatteringMaterial, 0x78 );
	declare_member ( std::uintptr_t, screenClearMaterial, 0x80 );
	declare_member ( std::uintptr_t, skyMaskMaterial, 0x88 );

	auto cyan_red ( ) -> std::uintptr_t
	{
		return driver.read_chain<std::uintptr_t> ( driver.game_assembly, { Vars::m_WaterSystem_c, 0xb8, 0x40, 0x30, 0xe8 } );
	}

	auto red_glow ( ) -> std::uintptr_t
	{
		return driver.read_chain<std::uintptr_t> ( driver.game_assembly, { Vars::m_LaserBeam_c, 0xB8, 0x0, 0x80, 0x50 } );
	}

	auto green_glow ( ) -> std::uintptr_t
	{
		return driver.read_chain<std::uintptr_t> ( driver.game_assembly, { Vars::m_LaserBeam_c, 0xB8, 0x0, 0x80, 0x150 } );
	}

	auto red_cyan ( ) -> std::uintptr_t
	{
		return driver.read_chain<std::uintptr_t> ( driver.game_assembly, { Vars::m_TodSky_c, 0xB8, 0x0, 0x10, 0x20, 0xa8, 0x180, 0x128 } );
	}

	auto flat_red ( ) -> std::uintptr_t
	{
		return driver.read_chain<std::uintptr_t> ( driver.game_assembly, { Vars::m_TodSky_c, 0xB8, 0x0, 0x10, 0x20, 0x0, 0xb8, 0x20 } );
	}
};