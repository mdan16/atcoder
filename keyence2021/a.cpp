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


int n;
vector<ll> a, b;
vector<ll> t, c;

int main() {
    cin >> n;
    a.resize(n+1); b.resize(n+1); c.resize(n+1);
    a[0] = 0; b[0] = 0; c[0] = 0;

    REP(i, n) {
        cin >> a[i+1];
        a[i+1] = max(a[i], a[i+1]);
    }
    REP(i, n) {
        cin >> b[i+1];
    }

    REP(i, n) {
        c[i+1] = max(c[i], a[i+1] * b[i+1]);
        cout << c[i+1] << endl;
    }
}
