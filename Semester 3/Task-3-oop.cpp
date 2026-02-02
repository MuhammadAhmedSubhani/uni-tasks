#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    double balance;

public:
    
    Account(int accNo, double bal);

    int getAccountNumber() const;
    double getBalance() const;

    Account& deposit(double amount);
    Account& withdraw(double amount);
};

Account::Account(int accNo, double bal) {
    accountNumber = accNo;
    balance = (bal >= 0) ? bal : 0;
}

int Account::getAccountNumber() const {
    return accountNumber;
}

double Account::getBalance() const {
    return balance;
}

Account& Account::deposit(double amount) {
    if (amount > 0)
        balance += amount;
    return *this;
}

Account& Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance)
        balance -= amount;
    return *this;
}

void showAccount(const Account& acc) {
    cout << "Account Number: " << acc.getAccountNumber() << endl;
    cout << "Balance: " << acc.getBalance() << endl;
}

Account addInterest(Account acc) {
    acc.deposit(500);
    return acc;
}

int main() {
    Account a1(12345, 5000);

    cout << "Initial Details\n";
    cout << a1.getAccountNumber() << endl;
    cout << a1.getBalance() << endl;

    a1.deposit(1000);
    a1.withdraw(500);

    showAccount(a1);

    Account a2 = addInterest(a1);
    cout << "\nAfter Interest:\n";
    showAccount(a2);

    a1.deposit(200).withdraw(100).deposit(50);

    cout << "\nAfter Chained Operations:\n";
    showAccount(a1);

    return 0;
}
