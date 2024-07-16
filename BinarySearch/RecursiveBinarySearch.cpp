#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(vector<int>&arr,int target,int low,int high){
	if(low>high)return false;
	int mid=(low+high)/2;
	if(arr[mid]==target)return true;
	else if(arr[mid]<target)return BinarySearch(arr,target,mid+1,high);
	else{return BinarySearch(arr,target,low,mid-1);}
}
int main(){
vector<int>arr={2,5,6,7,12,13,16,17,24};
int target;
cin>>target;
if(BinarySearch(arr,target,0,arr.size()-1)){
	cout<<"Target Exist !!"<<endl;
}else {
	cout<<"Target Does'nt Exist"<<endl;
}

return 0;
}

