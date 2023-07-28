// Yasmin Kamal
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=0, z=0 , n;
    string s;
    cin>>n>>s;
    while (n--)
    {
        if(s[i]!=s[i+1]){
            z++;
        }
        i++;
    }
    cout<<z;
}
