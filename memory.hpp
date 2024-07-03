#pragma once
#include "imports.hpp"
#include "driver.hpp"

namespace utils
{
	auto is_weapon ( std::wstring shortname ) -> bool
	{
		if ( shortname.find ( e ( L"rifle" ) ) != std::wstring::npos
			|| shortname.find ( e ( L"pistol" ) ) != std::wstring::npos
			|| shortname.find ( e ( L"bow" ) ) != std::wstring::npos
			|| shortname.find ( e ( L"lmg" ) ) != std::wstring::npos
			|| shortname.find ( e ( L"hmlmg" ) ) != std::wstring::npos
			|| shortname.find ( e ( L"shotgun" ) ) != std::wstring::npos
			|| shortname.find ( e ( L"smg" ) ) != std::wstring::npos
			|| shortname.find ( e ( L"multiplegrenadelauncher" ) ) != std::wstring::npos )
		{
			return true;
		}
		return false;
	}

	auto get_process_id ( const char* process_name ) -> std::uint32_t
	{
		PROCESSENTRY32 pt;
		HANDLE hsnap = CreateToolhelp32Snapshot ( TH32CS_SNAPPROCESS, 0 );
		pt.dwSize = sizeof ( PROCESSENTRY32 );
		if ( Process32First ( hsnap, &pt ) )
		{
			do
			{
				if ( !strcmp ( pt.szExeFile, process_name ) )
				{
					CloseHandle ( hsnap );
					return pt.th32ProcessID;
				}
			} while ( Process32Next ( hsnap, &pt ) );
		}
		CloseHandle ( hsnap );
		return 0;
	}

	auto to_string ( const std::wstring& wstr ) -> const std::string&
	{
		return std::string ( wstr.begin ( ), wstr.end ( ) );
	}

	auto get_module ( std::int32_t pid, const wchar_t* name ) -> std::uintptr_t
	{
		const auto handle = OpenProcess ( PROCESS_QUERY_INFORMATION, 0, pid );

		auto current = 0ull;
		auto mbi = MEMORY_BASIC_INFORMATION ( );

		while ( VirtualQueryEx ( handle, reinterpret_cast< void* >( current ), &mbi, sizeof ( MEMORY_BASIC_INFORMATION ) ) )
		{
			if ( mbi.Type == MEM_MAPPED || mbi.Type == MEM_IMAGE )
			{
				const auto buffer = malloc ( 1024 );
				auto bytes = std::size_t ( );

				const static auto ntdll = GetModuleHandle ( e ( "ntdll" ) );
				const static auto nt_query_virtual_memory_fn = reinterpret_cast<
					NTSTATUS ( __stdcall* )( HANDLE, void*, std::int32_t, void*, std::size_t, std::size_t* ) > (
						GetProcAddress ( ntdll, e ( "NtQueryVirtualMemory" ) ) );

				if ( nt_query_virtual_memory_fn ( handle, mbi.BaseAddress, 2, buffer, 1024, &bytes ) != 0 ||
					!wcsstr ( static_cast< UNICODE_STRING* >( buffer )->Buffer, name ) ||
					wcsstr ( static_cast< UNICODE_STRING* >( buffer )->Buffer, e ( L".mui" ) ) )
				{
					free ( buffer );
					goto skip;
				}

				free ( buffer );
				CloseHandle ( handle );

				return reinterpret_cast< std::uintptr_t >( mbi.BaseAddress );
			}

		skip:
			current = reinterpret_cast< std::uintptr_t >( mbi.BaseAddress ) + mbi.RegionSize;
		}

		CloseHandle ( handle );
		return 0ull;
	}

	template <typename t = float>
	auto bound ( t current, t min, t max ) -> t
	{
		if ( current < min )
		{
			return min;
		}
		else if ( current > max )
		{
			return max;
		}

		return current;
	}

	namespace globals
	{
		auto process_id = utils::get_process_id ( e ( "RustClient.exe" ) );
		auto h_proc = OpenProcess ( PROCESS_ALL_ACCESS, FALSE, process_id );
	}
}