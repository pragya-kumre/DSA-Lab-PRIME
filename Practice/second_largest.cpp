#include <iostream>
using namespace std;

int main() {
  int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }   
 int max=arr[0];
 for(int i=1;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
 }
 int max2=-1;
 for(int i=0;i<n;i++){
    if(arr[i]!=max && arr[i]>max2){
        max2=arr[i];
 }
}
cout<<"Second Maximum number: "<<max2;
 return 0;
}

/* more optimize*/
// #include <iostream>
// using namespace std;

// int main() {
//  int n;
//  cin>>n;
//  int arr[n];
//  for(int i=0;i<n;i++){
//     cin>>arr[i];
//  }   
//  int max1= arr[0];
//  int max2= -1;  // for positive number only not for -ve number in array
//  for(int i=1;i<n;i++){
//     if(arr[i]>max1){
//         max2=max1;
//         max1=arr[i];
//     }
//     else if(arr[i]>max2 && arr[i]!=max1){
//         max2=arr[i];
//     }
//  }
//  cout<<"Second Maximum element: "<<max2;
//  return 0;
// }

 