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

int dp[200002][200002] = {0};
vector<vector<int>> node;
vector<int> min_a, max_a;
bool reached[200002] = {false};
vector<int> a, x, y;

int main() {
    int n, m;
    cin >> n >> m;
    a.resize(n); x.resize(m); y.resize(m);
    node.resize(n);
    min_a.resize(n);
    max_a.resize(n);

    REP(i, n) {
        cin >> a[i];
    }
    REP(i, m) {
        cin >> x[i] >> y[i];
        --x[i];
        --y[i];
        //node[x[i]].push_back(y[i]);
        node[y[i]].push_back(x[i]);
    }

    REP(i, n) {
        queue<int> que;
        que.push(i);
        int m = inf;
        while(!que.empty()) {
            REP(j, node[que.front()].size()) {
                que.push(node[que.front()][j]);
            }
            if (que.front() != i) {
                m = min(m, a[que.front()]);
            }
            que.pop();
        }
        min_a[i] = m;
    }
    int ans = ;
    REP(i, n) {
        cout << "min:" << min_a[i] << endl;
        if (min_a[i] == inf) continue;
        ans = max(ans, a[i] - min_a[0]);
    }
    cout << ans << endl;
}
