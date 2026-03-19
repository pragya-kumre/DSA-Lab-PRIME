#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public :
    void moveZeros(vector<int> & nums){
     int j=0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
     }
    }
};
int main() {
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
     cin>>a[i];
    }
    Solution sol;
    sol.moveZeros(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
 return 0;
}