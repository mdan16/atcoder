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

int dp[100001] = {0};

int n;

int main() {
    cin >> n;
    vector<int> coin = {9, 6, 1};

    dp[0] = 0;
    FOR(i, 1, n+1) {
        dp[i] = dp[i-1] + 1;
        int power = 6;
        while(power <= i) {
            dp[i] = min(dp[i], dp[i-power] + 1);
            power *= 6;
        }
        power = 9;
        while(power <= i) {
            dp[i] = min(dp[i], dp[i-power] + 1);
            power *= 9;
        }
        //cout << dp[i] << endl;
    }
    cout << dp[n] << endl;
}
