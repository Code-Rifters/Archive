// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s,t;
        cin >> s >> t;
        int minstr = min(s.size(),t.size());
        int maxstr = max(s.size(),t.size());
        for (int i = 0;i < minstr; i++)
        {
            cout << s[i] <<t[i];
        }

        for (int i = minstr;i < maxstr; i++)
        {
            if(maxstr == s.size())
                cout << s[i];
            
            else
                cout << t[i];
        }

        cout << '\n';    
    }
    
    
    return 0;

}
