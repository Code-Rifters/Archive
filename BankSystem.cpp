// menna khalifa
// malak hussein
// mokhtar
// moataz ahmed
// الكود كله صلصة
// sorr for this عبث
#include <iostream>
#include <iomanip>
#include<array>
#include<cstring>
#include<iomanip>
#include<cmath>
#include<map>
using namespace std;
   class BankAccount {
    private:
        std::string accountHolderName;
        std::string accountNumber;
        double balance;

    public:
        BankAccount(std::string name, std::string number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
    }

    void deposit(double amount){
        cout << "enter the deposit"<<endl;
        cin >> amount;
        balance += amount;
        cout <<"successful"<<endl;
    }

    void withdraw(double amount){
        cout << "enter the withdraw"<<endl;
        cin >> amount;

        if (balance >= amount){
            balance -= amount;
              cout <<"successful"<<endl;
        }
        else{

            std::cout << "Insufficient balance" << std::endl;
        }
    }

    void displayBalance() const{

        std::cout << "Current balance: " << balance << std::endl;
    }
};


int main(){
      string accountHolderName;
      string accountNumber;
        double balance;


    cout << "Account name: ";
    cin >> accountHolderName;
    cout << "Account no: ";
    cin >> accountNumber;
    cout << "Balance: ";
    cin >> balance;

    BankAccount myAccount(accountHolderName, accountNumber, balance);

    myAccount.deposit(1000);
    myAccount.displayBalance(); // output: "Current balance: 1500"
    myAccount.withdraw(500); // output: "Insufficient balance
    myAccount.displayBalance(); // output: "Current balance: 500"
}
