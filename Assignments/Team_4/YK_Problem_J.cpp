#include <bits/stdc++.h>
using namespace std;
// yasmin kamal ahmed
//problem J
void swap(int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp; 
}
int main(){
    int x , y;
    cin>>x>>y;
    swap(&x,&y);
    cout<<x<<' '<<y;
}
