#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input_str;
    getline(cin, input_str);

    string result_str;
    for (char c : input_str) {
        if (isalpha(c) || isspace(c)) {
            result_str.push_back(c);
        }
    }

    cout << result_str << endl;

    return 0;
}
