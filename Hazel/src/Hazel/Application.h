#pragma once
namespace Hazel {
	class __declspec(dllexport) Application {
	public:
		Application();
		~Application();
		void Run();
	private:
	};
	Application* CreateApplication();
}

