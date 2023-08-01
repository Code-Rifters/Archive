#ifndef CLASSES_H
#define CLASSES_H
#include<string>
using namespace std;
class BankAccount{
    private:
    string accountHolderName;
    string accountNumber;
    double balance;
    public:
     BankAccount(string name, string num,double money);
      void deposit(double amount);
      void withdraw(double amount);
      void displayBalance();
      ~BankAccount();
};
#endif
