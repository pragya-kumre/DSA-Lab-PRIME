// #include <iostream>
// #include <vector>
// using namespace std;
// bool searched(vector<vector<int>>&a , int n,int m,int x){
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//        if(x==a[i][j]){
//         return 1;
//        }
//     }
//  } 
//  return 0;
// }
// int main() {
//  int n,m;
// cin>>n>>m;
// vector<vector<int>> arr(n,vector<int>(m));
//  for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//     }
//  } 
//    int x;
//    cin>>x;
//    cout<<searched(arr,n,m,x);
   
    
//  return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<vector<int>> arr(n, vector<int>(m));  // ✅ vector used

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int x;
    cin>>x;

    bool ans = false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x == arr[i][j]){
                ans = true;
                break;
            }
        }
        if(ans) break;
    }

    if(ans) cout<<"1";
    else cout<<"0";

    return 0;
}
