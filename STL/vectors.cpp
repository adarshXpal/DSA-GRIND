#include<bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;

void explainvector(){
	vector<int> a;
	a.push_back(2);
	a.emplace_back(3);
	vector<pair<int,int>> p;
	p.push_back({1,2});
	p.emplace_back(4,5);
	vector<int> g(5,10);
	vector<int> h(5);
	vector<int> j(g);
	vector<int>::iterator st = g.begin();
	vector<int>::iterator end = g.end();
	vector<int>::reverse_iterator gt = a.rbegin();
	vector<int>::reverse_iterator rf = a.rend();
	cout<<*(st)<<" "<<endl;
	for(auto it = a.begin();it!=a.end();it++){
		cout<<*(it)<<endl;
	}


	cout<<"Abb first loop khatam"<<endl;
	for(auto it : a){
		cout<<it<<endl;
	}
	cout<<"mujhe nhi patta upper wala challa"<<endl;
	cout<<"abb for loop ke liye"<<endl;
	while(st!=end){
		cout<<*(st)<<" ";
		st++;
	}
	cout<<"now forloop"<<endl;
	for(int i=0;i<5;i++){
		cout<<g.at(i)<<endl;
	}

}

int main(){
	explainvector();		
return 0;
}

