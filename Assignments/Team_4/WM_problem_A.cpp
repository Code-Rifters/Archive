#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x, N;
        cin >> x >> N;
        double result = pow(x, N);
        cout << result << endl;
    }
    return 0;
}