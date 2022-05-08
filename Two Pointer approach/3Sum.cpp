//https://leetcode.com/problems/3sum/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define ll long long
#define pb push_back
#define auto_initialize(arr,n) ll n;cin>>n;vll arr(n);for(ll i=0;i<n;i++){cin>>arr[i];}
#define inf 1e18
#define ff first
#define ss second
#define vll vector<ll>
#define nl endl
#define all(x) (x).begin(),(x).end()
#define read(x) ll x;cin>>x;
#define el "\n"
//ll binExp(ll a,ll b,ll m){
//	ll res=1;
//	while(b>0){
//		if(b&1){
//			res=(res*a)%m;
//		}
//		a=(a*a)%m;
//		b>>=1;
//	}
//	return res;
//}
vector<vector<int>>threeSum(vector<int>&nums){
	sort(all(nums));
	
	vector<vector<int>>res;
	
	rep(i,0,nums.size()-2){
		if(i==0 || (i>0 && nums[i]!=nums[i-1])){
			int lo=i+1,hi=nums.size()-1,sum=0-nums[i];
			
			while(lo<hi){
				if(nums[lo]+nums[hi]==sum){
					vector<int>temp;
					temp.pb(nums[i]);
					temp.pb(nums[lo]);
					temp.pb(nums[hi]);
					res.pb(temp);
					
					while(lo<hi && nums[lo]==nums[lo+1]) lo++;
					while(lo<hi && nums[hi-1]==nums[hi]) hi--;
					
					lo++;hi--;
				}else if(nums[lo]+nums[hi]<sum) lo++;
				else hi--;
			}
		}
	}
	return res;
}
int main(){
    vector<int>v={-2,-2,-1,-1,-1,0,0,0,2,2,2};
    vector<vector<int>>triplets=threeSum(v);
    for(auto &val:triplets){
    	cout<<val[0]<<" "<<val[1]<<" "<<val[2]<<el;
    }
	return 0;
}
