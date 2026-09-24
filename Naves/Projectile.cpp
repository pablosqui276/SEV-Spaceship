#include "Projectile.h"

Projectile::Projectile(float x, float y, Actor* owner, int vx, Game* game) :
	Actor("res/disparo_jugador.png", x, y, 18, 6, game) {
	this->owner = owner;
	this->vx = vx;
}

void Projectile::update() {
	x = x + vx;
}
