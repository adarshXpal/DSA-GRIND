#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count=0;
	for(int i=1;i<=(int)(sqrt(n));i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==1){
		cout<<"IsPrime"<<endl;
	}
	else{
		cout<<"NotPrime"<<endl;
	}
return 0;
}

