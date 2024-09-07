#include <iostream>
#include <string>

using namespace std;

struct Account
{
    string accountNumber;
    string pin;
    double balance;
};

bool login(Account &acc)
{
    string enteredAccountNumber, enteredPin;

    cout << "Enter your account number: ";
    cin >> enteredAccountNumber;

    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (acc.accountNumber == enteredAccountNumber && acc.pin == enteredPin)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void checkBalance(Account &acc)
{
    cout << "Your current balance is: $" << acc.balance << endl;
}

void withdraw(Account &acc)
{
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > acc.balance)
    {
        cout << "Insufficient funds." << endl;
    }
    else
    {
        acc.balance -= amount;
        cout << "Withdrawal successful. New balance: $" << acc.balance << endl;
    }
}

void deposit(Account &acc)
{
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    acc.balance += amount;
    cout << "Deposit successful. New balance: $" << acc.balance << endl;
}

int main()
{
    Account myAccount = {"123456789", "1234", 1000.0};
    bool loggedIn = false;
    int choice;

    cout << "Welcome to the ATM" << endl;

    if (login(myAccount))
    {
        loggedIn = true;
        cout << "Login successful!" << endl;

        while (loggedIn)
        {
            cout << "\nATM Menu:" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Deposit" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                checkBalance(myAccount);
                break;
            case 2:
                withdraw(myAccount);
                break;
            case 3:
                deposit(myAccount);
                break;
            case 4:
                loggedIn = false;
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
    else
    {
        cout << "Login failed. Please try again." << endl;
    }

    return 0;
}
