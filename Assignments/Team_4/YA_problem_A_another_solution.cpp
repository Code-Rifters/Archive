// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

// problem A using recursion
int raise_to_power(int base,int power){
    if(power == 1) return base; // base case of recursion

    if(power == 0) return 1; // another base case
    
    return base * raise_to_power(base , power - 1);
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
