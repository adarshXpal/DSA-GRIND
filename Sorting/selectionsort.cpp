#include<bits/stdc++.h>
#include <sstream>
#include <vector>
using namespace std;

void selectionsort(vector<int>arr,int n){
	for(int i=0;i<n-1;i++){
		int minindex=i;
		for(int j=i;j<n;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		swap(arr[i],arr[minindex]);
	}
	for(int s=0;s<n;s++){
		cout<<arr[s]<<" ";
	}
}
int main(){
	vector<int>arr={23,44,12,5,33};
	selectionsort(arr,arr.size());
return 0;
}

