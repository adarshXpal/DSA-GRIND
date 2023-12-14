#include<bits/stdc++.h>
using namespace std;

int sum=0;
void sumno(int i,int n){
	if(i>n){
		return;
	}
	sum+=i;
	sumno(i+1,n);
	if(i==n){
		cout<<sum<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	sumno(1,n);

return 0;
}

