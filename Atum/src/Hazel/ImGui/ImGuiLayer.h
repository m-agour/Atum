#pragma once

#include "Atum/Core/Layer.h"

#include "Atum/Events/ApplicationEvent.h"
#include "Atum/Events/KeyEvent.h"
#include "Atum/Events/MouseEvent.h"

namespace Atum {

	class ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnEvent(Event& e) override;

		void Begin();
		void End();

		void BlockEvents(bool block) { m_BlockEvents = block; }
		
		void SetDarkThemeColors();
	private:
		bool m_BlockEvents = true;
	};

}
