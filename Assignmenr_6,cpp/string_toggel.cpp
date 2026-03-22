#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void toggle(string &s) {   // pass by reference
    for(int i = 0; i < s.length(); i++) {
        if(isupper(s[i])) {
            s[i] = tolower(s[i]);
        } else if(islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
}

int main() {
    string s;
    cin >> s;

    toggle(s);  // now it will actually change the original string
    cout << s;

    return 0;
}