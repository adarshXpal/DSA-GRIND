#include<bits/stdc++.h>
#include <math.h>
using namespace std;
void explainqueue(){
	queue<int>qu;
	qu.push(1);
	qu.emplace(2);
	qu.emplace(3);
	qu.back()=3;
	cout<<"The size of the queue is : "<<qu.size()<<endl;
	cout<<qu.front()<<" is in the front"<<endl;
	cout<<qu.back()<<" is in the back of the queue"<<endl;
	qu.front()=69;
	cout<<"Now we are printing the queue"<<endl;
	while(!qu.empty()){
		cout<<qu.front()<<endl;
		qu.pop();
	}
}
int main(){
	explainqueue();
return 0;
}

