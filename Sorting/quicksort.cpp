#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;

int Partition(vector<int>&arr,int l,int h){
	int pivot=arr[l];
	int i=l;
	int j=h;
	while(i<j){
		while(arr[i]<=pivot && i<=h-1){
			i++;
		}
		while(arr[j]>pivot && j>=l+1){
			j--;
		}
		if(i<j) swap(arr[i],arr[j]);
	}
	swap(arr[l],arr[j]);
	return j;
}
void quicksort(vector<int>&arr,int l,int h){
	if(l<h){
		int pindex=Partition(arr,l,h);
		quicksort(arr,l,pindex-1);
		quicksort(arr,pindex+1,h);
	}
}
int main(){
	vector<int>arr={21,44,13,5,17,2};
	int l=0;
	int h=arr.size()-1;
	quicksort(arr,l,h);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
return 0;
}

