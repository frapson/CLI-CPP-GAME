#include "Player.h"

using namespace std;

Player::Player(const string &pName, const string &pDescription) : InteractiveEntity(pName, pDescription)
{
    setHP(15);
    setAP(3);
    setMaxHP(15);
}

Player::~Player()
{
    //
}

void Player::setMaxHP(const unsigned int &maxHealthPoints)
{
    //MaxHP = maxHealthPoints;
    maxHealthPoints > 0 ? MaxHP = maxHealthPoints : MaxHP;
}

int Player::getMaxHP() const
{
    return MaxHP;
}
