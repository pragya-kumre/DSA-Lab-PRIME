#include <iostream>
#include<vector>
using namespace std;
int linearSearch( vector<int> & v, int k){
    for(int i=0;i<v.size();i++){
        if(v[i]==k){
            return i; 
        }
    }
    return -1;
}
int main() {
    int n;
    cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int target;
cin>>target;

 int ans=linearSearch(a,target);
 cout<<ans;
 return 0;
}