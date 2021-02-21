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


char max_x;
vector<ll> n, a;
string x, x_tmp;
ll m, max_x_num;

bool isOK(ll index, ll key) {
    ll x_n = 0;
    REP(i, x.size()) {
        if (x_n > key/index) x_n = key + 1;
        else x_n = x_n*index + (x[i]-'0');
    }
    if (x_n > key) {
        return false;
    }
    return true;
}

ll binary_search(ll key) {
    ll ok = max_x_num-1;
    ll ng = key+1;

    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;

        if (isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main() {
    cin >> x >> m;
    x_tmp = x;
    sort(x_tmp.begin(), x_tmp.end(), greater<char>{});
    max_x = x_tmp[0];
    max_x_num = max_x-'0'+1;

    if (x.size() == 1) {
        if (stoi(x) <= m) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        return 0;
    }

    ll ans = binary_search(m);
    cout << ans - max_x_num + 1 << endl;
}
