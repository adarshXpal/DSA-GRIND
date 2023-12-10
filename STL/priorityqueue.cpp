#include<bits/stdc++.h>
#include <functional>
#include <queue>
using namespace std;
void priorityqueue(){
	priority_queue<int> pq;
	pq.push(10);
	pq.emplace(22);
	pq.emplace(8);
	pq.emplace(2); // This is also called max heap!!
	int n=pq.size();
	cout<<pq.top()<<endl;
	/* pq.pop(); */
	/* cout<<pq.top()<<endl; */
	/* pq.pop(); */
	/* cout<<pq.top()<<endl; */
	priority_queue<int,vector<int>,greater<int>> pq2;
	pq2.push(3);
	pq2.push(4);
	pq2.push(1);
	pq2.push(3);
	pq2.push(12);     //This is also called min heap !!
	cout<<pq2.top()<<endl;
	pq2.pop();
	cout<<pq2.top()<<endl;
	cout<<"The value of pq2.front: "<<pq2.top()<<endl;


}
int main(){
	priorityqueue();
return 0;
}

