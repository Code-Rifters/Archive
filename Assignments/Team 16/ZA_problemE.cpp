#include <iostream>
#include <string>
using namespace std;

int count_words(const string& str) {
    int count = 0;
    bool in_word = false;

    for (char c : str) {
        if (isalpha(c)) {
            if (!in_word) {
                in_word = true;
                count++;
            }
        } else {
            in_word = false;
        }
    }

    return count;
}

int main() {
    string input_str;
    getline(cin, input_str);

    int num_words = count_words(input_str);
    cout << num_words << endl;

    return 0;
}
