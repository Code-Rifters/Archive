#include <iostream>
#include "BankAccount.h"
#define BANKACCOUNT_H
using namespace std;

int main()
{
    string name,num;

    int bal,amount1,amount2;
    cin>>name>>num>>bal;
    BankAccount op(name,num,bal);
     cout<<"enter the deposit";
    cin>>amount1;
    op.deposit(amount1);
    op.displayBalance();
    cout<<"enter the withdraw";
    cin>>amount2;
    op.withdraw(amount2);
    op.displayBalance();
    /////////////////////////
    string x;
    int amount;
     cin>>name>>num>>bal;
    BankAccount op2(name,num,bal);
    cout<<"how much money do you want to transfer"<<endl<<"enter the bank number:";
    cin>>amount>>x;
    if(x==op.getnum())
    {
        op.deposit(amount);
        op2.withdraw(amount);
       op.displayBalance();
        op2.displayBalance();
    }
    else if(x==op2.getnum())
    {

        op2.deposit(amount);
        op.withdraw(amount);
        op.displayBalance();
       op2.displayBalance();
    }


}

