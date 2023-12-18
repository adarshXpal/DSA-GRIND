#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>arr,int n){
	int swapdone=0;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapdone=1;
			}
			cout<<"runs\n";
		}
		if(swapdone==0){
			cout<<"Array is already Sorted bhenchodo !!"<<endl;
			break;
		}
	}
	for(int s=0;s<n;s++){
		cout<<arr[s]<<" ";
	}
}
int main(){
	vector<int>arr={12,14,16,22,34};
	bubblesort(arr,arr.size());
return 0;
}

