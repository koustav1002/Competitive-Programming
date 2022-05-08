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
const ll N=1e6+10;
ll phi[N];
// ll ETF(ll n){//O(sqrt(n))
// 	ll res=n;
// 	for(ll i=2;i*i<=n;i++){
// 		if(n%i==0){
// 			res/=i;
// 			res*=(i-1);
			
// 			while(n%i==0) n/=i;
// 		}
// 	}
	
// 	if(n>1) res/=n,res*=(n-1);
	
// 	return res;
// }
void ETF(ll n){//O(nlog(logn))
   for(ll i=1;i<=n;i++) phi[i]=i;
   	
   for(ll i=2;i<=n;i++){
   	  if(phi[i]==i){
   		for(ll j=i;j<=n;j+=i){
   			phi[j]/=i;
   			phi[j]*=(i-1);
   		}
   	  } 
   }
}
int main(){
	ETF(1e6);
	
    ll t;cin>>t;
    while(t--){
    	ll n;cin>>n;
    	cout<<phi[n]<<endl;
    	// cout<<ETF(n)<<"\n";
    }
	return 0;
}