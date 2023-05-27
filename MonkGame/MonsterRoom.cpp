#include "MonsterRoom.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

MonsterRoom::MonsterRoom() : Room("Monster Room")
{
    //empty
}

MonsterRoom::~MonsterRoom()
{

}

void MonsterRoom::displayInformation() const
{
    cout << "ROOM : " << getType() << endl;
    cout << "What do you want to do?" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Defend" << endl;
    cout << endl;
    cout << "Your choice: ";
}


void MonsterRoom::roomFeature()
{
    displayInformation();
    cout << endl;
    cout << endl;

    cin >> choice;
    if (choice < 1 || choice > 2) {
        cout << "You have entered wrong number!" << endl;
        return roomFeature();
    }
}


void MonsterRoom::getRandomNumber()
{
    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        int number = rand() % 2;
        randomNumbers.push_back(number);
    }

}


bool MonsterRoom::tryAction()
{
    int number = randomNumbers.back();
    if (number == 1)
    {
        randomNumbers.pop_back();
        return true;
    }
    else
    {
        randomNumbers.pop_back();
        return false;
    }
}



void MonsterRoom::combat(Player &player, Monster &monster)
{
    //generating a vector of 0's and 1's with 50% chance of getting 0 or 1
    getRandomNumber();

    while (player.getHP() > 0)
    {
        cout << "______________________" << endl;
        cout << "________HEALTH________" << endl;
        cout << player.getName() << ": " << player.getHP() << endl;
        cout << monster.getName() << ": " << monster.getHP() << endl;
        cout << "______________________" << endl;
        cout << "______________________" << endl;

        cout << endl;

        //player's turn
        roomFeature();

        if (choice == 1) //player wants to attack
        {
            cout << "You have decided to fight!" << endl;
            fight(player, monster, "player");
        }
        else if (choice == 2) //player wants to defend
        {
            cout << "You have decided to defend!" << endl;
            defend(player, monster, "player");
        }


        //if monster is killed;
        if (monster.getHP() <= 0)
        {
            break;
        }



        //monster's turn
        int number = randomNumbers.back();

        cout << endl;
        if (number == 0) //monster wants to attack
        {
            cout << "Monster has decided to fight!" << endl;
            randomNumbers.pop_back();
            fight(player, monster, "enemy");

        }
        else if (number == 1) //monster wants to defend
        {
            cout << "Monster has decided to defend!" << endl;
            randomNumbers.pop_back();
            defend(player, monster, "enemy");
        }

        cout << endl;

    }

    //additional feature
    if (randomNumbers.back() == 0)
    {
        cout << "OOOHHH MY GOD!!!!!!!" << endl << "You have got blessed by a God! Your attack damage is now increased by 1" << endl;
        player.setAP(player.getAP() + 1);

    }
}


void MonsterRoom::fight(Player& player, Monster& monster, string attacker)
{


    if (!tryAction())
    {
        cout << "Action failed!" << endl;

    }
    else
    {

        if (attacker == "player")
        {
            monster.setHP(monster.getHP() - player.getAP());
        }

        else if (attacker == "enemy")
        {
            player.setHP(player.getHP() - monster.getAP());
        }


    }
}


void MonsterRoom::defend(Player& player, Monster& monster, string whoIsDefending)
{
    if (!tryAction())
    {
        cout << "Action failed!" << endl;

    }
    else
    {
        if (whoIsDefending == "player")
        {
            player.setHP(player.getHP() + 1);

        }
        else if (whoIsDefending == "enemy")
        {
            monster.setHP(monster.getHP() + 1);
        }
    }


}
