#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Comparator function
bool compare(string a, string b) {
    return a + b > b + a;
}

int main() {
    int t;
    cin >> t;  // number of test cases

    while(t--) {
        int n;
        cin >> n;  // size of array

        vector<string> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];  // read numbers as strings
        }

        sort(arr.begin(), arr.end(), compare);  // sort with custom comparator

        // If the first number is "0", the whole number is 0
        if(arr[0] == "0") {
            cout << 0 << endl;
        } else {
            for(string num : arr) cout << num;
            cout << endl;
        }
    }

    return 0;
}