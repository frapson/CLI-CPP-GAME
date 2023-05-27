#pragma once


#include <stdio.h>
#include <string>
#include <vector>
#include "Room.h"
#include "Monster.h"
#include "Player.h"




using namespace std;
class MonsterRoom : public Room
{
public:
    MonsterRoom();
    ~MonsterRoom();

    //    void setAction(string);
    //    string getAction();


    void fight(Player&, Monster&, string);
    void defend(Player&, Monster&, string);
    void combat(Player&, Monster&);
    void getRandomNumber();
    bool tryAction();

    virtual void displayInformation() const;
    virtual void roomFeature();
private:
    string action;
    string result;
    vector<int> randomNumbers;



};
