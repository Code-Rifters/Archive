#include <bits/stdc++.h>
using namespace std;
// yasmin kamal ahmed
//problem H
int factorial(int num){
    if(num==0 || num==1)
    return 1;
    return num*factorial(num-1);
}
int main(){  
    int num , t;
    cin>>t;
    while (t>0)
    {
    cin>>num;
    int r=factorial(num);
    cout<<r<<endl;
    t--;
    }
}
