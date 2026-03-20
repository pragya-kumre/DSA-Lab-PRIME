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
 int Max=arr[0][0];
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     if(i == 0 && j == 0) continue;
       if(arr[i][j]>Max){
        Max=arr[i][j];
       }
    }
    
 }
  cout<<Max<<" ";
 return 0;
}