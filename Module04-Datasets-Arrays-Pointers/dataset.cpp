#include <iostream>
using namespace std;

int main() {
    int playerID[6] = {1, 2, 3, 4, 5, 6};
    int age[6] = {24, 22, 25, 29, 22, 22};
    string genre[6] = {"FPS", "FPS", "Royale", "FPS", "FPS", "MOBA"};
    int energyDrinks[6] = {0, 2, 1, 0, 1, 1};
    float screenBrightness[6] = {43.4, 88, 24.8, 80.2, 34.4, 22.1};

    float *screenBrightnessPtr = &screenBrightness[2];
    
    cout << "=== E-SPORTS ATHLETE BIOMETRICS AND PERFORMANCE ===" << endl << endl;

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". Player ID# PL_00000" << playerID[i] << " - " << "Age: " << age[i] << " | Genre: " << 
            genre[i] << " | Energy Drinks: " << energyDrinks[i] << " | Screen Brightness: " << screenBrightness[i] << endl;
    }

    cout << "Third screen brightness setting through pointer: " << *screenBrightnessPtr << endl;
    return 0;
}
