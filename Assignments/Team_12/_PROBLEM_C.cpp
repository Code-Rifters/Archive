//lamoro's code

#include <bits/stdc++.h>
#define PI 3.14159265359
typedef long long ll;
typedef double du;
using namespace std;
int main(){
   ll x, y;cin>>x>>y;
   for (int i = 0; i < 5; i++)
   {
      if(i == y) cout<<x<<' ';
      cout<<i+1<<' ';
   }
}
