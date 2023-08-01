#include <bits/stdc++.h>
using namespace std;
int main(){
    // yasmin kamal ahmed
    //problem C
    int A[]={1,2,3,4,5};
    int x,y;
    cin>>x>>y;
    for (int i = 0; i <5; i++)
    {
      cout<<A[i]<<' ';  
    }
    cout<<endl;
    for (int i = 0; i <5; i++)
    {
      if(i==y){
        cout<<x<<' ';
      }
      cout<<A[i]<<' ';
    }
}
