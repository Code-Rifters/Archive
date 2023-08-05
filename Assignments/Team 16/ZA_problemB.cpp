//Zyad Amr ID:66

#include <iostream>
using namespace std;

int reverse_digits(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int x;
        cin >> x;
        int result = reverse_digits(x);
        cout << result << endl;
    }

    return 0;
}
