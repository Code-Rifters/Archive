// Yasmin Kamal
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t = "hello";
    int i=0, z=0 ;
    int len = s.size();
    while (len--)
    {
        if(s[i]==t[z]){
            z++;
            if(z==5){
                break;
            }
        }
        i++;
    }
    if(z==5){
        cout<<"YES";
    }else cout<<"NO";
}
