//https://leetcode.com/problems/trapping-rain-water/
/*#include<bits/stdc++.h>
using namespace std;
int rain(vector<int>&height){
	vector<int>prefix(height.size());
	vector<int>suffix(height.size());
	prefix[0]=height[0];
	for(int i=1;i<height.size();i++){
		prefix[i]=max(height[i],prefix[i-1]);
	}
	suffix[height.size()-1]=height[height.size()-1];
	for(int i=height.size()-2;i>=0;i--){
		suffix[i]=max(height[i],suffix[i+1]);
	}
	int sum=0;
	for(int i=0;i<height.size();i++){
		sum+=min(prefix[i],suffix[i])-height[i];
	}
	return sum;
}
int main(){
    vector<int>v={4,2,0,3,2,5};
    cout<<rain(v)<<endl;
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>&height){
	int n=height.size();
	int l=0,r=n-1;
	int res=0;
	int leftMax=0,rightMax=0;
	
	while(l<=r){
		if(height[l]<=height[r]){
			if(height[l]>=leftMax) leftMax=height[l];
			else res+=leftMax-height[l];
			
			l++;
		}else{
			if(height[r]>=rightMax) rightMax=height[r];
			else res+=rightMax-height[r];
			
			r--;
		}
	}
	return res;
}
int main(){
    vector<int>v={4,2,0,3,2,5};
    cout<<trap(v)<<endl;
	return 0;
}
