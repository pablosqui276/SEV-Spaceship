#include "SpecialEnemy.h"

SpecialEnemy::SpecialEnemy(float x, float y, Game* game)
	: Enemy("res/enemigo_especial.png", x, y, 36, 40, game) {
	this->tickCounter = 0;
	actualvy = -1;
}

void SpecialEnemy::update() {
	// Actualizar la animación
	// animation->update();

	if (tickCounter % 90 == 0 or tickCounter % 120 == 0) {
		actualvy = -actualvy;
	}

	vx = -2;
	vy = actualvy;

	x = x + vx;
	y = y + vy;

	tickCounter++;
}

