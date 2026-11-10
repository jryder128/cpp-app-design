James Ryder (Student ID: 30108962) C++ Application Design

Completed modules: 01, 02, 03, 04, 05, 06, 07, 08

Module 08: Input Validation & Protecting Data

This program is an update to the Bank Teller program from Module05 and Module07. There are two distinct classes with their own role-based permissions: User and Admin.
  - Users are allowed to search for an account by the account number or the account balance using Binary Search. If an account number or balance is not found, an error message is displayed, asking the user to try again. Currently, this function only checks to see if the account exists. The feature to display the account information hasn't been fully implemented yet, but it will be in a future update.
  - Admins are allowed to add/remove accounts and show all current accounts. To protect personal information, Users are not allowed to see all accounts.
The program creates two classes: Gandalf and Sauron. Gandalf is a User, and Sauron is an Admin. When running the program, you can "log in" by inputting a username. Currently, the program accepts "gandalf," "Gandalf," "sauron," or "Sauron." If you input anything other than that, an error message is displayed, prompting the user to try again.

Instructions: Compile BankTeller.cpp and BankUsers.cpp in the IDE of your choice and run the executable.
