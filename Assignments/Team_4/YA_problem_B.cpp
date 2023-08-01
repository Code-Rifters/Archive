// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        string x; // take input as a string and reverse it
        cin >> x;
        reverse(x.begin() , x.end());
        cout << x << '\n';
    }

    return 0;

}
