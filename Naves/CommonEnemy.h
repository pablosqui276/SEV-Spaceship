#pragma once
#include "Enemy.h"

class CommonEnemy : public Enemy
{
public:
	CommonEnemy(float x, float y, Game* game);
	void update() override;
};

