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

int n, m, k;
vector<int> a, b, c, d;
int main() {
    cin >> n >> m;
    a.resize(m); b.resize(m);
    REP(i, m) {
        cin >> a[i] >> b[i];
    }
    cin >> k;
    c.resize(k); d.resize(k);
    REP(i, k) {
        cin >> c[i] >> d[i];
    }

    int max_cond = 0;
    vector<int> max_count(n+1, 0);
    for(int bit = 0; bit < (1<<k); ++bit) {
        vector<int> count(n+1, 0);
        for(int i = 0; i < k; ++i) {
            if (bit & (1 << i)) {
                //choice c
                count[c[i]]++;
            } else {
                //choice d
                count[d[i]]++;
            }
        }

        int cond = 0;
        REP(i, m) {
            if (count[a[i]] > 0 && count[b[i]] > 0) {
                cond++;
            }
        }
        if (cond > max_cond) {
            max_cond = cond;
            max_count = count;
        }
    }
    //REP(i, n+1) {
    //    cout << i << ":" << max_count[i] << endl;
    //}
    cout << max_cond << endl;
}
