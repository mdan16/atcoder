#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FOR(i, a, b) for (ll i = a; (i) < (b); ++(i))
#define RFOR(i, a, b) for (ll i = a; (i) >= (b); --(i))
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define UNIQ(v)     sort(ALL(v)); v.erase(unique(ALL(v)), v.end())
#define BIT(n) (1LL << (n))
#define DEBUG(a) cerr << #a << " = " << a << endl

const double PI = acos(-1);
const int inf = 1001001001;
const int mod = (int)1e9 + 7;
//const ll inf = 1e15;
//const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int n, m;

vector<vector<int>> link;

bool bfs(int a, int b)
{
    bool reached[n];
    REP(i, n) reached[i] = false;

    queue<int> que;
    que.push(0);
    reached[0] = true;

    while (!que.empty()) {
        int node = que.front();
        que.pop();
        REP(i, link[node].size()) {
            if (node == a && link[node][i] == b) {
                continue;
            } else if (node == b && link[node][i] == a) {
                continue;
            } else {
                if (!reached[link[node][i]]) {
                    que.push(link[node][i]);
                    reached[link[node][i]] = true;
                }
            }
        }
    }

    REP(i, n) {
        if (!reached[i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> n >> m;
    link.resize(n);
    int a[m], b[m];
    REP(i, m)
    {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
        link[a[i]].push_back(b[i]);
        link[b[i]].push_back(a[i]);
    }

    int ans = 0;
    REP(i, m) {
        if (!bfs(a[i], b[i])) ans++;
    }
    cout << ans << endl;
}
