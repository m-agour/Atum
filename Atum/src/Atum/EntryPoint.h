#pragma once

#ifdef ATUM_PLATFORM_WINDOWS

extern Atum::Application* Atum::CreatApplication();

int main(int argc, char** argv) {

	Atum::Log::Init();
	Atum::Log::GetCoreLogger()->warn("Initialized Log!");
	Atum::Log::GetClientLogger()->info("Hello!");
	Atum::Log::GetClientLogger()->error("No Errors were found!");
	

	auto app = Atum::CreatApplication();
	app->Run();
	delete app;

}

#endif // ATM_PLATFORM_WINDOWS
