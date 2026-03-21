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
 int left=0,right=m-1,top=0,bottom=n-1;
    while(left<=right and top<=bottom){
        //left to right
        for(int i=left;i<=right;i++){
            //top
            cout<<arr[top][i]<<" ";
        }
        top++;
        //top to bottom
        for(int i=top;i<=bottom;i++){
            //right
            cout<<arr[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            //right to left
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right){
            //bottom to top
            for(int i=bottom;i>=top;i--){
                cout<<arr[i][left]<<" ";
            }
        }
        left++;
    }

    return 0;
}
 