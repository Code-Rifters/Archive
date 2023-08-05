#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int* ptr = A + N - 1;
    while (ptr >= A) {
        cout << *ptr << " ";
        ptr--;
    }
    cout << endl;

    return 0;
}
