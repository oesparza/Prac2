#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

/* To use glGenBuffers and othres */
#define GL_GLEXT_PROTOTYPES
#define GLFW_INCLUDE_GLEXT

#include <GLFW/glfw3.h>
#include <vector>

#include "playersprite.h"

class GameWindow
{
	private:
		GLFWwindow* _window;

		bool _running;

		/* Frame buffer size */
		GLsizei _width;
		GLsizei _height;

		GLuint _vertexBufferID;
		GLuint _textureBufferID;
		GLuint _ballTextureBufferID;

		PlayerSprite *_playerRocket;
		std::vector<Sprite *>  *_ballsArray;

		GLuint loadAndBufferImage(const char *filename);
		void setupGL();

	public:
		void setRunning(bool newRunning);
		bool getRunning();

		GameWindow(bool running, GLFWwindow* window);
		~GameWindow();

		void render();
		void update();

		void mouseButtonPressed(int button, int action);
		void keyButtonPressed(int button, int action);
};

#endif
