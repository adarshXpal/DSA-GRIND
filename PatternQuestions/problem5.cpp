#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
	for(int i=n;i>0;i--){
		for(int j=i;j>0;j--){
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
