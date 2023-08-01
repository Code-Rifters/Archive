// Youssef Amr
#include<bits/stdc++.h>
#define Youssef ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;

int main(){
    Youssef
    string s,t;
    cin >> s;
    t = s;
    reverse(s.begin() , s.end());

    if(s == t)
        cout << "YES";
    else
        cout << "NO";
    return 0;

}
