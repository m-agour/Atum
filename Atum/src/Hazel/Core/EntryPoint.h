#pragma once
#include "Atum/Core/Base.h"
#include "Atum/Core/Application.h"

#ifdef HZ_PLATFORM_WINDOWS

extern Atum::Application* Atum::CreateApplication(ApplicationCommandLineArgs args);

int main(int argc, char** argv)
{
	Atum::Log::Init();

	HZ_PROFILE_BEGIN_SESSION("Startup", "AtumProfile-Startup.json");
	auto app = Atum::CreateApplication({ argc, argv });
	HZ_PROFILE_END_SESSION();

	HZ_PROFILE_BEGIN_SESSION("Runtime", "AtumProfile-Runtime.json");
	app->Run();
	HZ_PROFILE_END_SESSION();

	HZ_PROFILE_BEGIN_SESSION("Shutdown", "AtumProfile-Shutdown.json");
	delete app;
	HZ_PROFILE_END_SESSION();
}

#endif
