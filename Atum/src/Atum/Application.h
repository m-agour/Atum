#pragma once

#include "Core.h"

namespace Atum {

	class ATUM_API Application
	{
	public:

		Application();

		virtual ~Application();

		void Run();
	};

	// to be defined in a  client
	Application* CreatApplication();

}

