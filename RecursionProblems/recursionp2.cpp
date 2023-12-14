#include<bits/stdc++.h>
using namespace std;

void cheeni(int n,int i){
	if(i>n){
		return;
	}
	cout<<i<<endl;
	cheeni(n,i+1);
}
int main(){
	int n,i;
	cin>>n>>i;
	cheeni(n,i);
return 0;
}

