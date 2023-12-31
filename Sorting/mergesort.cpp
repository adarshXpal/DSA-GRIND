#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>&arr,int l,int mid,int h){
	vector<int>temp;
	int left=l;
	int right=mid+1;
	while(left<=mid && right<=h){
		if(arr[left]<arr[right]){
			temp.push_back(arr[left]);
			left++;
		}else{
			temp.push_back(arr[right]);
			right++;
		}

	}
	while(left<=mid){
		temp.push_back(arr[left]);
		left++;
	}
	while(right<=h){
		temp.push_back(arr[right]);
		right++;
	}

	for(int i=l;i<=h;i++){
		arr[i]=temp[i-l];
	}

}
void mergesort(vector<int>&arr,int l,int h){
	if(l>=h) return;
	int mid=(l+h)/2;
	mergesort(arr,l,mid);
	mergesort(arr,mid+1,h);
	Merge(arr,l,mid,h);
}
int main(){
	vector<int>arr={12,33,17,4,55,11};
	int l=0;
	int h=arr.size()-1;
	mergesort(arr,l,h);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
return 0;
}

