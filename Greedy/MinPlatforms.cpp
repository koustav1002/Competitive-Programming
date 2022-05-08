#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long
#define pb push_back
#define inf 1e18
#define vll vector<ll>
#define nar ll n;cin>>n;ll a[n];
#define w(x) ll x;cin>>x;while(x--)
ll minPlatform(ll arr[],ll dep[],ll n){
    ll plat=1,ans=1;
    sort(arr,arr+n);
    sort(dep,dep+n);
    ll depTime=dep[0];
    ll i=1,j=0;
    while(i<n && j<n){
        if(arr[i]<=dep[j])
            plat++,i++;
        else
            plat--,depTime=dep[++j];
        ans=max(ans,plat);
    }
    return ans;
}
int main(){
    ll arr[]={900, 940, 950, 1100, 1500, 1800};
    ll dep[]={910, 1200, 1120, 1130, 1900, 2000};
    cout<<minPlatform(arr,dep,6);
	return 0;
}