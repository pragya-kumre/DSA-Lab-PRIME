#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    int og=n;
    int temp=n;
    int sum=0;
    int l=0;
    while(temp!=0){
        temp=temp/10;
        l++;
    }
    //power
    while(n!=0){
        int k=n%10;
        sum=sum+pow(k,l);
        n=n/10;
    }
    //compare
    if(og==sum){
        cout<<"Armstong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
 return 0;
}
/*
An Armstrong number is a number that is equal to the sum of its digits raised to the power of the number of digits.

Here, each digit d is taken and used like:
d^k where k = number of digits in the number.

If the sum of all such values equals the original number, it is an Armstrong number.

Example 1
Input:153
Digits: 1, 5, 3
Number of digits k = 3

Step-by-step:
   1³ = 1
   5³ = 125
   3³ = 27

Sum: 1 + 125 + 27 = 153

Output: Armstrong number ✔

Example 2
Input: 123
    1³ = 1
    2³ = 8
    3³ = 27

Sum: 1 + 8 + 27 = 36

Output: Not an Armstrong number ✘
*/