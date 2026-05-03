#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string upper = s;
    string lower = s;

    for(char &c : upper) c = toupper(c);  //upper
    for(char &c : lower) c = tolower(c);  //lower

    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;

    return 0;
}