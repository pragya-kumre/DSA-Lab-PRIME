#include <iostream>
using namespace std;

int main() {
    //crate
    //first way
 int arr[5]   ;//by default garbage value &we can change it in future
 //second way
 arr[0]=1;
 arr[1]=1;
 arr[2]=1;
 arr[3]=1;
 arr[4]=1;
 int arr_b[]={1,2,3,4,5};//value initialize & we can change it in future
 //third way
 int n;
 cin>>n;
 int arr_c[n];// by default garbage &change it in future

 //read
 int s=sizeof(arr_b)/sizeof(int);
 for(int i=0;i<s;i++){
    cout<<arr_b[i]<<" ";
 }
 cout<<endl;

 for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
 }
 //update
 for(int i=0;i<s;i++){
    arr[i]+=i;
 }
    cout<<endl;
 for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
 }
 return 0;
}