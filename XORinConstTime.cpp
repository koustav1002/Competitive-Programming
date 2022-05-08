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
ll XR(ll n){
	if(n%4==0) return n;
    else if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else return 0;
}
int main(){
    ll n;cin>>n;
    cout<<XR(n)<<el;
	return 0;
}