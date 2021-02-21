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
    ll n, k;
    cin >> n >> k;
    string n_str = to_string(n);
    ll ans = n;
    REP(i, k) {
        sort(n_str.begin(), n_str.end(), greater<char>{});
        ll g1 = stoi(n_str);
        //cout << n_str << ":" << g1 << endl;
        sort(n_str.begin(), n_str.end());
        ll g2 = stoi(n_str);
        //cout << n_str << ":" << g2 << endl;
        ans = g1-g2;
        n_str = to_string(ans);
        //cout << ans << endl;
    }
    cout << ans << endl;
}
