#include <bits/stdc++.h>
using namespace std;
int main(){
    //yasmin kamal ahmed
    //problem E
    string s;
    getline(cin,s);
    int count=0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i]==' ')
        count++;
    }
    cout<<count+1;
}
