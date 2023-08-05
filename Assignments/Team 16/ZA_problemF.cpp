//Zyad Amr ID:66

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_str;
    getline(cin, input_str);

    for (char& c : input_str) {
        c = toupper(c);
    }

    cout << input_str << endl;

    return 0;
}
