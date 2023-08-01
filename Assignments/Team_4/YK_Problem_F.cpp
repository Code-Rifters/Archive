#include <bits/stdc++.h>
using namespace std;
int main(){
    // yasmin kamal ahmed
    //problem F
    string s;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!=' ')
        s[i]-=' ';
    }
    cout<<s;
}
