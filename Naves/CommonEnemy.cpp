#include "CommonEnemy.h"

CommonEnemy::CommonEnemy(float x, float y, Game* game)
	: Enemy("res/enemigo.png", x, y, 36, 40, game) {
	Enemy::setAnimation("res/enemigo_movimiento.png", 108, 40, 3);
}

Projectile* CommonEnemy::update() {
	// Actualizar la animación
	animation->update();

	vx = -1;
	x = x + vx;

	return Enemy::shoot();
}

