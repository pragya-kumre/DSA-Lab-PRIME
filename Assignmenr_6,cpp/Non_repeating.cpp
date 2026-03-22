#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        bool found = false;

        for(int i = 0; i < s.length(); i++) {
            int count = 0;

            for(int j = 0; j < s.length(); j++) {
                if(s[i] == s[j]) {
                    count++;
                }
            }

            if(count == 1) {
                cout << s[i] << endl;
                found = true;
                break;
            }
        }

        if(!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}