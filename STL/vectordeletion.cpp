#include<bits/stdc++.h>
#include <tuple>
using namespace std;

int main(){
	vector<int> vec(5);
	for(int i=0;i<5;i++){
		cin>>vec[i];
	}
	for(auto iter : vec){
		cout<<iter<<endl;
	}
	vec.erase(vec.begin()+2);
	cout<<"Now the updated vector"<<endl;
	for(auto iter : vec){
		cout<<iter<<endl;
	}
	vec.erase(vec.begin(),vec.end());
	cout<<"Vector print with deletion"<<endl;
	for(auto iter : vec){
		cout<<iter<<endl;
	}
return 0;
}

