#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>

using namespace std;

class BankAccount
{
    public:
        BankAccount(string name,string num,double bal);
        virtual ~BankAccount();
        void deposit(double amount);
        void withdraw(double amount);
        void displayBalance();
        string getnum();

    protected:

    private:
        string accountHolderName;
        string accountNumber;
        double balance;

};

#endif // BANKACCOUNT_H
