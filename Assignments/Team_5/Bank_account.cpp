#include <iostream>
#include <iomanip>
#include<array>
#include<cstring>
#include<iomanip>
#include<cmath>
#include<map>
using namespace std;
 class bankaccount {
private:
    char account_name[100];
    char account_type[100];
    int ac_no;
    double ac_bal;

public:
    bankaccount(int acc_no, char* name, char* acc_type, double balance) {
        ac_no = acc_no;
        strcpy(account_name, name);
        strcpy(account_type, acc_type);
        ac_bal = balance;
    }

    void deposit(double amount) {
        cout << "Enter the deposit amount: ";
        cin >> amount;
        ac_bal += amount;
        cout << "Deposit successful!" << endl;
    }

    void withdraw(double amount) {
        cout << "Enter the withdrawal amount: ";
        cin >> amount;
        if (amount <= ac_bal) {
            ac_bal -= amount;
            cout << "Withdrawal successful!" << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void print() // Print the details
    {
        cout << "Account No.: " << ac_no << endl;
        cout << "Name: " << account_name << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Current Balance: " << ac_bal << endl;
    }
};

int main() {
    int acc_no;
    char name[100];
    char acc_type[100];
    double balance;

    cout << "Account details" << endl;
    cout << "Account name: ";
    cin >> name;
    cout << "Account no: ";
    cin >> acc_no;
    cout << "Account type: ";
    cin >> acc_type;
    cout << "Balance: ";
    cin >> balance;

    bankaccount b1(acc_no, name, acc_type, balance);
    b1.deposit(1000); 
    b1.withdraw(500); 
    b1.print();

    return 0;
}
