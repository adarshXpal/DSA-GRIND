#include<bits/stdc++.h>
#include <cmath>
using namespace std;
void explainList(){
	list<int> ls;
	ls.push_back(1);
	ls.emplace_back(2);
	ls.push_front(5);
	list<int>::iterator it = ls.begin();
	list<int>::iterator end = ls.end();
	ls.pop_back();
	ls.pop_front();
	for(auto it: ls){
		cout<<it<<endl;
	}
	/* rest fuctions are same as vector. */
	/* begin,end,rbegin,rend,insert,clear,insert,size,swap. */
}
int main(){
	explainList();
return 0;
}

