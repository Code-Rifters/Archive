#include <bits/stdc++.h>
using namespace std;
// yasmin kamal ahmed
//problem L
void prime(int n){
    for (int i =2; i<=n; i++)
    {
      int b=0;
      for (int j=2; j<i; j++)
      {
        if (i%j==0)
        {
          b=1;
          break;
        }
    }
    if(b==0)
    cout<<i<<' ';    
} 
}
int main(){
    int n , r;
    cin>>n;
    prime(n);   
}
