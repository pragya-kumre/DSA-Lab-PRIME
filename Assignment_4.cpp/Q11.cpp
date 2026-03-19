#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int pos = n - 1; // or sor(arr,arr+n);
    for(int i = n - 1; i >= 0; i--){
        if(arr[i] != 0){
            arr[pos] = arr[i];
            pos--;
        }
    }

    for(int i = pos; i >= 0; i--){
        arr[i] = 0;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}