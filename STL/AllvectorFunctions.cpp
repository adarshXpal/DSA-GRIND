#include<bits/stdc++.h>
using namespace std;

void vectorFunction(){
	vector<int> vec(5);
	vector<int>::iterator it = vec.begin();
	vector<int>::iterator end = vec.end();
	while(it<end){
		cin>>*(it);
		it++;
	}

	for(auto it: vec){
		cout<<it<<endl;
	}
	vec.erase(vec.begin()+3);
	cout<<"After Deletion"<<endl;	
	
	for(auto it: vec){
		cout<<it<<endl;
	}
	vec.erase(vec.begin()+1,vec.end());
	cout<<"After Multiple Deletion"<<endl;
	for(auto it: vec){
		cout<<it<<endl;
	}
	vec.insert(vec.begin()+1,3,50);
	cout<<"After Insertion"<<endl;
	for(auto it:vec){
		cout<<it<<endl;
	}	
	vector<int> vec2(4,69);
	cout<<"After copying another vector inside vec"<<endl;
	vec.insert(vec.end(),vec2.begin(),vec2.end());
	for(auto it:vec){
		cout<<it<<endl;
	}
	cout<<"The size of the vec is : "<<vec.size()<<endl;
	vec.pop_back();
	cout<<"Vector After pop_back"<<endl;
	for(auto it:vec){
		cout<<it<<endl;
	}
	cout<<"After Swaping Vector"<<endl;
	vec.swap(vec2);
	for(auto it:vec){
		cout<<it<<endl;
	}
	vec.clear();
	cout<<"After Clearing vector"<<endl;
	for(auto it:vec){
		cout<<it<<endl;
	}
	cout<<vec.empty()<<endl;
}
int main(){
	vectorFunction();
return 0;
}

