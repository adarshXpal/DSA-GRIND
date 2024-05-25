#include<bits/stdc++.h>
using namespace std;
void recursive_bubblesort(vector<int>&arr,int n){
	if(n==1)return;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
	recursive_bubblesort(arr,n-1);
}
int main(){
	int n;
	cin>>n;
	vector<int>arr;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}
	recursive_bubblesort(arr,n);
	cout<<"The Sorted Array is :: ";
	for(auto it:arr){
		cout<<it<<" ";
	}
return 0;
}

