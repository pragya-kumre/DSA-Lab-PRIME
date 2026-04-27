#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;                 
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];        

    int pivot = -1;

    // Step 1: Find pivot (first element from right that is smaller than next)
    for(int i = n-2; i >= 0; i--){
        if(arr[i] < arr[i+1]){
            pivot = i;
            break;
        }
    }

    // Step 2: If pivot found, swap with the smallest number bigger than it on the right
    if(pivot != -1){
        for(int i = n-1; i > pivot; i--){
            if(arr[i] > arr[pivot]){
                swap(arr[i], arr[pivot]);
                break;
            }
        }
    }

    // Step 3: Reverse subarray after pivot
    int start = pivot + 1;
    int end = n - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Print 
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}