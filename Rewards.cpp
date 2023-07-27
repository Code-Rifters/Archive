#include<bits/stdc++.h>
#define Mokhtar ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;
void solve() {
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int sum_cups = a1 + a2 + a3, sum_medals = b3 + b2 + b1;
    while (sum_cups > 0){
        sum_cups -= 5;
        n--;
    }
    while (sum_medals > 0){
        sum_medals -=10;
        n--;
    }
    if (n >= 0)
        cout << "YES";
    else
        cout << "NO";
}
int main() {
    Mokhtar;
    solve();
}
