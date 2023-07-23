// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    getline(cin,s);// get line is a function take the string even if it has spaces.
    for(int i = 0; s[i] != '\\';i++)
    {
        cout<<s[i];
    }
    return 0;

}
