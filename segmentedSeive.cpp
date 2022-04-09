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

ll N=1e6+10;
vector<bool> sieve(N,1);
void createSeive(){
	sieve[0]=sieve[1]=0;
	for(ll i=2;i*i<=N;i++){
		if(sieve[i]){
			for(ll j=i*i;j<=N;j+=i){
				sieve[j]=false;
			}
		}
	}
}
vll generatePrimes(ll N){
	vll ds;
	for(ll i=2;i<=N;i++){
		if(sieve[i]){
			ds.push_back(i);
		}
	}
	return ds;
}
int main(){
	createSeive();//O(10^6)
    ll t;cin>>t;
    while(t--){//O(10)
        ll l,r;cin>>l>>r;
        //step 1 : generate all primes till sqrt(r)
        vll primes=generatePrimes(sqrt(r));//O(10^6)

        //step 2
        //create a dummy array of size r-l+1 and make everyone as 1
        vll dummy(r-l+1,1);

        //step 3 : for all primes no.s mark its
        //multiples as false
        for(auto &pr:primes){//very less T.C.
        	 ll firstMultiple=(l/pr)*pr;
        	 if(firstMultiple<l) firstMultiple+=pr;
        	 for(ll j=max(firstMultiple,pr*pr);j<=r;j+=pr){
        	 	 dummy[j-l]=0;
        	 }
        }
        //step 4 : get all the primes
        for(ll i=l;i<=r;i++){
        	if(dummy[i-l]==1){
        		cout<<i<<" ";
        	}
        }
        cout<<endl; 
    }
	return 0;
}