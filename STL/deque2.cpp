#include<bits/stdc++.h>
#include <deque>
using namespace std;

int main(){
	deque<int>dq;
	dq.push_back(12);
	dq.emplace_back(13);
	dq.emplace_front(14);
	dq.emplace_back(12);

	while(!dq.empty()){
			cout<<dq.front()<<" ";
			dq.pop_front();
		}
return 0;
}

