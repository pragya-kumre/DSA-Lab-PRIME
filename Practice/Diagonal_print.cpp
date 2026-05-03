#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    // Input matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

 int mainSum=0 , secSum=0;
 int size= (n<m)?n:m;   //largest square possible
 for(int i=0;i<size;i++){
    mainSum+=arr[i][i];
    secSum+=arr[i][size-1-i];
 }
    cout << "Main diagonal sum: " << mainSum << endl;   //  left top corner  -> right down corner  diagonal 
    cout << "Secondary diagonal sum: " << secSum << endl;  //  right up  -> to left down diagonal sum 

    return 0;
}

