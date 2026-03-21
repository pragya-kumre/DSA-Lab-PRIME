#include <iostream>
#include<vector>
using namespace std;

int main() {
int n,m;
cin>>n>>m;
vector<vector<int>> arr(n,vector<int>(m));
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
 }  
 int top=0, bottom=n-1,left=0, right=m-1;
 while(left<=right && top<=bottom) {
   //top->bottom
   for(int i=top;i<=bottom;i++){
    cout<<arr[i][left]<<", ";  //left
   }
   left++;
   //left->right
   for(int i=left;i<=right;i++){
    cout<<arr[bottom][i]<<", ";  // bottom
   }
   bottom--;
    if(left<=right){
   //bottom->top
   for(int i=bottom;i>=top;i--){
    cout<<arr[i][right]<<", ";  //right
   }
}
   right--;
 if(top<=bottom){
  //right->left
   for(int i=right;i>=left;i--){
    cout<<arr[top][i]<<", ";  //right
   }
   top++;
  }
}
cout<<"END";
 return 0;
}