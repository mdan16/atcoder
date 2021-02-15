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

bool dfs(int src_x, int src_y, int dst_x, int dst_y, int t) {
    cout << src_x << src_y << dst_x << dst_y << endl;
    if (t == 0 && src_x == dst_x && src_y == dst_y) {
        return true;
    } else if (t == 0) {
        return false;
    }

    bool possible = false;
    REP(i, 3) {
        if (dfs(src_x + dx[i], src_y + dy[i], dst_x, dst_y, t-1)) {
            possible = true;
            break;
        }
    }
    return possible;
}

int main() {
    int n;
    cin >> n;
    vector<int> t(n+1), x(n+1), y(n+1);
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;
    REP(i, n) cin >> t[i+1] >> x[i+1] >> y[i+1];
    REP(i, n) {
        int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        int time = t[i+1] - t[i];
        if (dist > time || dist%2 != time%2) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
