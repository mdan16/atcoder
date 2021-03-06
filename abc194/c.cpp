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

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];

    vector<ll> b(n);
    b[0] = a[0];
    for(int i = 1; i < n; i++) {
        b[i] = a[i] + b[i-1];
    }

    ll ans = 0;
    REP(i, n) {
        ans += (n-1) * pow(a[i], 2);
        if (i == 0) continue;
        ans -= 2 * a[i] * b[i-1];
    }
    cout << ans << endl;
}
