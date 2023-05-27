#include "Room.h"
#include <stdio.h>
#include <iostream>

using namespace std;


Room::Room(const string &typeOfRoom) : type(typeOfRoom)
{
    //empty
}

Room::~Room()
{
    ///
}


string Room::getType() const
{
    return type;
}

void Room::displayInformation() const
{
    cout << "You are in" << this->type << endl;

}



