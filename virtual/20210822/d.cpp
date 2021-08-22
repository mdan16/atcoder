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
    int N, M;
    cin >> N >> M;
    vector<ll> A(N);
    vector<pair<ll, ll>> BC(M);

    REP(i, N) {
        cin >> A[i];
    }
    sort(ALL(A));

    REP(i, M) {
        cin >> BC[i].second >> BC[i].first;
    }
    sort(ALL(BC));
    reverse(ALL(BC));

    vector<ll> BCBC(N);
    ll num = 0;
    REP(i, M) {
        REP(j, BC[i].second) {
            if (num >= N) break;
            BCBC[num] = BC[i].first;
            num++;
        }
        if (num >= N) break;
    }
    sort(ALL(BCBC));

    vector<ll> result;
    merge(ALL(A), ALL(BCBC), back_inserter(result));
    sort(ALL(result));
    reverse(ALL(result));

    ll sum = 0;
    REP(i, N) {
        sum += result[i];
    }

    cout << sum << endl;
}
