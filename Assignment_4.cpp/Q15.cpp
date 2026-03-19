#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector <int> &v,int n){ 
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min]){
                min= j;
            }
        }
        swap(v[i],v[min]);
    }
}
int main() {
    int n;
    cin>> n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 selectionSort(a,n);
 for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
 }
 return 0;
}