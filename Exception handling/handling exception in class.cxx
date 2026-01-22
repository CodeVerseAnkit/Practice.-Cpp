#include <iostream>

using namespace std;
class customer
{
    string name;
    int account_number, balance;

  public:
    // constructor
    customer(string name, int account_number = 001, int balance = 0)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    // getting customer info
    void create_account()
    {
        cout << "Enter your name: ";
        cin >> this->name;
        cout << "Enter account_number: ";
        cin >> this->account_number;
        cout << "Deposit your first balance: ";
        cin >> this->balance;
    }
    // display user info
    void display()
    {
        cout << "_____Info_____\n Name: " << name << "\n Account number: " << account_number << "\n Total balance: " << balance << endl;
    }
    // deposit
    void deposit(int amount)
    {
        if (amount <= 0 || amount > 1000000)
            throw " This amount not allowed ";
        balance += amount;
        cout << amount << "rs deposited successfully" << endl;
        cout << " Your total balance: Rs. " << balance << endl;
    }
    // withdraw
    void withdraw(int amount)
    {
        if (amount <= 0 || amount > balance)
            throw "Invalid amount";
        balance -= amount;
        cout << amount << "rs Withdraw successfully" << endl;
        cout << "Your total balance: Rs. " << balance << endl;
    }
};
int main()
{
    customer c1("ankit", 100, 5000), c2("Amit", 200, 1000);
    try
    {
        c1.deposit(300);
        c1.withdraw(1000);
        c2.deposit(-36);
        c2.withdraw(100);
    }
    catch (const char *e)
    {
        cout << "Error: " << e << endl;
    }
    return 0;
}