#include<bits/stdc++.h>
#define Mokhtar ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
void solveA(){
    int times;
    cin >> times;
    int base, power;
    while (times--) {
        cin >> base >> power;
        cout << pow(base, power) << '\n';
    }
}
void solveB() {
    int times;
    cin >> times;
    string s;
    while (times--) {
        cin >> s;
        reverse(s.begin(), s.end());
        cout << s << '\n';
    }
}
void solveC(){
    int arr[5] = {1, 2, 3, 4, 5};
    int number, index;
    cin >> number >> index;
    for (int i = 6; i > 0; --i) {
        if (i  == index) {
            arr[i ] = number;
            break;
        }
        else {
            swap(arr[i - 1], arr[i]);
        }
    }
    for (int i = 0; i < 6; ++i) cout << arr[i] << " ";
}

void solveD(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; ++i) cin >> arr[i];
    sort(arr, arr + size);
    for (int i = 0; i < size; ++i) cout << arr[i] << ' ';
}
void solveE() {
    string s;
    getline(cin, s);
    ll con = 0;
    for (char i: s) {
        if (i == ' ') con++;
    }
    cout << con + 1;
}
void solveF(){
    string s;
    getline(cin, s);
    for (char & i : s) {
        i -= 32;
    }
    cout << s;
}
void solveG(){
    string s, trust;
    getline(cin, s);
    for (char i : s) {
        if (isalpha(i) || isspace(i))
            trust += i;
    }
    cout << trust;
}
void solveH(){
    int times;
    cin >> times;
    int x, fact;
    while (times--){
        cin >> x;
        fact = 1;
        for (int i = 1; i <= x; ++i) fact *= i;
        cout << fact << '\n';
    }
}
int fibonacci(int x) {
    if (x <= 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}
int solveI(){
    int times ,x;
    cin >> times;
    while (times--) {
        cin >> x;
        cout << fibonacci(x) << '\n';
    }
}

void solveJ(){
    int x, y;
    cin >> x >> y;
    int *ptr = &x;
    int *ptr2 = &y;
    int temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
    cout << *ptr << ' ' << *ptr2;
}
void solveK(){
    int size;
    cin >> size;
    int arr[size];
    int *ptr = arr + size - 1;
    for (int i = 0; i < size; ++i) cin >> arr[i];
    for (int i = 0; i < size ; ++i) {
        cout << *ptr << " ";
        ptr--;
    }
}
void checkPrime(int x){
    int con = 0;
    for (int i = 2; i <= x; ++i) {
        if (x % i == 0) con ++;
    }
    if (con == 2 | con == 1) cout << x << " ";
}
void solveL(){
    int number;
    cin >> number;
    for (int i = 1; i <= number; ++i) {
        checkPrime(i);
    }
}
int main() {
    Mokhtar
// call here wthout parameters
}
