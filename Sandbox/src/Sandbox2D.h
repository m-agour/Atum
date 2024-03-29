#pragma once

#include "Atum.h"

class Sandbox2D : public Atum::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Atum::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Atum::Event& e) override;
private:
	Atum::OrthographicCameraController m_CameraController;
	
	// Temp
	Atum::Ref<Atum::VertexArray> m_SquareVA;
	Atum::Ref<Atum::Shader> m_FlatColorShader;

	Atum::Ref<Atum::Texture2D> m_CheckerboardTexture;

	glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
};