#include<bits/stdc++.h>
#include <functional>
#include <unordered_map>
using namespace std;
unordered_map<int,int>hashing;
void maphashing(int arr[],int n){
	for(int i=0;i<n;i++){
		hashing[arr[i]]++;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	maphashing(arr,n);
	for(auto iter: hashing){
		cout<<iter.first<<"->"<<iter.second<<endl;
	}
return 0;
}

