#pragma once

#include "Atum.h"

class ExampleLayer : public Atum::Layer
{
public:
	ExampleLayer();
	virtual ~ExampleLayer() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Atum::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Atum::Event& e) override;
private:
	Atum::ShaderLibrary m_ShaderLibrary;
	Atum::Ref<Atum::Shader> m_Shader;
	Atum::Ref<Atum::VertexArray> m_VertexArray;

	Atum::Ref<Atum::Shader> m_FlatColorShader;
	Atum::Ref<Atum::VertexArray> m_SquareVA;

	Atum::Ref<Atum::Texture2D> m_Texture, m_ChernoLogoTexture;

	Atum::OrthographicCameraController m_CameraController;
	glm::vec3 m_SquareColor = { 0.2f, 0.3f, 0.8f };
};

