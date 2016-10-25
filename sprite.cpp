#include "sprite.h"

void Sprite::setPosition(Vector2 newPosition)
{
	_position = newPosition;
}

Vector2 Sprite::getPosition()
{
	return _position;
}

void Sprite::setVelocity(Vector2 newVelocity)
{
	_velocity = newVelocity;
}

Vector2 Sprite::getVelocity()
{
	return _velocity;
}

void Sprite::setRotation(GLfloat newRotation)
{
	_rotation = newRotation;
}

GLfloat Sprite::getRotation()
{
	return _rotation;
}

Sprite::Sprite(GLFWwindow* window, GLuint textureBufferID, Vector2 position)
{
	_textureBufferID = textureBufferID;
	_position = position;
	_window = window;
}

Sprite::~Sprite()
{
}


void Sprite::render()
{
	glBindTexture(GL_TEXTURE_2D, _textureBufferID);

	glLoadIdentity();

	glTranslatef(_position.x - SQUARE_SIZE/2.0f, _position.y - SQUARE_SIZE/2.0f, 0);
	/* glRotatef(_rotation, 0, 0, 1.0f); */

	glDrawArrays(GL_QUADS, 0 , 4);
}

void Sprite::update()
{
	_position = addVector2(_position, _velocity);
}
