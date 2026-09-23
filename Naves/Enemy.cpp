#include "Enemy.h"

Enemy::Enemy(string spriteName, string animationName, float x, float y, int width, int height, Game* game)
	: Actor(spriteName, x, y, width, height, game) {

	vx = 1;

	aMoving = new Animation(animationName, width, height,
		108, 40, 6, 3, game);
	animation = aMoving;
}

Enemy::Enemy(string fileName, float x, float y, int width, int height, Game* game)
	: Actor(fileName, x, y, width, height, game) {
	vx = 1;
	aMoving = 0;
	animation = 0;
}

void Enemy::draw() {
	if (animation != 0) {
		animation->draw(x, y);
	}
	else Actor::draw();
}
