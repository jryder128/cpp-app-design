#include <iostream>
#include <string>
using namespace std;

void newGame() {
    cout << "New Game selected." << endl;
}

void loadGame() {
    cout << "Load Game selected." << endl;
}

void graphicsSettings() {
    cout << "Graphics Settings selected." << endl;
}

void audioSettings() {
    cout << "Audio Settings selected." << endl;
}

void specialFeatures() {
    cout << "Special Features selected." << endl;
}

int main() {
    int choice = 0;

    while (choice != 6) {
        cout << "\n=== TITLE SCREEN ===" << endl;
        cout << "1. New Game" << endl;
        cout << "2. Load Game" << endl;
        cout << "3. Graphics Settings" << endl;
        cout << "4. Audio Settings" << endl;
        cout << "5. Special Features" << endl;
        cout << "6. Exit" << endl;
        cout << "Choose an option: " << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            newGame();
            break;
        case 2:
            loadGame();
            break;
        case 3:
            graphicsSettings();
            break;
        case 4:
            audioSettings();
            break;
        case 5:
            specialFeatures();
            break;
        case 6:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid option. Please select options 1 through 6." << endl;
        }
    }
    return 0;
}
