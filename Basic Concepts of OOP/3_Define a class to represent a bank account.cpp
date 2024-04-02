/*Define a class to represent a bank account. Include the following members : */


#include <iostream>
#include <string>

class BankAccount {
public:
    BankAccount(int accNumber, const std::string& accHolderName, const std::string& accType, double balance)
        : accountNumber(accNumber), accountHolderName(accHolderName), accountType(accType), balance(balance) {}

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit successful. Balance: $" << balance << std::endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawal successful. Balance: $" << balance << std::endl;
        } else {
            std::cout << "Insufficient balance. Withdrawal failed." << std::endl;
        }
    }

    void displayInfo() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }

private:
    int accountNumber;
    std::string accountHolderName;
    std::string accountType;
    double balance;
};

int main() {
    BankAccount myAccount(12345, "John Doe", "Savings", 1000.0);

    myAccount.deposit(500.0);
    myAccount.displayInfo();

    myAccount.withdraw(200.0);
    myAccount.displayInfo();

    myAccount.withdraw(1500.0); // This will fail due to insufficient balance

}

