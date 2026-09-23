#include "SpecialEnemy.h"

SpecialEnemy::SpecialEnemy(float x, float y, Game* game)
	: Enemy("res/enemigo_especial.png", "res/enemigo_especial_movimiento.png", x, y, 36, 40, game) {
}

void SpecialEnemy::update() {
	// Actualizar la animación
	animation->update();

	vx = -2;
	vy = -1;

	x = x + vx;
	y = y + vy;
}

