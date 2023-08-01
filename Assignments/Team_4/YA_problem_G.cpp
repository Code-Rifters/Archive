// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

string clean(string s){
    
    string ret = "";

    for (int i = 0; i < s.size(); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == ' ')
            ret.push_back(s[i]);
    }

    return ret;
}

int main(){
    
    string s;
    getline(cin , s);
    cout << clean(s);
    return 0;

}
