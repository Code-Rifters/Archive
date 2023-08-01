#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string x;
        cin >> x;
        reverse(x.begin(), x.end());
        cout << x << endl;
    }
    return 0;
}