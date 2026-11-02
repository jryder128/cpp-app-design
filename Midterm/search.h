#ifndef SEARCH_H
#define SEARCH_H

#include <string>
#include <vector>
#include "classes.h"

using namespace std;

// Returns pointers to the fighters, sorted by name
vector<combatant*> sortedByName(combatant* fighters, int count);

// Binary search, returns nullptr if no fighter has that name
combatant* findByName(const vector<combatant*>& sorted, const string& name);

// Search function, runs until the user types 'quit'
void searchCombatants(combatant* fighters, int count);
#endif