#include <iostream>
using namespace std;
int maxVal(int arr[],int size){
    int Max=arr[0];
    for(int i=1;i<size;i++){
    if(arr[i]>Max){ 
    Max=arr[i]; 
    }
}
 return Max;
}
int minVal(int arr[],int size){
    int Min=arr[0];
    for(int i=1;i<size;i++){
    if(arr[i]<Min){ 
    Min=arr[i]; 
    }
}
  return Min;
}

int main() {
// int arr[5]={5, 7 ,8, 9,10};
// int Min=arr[0]; 
// int Max=arr[0];
// int s= sizeof(arr)/sizeof(int);
//  for(int i=1;i<s;i++){
//     if(arr[i]<Min){ 
//     Min=arr[i]; 
//     }
//     if(arr[i]>Max){
//         Max=arr[i];
//     }
//  }
// cout<<"Minimum element: "<<Min<<endl;
//  cout<<"Maximum  element: "<<Max<<endl; 


 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }  
int min=minVal(arr,n);
int max=maxVal(arr,n);
 cout<<"Minimum element: "<<min<<endl;
 cout<<"Maximum  element: "<<max<<endl;
 return 0;
}