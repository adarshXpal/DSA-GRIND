#include<bits/stdc++.h>
#include <sstream>
#include <string>
#include <utility>
using namespace std;

int main(){
	pair<int,int> p = {1,3};
	cout<<p.second*p.first<<" Three should be my answer"<<endl;
	pair<int , pair<int,pair<int,char>>> X = {3,{2,{4,'X'}}};
	cout<<X.second.second.second<<endl;
	pair<int,int> arr[2]={{4,6},{1,7}};
	cout<<arr[1].second<<" "<<arr[0].first<<endl;
	pair<int,char> p1={1,'z'};
	cout<<"the size of p is :: "<<endl;
	cout<<sizeof(p1)<<endl;
	int n;
	cin>>n;
	pair<int,string> array[n];
	for(int i=0;i<n;i++){
		cin>>array[i].first>>array[i].second;
	}
	cout<<"We are Displaying the Array:: "<<endl;
	for(int j=0;j<n;j++){
		cout<<array[j].first<<" * "<<array[j].second<<endl;
	}
return 0;

}

