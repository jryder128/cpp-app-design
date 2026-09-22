#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    // Create and open a text file
    ifstream file("esports_biometrics.csv");
    if (file.is_open()) {
        const int MAX_SIZE = 6; // max number of records, can be changed as needed
        string line;
        getline(file, line); // Skip the header of the .csv file

        cout << "========== || E-SPORTS ATHLETE BIOMETRICS AND PERFORMANCE || ==========" << endl << endl; // output header

        string players[MAX_SIZE];
        string ages[MAX_SIZE];
        string genres[MAX_SIZE];
        string playTimes[MAX_SIZE];

        for (int i = 0; i < MAX_SIZE; i++) {
            getline(file, line); // Skip the header of the .csv file. Have to do this twice, for some reason...
            stringstream ss(line);

            // add player IDs to players[]
            string player;
            getline(ss, player, ',');
            players[i] = player;

            // add ages to ages[]
            string age;
            getline(ss, age, ',');
            ages[i] = age;

            // add genres to genres[]
            string genre;
            getline(ss, genre, ',');
            genres[i] = genre;

            // add Play Times to playTimes[]
            string playTime;
            getline(ss, playTime, ',');
            playTimes[i] = playTime;

            // create pointers for each of the 4 fields
            string* Player = &players[i];
            string* Age = &ages[i];
            string* Genre = &genres[i];
            string* PlayTime = &playTimes[i];
            
            // print data by de-referencing pointers
            cout << i + 1 << ". Player ID# " << *Player << " - " << "Age: " << *Age << " | Genre: " <<
                *Genre << " | Play Time: " << *PlayTime << endl;
        }
    }
    file.close();
    return 0;
}
