// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int fib(int x){
    if(x == 1 || x == 2)return 1;
    if(x == 0) return 0;

    return fib(x - 1) + fib(x - 2);
}

int main(){
         
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << fib(x) << '\n';
    }
    
    
    return 0;

}
