#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 1;

    for(int i = 0; i < s.length(); i++) {
        if(i < s.length() - 1 && s[i] == s[i+1]) {
            count++;
        } else {
            cout << s[i] ;
             if (count > 1) {      // Only print count if > 1
                cout << count;
            count = 1;
        }
    }
    }
    return 0;
}