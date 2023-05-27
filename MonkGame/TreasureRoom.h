#pragma once

#include <stdio.h>
#include <string>
#include "Room.h"

using namespace std;
class TreasureRoom : public Room
{
public:
    TreasureRoom();
    ~TreasureRoom();

    void close();

    virtual void displayInformation() const;
    virtual void roomFeature();


};
