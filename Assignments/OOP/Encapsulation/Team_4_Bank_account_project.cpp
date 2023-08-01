// Team 4 (Youssef Amr , Mohammed Medhat , Yasmin Kamal , wessam Mahmoud)
#include<bits/stdc++.h>
using namespace std;

class Bank_Account{
    private:

    string account_Holder_Name;
    string account_Number;
    double balance = 0;
    double loan = 0;

    public:

    Bank_Account(){
        cout << "Wellcome to your account\n";
    }

    void deposit(double amount){
        if(loan > 0)
        {
            loan -= amount;
            balance = -loan;
            if(loan > 0)
            {
                cout << "Deposited " << amount << endl;
                cout << "You owe the bank " << -balance <<" pounds\n";
            }

            else
            {

                cout << "Deposited " << amount << endl;
                cout << "Your balance is " << balance << endl;
                
            }

        }

        else
        {
            balance += amount;
            cout << "Deposited " << amount << endl;
            cout << "Your balance is " << balance << endl;
        }
    }

    void withdraw(double amount){
        if(amount <= balance)
        {
            balance -= amount;
            cout<<"The Amount To Withdraw : "<<amount<<endl;
            cout<<"The Rest Of Money : "<<balance<<endl;
        }
        else
            cout<<"Sorry!..you can not withdraw this amount" << endl;
    }

    void displayBalance(){
        if(balance < 0)
            cout << "You owe the bank " << -balance <<" pounds\n";
        else    
            cout << "Current account balance = " << balance << endl;
    }

    void take_loan(double amount){
        balance -= amount;
        loan += amount;
        cout << "You were loaned "<< amount <<" pounds\n";
    }

    ~Bank_Account(){
        cout << "Thank you for using our service\n";
    }
    
};


Bank_Account account;

int main(){
    
    cout << "Click 1 to deposit \n";
    cout << "Click 2 to withdraw \n";
    cout << "Click 3 to display your balance \n";
    cout << "Click 4 to take a loan \n";
    cout << "Click any key to exit \n";

    char choosen;
    cin >> choosen;

    if(choosen == '1')
    {
        cout << "please enter your amount \n";
        int x;
        cin >> x;
        account.deposit(x);
    }

    else if(choosen == '2')
    {
        cout << "please enter your amount \n";
        int x;
        cin >> x;
        account.withdraw(x);
    }

    else if(choosen == '3')
    {
        account.displayBalance();
    }

    else if(choosen == '4')
    {
        cout << "please enter your amount \n";
        int x;
        cin >> x;
        account.take_loan(x);
    }

    else return 0;

    cout << "Click 'y' or 'Y' to do another opration any key to exit\n";
    char c;
    cin >> c;
    if(c == 'y' || c == 'Y')
        main();
        

    return 0;

}
