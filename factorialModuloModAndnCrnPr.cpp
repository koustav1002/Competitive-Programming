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
ll P=1e9+7;
ll F[1000001];
ll C(ll n,ll k){
	if(k>n) return 0;
	
	ll res=F[n];
	res=(res*1LL*binExp(F[k],P-2,P))%P;
	res=(res*1LL*binExp(F[n-k],P-2,P))%P;
	return res;
}
int main(){
    F[0]=F[1]=1;
    for(ll i=2;i<=1000000;i++){
    	F[i]=(F[i-1]%P)*(i%P);
    }
    
    ll q;cin>>q;
    ll n,k;
    
    while(q--){
    	cin>>n>>k;
    	cout<<C(n,k)<<endl;
    }
	return 0;
}