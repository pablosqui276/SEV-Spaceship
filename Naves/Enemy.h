#pragma once

#include "Actor.h"
#include "Animation.h" 
#include "Projectile.h"
#include "Audio.h"

class Enemy : public Actor
{
public:
	Enemy(string filename, float x, float y, int width, int height, Game* game);
	void draw() override; // Va a sobrescribir
	// Esto convierte la clase en abstracta. Obliga a implementar este método
	virtual Projectile* update() = 0;
	Projectile* shoot();
	void setAnimation(string animationName, int width, int height, int totalFrames);
	Animation* aMoving;
	Animation* animation; // Referencia a la animación mostrada

	Audio* audioShoot;
	int shootCadence = 60;
	int shootTime = 30;
};
