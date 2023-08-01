// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int factorial(int x){
    int ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans *= i;
    }
    return ans;
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
