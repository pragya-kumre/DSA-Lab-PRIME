#include <iostream>
using namespace std;
int reverse(int n){
    int rev=0;
while (n!=0)
{
  int k=n%10;
  rev=rev*10+k;
  n/=10;
}
return rev;
}
int len(int n){
    int ans=0;
    while(n!=0){
        n=n/10;
        ans++;
    }
    return ans;
}
int main() {
 int n;
 cin>>n;
 int rev=1;
 int l=len(n);
 while(n!=0){
    int k=n%10;
    int inv=9-k;
    if(l==1 and k==9){
        rev=rev*10+k;
        l--;
    }
    if(inv<k){
        rev=rev*10+inv;
        l--;
    }
    else{
        rev=rev*10+k;
        l--;
    }
    n/=10;
 }
 cout<<reverse(rev)/10<<endl;
 return 0;
}
/*
A Chewbacca number is the smallest possible number formed by replacing each digit d of a given number with min(d, 9 − d),
 where d represents each individual digit of the number,
 and the first digit is not allowed to become 0 (if it becomes 0, we keep it as 9 or keep the original digit).
 Example 1

Input:4545
Step-by-step:
          d = 4 → min(4, 5) = 4
          d = 5 → min(5, 4) = 4
          d = 4 → 4
          d = 5 → 4

Output: 4444

Example 2
Input:909
Step-by-step:
         d = 9 → 0 (but first digit cannot become 0, so keep 9)
         d = 0 → 0
         d = 9 → 0
 Output:909
*/