//lamoro's code

#include <bits/stdc++.h>
#define PI 3.14159265359
typedef long long ll;
typedef double du;
using namespace std;

int main(){
   ll n;cin>>n;
   ll a[n];
   for (int i = 0; i < n; i++)
      cin>>a[i];
   for (int i = n-1; i >= 0; i--)
      cout<<a[i]<<" ";
}
