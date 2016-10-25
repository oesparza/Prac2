#ifndef PLAYERSPRITE_H
#define PLAYERSPRITE_H

#include "sprite.h"
#include "boundingbox.h"

class PlayerSprite : public Sprite
{
	private:
		BoundingBox _boundingBox;

	public:
		PlayerSprite(GLFWwindow* window, GLuint textureBufferID, Vector2 position);

		void update();

		void setBoundingBox(BoundingBox boundingBox);
};

#endif
