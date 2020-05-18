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

const ll mod = 1e9+7;
const int INF = 1001001001;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

vector<int> to[100001];

int main() {
    int N, M;
    cin >> N >> M;
    REP(i, M) {
        int A, B;
        cin >> A >> B;
        --A; --B;
        to[A].push_back(B);
        to[B].push_back(A);
    }

    queue<int> q;
    vector<int> dist(N, INF);
    vector<int> pre(N, -1);
    dist[0] = 0;
    q.push(0);

    while (!q.empty()) {
        int v = q.front(); q.pop();
        for (int u : to[v]) {
            if (dist[u] != INF) continue;
            dist[u] = dist[v]+1;
            pre[u] = v;
            q.push(u);
        }
    }

    cout << "Yes" << endl;
    REP(i, N) {
        if (i == 0) continue;
        cout << ++pre[i] << endl;
    }
    return 0;
}
