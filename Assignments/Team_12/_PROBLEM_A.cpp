//lamoro's code

#include <bits/stdc++.h>
#define PI 3.14159265359
typedef long long ll;
typedef double du;
using namespace std;
int main(){
   ll t;cin>>t;
   while (t--)
   {
      ll x, n, temp=1;cin>>x>>n;
      for (int i = 0; i < n; i++)
         temp *= x;
      cout<<temp<<'\n';
   }
}
