#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include "battle.h"
#include "search.h"
#include "setup.h"

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    cout << "Enter number of combatants:" << endl;
    int noc; // number of combatants
    cin >> noc;

    ofstream text("battle.txt");

    combatant* fighters = new combatant[noc]; // Pointer to an array of combatant classes

    createCombatants(fighters, noc, text);
    runBattle(fighters, noc, text);
    searchCombatants(fighters, noc);
    delete[] fighters;
}
