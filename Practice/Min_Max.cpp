/****using stl Library ***/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 0){
        cout << "Array is empty!" << endl;
        return 0;
    }

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());

    cout << "Minimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;

    return 0;
}
/*  Array
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 0){
        cout << "Array is empty!" << endl;
        return 0;
    }

    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxVal = *max_element(arr, arr + n);
    int minVal = *min_element(arr, arr + n);

    cout << "Minimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;

    delete[] arr; // free memory
    return 0;
}
*/