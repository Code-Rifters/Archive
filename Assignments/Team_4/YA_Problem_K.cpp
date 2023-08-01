#include <bits/stdc++.h>
using namespace std;
int main(){
    // yasmin kamal ahmed
    //problem K
    int n;
    cin>>n;
    int *a;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        cout<<a[i]<<' ';  
    }
}
