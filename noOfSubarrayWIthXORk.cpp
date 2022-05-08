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
ll noOfSubarray(vll &a,ll k){
	map<ll,ll>freq;
	ll cnt=0,xorr=0;
	for(auto &it:a){
		xorr^=it;
		
		if(xorr==k) cnt++;
		
		if(freq.find(xorr^k)!=freq.end())
			cnt+=freq[xorr^k];
		freq[xorr]++;
	}
	return cnt;
}
int main(){
    vll a={4,2,2,6,4};
    ll k=6;
    cout<<noOfSubarray(a,k);
	return 0;
}
