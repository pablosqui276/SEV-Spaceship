#pragma once
#include "Enemy.h"

class SpecialEnemy : public Enemy
{
public:
	SpecialEnemy(float x, float y, Game* game);
	void update() override;
	int tickCounter;
	int actualvy;
};

