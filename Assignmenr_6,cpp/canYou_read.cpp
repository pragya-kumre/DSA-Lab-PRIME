#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);

    for(int i = 0; i < s1.length(); i++) {
        if(i != 0 && isupper(s1[i])) {
            cout << endl;   // start new word
        }
        cout << s1[i];
    }

    return 0;
}

// Another way
// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// int main() {
//     string s1;
//     getline(cin, s1);

//     bool first = true;  // track first character

//     for(char c : s1) {
//         if(!first && isupper(c)) {
//             cout << endl;  // start new word
//         }
//         cout << c;
//         first = false;  // first character printed
//     }

//     return 0;
// }