#include<iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    int n = 2*m - 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            int top = i;
            int left = j;
            int bottom = n - i - 1;
            int right = n - j - 1;

            int small = top;

            if(left < small) small = left;
            if(bottom < small) small = bottom;
            if(right < small) small = right;

            int value = m - small;

            cout << value << " ";
        }
        cout << endl;
    }
}