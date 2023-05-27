#include "EmptyRoom.h"
#include <stdio.h>
#include <string>
#include <iostream>


using namespace std;

EmptyRoom::EmptyRoom() : Room("Empty Room")
{
    //empty
}

EmptyRoom::~EmptyRoom()
{
    //
}

void EmptyRoom::displayInformation() const
{
    cout << "ROOM : " << getType() << endl;
    cout << "What do you want to do?" << endl;
    cout << "1. Pray" << endl;
    cout << "2. Go further" << endl;
}

void EmptyRoom::roomFeature()
{
    displayInformation();

    cin >> choice;
    if (choice < 1 || choice > 2) {
        cout << "You have entered wrong number!" << endl;
        return roomFeature();
    }

}

void EmptyRoom::action(Player& player)
{
    roomFeature();

    if (choice == 1)
    {
        cout << "Your health points have been restored!" << endl;
        //sets player's health points to the maximum amount he can have 
        player.setHP(player.getMaxHP());
    }
    else if (choice == 2)
    {
        cout << "You have decided to not pray..." << endl;
    }
}
