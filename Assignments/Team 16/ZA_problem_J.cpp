#include <iostream>
using namespace std;

void swap_values(int* ptr_x, int* ptr_y) {
    int temp = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = temp;
}

int main() {
    int x, y;
    cin >> x >> y;

    // Swap values using pointers
    swap_values(&x, &y);

    cout << x << " " << y << endl;

    return 0;
}
