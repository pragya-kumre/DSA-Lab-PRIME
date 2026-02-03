#include <iostream>
using namespace std;

int main() {
 int n;
 cin>>n;
 bool ans=false;
 for(int i=2;i<=n-1;i++){
    if(n%i==0){
        ans=true;
        break;
    }
 }
 if(ans){
    cout<<"it is not prime";
 }else{
    cout<<"it is prime";
 }
 return 0;
}
/*
 int n;
 cin>>n;
 bool ans=true;
 for(int i=2;i<=n-1;i++){
    if(n%i==0){
        ans=true;
        break;
    }
 }
 if(!ans){
    cout<<"it is not prime";
 }else{
    cout<<"it is prime";
 }
 return 0;
}
*/