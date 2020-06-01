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

//const int inf = 1001001001;
//const int mod = (int)1e9+7;
const ll inf = 1e15;
const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int main() {
    int N;
    cin >> N;
    ll ans=1, input;
    bool ng = false;
    REP(i, N) {
        cin >> input;
        if (input == 0) {
            cout << 0 << endl;
            return 0;
        }
        if (1e18/ans < input || ans > (ll)1e18 || ans < 0) {
            ng = true;
        }

        if (!ng) ans *= input;
    }
    if (ng || ans > (ll)1e18 || ans < 0) {
        cout << "-1" << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}
