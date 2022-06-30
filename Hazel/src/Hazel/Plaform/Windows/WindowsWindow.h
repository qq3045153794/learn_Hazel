#pragma once

#include "Hazel/Window.h"

#include "GLFW/glfw3.h"

namespace Hazel {
	
	class WindowsWindow : public Window {
	public:
		WindowsWindow(const WindowProps& props);
		virtual ~WindowsWindow();

		virtual void OnUpdate() override;
		virtual size_t GetWidth() const override;
		virtual size_t GetHeight() const override;
		
		virtual void SetEventCallback(const EventCallbackFn& callback) override;
		virtual void SetVSync(bool enabled) override;
		virtual void IsVSync() const override;
	private:
		struct WIndowData {
			std::string Title;
			size_t Width, Height;
			bool VSync;
			EventCallbackFn EventCallback;
		};
		
		GLFWwindow* m_Window;
		WIndowData m_data;

	};
}
