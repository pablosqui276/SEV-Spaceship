#include "Enemy.h"

Enemy::Enemy(string spriteName, string animationName, float x, float y, int width, int height, int animationWidth, int totalFrames, Game* game)
	: Actor(spriteName, x, y, width, height, game) {
	init();
	aMoving = new Animation(animationName, width, height,
		animationWidth, height, 15, totalFrames, game);
	animation = aMoving;
}

Enemy::Enemy(string fileName, float x, float y, int width, int height, Game* game)
	: Actor(fileName, x, y, width, height, game) {
	init();
	aMoving = NULL;
	animation = NULL;
}

void Enemy::init() {
	audioShoot = Audio::createAudio("res/efecto_disparo.wav", false);
	vx = 1;
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
		return new Projectile(x, y, this, -7, game);
	}
	else {
		return NULL;
	}
}
