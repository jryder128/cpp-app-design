#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User {
public:
    int account = 0;
    float balance = 0.0;
    vector<int> accountList;
    vector<float> balanceList;
    
    string username;
    User(string name) {
        username = name;
    }

    int AccountBinarySearch(vector<int> vec, int size, int target) {
        int left = 0, right = vec.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (vec[mid] == target) return mid;
            if (vec[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }

    float BalanceBinarySearch(vector<float> vec, int size, float target) {
        int left = 0, right = vec.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (vec[mid] == target) return mid;
            if (vec[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};

class Admin : public User {
public:
    Admin(string name) : User(name) {}

    void AddAccount() {
        char acctChoice = 'n';
        while (acctChoice == 'n' || acctChoice != 'N') {
            cout << "Enter account number: ";
            cin >> account;
            cout << "Account number enetered: " << account << endl;
            cout << "Is this correct? (Y/N) ";
            cin >> acctChoice;
            if (acctChoice == 'y' || acctChoice == 'Y') {
                accountList.push_back(account);
                cout << "\nAccount number " << account << " added." << endl;
                break;
            }
        }
        char balChoice = 'n';
        while (balChoice == 'n' || balChoice == 'N') {
            cout << "Enter account balance: ";
            cin >> balance;
            cout << "Account balance: $" << balance << endl;
            cout << "Is this correct? (Y/N) ";
            cin >> balChoice;
            if (balChoice == 'y' || balChoice == 'Y') {
                balanceList.push_back(balance);
                cout << "\nAccount balance $" << balance << " added." << endl;
                break;
            }
        }
    }

    void DeleteAccount() {
        if (accountList.size() == 0) {
            cout << "No accounts to delete." << endl;
        }
        else {
            bool deleted = false;
            int choice;
            while (!deleted) {
                for (int i = 0; i < accountList.size(); i++) {
                    cout << "Account " << i + 1 << ": " << accountList[i] << endl;
                }
                cout << "\nWhich account would you like to delete? ";
                cin >> choice;
                if (choice < 1 || choice > accountList.size()) {
                    cout << "\nInvalid selection. Try again." << endl;
                    deleted = false;
                }
                else {
                    accountList.erase(accountList.begin() + choice - 1);
                    balanceList.erase(balanceList.begin() + choice - 1);
                    cout << "\nAccount deleted." << endl;
                    deleted = true;
                }
            }
        }
    }

    void ShowAccounts() {
        if (accountList.size() == 0) {
            cout << "No accounts to display." << endl;
        }
        else {
            cout << "Currently active accounts:" << endl;
            for (int i = 0; i < accountList.size(); i++) {
                cout << i + 1 << ". Account Number: " << accountList[i] << ", Balance: $" << balanceList[i] << endl;
            }
        }
    }
};
