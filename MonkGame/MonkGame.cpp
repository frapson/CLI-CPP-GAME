// MonkGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MonkGame.h"
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    vector<string> visited;
    
    string name, description;

    cout << "WELCOME!" << endl;

    cout << "Choose your player name: ";
    cin >> name;

    cout << "Dogs or cats? ";
    cin >> description;
    cout << endl;
    Player player(name, description);



    cout << "CHOOSE THE LEVEL OF DIFFICULTY: 1, 2 or 3: ";
    int n;
    cin >> n;

    system("cls");
    GenerateMap mapGenerator;
    vector<string> maps = mapGenerator.getSetsOfMaps(n);
    GenerateMonster mobSpawner;
    Monster monster("default", "default");

    for (auto i = maps.begin(); i != maps.end(); ++i)
    {

        if (*i == "Monster Room")
        {
            srand(time(0));
            int number = rand() % 4; //from 0 to 3
            MonsterRoom monsterRoom;
            monster = mobSpawner.getMonster(number);

            cout << endl;
            cout << endl;

            cout << monster.getDetails() << endl;

            monsterRoom.combat(player, monster);
            if (player.getHP() <= 0)
            {
                cout << "You have died :(" << endl;
                cout << "END OF THE GAME" << endl;
                return 0;
            }

        }
        else if (*i == "Empty Room")
        {
            EmptyRoom emptyRoom;
            emptyRoom.action(player);
        }
        else if (*i == "Upgrade Room")
        {
            UpgradeRoom upgradeRoom;
            upgradeRoom.upgrade(player);

        }
        else if (*i == "Treasure Room")
        {
            TreasureRoom treasureRoom;
            treasureRoom.close();

        }

        visited.push_back(*i);
        cout << endl;;
        system("cls");
        //printing out all visited maps
        for (auto i = visited.begin(); i != visited.end(); ++i)
        {
            cout << *i << " - ";

        }
        cout << endl;
    }



}

