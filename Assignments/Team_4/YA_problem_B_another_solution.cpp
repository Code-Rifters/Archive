// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        while (x != 0)
        {
            cout << x % 10;
            x /= 10;
        }
        cout << '\n';
    }
    
    
    
    return 0;

}
