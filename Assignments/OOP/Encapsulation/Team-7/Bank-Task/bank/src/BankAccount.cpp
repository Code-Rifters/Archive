#include "BankAccount.h"

BankAccount::BankAccount(string name ,string number,double bal)
{

    accountHolderName=name;
    accountNumber=number;
    balance=bal;
}
BankAccount::~BankAccount()
{

    cout<<"succseful";
}

void BankAccount::deposit(double amount)
{

    balance=balance+amount;
}

void BankAccount::withdraw(double amount)
{

    balance=balance-amount;
}
void BankAccount::displayBalance()
{
    cout<<"current balance:"<<balance<<endl;

}
        string BankAccount::getnum()
        {
            return accountNumber;
        };


































