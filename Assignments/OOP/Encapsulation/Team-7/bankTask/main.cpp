#include <bits/stdc++.h>
#include "BankAccount.h"
#define BANKACCOUNT_H
#define FIO ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

using namespace std;

int main()
{

    BankAccount member1, member2;
    member1.setAccountHolderName("Mohamed seif");
    member1.setAccountNumber("4321");
    member1.setBalance(10000);

    member1.deposite(1500);
    member1.withdraw(1000);
    member1.customer_info();

    member2.setAccountHolderName("Moayed");
    member2.setAccountNumber("1234");
    member2.setBalance(50000);
    member2.deposite(10000);
    member2.withdraw(5000);
    member2.customer_info();

    int amount;
    cout << "Insert the account number that you want transfer from : ";
    string x, z;
    cin >> x;

    cout << "Insert the account number that you want deposite in   : ";
    cin >> z;
    cout << "\nHow much money do you want to transfer ?\n" ;
    cin >> amount;
    if(x == member2.getAccountNumber() && z == member1.getAccountNumber())
    {
        member2.withdraw(amount);
        member1.deposite(amount);

        member1.displayBalance();
        member2.displayBalance();
    }
    else if(x == member1.getAccountNumber() && z == member1.getAccountNumber())
    {
        member1.withdraw(amount);
        member2.deposite(amount);
        member1.displayBalance();
        member2.displayBalance();
    }

    else
        cout << "\nNot valid account number\n";

    return 0;
}
