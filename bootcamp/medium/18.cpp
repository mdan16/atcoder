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
    vector<vector<int>> c(3, vector<int>(3));
    REP(i, 3) {
        REP(j, 3) {
            cin >> c[i][j];
        }
    }

    if (
    (c[1][0] - c[0][0] == c[1][1] - c[0][1]) && (c[1][1] - c[0][1] == c[1][2] - c[0][2])
    &&
    (c[2][0] - c[1][0] == c[2][1] - c[1][1]) && (c[2][1] - c[1][1] == c[2][2] - c[1][2])

    &&
    c[0][1] - c[0][0]
    ==
    c[1][1] - c[1][0]
    &&
    c[1][1] - c[1][0]
    == c[2][1] - c[2][0]

    &&
    c[0][2] - c[0][1]
    ==
    c[1][2] - c[1][1]
    &&
    c[1][2] - c[1][1]
    ==
    c[2][2] - c[2][1]) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}
