#include "SpecialEnemy.h"

SpecialEnemy::SpecialEnemy(float x, float y, Game* game)
	: Enemy("res/enemigo_especial.png", "res/enemigo_especial_movimiento.png", x, y, 80, 82, 492, 6, game) {
	this->tickCounter = 0;
	actualvy = -1;
}

Projectile* SpecialEnemy::update() {
	// Actualizar la animación
	animation->update();

	if (tickCounter % 90 == 0 or tickCounter % 120 == 0) {
		actualvy = -actualvy;
	}

	vx = -2;
	vy = actualvy;

	x = x + vx;
	y = y + vy;

	tickCounter++;

	return NULL;
}

