#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, sub;
    getline(cin, s);
    getline(cin, sub);

    if(s.find(sub) != string::npos) cout << "Found" << endl;
    else cout << "Not Found" << endl;

    return 0;
}