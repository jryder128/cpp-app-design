#include "setup.h"
#include <cstdlib>
#include <iostream>

using namespace std;

string nameEntry(int i) {
    string name;
    cout << "Enter the name of combatant number " << i + 1 << ": " << endl;
    cin >> name;
    return name;
}

int rollHitPoints() {
    return (rand() % 100) + 100;
}

// Create the list of combatants
void createCombatants(combatant* fighters, int count, ostream& log) {
    for (int i = 0; i < count; i++) {
        combatant& fighter = fighters[i];
        fighter.weapon = (rand() % 20) + 1;
        fighter.name = nameEntry(i);
        fighter.hitpoints = rollHitPoints();
        do {
            fighter.strength = (rand() % 20) + 1;
        } while (fighter.strength < 8);
        fighter.isDead = false;
        fighter.kills = 0;

        log << i + 1 << ". " << fighter.name << " spawned with " << fighter.hitpoints
            << " HP and " << fighter.strength << " strength. " << endl;
    }
}