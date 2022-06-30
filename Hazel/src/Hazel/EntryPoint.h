#pragma once
#include <iostream>
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log");
	HZ_INFO("Hello");
	std::cout << "Entry Point" << std::endl;
	auto* app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif