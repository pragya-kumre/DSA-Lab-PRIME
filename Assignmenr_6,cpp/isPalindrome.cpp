#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &s){
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;     // simplified
}

int main() {
    string s1;
    cin >> s1;
  
    if(isPalindrome(s1)){
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}