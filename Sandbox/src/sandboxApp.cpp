#include <Atum.h>
#include <Atum/Core/EntryPoint.h>

#include "Sandbox2D.h"
#include "ExampleLayer.h"

class Sandbox : public Atum::Application
{
public:
	Sandbox(Atum::ApplicationCommandLineArgs args)
	{
		// PushLayer(new ExampleLayer());
		PushLayer(new Sandbox2D());
	}

	~Sandbox()
	{
	}
};

Atum::Application* Atum::CreateApplication(Atum::ApplicationCommandLineArgs args)
{
	return new Sandbox(args);
}
