#pragma once
#include "Enemy.h"

class SpecialEnemy : Enemy
{
	SpecialEnemy(float x, float y, Game* game);
	void update() override;
};

