#include <GL/glew.h>
#include<GLFW/glfw3.h>
#include <iostream>


int main(void)
{
    GLFWwindow* ventana1;

    if (!glfwInit()) // Iniciar una librería 
    {
        return -1;
    }

    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE); // crear ventana que se puede redimensionar
    ventana1 = glfwCreateWindow(850, 700, "Tarea Dibujar un Triangulo de Belen y Andres", NULL, NULL); // Crear una ventana

    if (!ventana1)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(ventana1);  // Se actualiza la ventana

    float vertices_triangulo[] =
    {
        //Se definen los vertices
        0, 0.9, 0,    // superior
       -0.9, -0.9, 0, // inferior izquierda
        0.9, -0.9, 0  // inferior derecha
    };

    while (!glfwWindowShouldClose(ventana1))
    {
        glClearColor(0.1f, 0.1f, 0.1f, 0.1f); //Se indica el color de fondo de la ventana
        glClear(GL_COLOR_BUFFER_BIT);

        //Dibujar el triangulo con ayuda de vertices y matrices

        glEnableClientState(GL_VERTEX_ARRAY);
        glVertexPointer(3, GL_FLOAT, 0, vertices_triangulo); 
        glDrawArrays(GL_TRIANGLES, 0, 3); 
        glDisableClientState(GL_VERTEX_ARRAY); 
        glfwSwapBuffers(ventana1);
        glfwPollEvents();

    }

    glfwTerminate();
    return 0;
}