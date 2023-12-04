#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(char ch='A';ch<'A'+i;ch++){
			cout<<ch<<" ";
		}
		if(i>1){
			for(char gh='A'+i-2;gh>='A';gh--){
				cout<<gh<<" ";
			}
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
