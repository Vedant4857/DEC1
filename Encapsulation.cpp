#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    int withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Amount cannot be more than balance" << endl;
            return -1;
        }
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount " << amount << " is withdrawn" << endl;
        }
        return amount;
    }
    int deposit(int amount)
    {
        if (amount < 0)
        {
            return -1;
        }
        balance += amount;
        cout << "Amount " << amount << " is deposited" << endl;
        return balance;
    }
    // getter
    int GetBalance()
    {
        return balance;
    }
    // setter
    //  void SetBalance(int b)
    //  {
    //      balance = b;
    //  }
};

int main()
{
    BankAccount *b1 = new BankAccount();
    b1->deposit(100);
    b1->deposit(200);

    b1->withdraw(100);

    // b1->balance = 100000;
    cout << b1->GetBalance() << endl;

    // b1->SetBalance(1000);

    return 0;
}