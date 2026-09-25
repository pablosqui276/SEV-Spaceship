#pragma once

#include "Actor.h"
#include "Player.h"
#include "Animation.h" 

class PowerUp : public Actor
{
public:
	PowerUp(string spriteName, float x, float y, int width, int height, Game* game);
	void draw() override; // Va a sobrescribir
	void setAnimation(string animationName, int width, int height, int totalFrames);
	virtual void update() = 0;
	virtual void applyEffect(Player* player) = 0;

	Animation* aMoving;
	Animation* animation; // Referencia a la animación mostrada
};
