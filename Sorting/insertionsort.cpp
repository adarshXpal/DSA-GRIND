#include<bits/stdc++.h>
#include <vector>
using namespace std;

void insertionsort(vector<int>arr,int n){
	for(int i=1;i<n;i++){
		int j=i;
		while(j>0 && arr[j-1]>arr[j]){
			swap(arr[j-1],arr[j]);
			j--;
		}
	}
	for(int s=0;s<n;s++){
		cout<<arr[s]<<" ";
	}
}
int main(){
	vector<int>arr={12,4,33,5,11,6};
	insertionsort(arr,arr.size());
return 0;
}

