//Zyad Amr ID:66
#include <iostream>
#include <cmath>

using namespace std;

int calculate_power(int x, int N) {
    return pow(x, N);
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int x, N;
        cin >> x >> N;
        int result = calculate_power(x, N);
        cout << result << endl;
    }

    return 0;
}
