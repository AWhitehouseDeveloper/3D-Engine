#pragma once
#include "../Resources/Resource.h"
#include <SDL.h>
#include <string>

namespace nc {
	class Texture : public Resource{
	public:
		bool Create(const std::string& name, void* null) override;
		void Destroy() override;

		bool CreateTexture(const std::string& filenemt, GLenum target = GL_TEXTURE_2D, GLuint uint = GL_TEXTURE0);

	protected:
		GLuint m_target{ GL_TEXTURE_2D };
		GLuint m_unit{ GL_TEXTURE0 };
		GLuint m_texture{ 0 };
	};
}