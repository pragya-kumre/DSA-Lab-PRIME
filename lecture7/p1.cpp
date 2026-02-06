#include <iostream>
using namespace std;

int main() {
 int n;
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
 }
  for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
 }    
 return 0;
}
/*
Row symetric
just copy first code 
swap(i=1 to i=n)
greater smaller then(toggel)
++ t0 --(toggel)
in below code

Row asymmetric
just copy first code 
swap(i=1 to i=n-1)
greater smaller then(toggel)
++ t0 --(toggel)
in below code
*/