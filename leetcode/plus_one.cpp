#include <iostream>
#include<vector>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
  plusOne(a);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
 return 0;
}