#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec{1,2,3,4,5};
	vec.insert(vec.begin(),45);
	vec.insert(vec.begin()+2,5,19);
	vector<int> hun(3,50);
	vec.insert(vec.begin()+4,hun.begin(),hun.end());
	for(auto iter:vec){
		cout<<iter<<endl;
	}
	cout<<"The size of the vector vec is :"<<endl;
	cout<<vec.size()<<endl;
	vec.swap(hun);
	cout<<"vector hun after swaping"<<endl;	
	for(auto iter : hun){
		cout<<iter<<" ";
	}
	vec.pop_back();
	cout<<"vector after pop_back"<<endl;
	for(auto iter : vec){
		cout<<iter<<" ";
	}
	vec.clear();
	cout<<vec.empty()<<endl;	
return 0;
}

