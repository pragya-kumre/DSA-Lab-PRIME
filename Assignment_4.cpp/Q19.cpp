#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    vector<long long> left(n, 1);
    vector<long long> right(n, 1);
    vector<long long> answer(n);

    // Build left array
    for(int i = 1; i < n; i++){
        left[i] = left[i-1] * nums[i-1];
    }

    // Build right array
    for(int i = n-2; i >= 0; i--){
        right[i] = right[i+1] * nums[i+1];
    }

    // Build answer
    for(int i = 0; i < n; i++){
        answer[i] = left[i] * right[i];
    }

    // Print answer
    for(int i = 0; i < n; i++){
        cout << answer[i] << " ";
    }

    return 0;
}



//     // Print step by step
//     cout << "i\tnums[i]\tleft[i]\tright[i]\tanswer[i]\n";
//     for(int i = 0; i < n; i++){
//         cout << i << "\t" << nums[i] << "\t" << left[i] << "\t" << right[i] << "\t" << answer[i] << "\n";
//     }
//     to see how both left and right array are workin write this 