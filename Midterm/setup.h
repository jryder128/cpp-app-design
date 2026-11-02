#ifndef SETUP_H
#define SETUP_H

#include <ostream>
#include <string>
#include "classes.h"

using namespace std;

string nameEntry(int i);
int rollHitPoints();
void createCombatants(combatant* fighters, int count, ostream& text);

#endif
