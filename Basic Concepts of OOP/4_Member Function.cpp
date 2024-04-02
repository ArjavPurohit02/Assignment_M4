/*Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/


#include <iostream>
#include <string>
using namespace std;

struct BankAccount {
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

    void assignValues(string name, int number, string type, double initialBalance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;  // Withdrawal successful
        } else {
            return false;  // Insufficient balance
        }
    }

    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account1;
    account1.assignValues("Arjav Purohit", 1234567890, "Savings", 50000.75);
    account1.display();

    account1.deposit(1000.0);
    cout << "After deposit:" << endl;
    account1.display();

    if (account1.withdraw(2000.0)) {
        cout << "After withdrawal:" << endl;
        account1.display();
    } else {
        cout << "Insufficient balance for withdrawal." << endl;
    }

}
