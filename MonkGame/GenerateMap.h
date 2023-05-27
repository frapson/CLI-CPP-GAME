#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include "MonsterRoom.h"
#include "EmptyRoom.h"
#include "UpgradeRoom.h"
#include "TreasureRoom.h"



using namespace std;
class GenerateMap
{
public:
    GenerateMap();
    ~GenerateMap();
    vector<string> getSetsOfMaps(int);
    MonsterRoom getMonsterRoom();
    EmptyRoom getEmptyRoom();
    UpgradeRoom getUpgradeRoom();
    TreasureRoom getTreasureRoom();



private:
    vector<string> options;
    vector<int> randomNumbers;
};
