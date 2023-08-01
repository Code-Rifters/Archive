//Team 14 
//header file
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <bits/stdc++.h>
using namespace std;
class BankAccount
{
string name;
int acc_no;
double balance;
static map<int,pair<double,int>>mp;
public:
BankAccount(string s,int i);
void deposit(double a);
void deposit(double a,int b);
void withdraw(double a);
void withdraw(double a,int b);
bool check(int pass,int id);
void display();
~BankAccount();


};

#endif // BANKACCOUNT_H
//BankAccount.cpp
#include "BankAccount.h"
#include <bits/stdc++.h>
using namespace std;
map<int,pair<double,int>>BankAccount::mp;
BankAccount::BankAccount(string a,int i)
{
name=a;
cout<<"welcome Mr/,Ms/ "<<name<<endl;
acc_no=i;
mp[acc_no].second=1111;
}

void BankAccount::deposit(double a)
{
   mp[acc_no].first+=a;
   cout << "deposit successful"<<endl;
}
void BankAccount::deposit(double a,int id)
{
    if(mp[acc_no].first-a>=0){
   mp[id].first+=a;
   mp[acc_no].first-=a;

   cout << "The conversion was completed successfully"<<endl;
   }
   else{
    cout << "The conversion failed"<<endl;
   }

}


void BankAccount::withdraw(double a)
{

    if(mp[acc_no].first-a>=0){
    mp[acc_no].first-=a;
        cout << "Withdrawal successful" << balance<<endl;
    }
    else{

        cout<<"Cannot Withdraw Amount"<<endl;
}
}
void BankAccount::withdraw(double a,int id)
{

    if(mp[id].first-a>=0){
    mp[acc_no].first+=a;
    mp[id].first-=a;
        cout << "The conversion was completed successfully"<<endl;
    }
    else{

        cout<<"The conversion failed"<<endl;
}
}
bool BankAccount::check(int pass,int id){
if(mp[id].second==pass){
        return true;

}
else
    return false;

}


void BankAccount::display()
{
 cout<<"your current balance is "<<mp[acc_no].first<<endl;
}

BankAccount::~BankAccount()
{
cout<<"Thank you  Mr/,Ms/ "<<name<<endl;
cout<<"----------------------------------------------------------------"<<endl;
}
//main file
#include <bits/stdc++.h>
#include "BankAccount.h"
using namespace std;

int main()
{

for(int o=1;o<=5;o++){
string n;
int q;
        cout<<"please enter your name"<<endl;cin>>n;
        cout<<"please enter your id "<<endl;cin>>q;
BankAccount client(n,q);
cout<<" enter 1 to deposit and 2 to withdraw and 3 to transfer "<<endl;
int x;
cin>>x;
if(x==1){
        cout<<"please enter the money you want to deposit "<<endl;
double y;cin>>y;
client.deposit(y);
}
else if(x==2){
cout<<"please enter the money you want to withdraw "<<endl;
double y;cin>>y;
client.withdraw(y);
}
else if(x==3){
    cout<<"please enter id you want to exchange money with "<<endl;
    int id;cin>>id;
    cout<<"enter the password "<<endl;
    int p;cin>>p;
   if(client.check(p,id)){
    cout<<"password valid enter 1 to deposit and 2 withdraw"<<endl;
    int i;cin>>i;
    if(i==1){
cout<<"please enter the money you want to deposit "<<endl;
double y;cin>>y;
client.deposit(y,id);
}
else if(i==2){
cout<<"please enter the money you want to withdraw "<<endl;
double y;cin>>y;
client.withdraw(y,id);
}
else{
    cout<<"the number you are entered is not valid "<<endl;
}


   }
   else{
    cout<<"Wrong password"<<endl;
   }

}



else{
    cout<<"the number you are entered is not valid "<<endl;
}
client.display();

}

 return 0;}
