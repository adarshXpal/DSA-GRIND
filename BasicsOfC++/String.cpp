#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	cout<<s[2]<<endl;
	cout<<s.size()<<endl;
	int length = s.size();
	cout<<s[length-1]<<endl;
	s[length-1]='x';
	cout<<s<<endl;
return 0;
}

