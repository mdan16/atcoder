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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    vector<pair<ll, ll>> c(n);
    REP(i, n) {
        cin >> a[i] >> b[i];
        c[i] = make_pair(a[i], b[i]);
    }
    sort(ALL(c));

    ll remain = k, last_stop = 0;
    REP(i, n) {
        if (c[i].first - last_stop > remain) break;
        remain = remain - (c[i].first - last_stop) + c[i].second;
        last_stop = c[i].first;
    }
    cout << last_stop + remain << endl;
}
