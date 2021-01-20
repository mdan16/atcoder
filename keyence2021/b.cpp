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

int n, k;
vector<int> num(300001, 0);

int main() {
    cin >> n >> k;
    num.resize(n);
    int input;
    int max_a = 0;
    REP(i, n) {
        cin >> input;
        num[input]++;
        max_a = max(max_a, input);
    }
    //REP(i, max_a+1) {
    //    cout << i << ":" << num[i] << endl;
    //}

    int ans = 0;
    REP(i, max_a+1) {
        //cout << k << "," << num[i] << endl;
        k = min(k, num[i]);
        ans += k;
    }
    cout << ans << endl;
}
