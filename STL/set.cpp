#include<bits/stdc++.h>
using namespace std;
void explainset(){
	set<int>st; //What is set :: which store everything in sorted order and everything is unique .

	st.insert(13);
	st.emplace(23);
	st.emplace(44);
	st.emplace(44);
	for(auto& str : st){
		cout<<str<<" ";
	}
	cout<<endl;
	auto it = st.find(23);
	/* st.erase(23); */
	int cnt = st.count(44);
	cout<<cnt<<" :: If 1 then there is occurence if 0 then there is no occurence"<<endl;
	auto iter = st.find(13);
	st.erase(iter,it);
	cout<<*(st.begin());

}
int main(){
	explainset();
return 0;
}

