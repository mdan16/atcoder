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

const int inf = 1001001001;
const int mod = (int)1e9+7;
//const ll inf = 1e15;
//const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int N, M, Q, score=0;
vector<int> a, b, c, d;

void dfs(vector<int> A) {
    if(A.size() == N+1) {
        int now = 0;
        REP(i, Q) {
            if (A[b[i]] - A[a[i]] == c[i]) {
                now += d[i];
            }
            score = max(now, score);
        }
        return;
    }

    A.push_back(A.back());
    while (A.back() <= M) {
        dfs(A);
        A.back()++;
    }
}

int main() {
    cin >> N >> M >> Q;
    a = b = c = d = vector<int>(Q);
    REP(i, Q) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    dfs(vector<int>(1, 1));
    cout << score << endl;
}
