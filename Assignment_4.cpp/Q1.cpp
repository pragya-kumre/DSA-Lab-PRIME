#include<iostream>
using namespace std;
void invertedArray(int arr[],int n){
	int inv[n];

	for(int i=0;i<n;i++){
		inv[arr[i]]=i;  //arr[i]= value from original i.e arr[0]=2 
                        //inv[arr[i]] means go to postion in inv arr
                        // inv[arr[i]]=i out index i there
                        
	}
	for(int i=0;i<n;i++){
		arr[i]=inv[i];
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];  // [ 2, 0 3 1]
	}
	invertedArray(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" "; //[1, 3 0, 2]
	}
	return 0;
}