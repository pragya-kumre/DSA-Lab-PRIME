#include <iostream>
using namespace std;
/*function
bool checkArray(int arr[],int n){
   for(int i=1;i<n-1;i++){
    if(arr[i]<arr[i-1]){
        return false;
    }
    }
    return true;
 }*/
 
int main() {
 int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
} 
bool isSorted=true;
for(int i=1;i<n;i++){     // if i=0 then arr[0]<arr[-1] which doesnt exist thats i =1
    if(arr[i]<arr[i-1]){
        isSorted=false;
        break;
    }
}

/* if((checkArray(arr,n))){
    cout<<"Yes";
}
else{
    cout<<"No";
}*/

if(isSorted){
    cout<<"Yes";
}
else{
    cout<<"No";
}

 return 0;
}