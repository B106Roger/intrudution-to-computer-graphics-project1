#pragma once

#include "Common.h"
#include <list>

class ShaderObject
{
public:
	ShaderObject();
	~ShaderObject();

	virtual bool Init();
	virtual bool AddShader(GLenum shaderType, std::string fileName);
	virtual bool Finalize();
	virtual void Enable();
	virtual void Disable();
	virtual GLuint GetUniformLocation(const GLchar* name);
protected:
	GLuint program;
private:
	std::list<GLuint> shaderList;
	
};

