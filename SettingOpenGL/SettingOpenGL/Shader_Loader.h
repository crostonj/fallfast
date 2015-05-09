#pragma once

#include "GL\glew.h"
#include "GL\freeglut.h"

#include <iostream>

namespace Core {
    class Shader_Loader
    {
    private:
        std::string ReadShader(char* filename);
        GLuint CreateShader(GLenum shaderType, std::string source, char* shaderName);


    public:
        Shader_Loader();
        ~Shader_Loader();

        GLuint CreateProgram(char* VertxShaderFilename, char* FragmentShaderFilename);
    };
}
