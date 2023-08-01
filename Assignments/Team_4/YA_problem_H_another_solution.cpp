// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

// problem H using recursion
int factorial(int x){
    if(x == 0 || x == 1)return 1; // base case of recursion

    return x * factorial(x - 1);
}

int main(){
         
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << factorial(x) << '\n';
    }
    
    
    return 0;

}
