#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	vector<int>v;
	cout<<"Enter the 4 elements :: ";
	int t=4;
	while(t>0){
		int a;
		cin>>a;
		v.emplace_back(a);
		t--;
	}
	cout<<endl;
	int maxi = *max_element(v.begin(),v.end());
	cout<<maxi<<endl;
return 0;
}

