#include <iostream>
using namespace std;

int main() {
 int n;
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<"  ";
    }
    for (int j=1;j<=i;j++){
        cout<<"* ";
    }
     for (int j=1;j<=i;j++){
        cout<<"* ";
    }
     for(int j=1;j<=n-i+1;j++){
        cout<<"  ";
    }

    cout<<endl;
 }   
 return 0;
}
/*   
column symetric (in star)
 for(){
   a
   b
   c
   c
   b
   a
   cout<<endl;
}
   return 0;

*/