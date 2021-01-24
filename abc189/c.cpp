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
    int N;
    cin >> N;
    ll A[N];
    REP(i, N) {
        cin >> A[i];
    }

    ll total[N] = {0};
    REP(i, N) {
        total[i] = A[i];
        ll min_a = A[i];
        FOR(j, i, N) {
            min_a = min(min_a, A[j]);
            total[i] = max(total[i], min_a * (j - i + 1));
        }
    }
    
    ll m = 0;
    REP(i, N) m = max(m, total[i]);
    cout << m << endl;
}
