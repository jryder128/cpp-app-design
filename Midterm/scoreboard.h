#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <ostream>
#include "classes.h"

using namespace std;

void sortByKills(combatant* fighters, int count);
void printScoreboard(ostream& text, const combatant* fighters, int count);

#endif
