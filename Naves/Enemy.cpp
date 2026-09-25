#include "Enemy.h"

Enemy::Enemy(string fileName, float x, float y, int width, int height, Game* game)
	: Actor(fileName, x, y, width, height, game) {
	audioShoot = Audio::createAudio("res/efecto_disparo.wav", false);
	vx = 1;
	aMoving = NULL;
	animation = NULL;
}

void Enemy::setAnimation(string animationName, int width, int height, int totalFrames) {
	aMoving = new Animation(animationName, Actor::width, Actor::height,
		width, height, 15, totalFrames, Actor::game);
	animation = aMoving;
}

void Enemy::draw() {
	if (animation != NULL) {
		animation->draw(x, y);
	}
	else Actor::draw();
}

Projectile* Enemy::shoot() {
	shootTime--;

	if (shootTime == 0) {
		audioShoot->play();
		shootTime = shootCadence;
		Projectile* newProjectile = new Projectile(x, y, this, -7, Actor::game);
		newProjectile->changeTexture("res/disparo_enemigo.png", 20, 20);
		return newProjectile;

	}
	else {
		return NULL;
	}
}
