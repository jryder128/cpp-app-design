#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include "Character.cpp"
using namespace std;

int main() {
    Character knight("Arthur");
    Character wizard("Merlin");

    knight.setHP(120);
    knight.setDef(18);
    knight.setStr(25);
    knight.setDex(8);

    wizard.setHP(80);
    wizard.setDef(22);
    wizard.setStr(16);
    wizard.setDex(32);

    cout << knight.getName() << " has " << knight.getAttackPower() << " attack power and " << knight.getArmorClass() << " defense based on these stats:" << endl;
    knight.showStats();
    cout << endl;
    cout << wizard.getName() << " has " << wizard.getAttackPower() << " attack power and " << wizard.getArmorClass() << " defense based on these stats:" << endl;
    wizard.showStats();

    return 0;
}
