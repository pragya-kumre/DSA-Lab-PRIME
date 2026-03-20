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

    int mainSum = 0, secSum = 0;

    // for(int i = 0; i < n && i < m; i++){
    //     mainSum += arr[i][i];        // main diagonal
    //     secSum += arr[i][m-1-i];     // secondary diagonal
    // }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i==j) mainSum += arr[i][j];         // main diagonal
        if(i+j==m-1) secSum += arr[i][j];   // secondary diagonal
    }
}

    cout << "Main diagonal sum: " << mainSum << endl;
    cout << "Secondary diagonal sum: " << secSum << endl;

    return 0;
}

/*
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i==j) sum += arr[i][j];         // main diagonal
        if(i+j==m-1) sum2 += arr[i][j];   // secondary diagonal
    }
}
*/