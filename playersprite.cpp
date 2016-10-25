#include "playersprite.h"

PlayerSprite::PlayerSprite(GLFWwindow* window, GLuint textureBufferID, Vector2 position):
	Sprite(window, textureBufferID, position)
{

}

void PlayerSprite::setBoundingBox(BoundingBox boundingBox)
{
	_boundingBox = boundingBox;
}


void PlayerSprite::update()
{
	if (glfwGetKey(_window, GLFW_KEY_W) && _position.y <= _boundingBox.top ) {
		_position = addVector2(_position, makeVector2(0.0f, 1.5f));
	}
	if (glfwGetKey(_window, GLFW_KEY_S) && _position.y >= _boundingBox.bottom ) {
		_position = addVector2(_position, makeVector2(0.0f, -1.5f));
	}
	if (glfwGetKey(_window, GLFW_KEY_A) && _position.x >= _boundingBox.left ) {
		_position = addVector2(_position, makeVector2(-1.5f, 0.0f));
	}
	if (glfwGetKey(_window, GLFW_KEY_D) && _position.x <= _boundingBox.right ) {
		_position = addVector2(_position, makeVector2(1.5f, 0.0f));
	}

}

