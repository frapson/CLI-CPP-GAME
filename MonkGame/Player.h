#pragma once
#include <stdio.h>

#include <string>
#include "InteractiveEntity.h"


using namespace std;

class Player : public InteractiveEntity
{
public:
    Player(const string&, const string &);
    ~Player();

    void setMaxHP(const unsigned int &);
    int getMaxHP() const;


private:
    int MaxHP;
};
