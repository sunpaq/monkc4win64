#include "Monkey.h"
#include "MonkeyExt.h"
#include "HiWin.h"

#include <glfw3.h>

void testOOP()
{
	extend(Monkey, Ext);

	Monkey* m = new(Monkey);
	//static call
	Monkey_info(m, 0);

	//dynamic call
	ff(m, showage, 0);
	ff(m, showname, 0);

	//call protocal Flyable
	ff(m, fly, 0);
	ff(m, takeoff, "yeah!");
	ff(m, landing, "OK");

	//call extensions
	ff(m, extensionMethod, 0);
	ff(m, extensionFunction, 0);

	//call an wrong method name
	//ff(m, typo, 0);

	printf("%s\n", "finish");
}

void appLaunch(void)
{
	testOOP();

	HiWin* hi = ff(new(HiWin), initWithName, "Steve");
	HiWin_sayHello(hi, 0);
	ff(hi, sayHello, 0);

	system("pause");
}

void setupGL(void)
{
	glClearColor(0.5, 0.5, 1.0, 1.0);
}

void renderGL(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
}

int main(void)
{
	appLaunch();
	
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	setupGL();

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		renderGL();

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}

