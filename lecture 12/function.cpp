#include <iostream>
using namespace std;
//no argument and no return
void greet(){
    cout<<"hello"<<endl;
}
//argument and no return
void great(string name){
    cout<<"hello"<<name<<endl;
}
//no argument and return
int subtract(){
    int a=5;
    int b=3;
    int c=a-b;
    return c;
}
//argument and return
int add(int a,int b){
    int c=a+b;
    return c;
}
int main() {
    greet();
    great("Pragya");
    //1
    int a=add(8,3);
    cout<<a<<endl;
    //2
    cout<<add(8,3)<<endl;
    cout<<subtract()<<endl;
 return 0;
}