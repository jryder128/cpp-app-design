#ifndef COMBATANT_H
#define COMBATANT_H

#include <string>
#include <vector>

using namespace std;

class combatant {
public:
    string name;
    int hitpoints;
    int weapon;
    int dmg;
    int strength;
    int kills;
    bool isDead;
    string weaponName;
};

class knight : public combatant {
public:
    int armor;
};

class mage : public knight {
public:
    vector<string> spells;
};

class monster : public mage {
public:
    string species;
};

#endif