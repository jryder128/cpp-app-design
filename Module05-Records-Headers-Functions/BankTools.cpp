#include <iostream>
#include <string>
#include <vector>
#include "BankTools.h"

int account = 0;
float balance = 0.0;
vector<int> accountList;
vector<float> balanceList;

void MainMenu() {
    float version = 0.1;
    cout << "\n=== Welcome to Bank Teller Ver. " << version << " ===" << endl;

    int choice = 0;
    while (choice != 4) {
        cout << "\nPlease make a selection:" << endl;
        cout << "1. Add account" << endl;
        cout << "2. Delete account" << endl;
        cout << "3. Show accounts" << endl;
        cout << "4. Exit" << endl;

        cin >> choice;

        switch (choice) {
        case 1:
            AddAccount();
            break;
        case 2:
            cout << endl;
            DeleteAccount();
            break;
        case 3:
            cout << endl;
            ShowAccounts();
            break;
        case 4:
            cout << "\nGoodbye!" << endl;
            break;
        default:
            cout << "\nInvalid option. Please select options 1 through 4." << endl;
        }
    }
}

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
