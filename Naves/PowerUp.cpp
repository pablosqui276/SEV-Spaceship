#include "PowerUp.h"

PowerUp::PowerUp(string spriteName, float x, float y, int width, int height, Game* game)
    : Actor(spriteName, x, y, width, height, game)
{
    vx = -2;

    aMoving = NULL;
    animation = NULL;
}

void PowerUp::setAnimation(string animationName, int width, int height, int totalFrames) {
    aMoving = new Animation(animationName, Actor::width, Actor::height,
        width, height, 15, totalFrames, Actor::game);
    animation = aMoving;
}

void PowerUp::draw()
{
    animation->draw(x, y);
}

void PowerUp::update()
{
    animation->update();
    x += vx; // Movimiento horizontal en pantalla
}