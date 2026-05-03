#include <iostream>
using namespace std;

/* funtion 
bool linearSearch(int arr[], int n,int k){
    for(int i=0;i<n;i++){
    if(arr[i]==k){
      return true;
    }
}
return false;
}*/

int main() {
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }   
 int k;
 cin>>k;
 bool found=false;
 for(int i=0;i<n;i++){
    if(arr[i]==k){
     found=true;
     break;
    }
 }
 if(found){
    cout<<"Found";
 }else{
    cout<<"Not Found";
 }

//  if((linearSearch(arr,n,k))){
//     cout<<"Found";
//  }else{
//     cout<<"Not Found";
//  }
 return 0;
}