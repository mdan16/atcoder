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
const int mod = (int)1e9+7;
//const ll inf = 1e15;
//const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

ll solve(ll l, ll r) {
    //ll count = 0, ret = 0;
    //for (ll i = l+l; i <= r; ++i) {
    //    ++count;
    //    ret += count;
    //}
    if (l*2 > r) {
        return 0;
    }
    ll ret = (1+(r-l*2+1)) * (r-l*2+1) / 2;
    return ret;
}

int main() {
    int t;
    cin >> t;
    vector<ll> l(t), r(t);
    REP(i, t) cin >> l[i] >> r[i];
    REP(i, t) {
        cout << solve(l[i], r[i]) << endl;
    }
}
