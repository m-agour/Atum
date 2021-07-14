#pragma once

#ifdef ATUM_PLATFORM_WINDOWS

extern Atum::Application* Atum::CreatApplication();

int main(int argc, char** argv) {

	auto app = Atum::CreatApplication();
	app->Run();
	delete app;

}

#endif // ATM_PLATFORM_WINDOWS
