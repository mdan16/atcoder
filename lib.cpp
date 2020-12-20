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

//a^n mod
long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

//mod が素数
//a^(-1) mod
long long modinv(long long a, long long mod) {
    return modpow(a, mod - 2, mod);
}

// aとbの最大公約数
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    else return gcd(b, a%b);
}

// aとbの最大公約数
// ax+by=gcd(a,b)を満たす(x,y)
tuple<long long, long long, long long> extgcd(long long a, long long b) {
    if (b == 0) return {a, 1, 0};
    ll g, x, y;
    tie(g, x, y) = extgcd(b, a%b);
    return {g, y, x-(a/b)*y};
}

int main() {
}
