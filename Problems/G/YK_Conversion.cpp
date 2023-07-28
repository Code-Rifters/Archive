// Yasmin Kamal
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for (int i = 0; i <s.size(); i++)
    {
        if(s[i]==','){
            s[i]=' ';
        }
        if (isupper(s[i]))
        {
            s[i]=s[i]+32;
        }
        else if(islower(s[i])){
            s[i]=s[i]-32;
        }
        cout<<s[i];
    }
}
