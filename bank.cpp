/*	Create a class called BankAccount with private data members for account number, 
account holder name, and balance. Implement public member functions for deposit,
 withdrawal, and displaying the account details.  */
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:

    BankAccount(int accNum, string accName, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = accName;
        balance = initialBalance;
    }


    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of amt" << amount << " successful." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance =balance- amount;
            cout << "Withdrawal of amt" << amount << " successful." << std::endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    
    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance:" << balance << endl;
    }
};

int main() {
    // BankAccount object
    BankAccount myAccount(123456789, "samundra", 10000.00);

    
    myAccount.displayAccountDetails();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);


    myAccount.displayAccountDetails();

    return 0;
}
