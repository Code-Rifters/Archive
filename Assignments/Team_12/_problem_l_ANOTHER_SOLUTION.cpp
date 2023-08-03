//lamoro's code

#include <bits/stdc++.h>
#define PI 3.14159265359
typedef long long ll;
typedef double du;
using namespace std;
ll cnt = 0;

bool isPrime(int n){
   bool prime=1;
   if(n<2)prime=0;
   if(n%2==0 && n!=2)prime=0;
   for (int i = 3; i*i <= n; i+=2)
      if(!(n%i)){prime = 0;break;}

   return prime;
}
int* solve(int n){
   static int a[10000];
   for (int i = 0; i < n; i++)
      if(isPrime(i))a[cnt]=i, cnt++;
   return a;  
}
int main(){
   int n;cin>>n;
   int *a = solve(n);
   for (int i = 0; i < cnt; i++)
      cout<<a[i]<<' ';
   
}
