#include <iostream>
#include <vector>
using namespace std;
void reverse(vector <int> &v, int n){
    int start=0;
    int end=n-1;
    while(start<end){//also start<=end correct but this is efficient
        swap(v[start],v[end]);
        start++;
        end--;
    }
}
int main() {
 int n;
    cin>>n;
   vector<int> a(n); 
   for(int i=0;i<n;i++){
    cin>>a[i];
   } 
   for(int i=n-1;i>=1;i--){
    cout<<a[i]<<" ";
   }
 return 0;
}