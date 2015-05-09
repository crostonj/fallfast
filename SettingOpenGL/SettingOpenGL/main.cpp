#include ".\GL\glew.h"
#include ".\GL\freeglut.h"
#include <iostream>

//http://www.in2gpu.com

#include "Shader_Loader.h"
using namespace Core;

GLuint program;
void renderScene() 
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(1.0, 0.0, 0.0, 1.0);

    glUseProgram(program);

    glDrawArrays(GL_TRIANGLES, 0, 3);
    glDrawArrays(GL_TRIANGLES, 3, 3);
    glDrawArrays(GL_TRIANGLES, 6, 3);
    glDrawArrays(GL_TRIANGLES, 9, 3);

    glutSwapBuffers();
}


void init() 
{
    glEnable(GL_DEPTH_TEST);

    //load and compile shaders
    Core::Shader_Loader shaderLoader;
    program = shaderLoader.CreateProgram("Vertex_Shader.glsl", "Fragment_Shader.glsl");
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

int main(int argc, char **argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);//optional
    glutInitWindowSize(800, 600); //optional
    glutCreateWindow("Dawing my first triangle");
    glewInit();


    init();

    glutDisplayFunc(renderScene);
    glutMainLoop();
    glDeleteProgram(program);

    return 0;
}