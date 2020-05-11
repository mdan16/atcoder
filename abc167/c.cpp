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
#define DEBUG(a)    cout << #a << " = " << a << endl

const ll inf = 1e15;
const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int N, M, X;
int C[100001];
vector<vector<int>> A;

void dfs() {

}

int main() {
    cin >> N >> M >> X;
    A.resize(N);
    REP(i, N) {
        A.at(i).resize(M);
        cin >> C[i];
        REP(j, M) {
            cin >> A.at(i).at(j);
        }
    }

    ll min_cost = inf;
    REP(s, 1<<N) {
        ll cost = 0;
        vector<int> d(M, 0);
        REP(i, N) {
            if (s>>i&1) {
                cost += C[i];
                REP(j, M) d[j] += A[i][j];
            }
        }
        bool ok = true;
        REP(j, M) if (d[j] < X) ok = false;
        if (ok) min_cost = min(min_cost, cost);
    }

    if (min_cost == inf) cout << -1 << endl;
    else cout << min_cost << endl;
}
