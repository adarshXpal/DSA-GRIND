#include<bits/stdc++.h>
#include <sstream>
using namespace std;

void checkpalindrome(string &x,int l,int e,const string &original){
	if(l>=e){
		if(x==original){
			cout<<"IT IS PALINDROME"<<endl;
		}else{
			cout<<"NOT PALINDROME"<<endl;
		}
		return;
	}
	int temp=x[l];
	x[l]=x[e];
	x[e]=temp;
	checkpalindrome(x,l+1,e-1,original);
}
int main(){
	string x;
	cin>>x;
	string original=x;
	int l=0,e=x.length()-1;
	checkpalindrome(x,l,e,original);
return 0;
}

