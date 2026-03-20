#include <iostream>
using namespace std;

int main() {
 int n,m;
 cin>>n>>m;
 int arr[n][m];
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
 }
 for(int j = 0; j < m; j++){ 
    int sum = 0;   // reset for each column
    for(int i = 0; i < n; i++){
        sum += arr[i][j];
    }
    cout <<  sum << endl;
}
  
 return 0;
}