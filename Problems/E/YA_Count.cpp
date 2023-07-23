// Youssef Amr
#include<bits/stdc++.h>
#define Youssef ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;

int main(){
    Youssef
    ll ans = 0;
    string s;
    cin >> s;
    while (s.size()) // when the size of this string becomes 0 it will get out of the loop
    {
        ans += (s.back() - '0');
        s.pop_back(); // pop_back() is a function erase the last character of string
    }
    

    cout << ans;
    return 0;

}
