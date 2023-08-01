#include <iostream>
#include <string>
using namespace std;
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int t; 
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x; 
        cin >> x;
        int result = factorial(x);
        cout << result << endl;
    }
    return 0;
}