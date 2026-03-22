#include <iostream>
#include <string>
using namespace std;

void modify(string &s) {
    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0) {      // even index → next higher char
            s[i] = s[i] + 1;
        } else {               // odd index → next lower char
            s[i] = s[i] - 1;
        }
    }
}

int main() {
    string s;
    cin >> s;

    modify(s);  
    cout << s;

    return 0;
}