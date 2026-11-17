#include "search.h"
#include <algorithm>
#include <iostream>

using namespace std;

// Sorting algorithm
// Using a vector instead of an array so I can use the push_back modifier
vector<combatant*> sortedByName(combatant* fighters, int count) {
    vector<combatant*> index;
    index.reserve(count);
    for (int i = 0; i < count; i++) {
        index.push_back(&fighters[i]);
    }

    sort(index.begin(), index.end(),
         [](const combatant* a, const combatant* b) { return a->name < b->name; });
    return index;
}

// Binary search, returns nullptr if no fighter has that name
combatant* findByName(const vector<combatant*>& sorted, const string& name) {
    int lo = 0;
    int hi = static_cast<int>(sorted.size()) - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (sorted[mid]->name == name) {
            return sorted[mid];
        }
        if (sorted[mid]->name < name) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return nullptr;
}

// Search function, runs until the user types 'quit'
void searchCombatants(combatant* fighters, int count) {
    vector<combatant*> index = sortedByName(fighters, count);

    cout << "Enter a combatant's name to look them up, or 'quit':" << endl;
    string search;
    while (cin >> search && search != "quit") {
        combatant* target = findByName(index, search);
        if (target) {
            cout << target->name << ": " << target->hitpoints << " HP, " << target->kills << " kills, "
                << (target->isDead ? "dead" : "alive") << endl;
        }
        else {
            cout << "Unable to find " << search << endl;
        }
    }
}