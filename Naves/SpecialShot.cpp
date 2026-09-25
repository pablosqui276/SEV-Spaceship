#include "SpecialShot.h"
#include "Player.h"

SpecialShot::SpecialShot(float x, float y, Game* game)
    : PowerUp("res/icono_recolectable.png", x, y, 40, 32, game)
{
    PowerUp:setAnimation("res/recolectable.png", 256, 32, 8);
}

void SpecialShot::update()
{
    PowerUp::update(); 
}

void SpecialShot::applyEffect(Player* player)
{
    if (player != nullptr) {
        player->upgradeWeapon(); // Método que debes crear en la clase Player
    }
}