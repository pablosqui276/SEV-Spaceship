#pragma once
#include "Enemy.h"

class SpecialEnemy : public Enemy
{
public:
	SpecialEnemy(float x, float y, Game* game);
	Projectile* update() override;
	int tickCounter;
	int actualvy;
};

