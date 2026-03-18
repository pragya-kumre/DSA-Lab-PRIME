#include <iostream>
using namespace std;
int SumofArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
//  int arr[5] ={1,2,3, 4,5} ;
//  int sum=0;
//  int s= sizeof(arr)/sizeof(int);
//  for(int i=0;i<s;i++){
//    sum+=arr[i];
//  }

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// int sum=0;
// for(int i=0;i<n;i++){
//     sum+=arr[i];
// }
int sum=SumofArray(arr,n);
 cout<<"sum of array element: "<<sum;
 return 0;
}