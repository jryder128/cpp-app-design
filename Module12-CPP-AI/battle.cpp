#include "battle.h"
#include <cstdlib>
#include "weapons.h"
#include "flavor.h"
#include "scoreboard.h"

using namespace std;

void runBattle(combatant* fighters, int count, ostream& text) {
    int noc = count;
    int survivors = noc;
    int turns = noc;
    int round = 1;

    text << '\n' << "LET THE GAMES BEGIN!" << '\n' << '\n';

    // Redundant message for when the user only inputs a single name
    if (survivors == 1) {
        text << fighters[0].name << " is the last combatant standing!" << '\n';
    }

    while (survivors > 1) {
        for (int i = 0; i < turns; i++) {        // i represents attacker's turn
            for (int j = 0; j < noc; j++) {     // j represents targets
                if (i != j && !fighters[i].isDead && !fighters[j].isDead) {
                    int atkHits = rand() % 2;
                    if (atkHits != 1) {
                        text << round << ". " << fighters[i].name << " tried to attack "
                             << fighters[j].name << ", but they were distracted by a FLYING PIG!"
                             << '\n';
                        round++;
                    }
                    else {
                        int wep = (rand() % 20) + 1;
                        fighters[i].weapon = wep;
                        fighters[i].weaponName = armory(wep);
                        fighters[i].dmg = damage(wep);
                        int attack = fighters[i].strength * ((rand() % fighters[i].dmg) + 1);
                        int verb = (rand() % 12) + 1;
                        int part = (rand() % 16) + 1;

                        text << round << ". " << fighters[i].name << verbs(verb)
                             << fighters[j].name << " in the" << anatomy(part)
                             << " with " << armory(wep) << '\n'
                             << fighters[j].name << " took " << attack << " points of damage!"
                             << '\n';

                        fighters[j].hitpoints -= attack;
                        text << fighters[j].name << "'s remaining HP: "
                             << fighters[j].hitpoints << '\n';
                        round++;

                        if (fighters[j].hitpoints <= 0) {
                            fighters[j].isDead = true;
                            fighters[i].kills++;
                            survivors--;
                            text << "------< " << fighters[i].name << " killed "
                                 << fighters[j].name << "! >------" << '\n';
                        }

                        if (survivors == 1) {
                            text << fighters[i].name << " is the last combatant standing!"
                                 << '\n' << '\n';
                            sortByKills(fighters, noc);
                            printScoreboard(text, fighters, noc);
                        }
                    }
                }
            }
        }
    }
}