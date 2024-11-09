#include <iostream>
#include <GLFW/glfw3.h>
#include <math.h>

int main()
{
    GLFWwindow* window;

    glfwInit();

    window = glfwCreateWindow(800, 600, "TerraFabric", 0, 0);

    glfwMakeContextCurrent(window);

    // main loop
    while(!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        glClearColor(0.0f, 0.0f, sin(glfwGetTime()), 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // render here

        glfwSwapBuffers(window);
    }

    glfwTerminate();
}
