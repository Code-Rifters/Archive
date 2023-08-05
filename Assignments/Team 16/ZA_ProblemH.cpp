//Zyad Amr ID:66

#include <iostream>
using namespace std;

int factorial(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    return x * factorial(x - 1);
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int x;
        cin >> x;
        int result = factorial(x);
        cout << result << endl;
    }

    return 0;
}
