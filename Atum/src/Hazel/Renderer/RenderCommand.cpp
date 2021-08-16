#include "hzpch.h"
#include "Atum/Renderer/RenderCommand.h"

namespace Atum {

	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}