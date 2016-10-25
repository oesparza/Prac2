#ifndef SPRITE_H
#define SPRITE_H

#include <GLFW/glfw3.h>
#include "vector2.h"

#define SQUARE_SIZE 100.0f

class Sprite
{
	private:
		GLuint   _textureBufferID;
		Vector2  _velocity;
		GLfloat  _rotation;

	protected:
		Vector2  _position;
		GLFWwindow* _window;

	public:
		Sprite(GLFWwindow* window, GLuint textureBufferID, Vector2 position);
		virtual ~Sprite();

		void setPosition(Vector2 newPosition);
		Vector2 getPosition();

		void setVelocity(Vector2 newVelocity);
		Vector2 getVelocity();

		void setRotation(GLfloat newRotation);
		GLfloat getRotation();

		void render();

		virtual void update();
};

#endif
