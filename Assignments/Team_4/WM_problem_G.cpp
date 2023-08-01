#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    string result;
    for (char c : input) {
        if (isalpha(c) || c == ' ') {
            result += c;
        }
    }
    cout <<result << endl;
    return 0;
}