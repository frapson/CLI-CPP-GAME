#include "TreasureRoom.h"
#include <stdio.h>
#include <string>
#include <iostream>


using namespace std;

TreasureRoom::TreasureRoom() : Room("Treasure Room")
{
    //empty
}

TreasureRoom::~TreasureRoom()
{
    //
}

void TreasureRoom::displayInformation() const
{
    cout << "ROOM : " << getType() << endl;
    cout << "You have completed the game!" << endl;;
    cout << "1. Close the game" << endl;
}

void TreasureRoom::roomFeature()
{
    displayInformation();

    cin >> choice;
    if (choice < 1 || choice > 2) {
        cout << "You have entered wrong number!" << endl;
        return roomFeature();
    }

}

void TreasureRoom::close()
{
    roomFeature();
    cout << "Goodbye!" << endl;
}
