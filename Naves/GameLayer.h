#pragma once

#include "Layer.h"
#include "Player.h"
#include "Background.h"
#include "Enemy.h"
#include "CommonEnemy.h"
#include "SpecialEnemy.h"
#include "Projectile.h"
#include "Text.h"
#include "Audio.h" 
#include "PowerUp.h"
#include "SpecialShot.h"

#include <list>

// Herencia en c++
class GameLayer : public Layer
{
public:
	GameLayer(Game* game);
	// Sobreescritura de un método en c++
	void init() override;
	void processControls() override;
	void update() override;
	void draw() override;
	void keysToControls(SDL_Event event);

	Audio* audioBackground;
	Text* textPoints;
	int points;

	int newEnemyTime = 0;

	int newPowerUpTime = 90;

	int spaceship = 0;
	Player* player;
	Background* background;
	Actor* backgroundPoints;
	list<Actor*> lives;
	bool controlShoot = false;

	int controlMoveY = 0;
	int controlMoveX = 0;

	list<Enemy*> enemies;
	list<Projectile*> projectiles;
	list<PowerUp*> powerUps;

};
