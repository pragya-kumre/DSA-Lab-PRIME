#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotateImage(vector<vector<int>> &nums){
    int n=nums.size();
    int m = nums[0].size(); 

    for(int i=0;i<n;i++){
            int j=0,k=m-1;
            while(j<k){
                swap(nums[i][j],nums[i][k]);
                j++;
                k--;
            }
        }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            swap(nums[i][j], nums[j][i]);
        }
    }
}
int main() {
 int n,m;
 cin>>n>>m;
 vector<vector<int>> arr(n,vector<int>(m));
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
 }  
rotateImage(arr);
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }  
 return 0;
}