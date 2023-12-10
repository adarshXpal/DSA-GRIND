#include<bits/stdc++.h>
#include <cmath>
using namespace std;
void explainStack(){
	stack<int>st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.emplace(4);
	st.emplace(5);
	cout<<st.top()<<" :: This is the value of top of the stack"<<endl;
	st.pop();
	cout<<st.top()<<" :: Top of the stack"<<endl;
	cout<<"The size of the stack is ::"<<st.size();
	cout<<endl;
	cout<<"Is stack empty"<<st.empty()<<endl;
	stack<int> st1,st2;
	st1.swap(st2);
}
int main(){
	explainStack();
return 0;
}

