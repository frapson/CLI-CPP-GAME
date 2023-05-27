#include "InteractiveEntity.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>


using namespace std;

InteractiveEntity::InteractiveEntity(const string &pName, const string &pDescription) : name(pName), description(pDescription)
{
    //empty
}

InteractiveEntity::~InteractiveEntity()
{
    ///
}



void InteractiveEntity::setAP(const unsigned int& attackPoints)
{
   
    //AP = attackPoints;
    attackPoints > 0 ? AP = attackPoints : AP;

}

void InteractiveEntity::setHP(const unsigned int &healthPoints)
{
    HP = healthPoints;
    
}

void InteractiveEntity::setName(const string &sName)
{
    name = sName;
}

void InteractiveEntity::setDescription(const string &descriptionOfPLayer)
{
    description = descriptionOfPLayer;
}




int InteractiveEntity::getAP() const
{
    return AP;
}

int InteractiveEntity::getHP() const
{
    return HP;
}


string InteractiveEntity::getName() const
{
    return name;
}

string InteractiveEntity::getDescription() const
{
    return description;
}

string InteractiveEntity::getDetails() const
{
    return name + " - " + description;
}
 