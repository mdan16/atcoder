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
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    vector<pair<int, pair<int, int>>> aa;
    REP(i, n) {
        REP(j, n) {
            cin >> a[i][j];
            aa.push_back(make_pair(a[i][j], make_pair(i, j)));
        }
    }
    sort(ALL(aa));

    int mid = (k*k)/2 + 1;
    FOR(index, mid-1, aa.size()) {
        int count = 0;
        int i = aa[index].second.first;
        int j = aa[index].second.second;

        FOR()
    }
}
