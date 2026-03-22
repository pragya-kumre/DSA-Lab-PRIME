#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}

int main() {
    string s;
    cin >> s;

    int count = 0, maxi = 0;

    for(int i = 0; i < s.length(); i++) {
        if(isVowel(s[i])) {
            count++;
            maxi = max(maxi, count);
        } else {
            count = 0;
        }
    }

    cout << maxi;
    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0, maxLen = 0;

    for(char ch : s) {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
            count++;                 // continue substring
            if(count > maxLen) {
                maxLen = count;      // update max
            }
        } else {
            count = 0;               // break substring
        }
    }

    cout << maxLen;
    return 0;
}
*/