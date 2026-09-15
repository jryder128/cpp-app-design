#include <iostream>
#include <string>
using namespace std;

int main() {

    string appName = "Monster Maker";
    double ver = 0.1;

    string monsterName = "Default";
    int hitPoints = 15;                        
    double weight = 50.25;                
    float strength = 1.1f;          
    char jobClass = 'A';                   
    bool friendly = true;                             
    
    cout << "=== Welcome to " << appName << " Version " << ver << "! ===" << endl << endl;
    cout << "Select from the following items:" << endl;
    cout << "1. Create a Monster" << endl;
    cout << "2. View Created Monsters" << endl;
    cout << "3. Search for a Monster" << endl;
    cout << "4. Exit" << endl << endl;

    cout << "Name: " << monsterName << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Strength: " << strength << endl;
    cout << "Job Class: ";

    switch (jobClass) {
    case 'A':
        cout << "Fighter" << endl;
        break;
    case 'B':
        cout << "Wizard" << endl;;
        break;
    case 'C':
        cout << "Healer" << endl;
        break;
    case 'D':
        cout << "Rogue" << endl;
        break;
    default:
        cout << "Invalid Job Class. Try again." << endl;
    }

    if (!friendly) {
        cout << "Friendly: No" << endl;
    } else cout << "Friendly: Yes" << endl;

    return 0;
}
