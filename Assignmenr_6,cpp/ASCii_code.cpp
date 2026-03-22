#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin>>s;
    cout<<s[0];
    for (int i = 1; i < s.length(); i++) {
        int diff = s[i] - s[i - 1]; // difference in ASCII values
        cout <<diff<< s[i];
    }
 return 0;
}
