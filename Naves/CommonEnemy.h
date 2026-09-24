#pragma once
#include "Enemy.h"

class CommonEnemy : public Enemy
{
public:
	CommonEnemy(float x, float y, Game* game);
	Projectile* update() override;
};

