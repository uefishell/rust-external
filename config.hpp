#pragma once
#include <thread>
#include <random>
#include <d3d9.h>
#include <dinput.h>
#include <mciapi.h>
#include <strsafe.h> 
#include <Uxtheme.h>
#include <stdio.h>
#include <array>
#include <Psapi.h>
#include <dwmapi.h>
#include <algorithm>
#include <winternl.h>
#include <stdexcept>
#include <ctime>
#include <time.h>
#include <functional>
#include <cctype>
#include <iomanip>
#include <sstream>
#include <regex>
#include <ProcessSnapshot.h>
#include <ShlObj_core.h>
#include <mutex>
#include <tchar.h>
#include <tlhelp32.h>
#include <filesystem>
#include <iostream>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#include <Mmsystem.h>
#include <Windows.h>
#include <mmstream.h>
#include <chrono>
#include <fstream>
#include <wingdi.h>
#include <sapi.h>
#include <d3dx9.h>
#include <d3dx9tex.h>

#pragma comment(lib,"d3d9.lib")
#pragma comment(lib, "d3dx9.lib")
#pragma comment(lib, "shell32.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "ntdll.lib")
#pragma comment(lib,"urlmon.lib")

const char* const key_names[] =
{
	"Unknown",
	"VK_LBUTTON",
	"RBUTTON",
	"CANCEL",
	"MBUTTON",
	"XBUTTON1",
	"XBUTTON2",
	"Unknown",
	"BACK",
	"TAB",
	"Unknown",
	"Unknown",
	"CLEAR",
	"RETURN",
	"Unknown",
	"Unknown",
	"SHIFT",
	"CONTROL",
	"MENU",
	"PAUSE",
	"CAPITAL",
	"KANA",
	"Unknown",
	"JUNJA",
	"FINAL",
	"KANJI",
	"Unknown",
	"ESCAPE",
	"CONVERT",
	"NONCONVERT",
	"ACCEPT",
	"MODECHANGE",
	"SPACE",
	"PRIOR",
	"NEXT",
	"END",
	"HOME",
	"LEFT",
	"UP",
	"RIGHT",
	"DOWN",
	"SELECT",
	"PRINT",
	"EXECUTE",
	"SNAPSHOT",
	"INSERT",
	"DELETE",
	"HELP",
	"0",
	"1",
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
	"8",
	"9",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"A",
	"B",
	"C",
	"D",
	"E",
	"F",
	"G",
	"H",
	"I",
	"J",
	"K",
	"L",
	"M",
	"N",
	"O",
	"P",
	"Q",
	"R",
	"S",
	"T",
	"U",
	"V",
	"W",
	"X",
	"Y",
	"Z",
	"LWIN",
	"RWIN",
	"APPS",
	"Unknown",
	"SLEEP",
	"NUMPAD0",
	"NUMPAD1",
	"NUMPAD2",
	"NUMPAD3",
	"NUMPAD4",
	"NUMPAD5",
	"NUMPAD6",
	"NUMPAD7",
	"NUMPAD8",
	"NUMPAD9",
	"MULTIPLY",
	"ADD",
	"SEPARATOR",
	"SUBTRACT",
	"DECIMAL",
	"DIVIDE",
	"F1",
	"F2",
	"F3",
	"F4",
	"F5",
	"F6",
	"F7",
	"F8",
	"F9",
	"F10",
	"F11",
	"F12",
	"F13",
	"F14",
	"F15",
	"F16",
	"F17",
	"F18",
	"F19",
	"F20",
	"F21",
	"F22",
	"F23",
	"F24",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"NUMLOCK",
	"SCROLL",
	"OEM_NEC_EQUAL",
	"OEM_FJ_MASSHOU",
	"OEM_FJ_TOUROKU",
	"OEM_FJ_LOYA",
	"OEM_FJ_ROYA",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"Unknown",
	"LSHIFT",
	"RSHIFT",
	"LCONTROL",
	"RCONTROL",
	"LMENU",
	"RMENU"
};

class c_keybind
{
public:
	inline static const char* type_char[3]
	{
		"Toggle",
		"Hold",
		"Always"
	};

	static enum keybind_type : int
	{
		TOGGLE,
		HOLD,
		ALWAYS
	};

	int key = 0;
	int type = HOLD;
	const char* name = "none";

	bool enabled = false;
	bool waiting_for_input = false;

	c_keybind(const char* _name)
	{
		this->name = _name;
	}

	auto get_key_name() -> const char*
	{
		if (!this->key)
			return "None";

		return key_names[this->key];
	}

	auto get_name() -> const char*
	{
		return this->name;
	}

	auto get_type() -> const char*
	{
		switch (this->type)
		{
		case TOGGLE:
			return "Toggle";
			break;
		case HOLD:
			return "Hold";
			break;
		case ALWAYS:
			return "Always";
			break;
		default:
			return "None";
		}
	}

	auto get_key() -> bool
	{
		switch (this->type)
		{
		case TOGGLE:
			if (GetAsyncKeyState(this->key) & 1)
				this->enabled = !this->enabled;
			break;
		case HOLD:
			this->enabled = GetAsyncKeyState(this->key);
			break;
		case ALWAYS:
			this->enabled = true;
			break;
		}
		return this->enabled;
	}
};

class c_config
{
private:
	std::filesystem::path path;
	std::vector<std::string> configs;
public:
	void run();

	void load(size_t id);
	void save(size_t id);
	void remove(size_t id);
	void add(std::string name);
	void rename(size_t item, std::string new_name);

	constexpr auto& get_configs() { return configs; };
	constexpr auto& get_path() { return path; };
	struct
	{

		struct Aimbot
		{
			//-> fov slider
			float Fov_slifer = { 20 };
			//-> aim type
			const char* Aimbot_Type[3] = { "None","Memory","Silent" };
			int selected_Aim = { 0 };
			//-> aimbone 
			const char* AimBone_Type[6] = { "head","Left Hip","Right Hip" ,"Left knee","right knee","Pelvis" };
			int selected_AimBone = { 0 };
		} Aimbot;

		struct Misc
		{

		} Misc;

		struct Weapon
		{
			//-> no recoli stuff
			bool no_recoil = { false };// enable no recoli
			float x_recoli{ 1 };// x recoli slider
			float y_recoli{ 1 };// y recoli slider
			//-> no spread stuff
			bool no_spread = { false };// enable no spread
			float no_spread_slider{ 1 };// no spread slider
			//-> no sway stuff
			bool no_sway = { false };// enable no sway
			float no_sway_slider{ 1 };//no sway slider
			//-> no animaion
			bool no_animaion{ false };//enable no animaion
			//-> instaint bow 
			bool instantbow{ false };//shoot bow fast
			//-> insta eoka
			bool insteoka{ false };//shoot eoka no tap
			//-> automatic
			bool auto_matic{ false };//shoot semi fast
			//-> shoot fast
			bool Shoot_fast{ false };//shoot fast
			//-> Bullet tracer
			bool Bullet_Tracer{ false };//Bullet tracer
			//-> big bullet
			bool Big_Bullet{ false };//v

		} Weapon;

		struct Movement
		{

		} Movement;

		struct Visual
		{
			//user esp
			bool box_esp{ false };//box eps
			bool skelly_esp{ false };//bone eps
			bool name_esp{ false };//bone eps
			bool distance_esp{ false };//distance eps
			bool health_esp{ false };//heakth bar
			bool belt_esp{ false };//heakth bar
			bool text_belt_esp{ false };//heakth bar
			bool held_item_esp{ false };//held iteam bar
			float player_distance = { 120 };//player distance
			bool fly_hack_bar{ false };//fly hack bar kik
			//node esp
			bool selected_node_esp[8]{};
			const char* selected_node_esp_type[8] = { "Stone","Sulfur","Metal","Wood-Collectable","Stone-Collectable","Sulfur-Collectable","Metal-Collectable","Hemp-Collectable" };

		} Visual;

		struct Setiings
		{
			float fly_height{ 0.f };
			float fly_direction{ 0.f };
			float m_height{ 0.f };
			float m_direction{ 0.f };
			int width;
			int height;
			bool showing{ true };
		} Setiings;

	}Includes;



}; inline auto config = c_config();