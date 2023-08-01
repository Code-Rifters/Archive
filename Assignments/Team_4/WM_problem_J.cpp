#include <iostream>
using namespace std;
void swapValues(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int x, y;
    cin >> x;
    cin >> y;
    swapValues(&x, &y);
    cout << x<<" "<< y <<endl;
    return 0;
}