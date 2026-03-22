#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1,s2;
  getline(cin,s1);
  for(char c:s1){
    cout<<c<<" ";
  }
  cout<<endl;
 return 0;
}