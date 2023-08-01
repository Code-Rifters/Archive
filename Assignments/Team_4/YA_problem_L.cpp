// Youssef Amr
#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6 + 5;
bool prime[N];

void sieve(int n){
    memset(prime , 1 ,sizeof(prime)); // to make all index in array = true

    prime[0] = prime[1] = 0; // 0 and 1 are not prime so it = false

    for(int i = 2; i <= n; i++) 
    {
        if(prime[i])
        {
            cout << i << ' ';
            for(int j = 2 * i; j <= n ; j += i) // will loop for array and will mark all multiples of i = false (not primes)
                prime[j] = 0;
        }
    }
    
}

int main(){
    
    int x;
    cin >> x;
    sieve(x);
    return 0;

}
