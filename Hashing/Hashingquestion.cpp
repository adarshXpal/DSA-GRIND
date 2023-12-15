#include<bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
	int maxFrequency(vector<int>&nums,int k){
		sort(nums.begin(),nums.end());
		int temp=k;
		for(int i=0;i<nums.size()-1;i++){
			int sem=nums[i+1]-nums[i];
			if(temp>=(i+1)*sem){
				int z=i;
				while(z>=0){
					nums[z]=nums[z]+sem;
					z--;	
				}
			}
		}
		int count=1;
		for(int j=0;j<nums.size()-1;j++){
			if(nums[j]==nums[j+1]){
				count++;
			}
		}
		return count;
	}
};
int main(){
	vector<int>nums={3,9,6};
	int k=2;
	Solution s1;
	cout<<s1.maxFrequency(nums,k)<<endl;
return 0;
}

