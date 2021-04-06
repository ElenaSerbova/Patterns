#include <iostream>
#include <map>
#include <string>
using namespace std;

class Prototype {
public:
    virtual Prototype* Clone() = 0;
    virtual ~Prototype() = 0 {}
};

class Monster : public Prototype {
public:
    int _health;
    int _armor;
    int _damage;

    Prototype* Clone() {
        Monster* clone = new Monster;
        clone->_health = this->_health;
        clone->_damage = this->_damage;
        clone->_armor = this->_armor;

        return clone;
    }

};

class MonsterRegister {
    map<string, Monster*> prototypes;
public:
    MonsterRegister()
    {
        Monster* ghost = new Monster;
        ghost->_health = 5;
        ghost->_damage = 7;
        ghost->_armor = 1;

        prototypes.insert({ "ghost", ghost });

        Monster* demon = new Monster;
        demon->_health = 10;
        demon->_damage = 7;
        demon->_armor = 8;

        prototypes.insert({ "demon", demon });
    }

    Prototype* CreateMonster(string name) {
        auto it = prototypes.find(name);

        return (it != prototypes.end()) ? it->second->Clone() : nullptr;
    }
};

int main()
{
    MonsterRegister* reg = new MonsterRegister();

    Prototype* ghost1 = reg->CreateMonster("ghost");
    Prototype* ghost2 = reg->CreateMonster("ghost");

    Prototype* demon1 = reg->CreateMonster("demon");
}
