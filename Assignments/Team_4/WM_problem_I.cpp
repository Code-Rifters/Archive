#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x; 
        cin >> x;
        int result = fibonacci(x);
        cout << result << endl;
    }
    return 0;
}