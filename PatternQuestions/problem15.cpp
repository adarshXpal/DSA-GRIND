#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
	for(int i=n-1;i>=0;i--){
		for(char ch='A';ch<='A'+i;ch++){
			cout<<ch<<" ";
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
