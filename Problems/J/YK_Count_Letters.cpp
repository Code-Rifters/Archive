// Yasmin Kamal
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s ; 
    int freq[26]={0};
    cin >> s ; 

    for (int i = 0 ; i < s.size(); i++)
    {
        freq[s[i]-'a'] += 1 ;
    }

    for (int i = 0 ; i< 26 ;i++)
        {
            char z = i + 'a';
            if (freq[i] != 0)
            cout<<z<<" : "<<freq[i]<<endl;
        }
}
