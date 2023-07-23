// Youssef Amr
#include<bits/stdc++.h>
#define Youssef ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;

int main(){
    Youssef
    string s,t,a;
    cin >> s >> t;
    cout << s.size() << ' ' << t.size() << '\n';
    a = s + t;
    cout << a << '\n';

    char temp = s[0];
    s[0] = t[0];
    t[0] = temp;
    
    cout << s << ' ' << t; 
    return 0;

}
