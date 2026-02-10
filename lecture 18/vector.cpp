#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> a; //(size=2^n if n=3 then size will be  8)
    //update
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.pop_back(); //delete

    //size of array
    cout<<"size: "<<a.size()<<endl;
    cout<<"capacity: "<<a.capacity()<<endl;// capacity of vector kitni jagha gher rha hai
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";  //print array
    }

    cout<<endl;
    cout<< "first element: "<<a.front()<<endl;
    cout<<"last element: "<<a.back()<<endl;

    //to reverse a array
    cout << "reverse: ";
    reverse(a.begin(), a.end());
   for(int i = 0; i < a.size(); i++){
    cout <<a[i] << " ";
}
cout << endl;
    //sort the array
    cout << "sort: ";
    sort(a.begin(), a.end());
  for(int i = 0; i < a.size(); i++){
    cout << a[i] << " ";
}
cout << endl;

    //insert element in array in front (index,value)->(+2(index),6(value))
    a.insert(a.begin()+2,6);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    //from end add array
      a.insert(a.end()-1,6);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    int n=5; //initialize size early or take i/p from user
    vector<int> arr(n,1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 return 0;
}

