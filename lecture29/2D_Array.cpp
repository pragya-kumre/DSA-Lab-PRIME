#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input size
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[100][100]; // fixed size for beginners

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

    // Sum of all elements
    int sum = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    cout << "\nSum of elements = " << sum << endl;

    // Search an element
    int key, found = 0;
    cout << "\nEnter element to search: ";
    cin >> key;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] == key) {
                cout << "Found at position (" << i << ", " << j << ")\n";
                found = 1;
            }
        }
    }

    if(!found) {
        cout << "Element not found\n";
    }

    // Transpose of matrix
    cout << "\nTranspose of matrix:\n";
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}