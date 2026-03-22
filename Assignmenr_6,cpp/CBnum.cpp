#include<iostream>
#include <string>
#include <vector>
using namespace std;
bool isCBNum(long long num){
	if(num==0 || num==1){
		return false;
	}
	int prime[]={2,3,5,7,11,13,17,19,23,29};
	for(int i=0;i<10;i++){
		if(num==prime[i]){
			return true;
		}
	}
	for(int i=0;i<10;i++){
		if(num%prime[i]==0)
		return false;
	}
	return true;
}
bool isVisited(vector<bool> &visited, int start,int end){
	for(int i=start;i<=end;i++){
		if(visited[i])
		return true;
	}
	return false;
}
int main() {
	int n;
	string s;
	cin>>n>>s;
    vector<bool> visited(n,false);
	int CBcount=0;
	for(int len=1;len<=n;len++){
		for(int start =0;start<=n-len;start++){
			int end=start+len-1;
			string sub= s.substr(start,len);
			long long num=stoll(sub);

			if(isCBNum(num) && ! isVisited(visited,start,end)){
				for(int i=start;i<=end;i++)
				visited[i]=true;
				CBcount++;
			}
		}
	}
	cout<<CBcount<<endl;
	return 0;
}