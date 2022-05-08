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
#define all(x) (x).begin(),(x).end()
#define el "\n"
bool cmp(pair<ll,pair<ll,ll>>p1,pair<ll,pair<ll,ll>>p2){
	if(p1.ss.ss==p2.ss.ss) return p1.ff<p2.ff;
	return p1.ss.ss<p2.ss.ss;
}
void maxMeetings(ll start[],ll end[],ll n){
	vector<pair<ll,pair<ll,ll>>>v;
	rep(i,0,n){
		v.pb(make_pair(i+1,make_pair(start[i],end[i])));
	}
	sort(all(v),cmp);
	// rep(i,0,v.size()){
		// cout<<v[i].ss.ff<<" "<<v[i].ss.ss<<" "<<v[i].ff<<el;
	// }
	ll endTime=v[0].ss.ss;
	vll ans;
	ans.pb(v[0].ff);
	rep(i,1,v.size()-1){
		if(endTime<v[i].ss.ff){
			ans.pb(v[i].ff);
			endTime=v[i].ss.ss;
		}
	}
	rep(i,0,ans.size()) cout<<ans[i]<<" ";
}
int main(){
    ll start[] = {1,3,0,8,5,8};
    ll end[] =  {2,4,6,9,7,9};
    maxMeetings(start,end,6);
	return 0;
}
