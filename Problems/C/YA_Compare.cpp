// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int max_str = max(s.size() , t.size()); // max is a function return the maximum number 
    for (int i = 0; i < max_str; i++)
    {
        if(s[i] < t[i])
        {
            cout << s;
            return 0;
        }

        else if(s[i] > t[i])
        {
            cout << t;
            return 0;
        }
    }
    
    cout <<s;
    
    return 0;

}
