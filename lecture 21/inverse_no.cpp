#include<iostream>
#include <vector>
using namespace std;
vector<int>convert(int n){
    vector<int>number;
    while(n!=0){
        int k=n%10;
        number.push_back(k); // 54213
        n=n/10;
    }
    return number;
}
int main() {
    int n; //31245
    cin>>n;
    vector<int> number=convert(n);  //[54213]
    vector <int> ans(number.size()+1);
    for(int i=0;i<number.size();i++){   //[_,12534]
     ans[number[i]]=i+1;

    }
    for(int i=number.size();i>=1;i--){
        cout<<ans[i];  //12534
    }
 
 return 0;
}

/*number are swaping with their position example-number 31245
                                        position-       54321
                            numbers are becoming postion & position number  
                                        31245  ↰
                                           ↪ 54321  
                          P   N  P   N  P  N   P   N  P   N      (p->position ,N->number)
                so now in 5-->1, 4-->2, 3-->5, 2-->3, 1-->4
                             o/p  --->  12534
                         position -->   54321

*/