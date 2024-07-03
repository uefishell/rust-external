#pragma once
#include "imports.hpp"
#include <map>
ImFont nicetext;
int tab = 0;
const char* tabLabels[] = { "Aim", "Recoil", "Visuals", "Misc", "Color", "Setting" };
int numbers[100] = { 0 };
static DWORD lastKeyPressTime = 0;
using namespace ImGui;
inline LPDIRECT3DDEVICE9 dev;
inline const char* window_title = e("emperium loader");
inline ImVec2 screen_res{ 000, 000 };
inline ImVec2 window_pos{ 0, 0 };
inline ImVec2 window_size{ 340, 290 };
inline ImVec2 window_size2{ 500, 290 };
inline DWORD  window_flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse;
namespace window
{
    auto render_menu() -> void
    {
        ImGui::CreateContext();
        auto io = ImGui::GetIO();
        auto style = &ImGui::GetStyle();
        style->WindowRounding = 2.f;
        style->ScrollbarRounding = 2.f;
        style->ScrollbarSize = 6.f;
        style->WindowPadding = ImVec2(2, 2);
        ImVec4 text_color = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);  // White
        ImVec4 highlight_color = ImVec4(0.26f, 0.59f, 0.98f, 1.0f);  // Blue
        ImVec4 hover_color = ImVec4(0.16f, 0.49f, 0.89f, 1.0f);  // Light Blue
        ImVec4 window_bg_color = ImVec4(0.06f, 0.06f, 0.06f, 1.0f);  // Dark Gray
        ImVec4 button_bg_color = ImVec4(0.26f, 0.59f, 0.98f, 0.4f);  // Semi-transparent Blue
        ImVec4 header_color = ImVec4(0.2f, 0.2f, 0.2f, 1.0f);  // Dark Gray
        style->Colors[ImGuiCol_Text] = text_color;
        style->Colors[ImGuiCol_TextDisabled] = ImVec4(0.6f, 0.6f, 0.6f, 1.0f);  // Light Gray
        style->Colors[ImGuiCol_TextSelectedBg] = highlight_color;
        style->Colors[ImGuiCol_WindowBg] = window_bg_color;
        style->Colors[ImGuiCol_ChildBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);  // Transparent
        style->Colors[ImGuiCol_PopupBg] = window_bg_color;
        style->Colors[ImGuiCol_Border] = text_color;
        style->Colors[ImGuiCol_BorderShadow] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);  // Transparent
        style->Colors[ImGuiCol_FrameBg] = header_color;
        style->Colors[ImGuiCol_FrameBgHovered] = hover_color;
        style->Colors[ImGuiCol_FrameBgActive] = highlight_color;
        style->Colors[ImGuiCol_TitleBg] = header_color;
        style->Colors[ImGuiCol_CheckMark] = highlight_color;
        style->Colors[ImGuiCol_SliderGrab] = highlight_color;
        style->Colors[ImGuiCol_SliderGrabActive] = hover_color;
        style->Colors[ImGuiCol_Button] = button_bg_color;
        style->Colors[ImGuiCol_ButtonHovered] = hover_color;
        style->Colors[ImGuiCol_ButtonActive] = highlight_color;
        style->Colors[ImGuiCol_Header] = header_color;
        style->Colors[ImGuiCol_HeaderHovered] = hover_color;
        style->Colors[ImGuiCol_HeaderActive] = highlight_color;
        style->Colors[ImGuiCol_TabActive] = highlight_color;
        ImGui::SetNextWindowSize(ImVec2(config.Includes.Setiings.width + 15, config.Includes.Setiings.height + 15));
        ImGui::SetNextWindowPos(ImVec2(-10, -10));
        ImGui::SetNextWindowBgAlpha(.25f);
        ImGui::Begin(e("paste background"), &config.Includes.Setiings.showing, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoMove); { } ImGui::End();
        geo::vec2_t window_pos;
        ImGui::SetNextWindowSize({ 520, 337 }, ImGuiCond_Always);
        Begin(e("##Loader"), &config.Includes.Setiings.showing, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar);
        {
            for (int i = 0; i < IM_ARRAYSIZE(tabLabels); ++i) {
                bool selected = (i == tab);
                bool tabPressed = ImGui::Tab(tabLabels[i], selected);

                if (tabPressed) {
                    tab = i; // Update the selected tab index
                }
            }

            if (tab == 0)
            {
                ImGui::SetCursorPos({ 80, 40 });
                BeginChild(e("Fov"), ImVec2(200, 240));
                {
                    SetCursorPosX(10); ImGui::SliderFloat(e("Aim Fov"), &config.Includes.Aimbot.Fov_slifer, 20.0f, 360.0f, "%.2f%%");
                }
                EndChild();

                ImGui::SetCursorPos({ 290, 40 });
                BeginChild(e("Aim Section"), ImVec2(200, 130));
                {

                    SetCursorPosX(10); ImGui::Combo("Aim Type", &config.Includes.Aimbot.selected_Aim, config.Includes.Aimbot.Aimbot_Type, IM_ARRAYSIZE(config.Includes.Aimbot.Aimbot_Type));
                    SetCursorPosX(10); ImGui::Combo("Aim Bone", &config.Includes.Aimbot.selected_AimBone, config.Includes.Aimbot.AimBone_Type, IM_ARRAYSIZE(config.Includes.Aimbot.AimBone_Type));
                }
                EndChild();

                ImGui::SetCursorPos({ 290, 205 });
                BeginChild(e("Extra"), ImVec2(200, 75));
                {

                }
                EndChild();

            }
            if (tab == 1)
            {
                ImGui::SetCursorPos({ 80, 40 });
                BeginChild(e("RECOIL"), ImVec2(200, 240));
                {
                    SetCursorPosX(10); ImGui::SliderFloat(e("X Control"), &config.Includes.Weapon.x_recoli, 0.0f, 1.0f, "%.2f%%");
                    SetCursorPosX(10); ImGui::SliderFloat(e("Y Control"), &config.Includes.Weapon.y_recoli, 0.0f, 1.0f, "%.2f%%");
                    SetCursorPosX(10); ImGui::SliderFloat(e("Spread Control"), &config.Includes.Weapon.no_spread_slider, -512.0f, 1.0f, "%.2f%%");
                    SetCursorPosX(10); ImGui::SliderFloat(e("Sway Control"), &config.Includes.Weapon.no_sway_slider, 0.0f, 1.0f, "%.2f%%");
                }
                EndChild();

                ImGui::SetCursorPos({ 290, 40 });
                BeginChild(e("WEAPON"), ImVec2(200, 130));
                {
                    SetCursorPosX(10);  Checkbox(e("Automatic"), &config.Includes.Weapon.auto_matic);
                    SetCursorPosX(10);  Checkbox(e("Instant Bow"), &config.Includes.Weapon.instantbow);
                    SetCursorPosX(10);  Checkbox(e("Instant Eoak"), &config.Includes.Weapon.insteoka);
                    SetCursorPosX(10);  Checkbox(e("Recoil Compensation"), &config.Includes.Weapon.no_recoil);
                    SetCursorPosX(10);  Checkbox(e("Spread Compensation"), &config.Includes.Weapon.no_spread);
                    SetCursorPosX(10);  Checkbox(e("Sway Compensation"), &config.Includes.Weapon.no_sway);
                }
                EndChild();

                ImGui::SetCursorPos({ 290, 205 });
                BeginChild(e("EXTRA"), ImVec2(200, 75));
                {
                    SetCursorPosX(10);  Checkbox(e("Thick Bullet "), &config.Includes.Weapon.Big_Bullet);
                    SetCursorPosX(10);  Checkbox(e("Bullet Tracer"), &config.Includes.Weapon.Bullet_Tracer);
                    SetCursorPosX(10);  Checkbox(e("Fast Shoot"), &config.Includes.Weapon.Shoot_fast);
                }
                EndChild();

            }
            if (tab == 2)
            {
                ImGui::SetCursorPos({ 80, 40 });
                BeginChild(e("Player"), ImVec2(200, 240));
                {
                    SetCursorPosX(10);  Checkbox(e("Box"), &config.Includes.Visual.box_esp);
                    SetCursorPosX(10);  Checkbox(e("Bone"), &config.Includes.Visual.skelly_esp);
                    SetCursorPosX(10);  Checkbox(e("Name"), &config.Includes.Visual.name_esp);
                    SetCursorPosX(10);  Checkbox(e("Distance"), &config.Includes.Visual.distance_esp);
                    SetCursorPosX(10);  Checkbox(e("Health"), &config.Includes.Visual.health_esp);
                    SetCursorPosX(10);  Checkbox(e("Belt"), &config.Includes.Visual.belt_esp);
                    SetCursorPosX(10);  Checkbox(e("Hotbar"), &config.Includes.Visual.text_belt_esp);
                    SetCursorPosX(10);  Checkbox(e("Held"), &config.Includes.Visual.held_item_esp);
                    SetCursorPosX(10);  Checkbox(e("Fly Hack Bar"), &config.Includes.Visual.fly_hack_bar);
                    SetCursorPosX(10);  SliderFloat(e("Distance Draw"), &config.Includes.Visual.player_distance, 100.0f, 300.0f, "%.2f%%");
                }
                EndChild();

                ImGui::SetCursorPos({ 290, 40 });
                BeginChild(e("ETC"), ImVec2(200, 130));
                {
                    static std::string preview = "";
                    preview = "";
                    std::vector<std::string> vec;
                    for (size_t i = 0; i < IM_ARRAYSIZE(config.Includes.Visual.selected_node_esp_type); i++)
                    {
                        ImGui::Selectable(config.Includes.Visual.selected_node_esp_type[i], &config.Includes.Visual.selected_node_esp[i], ImGuiSelectableFlags_::ImGuiSelectableFlags_DontClosePopups);
                        if (config.Includes.Visual.selected_node_esp[i])
                            vec.push_back(config.Includes.Visual.selected_node_esp_type[i]);
                    }
                    for (size_t i = 0; i < vec.size(); i++)
                    {
                        if (vec.size() == 1)
                            preview += vec.at(i);
                        else if (!(i == vec.size() - 1))
                            preview += vec.at(i) + ",";
                        else
                            preview += vec.at(i);
                    }
                }
                EndChild();

                ImGui::SetCursorPos({ 290, 205 });
                BeginChild(e("Chams"), ImVec2(200, 75));
                {

                }
                EndChild();

            }
            if (tab == 3)
            {
                ImGui::SetCursorPos({ 60, 40 });
                BeginChild(e("RECOIL"), ImVec2(200, 240));
                {

                }
                EndChild();

                ImGui::SetCursorPos({ 270, 40 });
                BeginChild(e("SELECTOR"), ImVec2(200, 130));
                {

                }
                EndChild();

                ImGui::SetCursorPos({ 270, 205 });
                BeginChild(e("EXTRA"), ImVec2(200, 75));
                {

                }
                EndChild();

            }
            if (tab == 4)
            {
                ImGui::SetCursorPos({ 60, 40 });
                BeginChild(e("RECOIL"), ImVec2(200, 240));
                {

                }
                EndChild();

                ImGui::SetCursorPos({ 270, 40 });
                BeginChild(e("SELECTOR"), ImVec2(200, 130));
                {

                }
                EndChild();

                ImGui::SetCursorPos({ 270, 205 });
                BeginChild(e("EXTRA"), ImVec2(200, 75));
                {

                }
                EndChild();

            }
            if (tab == 5)
            {
                ImGui::SetCursorPos({ 60, 40 });
                BeginChild(e("RECOIL"), ImVec2(200, 240));
                {

                }
                EndChild();

                ImGui::SetCursorPos({ 270, 40 });
                BeginChild(e("SELECTOR"), ImVec2(200, 130));
                {

                }
                EndChild();

                ImGui::SetCursorPos({ 270, 205 });
                BeginChild(e("EXTRA"), ImVec2(200, 75));
                {

                }
                EndChild();

            }
        }
    }
    auto create_window(std::function<void()> callback) -> bool
    {
        const auto window = FindWindow(e("MedalOverlayClass"), e("MedalOverlay"));
        if (!window)
            return false;

        const auto window_hwnd = FindWindow(NULL, e("Rust"));
        if (!window_hwnd)
            return false;

        ShowWindow(window, SW_SHOW);
        UpdateWindow(window);

        if (!dx9::create_device(window, config.Includes.Setiings.width, config.Includes.Setiings.height))
            return false;

        ImGui::CreateContext();
        auto& io = ImGui::GetIO();
        static ImWchar ranges[] = { 0x1, 0x1FFFF, 0 };
        static ImFontConfig cfg;
        io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Arial\\arialbi.ttf", 16.0f, &cfg, ranges);
        io.IniFilename = 0;

        ImGui_ImplWin32_Init(window);
        ImGui_ImplDX9_Init(dx9::p_device);

        dx9::g_d3d->Release();

        SetWindowPos(window, 0, 0, 0, config.Includes.Setiings.width, config.Includes.Setiings.height, 0);

        auto exstyle = GetWindowLongA(window, GWL_EXSTYLE);
        exstyle &= ~WS_EX_NOACTIVATE;
        SetWindowLongA(window, GWL_EXSTYLE, exstyle);

        auto msg = MSG{};
        while (true)
        {
            if (PeekMessage(&msg, 0, 0U, 0U, PM_REMOVE))
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }

            if (GetForegroundWindow() == window_hwnd)
            {
                SetWindowPos(window, GetWindow(window_hwnd, GW_HWNDPREV), 0, 0, config.Includes.Setiings.width, config.Includes.Setiings.height, SWP_NOMOVE | SWP_NOSIZE);
            }

            if (config.Includes.Setiings.showing)
            {
                POINT p;
                GetCursorPos(&p);
                io.MousePos.x = p.x;
                io.MousePos.y = p.y;

                if (GetAsyncKeyState(VK_LBUTTON))
                {
                    io.MouseDown[0] = true;
                    io.MouseClicked[0] = true;
                    io.MouseClickedPos[0].x = io.MousePos.x;
                    io.MouseClickedPos[0].x = io.MousePos.y;
                }
                else io.MouseDown[0] = false;
            }

            if (GetAsyncKeyState(VK_INSERT) & 1)
                config.Includes.Setiings.showing ^= true;

            dx9::begin_scene();

            auto foreground = ImGui::GetForegroundDrawList();
            auto background = ImGui::GetBackgroundDrawList();

            //draw visuals - do prefabs here too
            {
                visuals::draw_loop();
            }

            if (config.Includes.Setiings.showing) callback(); // menu rendering

            dx9::end_scene();

            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }

        ImGui_ImplDX9_Shutdown();
        ImGui_ImplWin32_Shutdown();
        ImGui::DestroyContext();

        DestroyWindow(window);
    }
}