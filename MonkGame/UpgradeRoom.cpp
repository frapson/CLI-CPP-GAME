#include "UpgradeRoom.h"
#include <stdio.h>
#include <string>
#include <iostream>


using namespace std;

UpgradeRoom::UpgradeRoom() : Room("Upgrade Room")
{
    //empty
}

UpgradeRoom::~UpgradeRoom()
{
    //
}

void UpgradeRoom::displayInformation() const
{
    cout << "ROOM : " << getType() << endl;
    cout << "What do you want to do?" << endl;
    cout << "1. Increase maximum health points" << endl;
    cout << "2. Increase attack points" << endl;

}

void UpgradeRoom::roomFeature()
{
    displayInformation();

    cin >> choice;

    if (choice < 1 || choice > 2) {
        cout << "You have entered wrong number!" << endl;
        return roomFeature();
    }
}


void UpgradeRoom::upgrade(Player& player)
{
    roomFeature();
    if (choice == 1)
    {
        cout << "Your maximum health points have been increased!" << endl;
        player.setMaxHP(player.getMaxHP() + 5);
    }
    else if (choice == 2)
    {
        cout << "Attack points have been increased!" << endl;
        player.setAP(player.getAP() + 2);
    }
}
