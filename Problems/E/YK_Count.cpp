// Yasmin Kamal
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum=0 , num;
    for (int i = 0; i < s.size(); i++)
    {
        num=s[i]-'0';
        sum+=num;
    }
    cout<<sum;
}
