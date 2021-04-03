#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FOR(i,a,b)  for(ll i=a;(i)<(b);++(i))
#define RFOR(i,a,b) for(ll i=a;(i)>=(b);--(i))
#define REP(i,n)    FOR(i,0,n)
#define RREP(i,n)   RFOR(i,n,0)
#define ALL(v)      v.begin(), v.end()
#define UNIQ(v)     sort(ALL(v)); v.erase(unique(ALL(v)), v.end())
#define BIT(n)      (1LL<<(n))
#define DEBUG(a)    cerr << #a << " = " << a << endl

const double PI = acos(-1);
const int inf = 1001001001;
//const int mod = (int)1e9+7;
const ll mod = 998244353;
//const ll inf = 1e15;
//const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];
    sort(ALL(a));
    reverse(ALL(a));

    //ll ans = 0;
    //for(int i = 0; i < n; i++) {
    //    for(int j = i; j < n; j++) {
    //        //cout << "i:" << a[i] << ",j:" << a[j] << endl;
    //        ll m = (a[i] * a[j]) % mod;
    //        if ((j-i) > 1) {
    //            //m = (m * (j-i)) % mod;
    //            m = (m * (ll)pow(2, (j-i-1))) % mod;
    //        }
    //        ans = (ans + m) % mod;
    //        //cout << "m:" << m << ",ans:" << ans << endl;
    //    }
    //}

    vector<ll> aa(n, 0);
    ll sum = 0;
    REP(i, n) {
        aa[i] = (sum + a[i])%mod;
        sum = (sum + aa[i])%mod;
    }
    ll ans = 0;
    REP(i, n) {
        ans = (ans + (a[i] * aa[i])%mod)%mod;
    }
    cout << ans << endl;
}
