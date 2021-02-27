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
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int ans = 0;
    int up = 1;
    for(int i = 0; i < n; ++i) {
        if (i != 0) {
            if (a[i] > a[i-1]) ++up;
            else up = 1;
        }

        if (up >= k) {
            ++ans;
            //cout << i << ":" << up << endl;
        }
    }
    cout << ans << endl;
}
