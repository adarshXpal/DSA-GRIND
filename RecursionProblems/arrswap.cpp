#include<bits/stdc++.h>
using namespace std;

void swaparr(int arr[],int n,int l,int e){
		if(l==e){
			return;
		}
		int temp=arr[l];
		arr[l]=arr[e];
		arr[e]=temp;
		swaparr(arr,n,l+1,e-1);
		
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int l=0;
	int e=n-1;
	swaparr(arr,n,l,e);
	for(int j=0;j<n;j++){
		cout<<arr[j]<<" ";
	}
	
return 0;
}

