#include <iostream>
#include<climits>
using namespace std;

int main() {
 int n;
 cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;//int value =19
cin>>k;

for(int i=0;i<n;i++){
    if(arr[i]==k){   
        cout<<i+1;
    }
}

return 0;
}