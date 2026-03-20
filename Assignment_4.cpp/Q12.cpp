#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int Q;
    cin >> Q;

    for(int q = 0; q < Q; q++){
        int X;
        cin >> X;

        int temp[n];

        // create new array
        for(int i=0;i<n;i++){
            temp[i] = arr[i] + arr[(i - X + n) % n];
        }

        // copy back
        for(int i=0;i<n;i++){
            arr[i] = temp[i];
        }
    }

    // final sum
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    cout << sum;

    return 0;
}