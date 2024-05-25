#include<bits/stdc++.h>
using namespace std;

void recursive_insertionsort(vector<int>&arr,int j){
	if(j==arr.size())return;
	int i=j;
	while(arr[i-1]>arr[i]&&i>0){
		swap(arr[i],arr[i-1]);
		i--;
	}
	recursive_insertionsort(arr,j+1);
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
	int j=1;
	recursive_insertionsort(arr,j);
	cout<<"The sorted array is ::";
	for(auto it:arr){
		cout<<it<<" ";
	}
return 0;
}

