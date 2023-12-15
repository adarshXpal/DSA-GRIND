#include<bits/stdc++.h>
using namespace std;

void hashing(int n,int arr[],int x){
	vector<int>hash(n,0);
	for(int i=0;i<n;i++){
		hash[arr[i]]++;
	}
	cout<<hash[x]<<endl;

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the no. want to check :: "<<endl;
	int x;
	cin>>x;
	hashing(n,arr,x);
return 0;
}

