#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n;
    cin>>n;
   vector<int> a(n); 
   for(int i=0;i<n;i++){
    cin>>a[i];
   } 
   int k;
   cin>>k;
//    bool ans =false;
//    for(int i=0;i<n;i++){
//     if(a[i]==k){
//      ans= true;
//      cout<<i;
//      break;

//     }
//    }
//    if(!ans){
//     cout<<"-1";
//  }
 
int index=-1;
for(int i=0;i<n;i++){
    if(a[i]==k){
      index=i;
      break;
    }
}
cout<<index;
 return 0;
}