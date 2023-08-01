#include <iostream>
using namespace std;
void printArray(int A[]) {
    for (int i = 0; i < 6; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}
int main() {
    int A[6] = {1, 2, 3, 4, 5};
    int x, y;
    cin >> x>> y;
    printArray(A);
    for (int i = 5; i > y; i--) {
        A[i] = A[i - 1];
    }
    A[y] = x;
    printArray(A);
    return 0;
}