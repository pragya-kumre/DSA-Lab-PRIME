#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[128] = {0};  // for all ASCII characters

    // Count frequency
    for(int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    char result;
    int maxFreq = 0;

    // Find first character with maximum frequency
    for(int i = 0; i < s.length(); i++) {
        if(freq[s[i]] > maxFreq) {
            maxFreq = freq[s[i]];
            result = s[i];
        }
    }

    cout << result << endl;

    return 0;
}