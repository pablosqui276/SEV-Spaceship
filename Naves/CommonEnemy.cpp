#include "CommonEnemy.h"

CommonEnemy::CommonEnemy(float x, float y, Game* game)
	: Enemy("res/enemigo.png", "res/enemigo_movimiento.png", x, y, 36, 40, 108, 3, game) {
}

Projectile* CommonEnemy::update() {
	// Actualizar la animación
	animation->update();

	vx = -1;
	x = x + vx;

	return Enemy::shoot();
}

