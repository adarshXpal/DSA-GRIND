#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int>&arr,int low,int high){
	int i=low;
	int j=high;
	int pivot=arr[low];
	while(i<j){
		while(arr[i]<=pivot && i<=high-1){
			i++;
		}
		while(arr[j]> pivot && j>=low+1){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[j],arr[low]);
	return j;
}
void quicksort(vector<int>&arr,int low,int high){
	if(low<high){
		int pindex=Partition(arr,low,high);
		quicksort(arr,low,pindex-1);
		quicksort(arr,pindex+1,high);
	}
}
int main(){
	vector<int>arr={12,4,23,11,6,4,22};
	int low=0;
	int high=arr.size()-1;
	quicksort(arr,low,high);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
return 0;
}

