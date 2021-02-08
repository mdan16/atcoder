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

int n, m;
vector<int> a, b, c, d;

int checkpoint(int i) {
    int near = 0;
    int min_dis = abs(a[0] - c[i]) + abs(b[0] - d[i]);
    REP(j, n) {
        int dis = abs(a[j] - c[i]) + abs(b[j] - d[i]);
        if (min_dis > dis) {
            near = j;
            min_dis = dis;
        }
    }
    return near;
}

int main() {
    cin >> n >> m;
    a.resize(n);
    b.resize(n);
    c.resize(m);
    d.resize(m);
    REP(i, n) {
        cin >> a[i];
        cin >> b[i];
    }
    REP(i, m) {
        cin >> c[i];
        cin >> d[i];
    }

    REP(i, n) {
        cout << checkpoint(i) + 1 << endl;
    }
}
