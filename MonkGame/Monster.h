#pragma once

#include <stdio.h>
#include <string>
#include "InteractiveEntity.h"

using namespace std;

class Monster : public InteractiveEntity
{
public:
    Monster(const string &, const string &);
    ~Monster();
};

