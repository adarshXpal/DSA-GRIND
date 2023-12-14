#include<bits/stdc++.h>
using namespace std;

bool checkpalindrome(string &x,int i){
	if(i>(x.length()-1)/2){
		return true;
	}if(x[i]!=x[x.length()-1-i]){
		return false;
	}
	return checkpalindrome(x,i+1);
}

int main(){
string x;
cin>>x;
int i=0;
if(checkpalindrome(x,i)){
	cout<<"Yes Its Palindrome"<<endl;
}else{
	cout<<"No Its not Palindrome"<<endl;
}
return 0;
}

