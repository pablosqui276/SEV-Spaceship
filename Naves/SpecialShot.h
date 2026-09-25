#pragma once
#include "PowerUp.h"
class SpecialShot : public PowerUp
{
public:
	SpecialShot(float x, float y, Game* game);
	void update() override;
	void applyEffect(Player* player) override;

};

