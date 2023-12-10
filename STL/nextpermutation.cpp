#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str = "Hel";
	do{
		cout<<str<<endl;
	}
	while(next_permutation(str.begin(),str.end()));
	return 0;
}

