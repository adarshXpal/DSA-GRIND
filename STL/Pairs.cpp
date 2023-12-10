#include<bits/stdc++.h>
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
return 0;

}

