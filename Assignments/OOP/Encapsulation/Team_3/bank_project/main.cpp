#include<iostream>
#include<string>
#include "BankAccount.h"
using namespace std;
int main(){
    string name,num;
    int choice; double amount; char c='y';
    cout<<" welcome please enter your name, account number"<<endl;
    cin>>name>>num;
    BankAccount mstf(name,num,750000);
    while(c=='y'){
    cout<<"press 1 to deposit money, 2 to withdeaw money and 3 to display your current balance"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"enter your amount "<<endl;
        cin>>amount;
    mstf.deposit(amount);
    }
    else if(choice==2){
        cout<<"enter your amount "<<endl;
        cin>>amount;
    mstf.withdraw(amount);
    }
    else if(choice==3){
    mstf.displayBalance();
    }
    cout<<"do you want to preform other action? y/n?"<<endl;
    cin>>c;
    }
}
