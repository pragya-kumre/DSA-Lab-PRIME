#include <iostream>
#include <algorithm>
using namespace std;
void Reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){//also start<=end correct but this is efficient
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

int main() {
// int arr[5]={25,20,15,10,5};
// reverse(arr,arr+5);    
// for(int i=0;i<5;i++){
// cout<<arr[i]<<" ";
// }

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}  
// for(int i=n-1;i>=0;i--) {
//     cout<<arr[i]<<" ";
// }
Reverse(arr,n);
for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
}
 return 0;
}

/* for stl library in reverse
in array reverse(arr,arr+size)   for n array+n
in vector we use (arr.begin(),arr.enf())
*/