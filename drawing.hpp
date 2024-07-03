#pragma once
#include "imports.hpp"

namespace dx9
{
	LPDIRECT3D9              g_d3d = 0;
	LPDIRECT3DDEVICE9        p_device = 0;
	D3DPRESENT_PARAMETERS    g_d3dpp = {};
	auto hwnd = FindWindow(NULL, e("Rust"));

	auto create_device(HWND window, std::uint16_t width, std::uint16_t height) -> bool
	{
		g_d3d = Direct3DCreate9(D3D_SDK_VERSION);
		if (!g_d3d) return false;

		g_d3dpp.Windowed = TRUE;
		g_d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
		g_d3dpp.hDeviceWindow = window;
		g_d3dpp.MultiSampleQuality = D3DMULTISAMPLE_NONE;
		g_d3dpp.BackBufferFormat = D3DFMT_A8R8G8B8;
		g_d3dpp.BackBufferWidth = width;
		g_d3dpp.BackBufferHeight = height;
		g_d3dpp.MultiSampleType = D3DMULTISAMPLE_NONE;
		g_d3dpp.BackBufferCount = 2;
		g_d3dpp.MultiSampleQuality = 0;
		g_d3dpp.EnableAutoDepthStencil = TRUE;
		g_d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
		g_d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_ONE; // D3DPRESENT_INTERVAL_IMMEDIATE - D3DPRESENT_INTERVAL_ONE
		g_d3dpp.FullScreen_RefreshRateInHz = D3DPRESENT_RATE_DEFAULT;

		if (g_d3d->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, window, D3DCREATE_HARDWARE_VERTEXPROCESSING, &g_d3dpp, &p_device) < 0)
			return false;

		return true;
	}

	auto callback(HWND wnd, UINT msg, WPARAM wparam, LPARAM lparam) -> LRESULT
	{
		switch (msg)
		{
		case WM_DESTROY:
			PostQuitMessage(0);
			return 0;
		}
		return DefWindowProc(wnd, msg, wparam, lparam);
	}

	auto begin_scene() -> void
	{
		ImGui_ImplDX9_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();
	}

	auto end_scene() -> void
	{
		ImGui::EndFrame();
		dx9::p_device->SetRenderState(D3DRS_ZENABLE, false);
		dx9::p_device->SetRenderState(D3DRS_ALPHABLENDENABLE, false);
		dx9::p_device->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
		dx9::p_device->Clear(0, 0, D3DCLEAR_TARGET, D3DCOLOR_ARGB(0, 0, 0, 0), 1.00f, 0);

		if (dx9::p_device->BeginScene() >= 0)
		{
			ImGui::Render();
			ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
			dx9::p_device->EndScene();
		}

		dx9::p_device->Present(0, 0, 0, 0);
	}
}

namespace render
{
	namespace quick
	{
		auto get_health_color(float factor) -> geo::vec4_t
		{
			const auto r = (factor >= 0.50f) ? static_cast<std::uint8_t>(255.00f - 255.00f * (factor - 0.50f) / 0.50f) : 255.00f;
			const auto g = (factor >= 0.50f) ? 255.00f : static_cast<std::uint8_t>(255.00f * factor / 0.50f);

			return geo::vec4_t(r, g, 0.00f, 255);
		}
	}

	auto FilledRect(int x, int y, int w, int h, ImColor color) -> void
	{
		auto gui = ImGui::GetBackgroundDrawList();
		gui->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h), color, 0, 0);
	}
	auto add_text(geo::vec2_t pos, geo::vec4_t color, std::string str) -> void
	{
		auto gui = ImGui::GetBackgroundDrawList();
		gui->AddText
		(
			{ pos.x, pos.y - 1 },
			ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)),
			str.c_str()
		);

		gui->AddText
		(
			{ pos.x, pos.y + 1 },
			ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)),
			str.c_str()
		);

		gui->AddText
		(
			{ pos.x - 1, pos.y },
			ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)),
			str.c_str()
		);

		gui->AddText
		(
			{ pos.x + 1, pos.y },
			ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)),
			str.c_str()
		);

		gui->AddText
		(
			{ pos.x, pos.y },
			ImColor((int)color.x, (int)color.y, (int)color.z, (int)color.w),
			str.c_str()
		);
	}

	auto add_circle(geo::vec2_t pos, float radius, geo::vec4_t color = { 255.00f, 255.00f, 255.00f, 255.00f }, float thickness = 1.00f) -> void
	{
		auto gui = ImGui::GetBackgroundDrawList();
		gui->AddCircle
		(
			{ pos.x, pos.y },
			radius,
			ImColor((int)color.x, (int)color.y, (int)color.z, (int)color.w),
			0,
			thickness
		);
	}

	auto add_filled_rect(const geo::vec2_t& position, const geo::vec2_t& size, geo::vec4_t color = { 255.00f, 255.00f, 255.00f, 255.00f }, float rounding = 1.00f)
	{
		auto gui = ImGui::GetBackgroundDrawList();
		gui->AddRectFilled
		(
			{ position.x, position.y },
			{ position.x + size.x, position.y + size.y },
			ImColor((int)color.x, (int)color.y, (int)color.z, (int)color.w),
			rounding
		);
	}

	auto add_rect(const geo::vec2_t& position, const geo::vec2_t& size, geo::vec4_t color = { 255.00f, 255.00f, 255.00f, 255.00f }, float thickness = 1.00f, bool outline = true)
	{
		auto gui = ImGui::GetBackgroundDrawList();
		if (outline)
		{
			gui->AddRect
			(
				{ position.x, position.y },
				{ position.x + size.x, position.y + size.y },
				ImColor(0, 0, 0, (int)color.w),
				0.00f,
				0,
				thickness + 1.00f
			);
		}

		gui->AddRect
		(
			{ position.x, position.y },
			{ position.x + size.x, position.y + size.y },
			ImColor((int)color.x, (int)color.y, (int)color.z, (int)color.w),
			0.00f,
			0,
			thickness
		);
	}

	auto draw_line(const geo::vec2_t& a, const geo::vec2_t& b, geo::vec4_t color = { 255.00f, 255.00f, 255.00f, 255.00f }, float thickness = 1.00f, bool outline = true)
	{
		auto gui = ImGui::GetBackgroundDrawList();
		if (outline)
		{
			gui->AddLine
			(
				{ a.x, a.y },
				{ b.x, b.y },
				ImColor(0, 0, 0, (int)color.w),
				thickness + 1.00f
			);
		}

		gui->AddLine
		(
			{ a.x, a.y }, { b.x, b.y },
			ImColor((int)color.x, (int)color.y, (int)color.z, (int)color.w),
			thickness
		);
	}
}