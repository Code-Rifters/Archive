// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char,int>mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    for (auto i : mp)
    {
        cout << i.first << " : " << i.second <<'\n';
    }
    
    
    return 0;

}
