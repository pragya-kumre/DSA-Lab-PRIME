#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";

    for (int i = 0; i < s.length(); i++) {
        // add the current character only if it's different from the previous one
        if (i == 0 || s[i] != s[i - 1]) {
            result += s[i];
        }
    }

    cout << result;

    return 0;
}