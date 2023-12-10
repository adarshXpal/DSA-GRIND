#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
void explainSort(){
	vector<int>vec;
	int t;
	cout<<"Enter the size :: ";
	cin>>t;
	cout<<endl;
	while(t>0){
		int a;
		cin>>a;
		vec.emplace_back(a);
		t--;
	}
	cout<<"The unsorted vector is :: ";
	for(auto iter:vec){
		cout<<iter<<" ";
	}
	cout<<endl;
	sort(vec.begin(),vec.end());
	cout<<"The sorted Vector is :: ";
	for(auto iter:vec){
		cout<<iter<<" ";
	}
	cout<<endl;
}
int main(){
	explainSort();

return 0;
}

