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

class rabin_karp {
    ll mod = 1e9 + 7, p = 31;
    vll dp, inv;
    ll binExp(ll a, ll b, ll m = 1e9 + 7) {
        ll res = 1;
        while (b > 0) {
            if (b & 1) {
                res = (res * a) % m;
            }
            a = (a * a) % m;
            b >>= 1;
        }
        return res;
    }
public:
    rabin_karp() {

    }
    void init(string &input_string) {
        ll p_power = 1;
        ll n = input_string.size();
        dp.resize(n);
        inv.resize(n);

        dp[0] = (input_string[0] - 'a' + 1);
        inv[0] = 1;

        for (ll i = 1; i < n; i++) {
            char ch = input_string[i];

            p_power = (p_power * 1LL * p) % mod;
            inv[i] = binExp(p_power, mod - 2);

            dp[i] = (dp[i - 1] + (ch - 'a' + 1) * 1LL * p_power) % mod;
        }
    }
    ll substringHash(ll L, ll R) {
        ll res = dp[R];

        if (L > 0) res = (res - dp[L - 1] + mod) % mod;

        res = (res * 1LL * inv[L]) % mod;

        return res;
    }
    bool check(string &s, string &t) {
        ll n = s.size(), m = t.size();
        init(s);

        ll hash = 0;
        ll p_power = 1;

        for (ll i = 0; i < m; i++) {
            hash = (hash + (t[i] - 'a' + 1) * p_power) % mod;

            p_power = (p_power * 1LL * p) % mod;
        }

        for (ll i = 0; i + m - 1 < n; i++) {
            ll l = i, r = i + m - 1;

            if (substringHash(l, r) == hash) {
                // cout << l << " " << r << el;
                return 1;
            }
        }
        return 0;
    }
};
void testcase() {
    string s; cin >> s;
    string t; cin >> t;

    rabin_karp obj;
    cout << obj.check(s, t);
}
int main() {
    sync;
    ll t = 1;
    // cin >> t;
    ll k = 1;
    while (t--) {
        //cout << "Case #" << k++ << ": ";
        testcase();
        cout << el;
    }
    return 0;
}
