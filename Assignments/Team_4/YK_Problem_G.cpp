#include <bits/stdc++.h>
using namespace std;
int main(){
    // yasmin kamal ahmed
    //problem G
    string s;
    int a=0;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++)
    {
    if ((s[i] >= 'a' && s[i] <= 'z') ||
        (s[i] >= 'A' && s[i] <= 'Z') ||
        (s[i] == ' ')) {
            cout<<s[i];
            }
        }
}
