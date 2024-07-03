#include "window.hpp"

int main()
{
	ShowWindow(GetConsoleWindow(), SW_SHOW);
	
	function.setup();

	if (!function.setup()) 
	{
		MessageBoxA(NULL, "driver isn't setup correctly", "error", NULL);
	}

	if (!driver.is_mapped()) 
	{
		MessageBoxA(NULL, "driver is not mapped", "error", NULL);
	}

	{
		driver.game_assembly = utils::get_module(utils::globals::process_id, e(L"GameAssembly.dll")); // get gameassembly module
		driver.unity_player = utils::get_module(utils::globals::process_id, e(L"UnityPlayer.dll")); // get unityplayer module

		std::cout << "process id:    " << utils::globals::process_id << std::endl;
		std::cout << "game assembly: " << driver.game_assembly << std::endl;
		std::cout << "unity player:  " << driver.unity_player << std::endl;

		std::thread([&]() // check if the game is open and get system width and height
			{
				while (true)
				{
					std::this_thread::sleep_for(std::chrono::milliseconds(250));

					config.Includes.Setiings.width = GetSystemMetrics(SM_CXSCREEN);
					config.Includes.Setiings.height = GetSystemMetrics(SM_CYSCREEN);

					if (!utils::get_process_id(e("RustClient.exe"))) {
						MessageBoxA(NULL, "rust aint opened nigga", "error", NULL);
					}
				}
			}
		).detach();

		std::thread([&]() // entity loop
			{
				while (true)
				{
					std::this_thread::sleep_for(std::chrono::milliseconds(750));

					entity_loop::get_list();
				}
			}
		).detach();

		std::thread([&]() // aimbot loop
			{
				auto next_frame = std::chrono::steady_clock::now();
				while (true)
				{
					std::this_thread::sleep_for(std::chrono::milliseconds(1));

					aimbot::aimbot_loop();
				}
			}
		).detach();

		std::thread([&]() // window loop
			{
				while (true)
				{
					std::this_thread::sleep_for(std::chrono::milliseconds(5));

					window::create_window(window::render_menu);
				}
			}
		).detach();

		std::thread([&]() // 0 ms loop
			{
				while (true)
				{
					features::fast_features();
				}
			}
		).detach();

		std::thread([&]() // weapon feature loop
			{
				while (true)
				{
					std::this_thread::sleep_for(std::chrono::milliseconds(1));

					features::weapon_features();
				}
			}
		).detach();

		std::thread([&]() // movement feature loop
			{
				while (true)
				{
					std::this_thread::sleep_for(std::chrono::milliseconds(1));

					features::movement_features();
				}
			}
		).detach();

		std::thread([&]() // misc feature loop
			{
				while (true)
				{
					std::this_thread::sleep_for(std::chrono::milliseconds(1));

					features::misc_features();
				}
			}
		).detach();
	}
	Sleep(-1);
}