#pragma once

#include <glm/glm.hpp>

#include "Atum/Core/KeyCodes.h"
#include "Atum/Core/MouseCodes.h"

namespace Atum {

	class Input
	{
	public:
		static bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static glm::vec2 GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();
	};
}
