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
#define DEBUG(a)    cout << #a << " = " << a << endl

const ll inf = 1e15;
const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int N, M;
int H[100001] = {0};
int A, B;

int main() {
    cin >> N >> M;
    FOR(n, 0, N) {
        cin >> H[n];
    }
    vector<bool> good(N, true);
    FOR(m, 0, M) {
        cin >> A >> B;
        int hight_diff = H[A-1] - H[B-1];
        if (hight_diff > 0) {
            good[B-1] = false;
        } else if (hight_diff < 0) {
            good[A-1] = false;
        } else {
            good[A-1] = false;
            good[B-1] = false;
        }
    }

    int result = count_if(good.begin(), good.end(), [](bool g) { return g; });
    cout << result << endl;
}
