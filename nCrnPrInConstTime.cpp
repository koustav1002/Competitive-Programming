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
ll facInv[1000001];
int main(){
	F[0]=F[1]=1;
    for(ll i=2;i<=1000000;i++){
    	F[i]=(F[i-1]%P)*(i%P);
    }
    
    facInv[1]=1;facInv[0]=1;
    for(ll i=2;i<=1000000;i++){
    	facInv[i]=binExp(F[i],P-2,P)%P;
    }
    
    ll t;cin>>t;
    ll n,k;
    while(t--){
    	cin>>n>>k;
    	ll res=F[n];
    	res=(res*facInv[n-k])%P;
    	res=(res*facInv[k])%P;
    	cout<<res<<endl;
    }
	return 0;
}