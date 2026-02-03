#include <iostream>
#include<cmath>
using namespace std;

int main() {
 int n;
 cin>>n;
 bool ans=false;
 for(int i=2;i<=sqrt(n);i++){
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