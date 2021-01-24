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

vector<vector<int>> link;

int main() {
    cin >> n >> m;
    link.resize(n);
    int a[m], b[m];
    REP(i, m) {
        cin >> a[i] >> b[i];
        link[a[i]-1].push_back(b[i]-1);
        link[b[i]-1].push_back(a[i]-1);
    }

    REP(i, n) {
        set<int> reached;
        reached.insert(0);
        queue<int> que;
        que.push_back(0);

        while(!que.empty()) {
            set.insert(que.front());
            que.pop();
        }
    }
}
