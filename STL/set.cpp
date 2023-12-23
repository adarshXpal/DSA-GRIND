#include<bits/stdc++.h>
using namespace std;
void explainset(){
	set<int>st; //What is set :: which store everything in sorted order and everything is unique .

	st.insert(13);
	st.emplace(23);
	st.emplace(44);
	st.emplace(44);
	st.emplace(33);

	for(auto& str : st){
		cout<<str<<" ";
	}
	cout<<endl;
	auto it = st.find(23);
	cout<<"The address of 23 in set is :"<<&it<<endl;
	/* st.erase(23); */
	int cnt = st.count(44);
	cout<<"The repitition of 44 is: "<<cnt<<endl;
	cout<<cnt<<" :: If 1 then there is occurence if 0 then there is no occurence"<<endl;
	auto iter = st.find(13);
	st.erase(iter,++it);
	cout<<*(st.begin());
	cout<<"the set as whole"<<endl;
	for(auto& iter: st){
		cout<<iter<<" ";
	}
}
int main(){
	explainset();
return 0;
}

