#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int* ptr = A + N - 1; ptr >= A; ptr--) {
        cout << *ptr << " ";
    }
    return 0;
}