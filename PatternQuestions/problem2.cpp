#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	cout<<endl;
	while(t>0){
		int n;
		cin>>n;
		printPattern(n);
		t--;
	}
return 0;
}
