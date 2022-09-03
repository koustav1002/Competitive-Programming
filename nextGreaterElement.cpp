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

int main() {
	vll a = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2, 4, 6};
	ll n = a.size();
	stack<ll>st;
	vll nge(n, -1);
	rrep(i, 2 * n - 1, 0) {
		while (!st.empty() && st.top() <= a[i % n])
			st.pop();
		if (i < n) {
			if (!st.empty())
				nge[i] = st.top();
		}
		st.push(a[i % n]);
	}
	rep(i, 0, n) cout << nge[i] << " ";
	return 0;
}