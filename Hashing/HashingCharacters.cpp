#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

void countchar(string &name,char x){
	vector<int>harr(26,0);
	for(int i=0;i<name.length();i++){
		harr[name[i]-'a']++;
	}
	cout<<harr[x-'a']<<endl;
}
int main(){
	string name;
	cin>>name;
	char x;
	cout<<"Enter the character you wanna know the repitition:: ";
	cin>>x;
	countchar(name,x);

return 0;
}

