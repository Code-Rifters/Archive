//lamoro's code

#include <bits/stdc++.h>
#define PI 3.14159265359
typedef long long ll;
typedef double du;
using namespace std;

void swap(ll *x, ll *y){
   ll temp = *x;
   *x = *y;
   *y = temp;
}
int main(){
   ll x, y;cin>>x>>y;
   swap(&x, &y);
   cout<<x<<' '<<y;
}
