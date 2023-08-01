#include <bits/stdc++.h>
using namespace std;
// yasmin kamal ahmed
//problem B
int reverse(int x){
    int rem , rev=0;
        while (x>0)
        {
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
        }
        return rev;
}
int main(){ 
    int t,x;
    int rem=0,rev,r;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>x;
        r=reverse(x);
        cout<<r<<endl;
    }
}
