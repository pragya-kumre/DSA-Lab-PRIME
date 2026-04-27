#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;
    sort(arr, arr + n);

    // Step 2: Fix one element
    for(int i = 0; i < n - 2; i++){
        int left = i + 1;
        int right = n - 1;

    // Step 3: Two pointer approach
     while(left < right){
     int sum = arr[i] + arr[left] + arr[right];

            if(sum == k){
                cout << arr[i] << ", " << arr[left] << " and  " << arr[right] << endl;
                left++;
                right--;
            }
            else if(sum < k){
                left++;
            }
            else{
                right--;
            }
        }
    }
    return 0;
}
