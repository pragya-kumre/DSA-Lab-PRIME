#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string s1;
  getline(cin,s1);
  string rev = s1;
  reverse(rev.begin(), rev.end());

  if(s1==rev){
     cout<<"Palindrome"<<endl;
  }else {
    cout<<"Not Palindrome"<<endl;
  }
 return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);

    int left = 0;
    int right = s1.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (s1[left] != s1[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
*/