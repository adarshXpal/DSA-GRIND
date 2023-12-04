#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		for(int h=1;h<=(2*n-2*i);h++){
			cout<<"  ";
		}
		for(int d=i;d>0;d--){
			cout<<d<<" ";
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

