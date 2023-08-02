#include "BankAccount.h"

BankAccount :: BankAccount()
{
    accountNumber [20] = {};
    balance = 0;
}
void BankAccount :: setAccountHolderName(string name)
{

    bool isAlpha = true;
    for (size_t i = 0; name[i] != '\0'; i++)
    {
        if (!isalpha(name[i]) && name[i] != ' ')
        {
            isAlpha = false;
            break;
        }
    }

    if (isAlpha)
        accountHolderName = name;
    else
        cout << "Enter your real name\n";
}

void BankAccount :: setAccountNumber(string number)
{

    bool isNum = true;
    for (size_t i = 0; number[i] != '\0'; i++)
    {
        if (!isdigit(number[i]))
        {
            isNum = false;
            break;
        }
    }

     if (isNum)
        accountNumber = number;
    else
        cout << "Enter numbers only in account number please\n";
}

void BankAccount :: setBalance(double cash)
{
    if (cash >= 0)
        balance = cash;
    else
        cout << "This is non-valid value\n";
}

//////////////////////////////
string BankAccount :: getAccountHolderName()
{
    return accountHolderName;
}

string BankAccount :: getAccountNumber()
{
    return accountNumber;
}
double BankAccount ::  getBalance()
{
    return balance;
}
//////////////////////////////
void BankAccount :: deposite(double add)
{
    balance += add;
}

void BankAccount :: withdraw(double sub)
{
    if ((balance - sub) >= 0)
        {
            balance -= sub;
            cout << "Operation done successfuly, your balance become : " << balance << endl;
        }

    else
        cout << "Operation failed, there is not enough money\n"
             << "Insert another amount\n" ;
}

void BankAccount :: displayBalance()
{
    cout << "Your balance is : " << balance << "$\n";
}

void BankAccount :: customer_info()
{
    cout << "\nAccount holder name : " << accountHolderName << endl
         << "Account number : " << accountNumber << endl
         << "Account balance : " << balance << "$\n\n" ;
}

