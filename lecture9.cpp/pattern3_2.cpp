#include <iostream>
using namespace std;

int main() {
 int n;
 cin>>n;
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    for(int j=1;j<=2*(n-i)-1;j++){
        cout<<"  "; 
    }if(i!=n){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
    }else{
        for(int j=1;j<=n-1;j++){
            cout<<"* ";
        }
    }

    cout<<endl;
  }  
 return 0;
}