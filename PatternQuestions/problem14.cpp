#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
	for(int i=0;i<n;i++){
		for(char a='A';a<='A'+i;a++){
			cout<<a<<" ";
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
