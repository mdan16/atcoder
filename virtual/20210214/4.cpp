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
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    REP(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    b[0] = a[0];
    FOR(i, 1, n) b[i] = b[i-1] + a[i];
    //int ans = 1;
    //RFOR(i, n-2, 0) {
    //    if (b[i]*2 < a[i+1]) {
    //        break;
    //    }
    //    ++ans;
    //}
    int ans = a.size();
    REP(i, n-1) {
        if (a[i] * 2 < a[i+1]) {
            ans = a.size() - (i+1);
        }
        a[i+1] += a[i];
    }
    cout << ans << endl;
}
