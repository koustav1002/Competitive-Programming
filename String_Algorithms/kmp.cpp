#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define ll long long
#define pb push_back
#define YY cout<<"YES"
#define NN cout<<"NO"
#define maxHeap priority_queue<ll>
#define minHeap priority_queue<ll, vll, greater<ll>>
#define auto_initialize(arr,n) ll n;cin>>n;vll arr(n);for(ll i=0;i<n;i++){cin>>arr[i];}
#define inf 1e18
#define ff first
#define ss second
#define vll vector<ll>
#define all(x) (x).begin(),(x).end()
#define read(x) ll x;cin>>x;
#define el "\n"
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
template<typename T> istream& operator >>(istream &in, vector<T> &v) { for (auto &x : v) in >> x; return in;}
template<typename T> ostream& operator <<(ostream &out, const vector<T> &v) { for (auto &x : v) out << x << ' '; return out;}
template<typename T1, typename T2> istream& operator >>(istream &in, pair<T1, T2> &p) { in >> p.first >> p.second; return in;}
template<typename T1, typename T2> ostream& operator <<(ostream &out, const pair<T1, T2> &p) { out << p.first << ' ' << p.second; return out;}

// Read Question Twice.
// Always check for contraints.
// Think twice before submitting code.

//ll binExp(ll a,ll b,ll m){
//    ll res=1;
//    while(b>0){
//        if(b&1){
//            res=(res*a)%m;
//        }
//        a=(a*a)%m;
//        b>>=1;
//    }
//    return res;
//}
vll prefix(const string &s) {
    ll n = s.size();
    vll pi(n, 0);

    for (ll i = 1; i < n; i++) {
        ll j = pi[i - 1];
        while (j and s[i] != s[j]) j = pi[j - 1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }
    return pi;
}
vll match(string &s, string &pat) {
    vll pi = prefix(pat + "#" + s), ans;
    ll n = pat.size();
    for (ll i = n + 1; i < pi.size(); i++) {
        if (pi[i] == n) {
            ans.push_back(i - 2 * n);
        }
    }
    return ans;
}
void testcase() {
    string s; cin >> s;
    string pat; cin >> pat;

    cout << match(s, pat);
}
int main() {
    sync;
    ll t = 1;
    // cin>>t;
    ll k = 1;
    while (t--) {
        //cout << "Case #" << k++ << ": ";
        testcase();
        cout << el;
    }
    return 0;
}
