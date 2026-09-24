#pragma once

#include "Actor.h"

class Projectile : public Actor
{
public:
	Projectile(float x, float y, Actor* owner, int vx, Game* game);
	void update();
	Actor* owner;
};
