/*Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account*/


#include <iostream>
#include <string>
using namespace std;

struct BankAccount {
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;
};

int main() {
    BankAccount account1;

    // Assign values to the data members
    account1.depositorName = "Arjav Purohit";
    account1.accountNumber = 1234567890;
    account1.accountType = "Savings";
    account1.balance = 500000.75;

    // Display account information
    cout << "Depositor Name: " << account1.depositorName << endl;
    cout << "Account Number: " << account1.accountNumber << endl;
    cout << "Account Type: " << account1.accountType << endl;
    cout << "Balance: $" << account1.balance << endl;

}

