// Youssef Amr
#include<bits/stdc++.h>
#define Youssef ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;

int main(){
    Youssef
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == ',')
            s[i] = ' ';

        else if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;

        else if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    

    cout << s;
    return 0;

}
