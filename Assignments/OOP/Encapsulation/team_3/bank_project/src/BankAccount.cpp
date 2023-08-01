#include<iostream>
#include<string>
#include "BankAccount.h"
using namespace std;
BankAccount::BankAccount(string name, string num,double money){
        accountHolderName= name;
        accountNumber= num;
        balance=money;
        cout<<"welcome again mr/s "<<accountHolderName<<endl;
}
void BankAccount::deposit(double amount){
        balance+=amount;
        cout<< amount<<" dollars have been added to your balance successfully and your current balance is "<<balance<<endl;
    }
void BankAccount::withdraw(double amount){
        if (balance>=amount){
        balance-=amount;
        cout<<amount<<" dollars have been withdrew from your account successfully and your currunt balance is "<<balance<<endl;
        }
        else
        cout<< "you can't withhdrow this amount from your balance, your currunt balance is "<<balance<<endl;
    }
void BankAccount::displayBalance(){
    cout<<"your current balance is "<< balance<<endl;
}
BankAccount::~BankAccount(){
    cout<<"thanks for dealing with us! \ngood bye mr/s "<<accountHolderName<<endl;
}
