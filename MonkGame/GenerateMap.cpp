#include "GenerateMap.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

GenerateMap::GenerateMap()
{
    //

}

GenerateMap::~GenerateMap()
{
    //
}

vector<string> GenerateMap::getSetsOfMaps(int option)
{
    srand(time(0));
    switch (option) {
    case 1:
        for (int i = 0; i < 4; i++)
        {
            int number = rand() % 3;
            randomNumbers.push_back(number);
        }

        break;

    case 2:
        for (int i = 0; i < 5; i++)
        {
            int number = rand() % 3;
            randomNumbers.push_back(number);
        }

        break;

    case 3:
        for (int i = 0; i < 7; i++)
        {
            int number = rand() % 3;
            randomNumbers.push_back(number);
        }

        break;
    }
    int previousRoom = -1;

    for (auto i = randomNumbers.begin(); i != randomNumbers.end(); ++i)
    {

        // 0 Monster Room
        // 1 Empty Room
        // 2 Upgrade Room
        
        if (*i == 1 && previousRoom == 1 ) //it's to avoid having two empty rooms one after another
            options.push_back("Monster Room");
        else if (*i == 2 && previousRoom == 2) //it's to avoid having two upgrade rooms one after another
            options.push_back("Monster Room");
        else if (*i == 0)
            options.push_back("Monster Room");
        else if (*i == 1)
            options.push_back("Empty Room");
        else if (*i == 2)
            options.push_back("Upgrade Room");

        previousRoom = *i;
    }

    options.push_back("Treasure Room");

    return options;
}

MonsterRoom GenerateMap::getMonsterRoom()
{
    MonsterRoom monsterRoom;
    return monsterRoom;
}

UpgradeRoom GenerateMap::getUpgradeRoom()
{
    UpgradeRoom upgradeRoom;
    return upgradeRoom;
}

EmptyRoom GenerateMap::getEmptyRoom()
{
    EmptyRoom emptyRoom;
    return emptyRoom;
}

TreasureRoom GenerateMap::getTreasureRoom()
{
    TreasureRoom treasureRoom;
    return treasureRoom;
}
