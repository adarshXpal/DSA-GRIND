#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
	char end = 'A'+(n-1);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			char star = end - j;
			cout<<star<<" ";
		}
		cout<<endl;
	}
}


int main(){
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		cout<<endl;
		pattern(n);
		t--;
	}
return 0;
}
