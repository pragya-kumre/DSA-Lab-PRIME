#include <iostream>
#include <vector>
using namespace std;
void reverseAray(vector <int> &v,int n){
    int start=0;
    int end=n-1;
    
    while(start<end){
     swap (v[start],v[end]);
    }
    }

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   reverseAray(a,n);
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
 return 0;
} 

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int a[n];
//    for(int i=0;i<n;i++){
//     cin>>a[i];
//    }
   
//    for(int i=n-1;i>=0;i--){
//     cout<<a[i]<<endl;
//    }
//  return 0;
//}