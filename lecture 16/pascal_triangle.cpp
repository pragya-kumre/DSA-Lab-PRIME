#include <iostream>
using namespace std;

int main() {
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
    int val=1;
    for(int j=0;j<=i;j++){
        cout<<val<<" ";
        val=val*(i-j)/(j+1);
    }
    cout<<endl;
 }   
 return 0;
} 

// The top of the triangle starts with 1.
// Each row begins and ends with 1.
// Every number inside the triangle is found by adding the two numbers above it.
// First few rows:
//         1
//        1 1
//       1 2 1
//      1 3 3 1
//     1 4 6 4 1
//    1 5 10 10 5 1