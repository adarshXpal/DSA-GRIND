#include<bits/stdc++.h>
using namespace std;
void explaindeque(){
	deque<int> dq;
	dq.push_back(1);
	dq.emplace_back(4);
	dq.emplace_front(4);
	dq.push_front(9);
	for(auto it: dq){
		cout<<it<<endl;
	}
	dq.pop_back();
	for(auto it:dq){
		cout<<it<<endl;
	}
	dq.pop_front();
	for(auto it:dq){
		cout<<it<<endl;
	}
	/* rest fuctions are same as vector begin,rbegin,end,rend,insert,size,swap. */
}
int main(){
	explaindeque();
return 0;
}

