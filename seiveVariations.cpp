/*#include<bits/stdc++.h>
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
const int N=1e5+10;
vector<bool>isPrime(N,1);
vll lp(N,0),hp(N,0);
//ll binExp(ll a,ll b){
//	ll res=1;
//	while(b>0){
//		if(b&1){
//			res=(res*a);
//		}
//		a=(a*a);
//		b>>=1;
//	}
//	return res;
}//
int main(){
	//highest prime and lowest prime
    isPrime[0]=isPrime[1]=false;
    for(int i=0;i<N;i++){
    	if(isPrime[i]){
    		hp[i]=lp[i]=i;
    		for(int j=2*i;j<N;j+=i){
    			isPrime[j]=false;
    			hp[j]=i;
    			if(lp[j]==0){
    				lp[j]=i;
    			}
    		}
    	}
    }
    // for(int i=1;i<=100;i++) cout<<hp[i]<<" "<<lp[i]<<endl;
    //prime factorisation in O(logn)
    ll num;cin>>num;
    // vll prime_factors;
    map<ll,ll>prime_factors;

    while(num>1){
    	ll prime_factor=hp[num];
    	while(num%prime_factor==0){
    		num/=prime_factor;
    		// prime_factors.push_back(prime_factor);
    		prime_factors[prime_factor]++;
    	}
    }

    // for(int factor:prime_factors) cout<<factor<<" ";
    for(auto factor:prime_factors) cout<<factor.ff<<" "<<factor.ss<<endl;
    
    
    //ll sumOfFactors=1;
    //for(auto &factor:prime_factors){
    //   ll p=factor.ff,n=factor.ss;
    //   sumOfFactors*=(binExp(p,n+1)-1);
    //   sumOfFactors/=(p-1);
    //}
    //cout<<sumOfFactors<<"\n";
    return 0;
}*/

//Divisors

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
const int N=1e5+10;
vll divisors[N];//vector ka array
int main(){
    for(int i=2;i<N;i++){
    	for(int j=i;j<N;j+=i){
    		divisors[j].push_back(i);
    	}
    }//O(nlog(logn))
    
    for(int i=1;i<21;i++){
    	for(auto &div:divisors[i]){
    		cout<<div<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}
