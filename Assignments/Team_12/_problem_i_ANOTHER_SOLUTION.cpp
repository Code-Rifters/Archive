//lamoro's code

#include <bits/stdc++.h>
#define PI 3.14159265359
typedef long long ll;
typedef double du;
using namespace std;

ll fib(ll n){
   if(n==0 || n==1) return n;
   return fib(n-1) + fib(n-2);
}
int main(){
   ll t;cin>>t;
   while (t--)
   {
      ll n;cin>>n;
      cout<<fib(n)<<"\n";
   }
}
