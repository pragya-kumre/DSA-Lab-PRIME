#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;

    // Input size
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Declare 2D vector
    vector<vector<int>> arr(rows, vector<int>(cols));

    // Input elements
    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Display matrix
    cout << "\nMatrix is:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Sum of elements
    int sum = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    cout << "\nSum = " << sum << endl;

    // Search element
    int key;
    bool found = false;
    cout << "\nEnter element to search: ";
    cin >> key;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] == key) {
                cout << "Found at (" << i << ", " << j << ")\n";
                found = true;
            }
        }
    }

    if(!found) {
        cout << "Element not found\n";
    }

    // Transpose
    cout << "\nTranspose:\n";
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}