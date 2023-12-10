#include<bits/stdc++.h>
#include <math.h>
using namespace std;
void explainMap(){
		map<int,int>mp;
		mp.insert({2,3});
		mp[3]=23;
		mp[4]=22;
		mp.insert({1,69});
		for(auto it:mp){
			cout<<it.first<<" "<<it.second<<endl;
		}
		auto it = mp.find(3);
		cout<<it->second<<endl;
}
int main(){
	explainMap();
return 0;
}

