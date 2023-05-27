#pragma once
#include <stdio.h>
#include <string>
#include "Room.h"
#include "Player.h"

using namespace std;
class UpgradeRoom : public Room
{
public:
    UpgradeRoom();
    ~UpgradeRoom();

    void upgrade(Player&);

    virtual void displayInformation() const;
    virtual void roomFeature();



};
