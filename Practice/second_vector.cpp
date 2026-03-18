#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int main() {
   int n;
   cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max1=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max1){
            max1=a[i];
        }
    }
    int max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]!=max1 && a[i]>max2){
            max2=a[i];
        }
    }
    cout<<"second maximum: "<<max2;
 return 0;
}