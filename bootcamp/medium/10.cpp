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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n), c(m), d(m);
    REP(i, n) cin >> a[i] >> b[i];
    REP(i, m) cin >> c[i] >> d[i];

    REP(i, n) {
        int min_dis = abs(a[i]-c[0]) + abs(b[i]-d[0]);
        int min_check_point = 0;
        REP(j, m) {
            int dis = abs(a[i]-c[j]) + abs(b[i]-d[j]);
            if (min_dis > dis) {
                min_dis = dis;
                min_check_point = j;
            }
        }
        cout << min_check_point+1 << endl;
    }
}

