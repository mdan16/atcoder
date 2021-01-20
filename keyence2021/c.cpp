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
const ll mod = 998244353;
//const ll inf = 1e15;
//const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int H, W, K;
vector<vector<char>> area(5001, vector<char>(5001, 'n'));

ll dp[5001][5001] = {};

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

int main() {
    cin >> H >> W >> K;
    int i_h, i_w;
    char i_a;
    REP(i, K) {
        cin >> i_h >> i_w >> i_a;
        area[i_h-1][i_w-1] = i_a;
    }

    dp[0][0] = 1;
    REP(i, H*W-K) dp[0][0] = (dp[0][0] * 3) % mod;

    ll inv3 = modinv(3, mod);
    REP(i, H) {
        REP(j, W) {
            dp[i][j] %= mod;
            if (area[i][j] == 'X') {
                dp[i+1][j] += dp[i][j];
                dp[i][j+1] += dp[i][j];
            } else if (area[i][j] == 'R') {
                dp[i][j+1] += dp[i][j];
            } else if (area[i][j] == 'D') {
                dp[i+1][j] += dp[i][j];
            } else {
                dp[i+1][j] += (2 * dp[i][j]) * inv3;
                dp[i][j+1] += (2 * dp[i][j]) * inv3;
            }
        }
    }
    //REP(i, H) {
    //    REP(j, W) {
    //        cout << setw(10) << dp[i][j];
    //    }
    //    cout << endl;
    //}
    cout << dp[H-1][W-1] << endl;
}
