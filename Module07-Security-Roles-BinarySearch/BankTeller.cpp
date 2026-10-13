#include <iostream>
#include <string>
#include <vector>
#include "BankUsers.cpp"
using namespace std;

int main() {
    string login;
    bool loggedIn = false;
    float version = 0.2;

    User user("Gandalf");
    Admin admin("Sauron");

    while (!loggedIn) {
        cout << "\n=== Welcome to Bank Teller Ver. " << version << " ===" << endl;
        cout << "Input Username: ";
        cin >> login;
        if (login == "gandalf" || login == "Gandalf") {
            loggedIn = true;
            
            while (loggedIn) {
                cout << "\nPlease make a selection:" << endl;
                cout << "1. Find an account by account number" << endl;
                cout << "2. Find an account by account balance" << endl;
                cout << "3. Log out" << endl;
                cout << "4. Exit" << endl;

                int choice;
                cin >> choice;

                switch (choice) {
                case 1:
                    cout << "Enter account number: ";
                    int targetAcct;
                    cin >> targetAcct;
                    if (user.AccountBinarySearch(user.accountList, user.accountList.size(), targetAcct) > -1) {
                        cout << targetAcct << " found!" << endl;
                        break;
                    }
                    else {
                        cout << "Account number not found." << endl;
                        break;
                    }
                case 2:
                    cout << "Enter account balance: ";
                    float targetBal;
                    cin >> targetBal;
                    if (user.BalanceBinarySearch(user.balanceList, user.balanceList.size(), targetBal) > -1) {
                        cout << "Balance Amount " << targetBal << " found!" << endl;
                        break;
                    }
                    else {
                        cout << "Account balance not found." << endl;
                        break;
                    }
                case 3:
                    loggedIn = false;
                    break;
                case 4:
                    cout << "\nGoodbye!" << endl;
                    return 0;
                default:
                    cout << "\nInvalid option. Please select options 1 through 4." << endl;
                }
            }
        }
        else if (login == "sauron" || login == "Sauron") {
            loggedIn = true;

            while (loggedIn) {
                cout << "\nPlease make a selection:" << endl;
                cout << "1. Add account" << endl;
                cout << "2. Delete account" << endl;
                cout << "3. Show accounts" << endl;
                cout << "4. Log out" << endl;
                cout << "5. Exit" << endl;

                int choice;
                cin >> choice;

                switch (choice) {
                case 1:
                    admin.AddAccount();
                    break;
                case 2:
                    cout << endl;
                    admin.DeleteAccount();
                    break;
                case 3:
                    cout << endl;
                    admin.ShowAccounts();
                    break;
                case 4:
                    loggedIn = false;
                    break;
                case 5:
                    cout << "\nGoodbye!" << endl;
                    return 0;
                default:
                    cout << "\nInvalid option. Please select options 1 through 5." << endl;
                }
            }
        }
        else {
            cout << "Invalid username. Please try again." << endl;
            loggedIn = false;
        }
    }
    return 0;
}
