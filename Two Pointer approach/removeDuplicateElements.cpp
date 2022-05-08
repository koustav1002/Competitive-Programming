//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums){
	int i=0,j=1;
	while(j<nums.size()){
		if(nums[i]!=nums[j]){
			i++;
			nums[i]=nums[j];
		}
		j++;
	}
	return i+1;
}
int main(){
    vector<int>v={1,1,2,2,2,2,3,3,3};
    cout<<removeDuplicates(v)<<endl;
	return 0;
}
