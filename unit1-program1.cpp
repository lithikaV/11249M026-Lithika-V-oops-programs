#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    float balance;

public:
    // Function to set account details
    void setDetails(string accName, int accNo, float initialBalance) {
        name = accName;
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Deposit money
    void deposit(float amount) {
        balance += amount;
    }

    // Withdraw money
    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!\n";
    }

    // Display account details
    void display() {
        cout << "\nAccount Holder: " << name;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nBalance: Rs." << balance << endl;
    }
};

int main() {
    BankAccount acc1;

    // Create account
    acc1.setDetails("Ravi Kumar", 101, 5000);

    // Deposit money
    acc1.deposit(2000);

    // Withdraw money
    acc1.withdraw(1000);

    // Display details
    acc1.display();

    return 0;
}