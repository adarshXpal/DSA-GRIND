#include<bits/stdc++.h>
#include <utility>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
	if(p1.second>p2.second){
		return false;
	}else if (p1.second<p2.second) {
		return true;
	}
	else{
		if(p1.first>p2.first){
			return true;
		}else{
			return false;
		}
	}
}
int main(){
	pair<int,int> arr[] = {{1,2},{45,1},{34,1},{4,7},{21,9}};
	//sort it according to second element;
	//if second element is same, then sort ,
	//it according to first element but decending;
	sort(arr,arr+5,comp);
	for(auto iter: arr){
		cout<<iter.first<<" "<<iter.second<<endl;
	}
return 0;
}

