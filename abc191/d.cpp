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

bool inside(ll dy, ll dx, ll r) {
    if (dy*dy + dx*dx <= r*r) return true;
    return false;
}

int main() {
    double in;
    ll x, y, r;
    cin >> in; x = round(in * 10000);
    cin >> in; y = round(in * 10000);
    cin >> in; r = round(in * 10000);

    x %= 10000;
    y %= 10000;

    ll ans = 0;
    ll x_start = (x - r) - (x-r)%10000;
    ll x_end = (x + r) - (x+r)%10000;

    ll y_top = 1, y_bottom = 0;
    for(ll i = x_start; i <= 0; i+=10000) {
        while(inside(y_top*10000-y, i-x, r)) y_top++;
        while(inside(y-y_bottom*10000, i-x, r)) y_bottom--;
        ans += y_top - y_bottom - 1;
    }

    y_top = 1;
    y_bottom = 0;
    for(ll i = x_end; i >= 10000; i-=10000) {
        while(inside(y_top*10000-y, i-x, r)) y_top++;
        while(inside(y-y_bottom*10000, i-x, r)) y_bottom--;
        ans += y_top - y_bottom - 1;
    }
    cout << ans << endl;
}
