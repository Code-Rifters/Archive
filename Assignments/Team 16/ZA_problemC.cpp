#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);

    int x, y;
    cin >> x >> y;

    cout << "Array A before insertion: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = n; i > y; --i) {
        A[i] = A[i - 1];
    }
    A[y] = x;
    n++;

    cout << "Array A after insertion: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
