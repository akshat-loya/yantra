#define GL_SILENCE_DEPRECATION

#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include "Engine.h"

int Engine::initialise()
/* ===================
 *
 * For now, just to test that OpenGL works
 */
{
    /* Initialize the library */
    if (!glfwInit())
        return -1;

    // OpenGL context hints (macOS safe)
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    GLFWwindow* window = glfwCreateWindow(640, 480, "LearnOpenGL", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }
    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    int version = gladLoadGL(glfwGetProcAddress);
    if (version == 0) {
        printf("Failed to initialize OpenGL context\n");
        return -1;
    }

    // Successfully loaded OpenGL
    printf("Loaded OpenGL %d.%d\n", GLAD_VERSION_MAJOR(version), GLAD_VERSION_MINOR(version));
    
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Modern OpenGL attempt at drawing a triangle */
        glDrawArrays(GL_TRIANGLES, 0, 3);
        
        /* Legacy OpenGL for a triangle
        ** glBegin(GL_TRIANGLES);
        ** glVertex2f(-1.0f, -1.0f);
        ** glVertex2f( 0.0f,  1.0f);
        ** glVertex2f( 1.0f, -1.0f);
        ** glEnd();
        */
       
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
