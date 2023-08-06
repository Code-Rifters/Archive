#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <bits/stdc++.h>


using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    string accountNumber;
    double balance;
public:
    void setAccountHolderName(string);
    void setAccountNumber(string);
    void setBalance(double);
    string getAccountHolderName();
    string getAccountNumber();
    double getBalance();
    void deposite(double);
    void withdraw(double sub);
    void displayBalance();
    void customer_info();
    BankAccount();


};

#endif // BANKACCOUNT_H
