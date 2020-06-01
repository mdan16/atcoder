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
    ll N;
    cin >> N;

    map<ll, ll> primes;
    ll div = 2;
    while(true) {
        if (N%div == 0) {
            ++primes[div];
            N = N / div;
        } else {
            ++div;
        }
        if (N == 1) break;
        else if (N != 1 && div > sqrt(N)) {
            ++primes[N];
            break;
        }
    }

    //for(auto [k, v] : primes) {
    //    cout << k << "=>" << v << endl;
    //}

    int ans = 0;
    for (auto& [k, v] : primes) {
        FOR(i, 1, v+1) {
            if (v >= i) {
                v -= i;
                ++ans;
            } else {
                break;
            }
        }
    }
    cout << ans << endl;
}
