#include <iostream>
#include <vector>
using namespace std;
bool sortedCheck(vector <int> &v, int n){
    for(int i=0;i<n;i++){
        if(v[i] < v[i-1]){
        return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin>>n;
   vector<int> a(n); 
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
 if((sortedCheck(a,n))){
    cout<<"Yes";
 }
 else{
    cout<<"No";
 }
 return 0;
}