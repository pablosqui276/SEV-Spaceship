#include "SpecialEnemy.h"

SpecialEnemy::SpecialEnemy(float x, float y, Game* game)
	: Enemy("res/enemigo_especial.png", x, y, 80, 82, game) {
	Enemy::setAnimation("res/enemigo_especial_movimiento.png", 492, 80, 6);
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

