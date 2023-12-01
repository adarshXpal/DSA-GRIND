#include<bits/stdc++.h>
using namespace std;
int dosomething(int &n){
	return(n=2*n);
}
int main(){
	int n=8;
	cout<<dosomething(n)<<endl;
	cout<<n<<endl;
return 0;
}

