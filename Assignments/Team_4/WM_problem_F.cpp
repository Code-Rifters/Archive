#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    string result;
    getline(cin, input);
    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            c = c - 32;
        }
        result += c;
    }
    cout <<result<< endl;
    return 0;
}