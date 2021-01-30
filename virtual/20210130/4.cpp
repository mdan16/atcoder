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
    vector<string> s(n);
    REP(i, n) {
        cin >> s[i];
    }

    ll ans = 0;
    vector<int> last_a, first_b;
    ll a = 0, b = 0, ab = 0;
    REP(i, n) {
        FOR(j, 1, s[i].size()) {
            if (s[i][j] == 'B' && s[i][j-1] == 'A') {
                ans++;
            }
        }
        if (s[i][0] == 'B' && s[i][s[i].size()-1] == 'A') {
            ab++;
            continue;
        }
        if (s[i][0] == 'B') b++;
        if (s[i][s[i].size()-1] == 'A') a++;
    }

    //cout << "a:" << a << endl;
    //cout << "b:" << b << endl;
    //cout << "ab:" << ab << endl;

    //ac
    if (ab == 0) {
        ans += min(a, b);
    } else {
        if (a + b == 0) {
            ans += ab - 1;
        } else {
            ans += min(a, b);
            ans += ab;
        }
    }

    //fail
    //if (a + b == 0) {
    //    ans += min(a, b);
    //    ans += ab - 1;
    //} else {
    //    ans += ab;
    //}
    cout << ans << endl;
    
}
