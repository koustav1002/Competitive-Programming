#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b,k) for(ll i=a;i<=b;i+=k)
#define ll long long
#define pb push_back
#define auto_initialize(arr,n) ll n;cin>>n;ll arr[n];for(ll i=0;i<n;i++){cin>>arr[i];}
#define inf 1e18
#define ff first
#define ss second
#define vll vector<ll>
#define w(x) ll x;cin>>x;while(x--)
const int M=1e9+7;

ll binExp(ll a,ll b,ll m){
	ll res=1;
	while(b>0){
		if(b&1){
			res=(res*a)%m;
		}
		a=(a*a)%m;
		b>>=1;
	}
	return res;
}
//There are N children and K toffees K<N
//Count the no. of ways to distribut tofee
//among N students such that each studnet 
//gets 1 toffee only: nCk%M,M=10^9+7
//N<10^6, K<N<10^6
//Q<10^5
//n!/((n-r)!*r!)

const ll N=1e6+10;
ll fact[N];
int main(){
    for(ll i=1;i<N;i++){
    	fact[i]=(fact[i-1]*1LL*i)%M;
    }
    ll q;cin>>q;
    while(q--){
    	ll n,k;cin>>n>>k;
    	ll ans=fact[n];
    	ll deno=(fact[n-k]*fact[k])%M;
    	ans*=binExp(deno,M-2,M);
    	cout<<ans<<endl;
    }
	return 0;
} 