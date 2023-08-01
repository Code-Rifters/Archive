#include <bits/stdc++.h>
using namespace std;
// yasmin kamal ahmed
//problem I
int fib(int x){
    if(x==0 || x==1)
    return x;
    return fib(x-1)+fib(x-2);
}
int main(){
    int num , t;
    cin>>t;
    while (t>0)
    {
    cin>>num;
    int r=fib(num);
    cout<<r<<endl;
    t--;
    }
}
