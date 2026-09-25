#include "Player.h"

Player::Player(float x, float y, Game* game)
	: Actor("res/jugador.png", x, y, 50, 57, game) {

	audioShoot = Audio::createAudio("res/efecto_disparo.wav", false);
}

void Player::update() {
	if (shootTime > 0) {
		shootTime--;
	}

	x = x + vx;
	y = y + vy;
}

void Player::moveX(float axis) {
	vx = axis * mult;
}

void Player::moveY(float axis) {
	vy = axis * mult;
}

Projectile* Player::shoot() {
	if (shootTime == 0) {
		audioShoot->play();
		shootTime = shootCadence;
		return new Projectile(x, y, this, 9, game);
	}
	else {
		return NULL;
	}
}

void Player::upgradeWeapon() {
	this->shootCadence = 10;
	this->hasEnhancedShot = true;
}

// De querer hacerse extensible la mejor decisión sería crear una clase abstracta Spaceship
// y que se alternase entre ambas clases, dando más flexibilidad y escalabilidad al código. 
// Pero para este caso, se ha optado por un método más simple.

// Cambiar la nave a la nave común
void Player::commonSpaceship() {
	if(spaceship != 0) {
		Actor::changeTexture("res/jugador.png", 50, 57);
		mult = 3;
		shootCadence = 30;
		shootTime = 0;
		spaceship = 0;
	}
}

// Cambiar la nave a la nave especial
void Player::specialSpaceship() {
	if (spaceship != 1) {
		Actor::changeTexture("res/jugador_especial.png", 50, 50);
		mult = 6;
		shootCadence = 10;
		shootTime = 0;
		spaceship = 1;
	}
}	

