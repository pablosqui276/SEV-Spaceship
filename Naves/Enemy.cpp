#include "Enemy.h"

Enemy::Enemy(string spriteName, string animationName, float x, float y, int width, int height, Game* game)
	: Actor(spriteName, x, y, width, height, game) {

	vx = 1;

	aMoving = new Animation(animationName, width, height,
		108, 40, 6, 3, game);
	animation = aMoving;

}

void Enemy::draw() {
	animation->draw(x, y);
}
