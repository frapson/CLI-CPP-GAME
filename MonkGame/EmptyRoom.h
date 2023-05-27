#pragma once

#include <stdio.h>
#include <string>
#include "Room.h"
#include "Player.h"

using namespace std;
class EmptyRoom : public Room
{
public:
    EmptyRoom();
    ~EmptyRoom();

    void action(Player&);

    virtual void displayInformation() const;
    virtual void roomFeature();

private:
};

