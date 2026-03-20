#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string s){
    int sum = 0;
    int pow2 = 1; // 2^0
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] == '1'){
            sum += pow2;
        }
        pow2 *= 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << binaryToDecimal(arr[i]) << endl;
    }
    return 0;
}