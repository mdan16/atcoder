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

int mex(vector<int> a) {
    sort(ALL(a));
    if (a[0] - 1 >= 0) return a[0] - 1;
    for(int i = 1; i < a.size(); i++) {
        if (a[i] - a[i-1] > 1) return a[i-1] + 1;
    }
    return a[a.size()-1] + 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    //vector<int> am(m);
    //for(int i = 0; i < m; i++) {
    //    am[i] = a[i];
    //}
    //int mex_n = mex(am);

    //for(int i = m; i < n; i++) {
    //    am.erase(am.begin());
    //    am.push_back(a[i]);
    //    mex_n = min(mex_n, mex(am));
    //}
    //cout << mex_n << endl;
    vector<int> ans;
    vector<int> pre(n, -1);
    REP(i, n) {
        if (i - pre[a[i]] > m) {
            ans.push_back(a[i]);
        }
        pre[a[i]] = i;
    }
    REP(i, n) {
        if (n - pre[i] > m) {
            ans.push_back(i);
        }
    }
    if (ans.size() == 0) {
        cout << n << endl;
        return 0;
    }
    sort(ALL(ans));
    cout << ans[0] << endl;
}
