#pragma once
#include <stdio.h>
#include <string>



class InteractiveEntity
{
public:
  
    InteractiveEntity(const std::string &, const std::string &);
    ~InteractiveEntity();
    void setHP(const unsigned int &);
    void setAP(const unsigned int &);
    void setName(const std::string &);
    void setDescription(const std::string &);


    int getHP() const;
    int getAP() const;
    std::string getName() const;
    std::string getDescription() const;
    std::string getDetails() const;

/*private:
    string name;
    string description;
    */
protected:
    int HP;
    int AP;
    std::string name;
    std::string description;

};
