#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(vector<int>&arr,int target){
	int n=arr.size();
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==target){
			return true;
		}else if(arr[mid]<target){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	return false;
}
int main(){
	vector<int>arr = {3,4,6,7,9,10,12,15};
	int target;
	cout<<"Enter the target :: ";
	cin>>target;
	cout<<endl;
	//binary iterative search -
	if(BinarySearch(arr,target)){
		cout<<" Target Exist !!"<<endl;
	}else{
		cout<<"Target Does'nt Exist !!"<<endl;
	}
return 0;
}

