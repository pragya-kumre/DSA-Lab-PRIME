#include <iostream>
using namespace std;

int main() {
 int n;
 cin>>n;
 if(n>=300 && n<=460){   
 cout<<"You won a MacBook!"<<endl;

 if(n>=300 && n<=380){
    cout<<"Model:M1 Mac"<<endl;
 }else{
    cout<<"Model:M2Mac"<<endl;
 }
 }
 else if(n>=200&& n<=280){
    cout<<"You won a pack of Kurkure"<<endl;
if(n>=200&& n<=240){
    cout<<"Chilli Kurkure"<<endl;
 }
 else {
    cout<<"Onion Kurkure"<<endl;
 }
 }else if(n>=1100&& n<=1500){
    cout<<"You won a Cycle"<<endl;
 if(n>=1100&& n<=1300){
    cout<<"Brand:Avon Cycle"<<endl;
 }
 else{
    cout<<"Brand:Hero Cycle"<<endl;
 }
}else if(n>=50&& n<=80){
    cout<<"You won a Bike"<<endl;
 if(n>=50&& n<=650){
    cout<<"Model:Bullet"<<endl;
 }
 else{
    cout<<"Model:Rajdoot"<<endl;
 }
}
 else{
    cout<<"Better luck next time"<<endl;
 }

 return 0;
}