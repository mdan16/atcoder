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

vector<ll> used;

int main() {
    ll b, c;
    cin >> b >> c;

    ll aa, bb, cc, dd;
    aa = b + (c-2)/2;
    bb = b - c/2;
    cc = -1*b + (c-1)/2;
    dd = -1*b - (c-1)/2;

    ll ans = 0;
    ans += aa - bb + 1;
    ans += cc - dd + 1;
    //if (!(dd < bb && cc < bb) && !(bb < dd && aa < dd)) {
    //    vector<ll> pos{aa, bb, cc, dd};
    //    sort(ALL(pos));
    //    ans -= pos[2] - pos[1] + 1;
    //}
    ans -= max(0LL, min(aa, cc) - max(bb, dd) + 1);
    cout << ans << endl;
}
