#include <Atum.h>
#include <Atum/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace Atum {

	class Atumnut : public Application
	{
	public:
		Atumnut(ApplicationCommandLineArgs args)
			: Application("Atumnut", args)
		{
			PushLayer(new EditorLayer());
		}

		~Atumnut()
		{
		}
	};

	Application* CreateApplication(ApplicationCommandLineArgs args)
	{
		return new Atumnut(args);
	}

}
