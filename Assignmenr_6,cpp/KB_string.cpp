#include <iostream>
using namespace std;

int transform(string s, int k, char target){
int count =0;
    int maxi = 0;
    int left =0;
    for(int right = 0 ; right < s.size() ; right++){
        if(s[right]!=target){
            count++;
        }
        while(count>k){
            if(s[left]!=target){
                count--;
            }
            left++;
        }
        maxi = max(maxi,right-left+1);
    }
    return maxi;
}

int main() {
    int k;
    cin>>k;
    string s;
    cin >> s;
    cout << max(transform(s,k,'a'),transform(s,k,'b')) << endl;
    return 0;
}