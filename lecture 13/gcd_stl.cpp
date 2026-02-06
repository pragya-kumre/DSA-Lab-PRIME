#include <iostream>
//_gcd
#include<algorithm>
//-infinity and +infinity
#include<climits>
using namespace std;

int main() {
    int c=INT_MAX;  //+infinity
    int d=INT_MIN;  //-infinity
    int a=5;
    int b=10;
    cout<<__gcd(a,b);
 return 0;
}