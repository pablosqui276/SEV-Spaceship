#pragma once

#include "Actor.h"
#include "Animation.h" 

class Enemy : public Actor
{
public:
	Enemy(string spriteName, string animationName, float x, float y, int width, int height, Game* game);
	void draw() override; // Va a sobrescribir
	// Esto convierte la clase en abstracta. Obliga a implementar este método
	virtual void update() = 0;
	Animation* aMoving;
	Animation* animation; // Referencia a la animación mostrada
};
