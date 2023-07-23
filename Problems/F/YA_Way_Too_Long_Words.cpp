// Youssef Amr
#include<bits/stdc++.h>
#define Youssef ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;

int main(){
    Youssef
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s.size() > 10)
        {
            cout << s[0] << s.size() - 2 << s.back() << '\n';
        }

        else 
            cout << s << '\n';
    }
    
    return 0;

}
