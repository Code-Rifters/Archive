#include <bits/stdc++.h>
using namespace std;
int countWords(string& str) {
    int count = 0;
    bool isWord = true;
    for (char c : str) {
        if (isalnum(c)) {
            if (isWord) {
                count++;
                isWord = false;
            }
        } else {
            isWord = true;
        }
    }
    return count;
}
int main() {
    string input;
    getline(cin, input);
    int wordCount = countWords(input);
    cout << wordCount << endl;
    return 0;
}