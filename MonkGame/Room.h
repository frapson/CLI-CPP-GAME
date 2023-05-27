#pragma once

#include <stdio.h>
#include <string>

using namespace std;


class Room
{
public:
    Room(const string &);
    ~Room();

    string getType() const;
    int choice;


    //virtual function
    virtual void displayInformation() const;
    //pure virtual function
    virtual void roomFeature() = 0;
private:
    string type;
    string action;


};
