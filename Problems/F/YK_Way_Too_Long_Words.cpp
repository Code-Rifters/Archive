// Yasmin Kamal
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n)
    {
    string s;
    cin>>s;
    int len =s.size();
    if(len>10)
    cout<<s[0]<<len-2<<s.back()<<endl;
    else
    cout<<s<<endl;
    n--;
    }
}   
