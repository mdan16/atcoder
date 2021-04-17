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

int dy[] = {0, 1, 1, 2};
int dx[] = {0, -1, 1, 0};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(500, vector<int>(500)), b(500, vector<int>(500));
    string input[n];
    REP(i, n) cin >> input[i];
    REP(i, n) REP(j, m) {
        b[i][j] = input[i][j] - '0';
    }

    REP(y, n-2) {
        FOR(x, 1, m) {
            a[y+1][x] = b[y][x];
            REP(k, 4) {
                b[y+dy[k]][x+dx[k]] -= a[y+1][x];
            }
        }
    }

    REP(i, n) {
        REP(j, m) {
            cout << a[i][j];
        }
        cout << endl;
    }
}
