#pragma once

#include "hzpch.h"
#include "Hazel/Core.h"
#include "Hazel/Events/Event.h"

namespace Hazel {
	struct WindowProps {
		std::string Title;
		size_t Width;
		size_t Height;
		WindowProps(const std::string& title = "Hazel Engine",
					size_t width = 1280,
					size_t height = 720)
			: Title(title),
			  Width(width),
			  Height(height) { }
	};
	class HAZEL_API Window {
	public:
		using EventCallbackFn = std::function<void(Event&)>;
		 
		virtual ~Window() {}
		virtual void OnUpdate() = 0;
		virtual size_t GetWidth() const = 0;
		virtual size_t GetHeight() const = 0;
		
		// window
		virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
		virtual void SetVSync(bool enabled) = 0;
		virtual void IsVSync() const = 0;

		static Window* Create(const WindowProps& props = WindowProps());
	};
}
