#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FOR(i,a,b)  for(ll (i)=a;(i)<(b);++(i))
#define RFOR(i,a,b) for(ll (i)=a;(i)>=(b);--(i))
#define REP(i,n)    FOR(i,0,n)
#define RREP(i,n)   RFOR(i,n,0)
#define ALL(v)      v.begin(), v.end()
#define UNIQ(v)     sort(ALL(v)); v.erase(unique(ALL(v)), v.end())
#define BIT(n)      (1LL<<(n))
#define DEBUG(a)    cout << #a << " = " << a << endl

const ll inf = 1e15;
const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

ll N, C;

ll solve(vector<ll> x, vector<ll> v) {
    vector<ll> S(N, 0);
    S[0] = v[0];
    FOR(i, 1, N) S[i] = S[i-1] + v[i];
    REP(i, N) S[i] -= x[i];

    vector<ll> T(N, 0); 
    T[N-1] = v[N-1];
    RREP(i, N-2) T[i] = T[i+1] + v[i];
    RREP(i, N-1) T[i] -= (C - x[i]);
    RREP(i, N-2) T[i] = max(T[i], T[i+1]);

    ll res = 0;
    REP(i, N) {
        ll val = 0;

        val += S[i];
        res = max(res, val);

        val -= x[i];
        if (i != N-1) val += T[i+1];

        res = max(res, val);
    }
    return res;
}

int main() {
    cin >> N >> C;
    vector<ll> x(N), v(N); REP(i, N) cin >> x[i] >> v[i];

    ll ans = 0;
    ans = max(ans, solve(x, v));

    reverse(ALL(x));
    REP(i, N) x[i] = C - x[i];
    reverse(ALL(v));

    ans = max(ans, solve(x, v));

    cout << ans << endl;

    return 0;
}
