#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        int total = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            total += a[i];
        }

        // max subarray (Kadane)
        int currMax = a[0], maxSum = a[0];

        // min subarray
        int currMin = a[0], minSum = a[0];

        for(int i = 1; i < n; i++){
            // max
            currMax = max(a[i], currMax + a[i]);
            maxSum = max(maxSum, currMax);

            // min
            currMin = min(a[i], currMin + a[i]);
            minSum = min(minSum, currMin);
        }

        int result;

        if(maxSum < 0){
            result = maxSum;  // all negative case
        } else {
            result = max(maxSum, total - minSum);
        }

        cout << result << endl;
    }

    return 0;
}