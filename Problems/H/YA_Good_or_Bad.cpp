// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int x = s.find("101"); // find is a function return the index of what you are looking for if it exist, if it is not exist it will return "string::npos"
        int y = s.find("010");
        if(x==string::npos && y==string::npos)
            cout << "Bad\n";
        else
            cout << "Good\n";
    }
    
    return 0;

}
