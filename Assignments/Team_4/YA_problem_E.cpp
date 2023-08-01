// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    string s;
    int ans = 0;
    getline(cin , s);
    for (int i = 0; i < s.size(); i++)
        if(s[i] == ' ')
            ans++;

    ans++;
    cout << ans;
          
    return 0;

}
