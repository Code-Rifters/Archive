// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int raise_to_power(int base,int power){
    int ret = 1;
    for (int i = 1; i <= power; i++)
    {
        ret *= base;
    }
    
    return ret;
}

int main(){
    
    int t;
    cin >> t;
    while (t--)
    {
        int x,n;
        cin >> x >> n;
        cout << raise_to_power(x , n) << '\n';
    }
    
    
    return 0;

}
