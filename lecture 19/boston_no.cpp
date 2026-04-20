#include <iostream>
using namespace std;

int digitsum(int n){
    int sum=0;
    while(n!=0){
        int k=n%10;
        sum+=k;
        n/=10;
    }
    return sum;
}
bool prime(int n){
    for(int i=2;i*i<=n;i++){//i<=sqrt(n) ->i*i<=n
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
 int n;
 cin>>n;
 int sum= 0;
 int factor=0;
 sum=digitsum(n);
 for(int i=2;i<=n;i++){
    while(n%i==0){
        if(prime(i)){
            factor+=digitsum(i);
        }
        n=n/i;
    }
 }
 cout<<sum<<endl;
 cout<<factor<<endl;
 if(sum==factor){
    cout<<"Boston"<<endl;
 }else{
    cout<<"Not Boston"<<endl;
 }
 return 0;
}
/*
A Boston number is a number whose sum of digits equals the sum of digits of its prime factors (including repetition).

Steps:

1.Find prime factors of the number
2.Add digits of those factors
3.Compare with sum of digits of original number
4.If both are equal → Boston number

Example 1

Input:22
Step 1: Prime factors
    22 = 2 × 11

Step 2: Sum of digits of factor
    2 → 2
    11 → 1 + 1 = 2

Total: 2 + 2 = 4

Step 3: Sum of digits of 22
2 + 2 = 4

Output:  Boston number ✔

Example 2
Input: 21

Step 1: Prime factors
21 = 3 × 7

Step 2:
   3 → 3
   7 → 7

Total: 10

Step 3: Sum of digits of 21
2 + 1 = 3

Output: Not a Boston number ✘
*/