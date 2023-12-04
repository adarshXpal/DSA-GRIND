#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
	int count=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<count<<" ";
			count++;
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

