#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <ctime>
using namespace std;

class Character {
private:
    string name;
    int hitpoints;
    int defense;
    int strength;
    int dexterity;


public:
    // Constructor
    Character(string characterName) {
        name = characterName;
    }

    // Member function
    void showStats() {
        cout << "Hit Points: " << hitpoints << endl;
        cout << "Defense: " << defense << endl;
        cout << "Strenth: " << strength << endl;
        cout << "Dexterity: " << dexterity << endl;
    }

    // Getters
    string getName() {
        return name;
    }

    float getAttackPower() {
        return strength + dexterity;
    }

    float getArmorClass() {
        return static_cast<float>(hitpoints) / defense;
    }

    // Setters
    void setHP(int newHitpoints) {
        hitpoints = newHitpoints;
    }

    void setDef(int newDef) {
        defense = newDef;
    }

    void setStr(int newStr) {
        strength = newStr;
    }

    void setDex(int newDex) {
        dexterity = newDex;
    }

};
