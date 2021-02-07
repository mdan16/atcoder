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
    int h, w;
    cin >> h >> w;
    int a[h][w];
    REP(i, h) REP(j, w) cin >> a[i][j];

    int n = 0;
    vector<vector<ll>> ans;
    REP(i, h) {
        REP(j, w-1) {
            if (a[i][j]%2 != 0) {
                a[i][j]--;
                a[i][j+1]++;
                n++;
                vector<ll> t_ans{i, j, i, j+1};
                ans.push_back(t_ans);
            }
        }
    }

    REP(i, h-1) {
        if (a[i][w-1]%2 != 0) {
            a[i][w-1]--;
            a[i+1][w-1]++;
            n++;
            vector<ll> t_ans{i, w-1, i+1, w-1};
            ans.push_back(t_ans);
        }
    }

    cout << n << endl;
    REP(i, ans.size()) {
        cout << ans[i][0]+1 << " " << ans[i][1]+1 << " " << ans[i][2]+1 << " " << ans[i][3]+1 << endl;
    }
}
