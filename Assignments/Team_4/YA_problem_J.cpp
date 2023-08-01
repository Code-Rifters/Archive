// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void swap(int &x , int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int x,y;
    cin >> x >> y;
    swap(x , y);
    cout << x << ' ' << y << '\n';    
    return 0;

}
