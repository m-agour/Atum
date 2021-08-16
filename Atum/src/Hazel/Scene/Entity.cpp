#include "hzpch.h"
#include "Entity.h"

namespace Atum {

	Entity::Entity(entt::entity handle, Scene* scene)
		: m_EntityHandle(handle), m_Scene(scene)
	{
	}

}