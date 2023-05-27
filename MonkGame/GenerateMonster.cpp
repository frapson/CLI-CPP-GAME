#include "GenerateMonster.h"
using namespace std;


GenerateMonster::GenerateMonster()
{
    //empty
}

GenerateMonster::~GenerateMonster()
{
    //empty
}

Monster GenerateMonster::getMonster(int which)
{
    struct MonsterDetails details;

    switch (which) {
    case 0:
        details.Name = "Goblin";
        details.Description = GoblinDescription;
        details.HP = 7;
        details.AP = 2;
        break;

    case 1:
        details.Name = "Troll";
        details.Description = TrollDescription;
        details.HP = 7;
        details.AP = 2;
        break;
    case 2:
        details.Name = "Scorpion";
        details.Description = ScorpionDescription;
        details.HP = 7;
        details.AP = 2;
        break;
    case 3:
        details.Name = "Zombie";
        details.Description = ZombieDescription;
        details.HP = 7;
        details.AP = 2;
        break;
        
    }
    Monster monster("default", "default");
    monster.setName(details.Name);
    monster.setDescription(details.Description);
    monster.setHP(details.HP);
    monster.setAP(details.AP);

    return monster;
}
