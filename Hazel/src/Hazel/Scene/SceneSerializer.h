#pragma once

#include "Scene.h"

namespace Hazel {

	class SceneSerializer
	{
	public: 
		SceneSerializer(const Ref<Scene>& scene);
	
		void Seralize(const std::string& filepath);
		void SerializeRuntime(const std::string& filepath);

		bool Deseralize(const std::string& filepath);
		bool DeserializeRuntime(const std::string& filepath);
	private:
		Ref<Scene> m_Scene;
	};
}
