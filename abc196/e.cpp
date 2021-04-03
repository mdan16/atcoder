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
//const int inf = 1001001001;
const ll inf = 2000000001;
const int mod = (int)1e9+7;
//const ll inf = 1e15;
//const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

vector<int> a, t, x;
int n, q;

vector<ll> memo(1000001, inf);

ll f(int a, int b, int tt) {
    if (tt == 1) return a + b;
    if (tt == 2) return max(a, b);
    return min(a, b);
}

ll ff(int xx) {
    ll ret = xx;
    vector<ll> m;
    REP(i, n) {
        ret = f(ret, a[i], t[i]);
        if (ret == a[i]) {
            if (memo[i] != inf) {
                ret = memo[i];
                break;
            }
            m.push_back(i);
        }
    }
    REP(i, m.size()) {
        memo[m[i]] = ret;
    }
    return ret;
}

int main() {
    cin >> n;
    a.resize(n);
    t.resize(n);
    REP(i, n) cin >> a[i] >> t[i];
    cin >> q;
    x.resize(q);
    REP(i, q) cin >> x[i];

    REP(i, q) {
        cout << ff(x[i]) << endl;
    }
}
