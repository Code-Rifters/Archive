//lamoro's code

#include <bits/stdc++.h>
#define PI 3.14159265359
typedef long long ll;
typedef double du;
using namespace std;

ll fact(ll n){
   if(n==0 || n==1) return 1;
   return n * fact(n-1);
}
int main(){
   ll t;cin>>t;
   while (t--)
   {
      ll n;cin>>n;
      cout<<fact(n)<<"\n";
   }
}
