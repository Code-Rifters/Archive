// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void upper(string &s){ // call by reference to change the string in main
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
    
}

int main(){

    string s;
    getline(cin , s);
    upper(s);
    cout << s;
    
    return 0;

}
