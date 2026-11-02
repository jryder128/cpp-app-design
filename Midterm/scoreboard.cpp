#include "scoreboard.h"

using namespace std;

void sortByKills(combatant* fighters, int count) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i != count - 1; i++) {
            if (fighters[i].kills < fighters[i + 1].kills) {
                combatant temp = fighters[i];
                fighters[i] = fighters[i + 1];
                fighters[i + 1] = temp;
                sorted = false;
            }
        }
    }
}

void printScoreboard(ostream& text, const combatant* fighters, int count) {
    text << "   SCOREBOARD" << endl;
    for (int i = 0; i < count; i++) {
        text << i + 1 << ". " << fighters[i].name << ": " << fighters[i].kills << " kills";
        if (!fighters[i].isDead) {
            text << " (SURVIVOR!)";
        }
        text << endl;
    }
}
